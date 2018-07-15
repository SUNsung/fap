
        
        class SILDebuggerClient;
    
    #pragma mark - NSData verification
    
    /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
      Optional<const swift::markup::Paragraph *> getBrief() const {
    return Parts.Brief;
  }
    
    #include 'swift/Basic/LLVM.h'
#include 'clang/Index/IndexSymbol.h'
#include 'llvm/ADT/SmallString.h'
    
      /// Returns the buffer ID for the specified *valid* location.
  ///
  /// Because a valid source location always corresponds to a source buffer,
  /// this routine always returns a valid buffer ID.
  unsigned findBufferContainingLoc(SourceLoc Loc) const;
    
    // On macOS and iOS, swift_once is implemented using GCD.
// The compiler emits an inline check matching the barrier-free inline fast
// path of dispatch_once(). See SwiftTargetInfo.OnceDonePredicateValue.
    
    void indexDeclContext(DeclContext *DC, IndexDataConsumer &consumer);
void indexSourceFile(SourceFile *SF, StringRef hash,
                     IndexDataConsumer &consumer);
void indexModule(ModuleDecl *module, StringRef hash,
                 IndexDataConsumer &consumer);
    
    class AbstractionPattern;
class Initialization;
class RValue;
class SILGenFunction;
class SGFContext;
class CalleeTypeInfo;
    
      /// Copy constructor.
  LSBase(const LSBase &RHS) {
    Base = RHS.Base;
    Kind = RHS.Kind;
    Path = RHS.Path;
  }
    
    #include 'llvm/ADT/ArrayRef.h'
    
    inline void RowSet::Clear() {
  rows_.clear(); size_ = 0;
}
    
    DMatrix* DMatrix::Create(dmlc::Parser<uint32_t>* parser,
                         const std::string& cache_prefix) {
  if (cache_prefix.length() == 0) {
    std::unique_ptr<data::SimpleCSRSource> source(new data::SimpleCSRSource());
    source->CopyFrom(parser);
    return DMatrix::Create(std::move(source), cache_prefix);
  } else {
#if DMLC_ENABLE_STD_THREAD
    if (!data::SparsePageSource::CacheExist(cache_prefix)) {
      data::SparsePageSource::Create(parser, cache_prefix);
    }
    std::unique_ptr<data::SparsePageSource> source(new data::SparsePageSource(cache_prefix));
    return DMatrix::Create(std::move(source), cache_prefix);
#else
    LOG(FATAL) << 'External memory is not enabled in mingw';
    return nullptr;
#endif
  }
}
    
          jclass batchClass = jenv->GetObjectClass(batch);
      jlongArray joffset = (jlongArray)jenv->GetObjectField(
          batch, jenv->GetFieldID(batchClass, 'rowOffset', '[J'));
      jfloatArray jlabel = (jfloatArray)jenv->GetObjectField(
          batch, jenv->GetFieldID(batchClass, 'label', '[F'));
      jfloatArray jweight = (jfloatArray)jenv->GetObjectField(
          batch, jenv->GetFieldID(batchClass, 'weight', '[F'));
      jintArray jindex = (jintArray)jenv->GetObjectField(
          batch, jenv->GetFieldID(batchClass, 'featureIndex', '[I'));
      jfloatArray jvalue = (jfloatArray)jenv->GetObjectField(
        batch, jenv->GetFieldID(batchClass, 'featureValue', '[F'));
      XGBoostBatchCSR cbatch;
      cbatch.size = jenv->GetArrayLength(joffset) - 1;
      cbatch.offset = reinterpret_cast<jlong *>(
          jenv->GetLongArrayElements(joffset, 0));
      if (jlabel != nullptr) {
        cbatch.label = jenv->GetFloatArrayElements(jlabel, 0);
        CHECK_EQ(jenv->GetArrayLength(jlabel), static_cast<long>(cbatch.size))
            << 'batch.label.length must equal batch.numRows()';
      } else {
        cbatch.label = nullptr;
      }
      if (jweight != nullptr) {
        cbatch.weight = jenv->GetFloatArrayElements(jweight, 0);
        CHECK_EQ(jenv->GetArrayLength(jweight), static_cast<long>(cbatch.size))
            << 'batch.weight.length must equal batch.numRows()';
      } else {
        cbatch.weight = nullptr;
      }
      long max_elem = cbatch.offset[cbatch.size];
      cbatch.index = (int*) jenv->GetIntArrayElements(jindex, 0);
      cbatch.value = jenv->GetFloatArrayElements(jvalue, 0);
    
      bool Read(SparsePage* page,
            dmlc::SeekStream* fi,
            const std::vector<bst_uint>& sorted_index_set) override {
    if (!fi->Read(&disk_offset_)) return false;
    // setup the offset
    page->offset.clear();
    page->offset.push_back(0);
    for (unsigned int fid : sorted_index_set) {
      CHECK_LT(fid + 1, disk_offset_.size());
      size_t size = disk_offset_[fid + 1] - disk_offset_[fid];
      page->offset.push_back(page->offset.back() + size);
    }
    page->data.resize(page->offset.back());
    // read in the data
    size_t begin = fi->Tell();
    size_t curr_offset = 0;
    for (size_t i = 0; i < sorted_index_set.size();) {
      bst_uint fid = sorted_index_set[i];
      if (disk_offset_[fid] != curr_offset) {
        CHECK_GT(disk_offset_[fid], curr_offset);
        fi->Seek(begin + disk_offset_[fid] * sizeof(Entry));
        curr_offset = disk_offset_[fid];
      }
      size_t j, size_to_read = 0;
      for (j = i; j < sorted_index_set.size(); ++j) {
        if (disk_offset_[sorted_index_set[j]] == disk_offset_[fid] + size_to_read) {
          size_to_read += page->offset[j + 1] - page->offset[j];
        } else {
          break;
        }
      }
    }
    }
    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    /*!
 * \brief Registry entry for sparse page format.
 */
struct SparsePageFormatReg
    : public dmlc::FunctionRegEntryBase<SparsePageFormatReg,
                                        std::function<SparsePageFormat* ()> > {
};
    
      // Compute Huffman codes for each histograms.
  for (int i = 0; i < num_histo; ++i) {
    const bool is_dc = static_cast<size_t>(i) < num_dc_histo;
    const int idx = is_dc ? i : i - num_dc_histo;
    int counts[kJpegHuffmanMaxBitLength + 1] = { 0 };
    int values[JpegHistogram::kSize] = { 0 };
    BuildHuffmanCode(&depths[i * JpegHistogram::kSize], counts, values);
    HuffmanCodeTable table;
    for (int j = 0; j < 256; ++j) table.depth[j] = 255;
    BuildHuffmanCodeTable(counts, values, &table);
    for (int c = 0; c < ncomps; ++c) {
      if (is_dc) {
        if (dc_histo_indexes[c] == idx) (*dc_huff_tables)[c] = table;
      } else {
        if (ac_histo_indexes[c] == idx) (*ac_huff_tables)[c] = table;
      }
    }
    int max_length = kJpegHuffmanMaxBitLength;
    while (max_length > 0 && counts[max_length] == 0) --max_length;
    --counts[max_length];
    int total_count = 0;
    for (int j = 0; j <= max_length; ++j) total_count += counts[j];
    data[pos++] = is_dc ? i : static_cast<uint8_t>(i - num_dc_histo + 0x10);
    for (size_t j = 1; j <= kJpegHuffmanMaxBitLength; ++j) {
      data[pos++] = counts[j];
    }
    for (int j = 0; j < total_count; ++j) {
      data[pos++] = values[j];
    }
  }
    
    
    {}  // namespace
    
    #include 'guetzli/jpeg_data.h'
    
    #include <stdint.h>
#include <vector>
    
    	if (NULL != _funcname) {
		funcname_cstr = env->GetStringUTFChars(_funcname, NULL);
	}
    
    
    {    void throw_exception( std::exception const & e ) {
        xfatal2(TSF'boost exception:%_', e.what());
        
#ifdef ANDROID
        char stack[4096] = {0};
        android_callstack(stack, sizeof(stack));
        xfatal2(TSF'%_', stack);
#endif
    }
}

    
    
/*
 * CoreServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
    
    {}
    
    
/*
 * scop_jenv.cpp
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
    
    {} // namespace aria2
    
    void AbstractBtMessage::setPeerConnection(PeerConnection* peerConnection)
{
  peerConnection_ = peerConnection;
}
    
      virtual ~AdaptiveFileAllocationIterator();