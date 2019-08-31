
        
        #include <map>
    
    #include 'native_mate/arguments.h'
#include 'native_mate/handle.h'
#include 'shell/browser/api/event_emitter.h'
#include 'shell/browser/auto_updater.h'
#include 'shell/browser/window_list_observer.h'
    
      // Convert draggable regions in raw format to SkRegion format.
  std::unique_ptr<SkRegion> DraggableRegionsToSkRegion(
      const std::vector<mojom::DraggableRegionPtr>& regions);
    
      // Don't emit unresponsive event when showing menu.
  electron::UnresponsiveSuppressor suppressor;
    
    template <> IMF_EXPORT
void EnvmapAttribute::readValueFrom (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream &,
                                     int,
                                     int);
    
    #endif 

    
    
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    
FrameBuffer::ConstIterator
FrameBuffer::find (const string &name) const
{
    return find (name.c_str());
}
    
    	OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, Name::MAX_LENGTH, typeName);
	checkIsNullTerminated (typeName, 'attribute type name');
	OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, size);
    
                //
            // Save the dataWindow information
            //
    
            const Box2i &dataWindow = _data->header.dataWindow();
            _data->minY = dataWindow.min.y;
            _data->maxY = dataWindow.max.y;
    
    const FrameBuffer &
InputPart::frameBuffer () const
{
    return file->frameBuffer();
}
    
    #ifndef __glu_h__
#define __glu_h__
    
      dict->lookup('Decode', &obj1);
  if (obj1.isNull()) {
    obj1.free();
    dict->lookup('D', &obj1);
  }
  colorMap = new GfxImageColorMap(bits, &obj1, colorSpace);
  obj1.free();
  if (!colorMap->isOk()) {
    fprintf (stderr, 'Error: invalid colormap\n');
    delete colorMap;
    goto fail1;
  }
    
      void makeBox(double hDPI, double vDPI, int rotate,
	       GBool useMediaBox, GBool upsideDown,
	       double sliceX, double sliceY, double sliceW, double sliceH,
	       PDFRectangle *box, GBool *crop);
    
    
    {  // get rectangular
  if (dict->lookup('B', &obj)->isBool()) {
    rectangular = obj.getBool();
  }
  obj.free();
}
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
      // Destructor.
  virtual ~PreScanOutputDev();
    
    
    
    class StandardSecurityHandler: public SecurityHandler {
public:
    }
    
    Sound::~Sound()
{
  delete fileName;
  streamObj->free();
  delete streamObj;
}
    
    //------------------------------------------------------------------------
    
      // allocate a cache entry
  i = (t3GlyphStack->code & (t3Font->cacheSets - 1)) * t3Font->cacheAssoc;
  for (j = 0; j < t3Font->cacheAssoc; ++j) {
    if ((t3Font->cacheTags[i+j].mru & 0x7fff) == t3Font->cacheAssoc - 1) {
      t3Font->cacheTags[i+j].mru = 0x8000;
      t3Font->cacheTags[i+j].code = t3GlyphStack->code;
      t3GlyphStack->cacheTag = &t3Font->cacheTags[i+j];
      t3GlyphStack->cacheData = t3Font->cacheData + (i+j) * t3Font->glyphSize;
    } else {
      ++t3Font->cacheTags[i+j].mru;
    }
  }
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    struct Monitor {
 private:
  struct Statistics {
    Timer timer;
    size_t count{0};
    uint64_t nvtx_id;
  };
  std::string label = '';
  std::map<std::string, Statistics> statistics_map;
  Timer self_timer;
    }
    
    SEXP XGBoosterEvalOneIter_R(SEXP handle, SEXP iter, SEXP dmats, SEXP evnames) {
  const char *ret;
  R_API_BEGIN();
  CHECK_EQ(length(dmats), length(evnames))
      << 'dmats and evnams must have same length';
  int len = length(dmats);
  std::vector<void*> vec_dmats;
  std::vector<std::string> vec_names;
  std::vector<const char*> vec_sptr;
  for (int i = 0; i < len; ++i) {
    vec_dmats.push_back(R_ExternalPtrAddr(VECTOR_ELT(dmats, i)));
    vec_names.push_back(std::string(CHAR(asChar(VECTOR_ELT(evnames, i)))));
  }
  for (int i = 0; i < len; ++i) {
    vec_sptr.push_back(vec_names[i].c_str());
  }
  CHECK_CALL(XGBoosterEvalOneIter(R_ExternalPtrAddr(handle),
                                asInteger(iter),
                                BeginPtr(vec_dmats),
                                BeginPtr(vec_sptr),
                                len, &ret));
  R_API_END();
  return mkString(ret);
}
    
    /*!
 * \brief Do inplace softmax transformaton on start to end
 *
 * \tparam Iterator Input iterator type
 *
 * \param start Start iterator of input
 * \param end end iterator of input
 */
template <typename Iterator>
XGBOOST_DEVICE inline void Softmax(Iterator start, Iterator end) {
  static_assert(std::is_same<bst_float,
                typename std::remove_reference<
                  decltype(std::declval<Iterator>().operator*())>::type
                >::value,
                'Values should be of type bst_float');
  bst_float wmax = *start;
  for (Iterator i = start+1; i != end; ++i) {
    wmax = fmaxf(*i, wmax);
  }
  double wsum = 0.0f;
  for (Iterator i = start; i != end; ++i) {
    *i = expf(*i - wmax);
    wsum += *i;
  }
  for (Iterator i = start; i != end; ++i) {
    *i /= static_cast<float>(wsum);
  }
}
    
    #ifdef __CUDACC__
#include 'device_helpers.cuh'
#endif  // __CUDACC__
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
      const std::shared_ptr<DHTNode>& getLocalNode() const { return localNode_; }
    
    void DHTRoutingTableSerializer::serialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Saving DHT routing table to %s.', filename.c_str()));
  std::string filenameTemp = filename;
  filenameTemp += '__temp';
  BufferedFile fp(filenameTemp.c_str(), BufferedFile::WRITE);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
      ~DHTRoutingTableSerializer();
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
      virtual void addPeriodicTask2(const std::shared_ptr<DHTTask>& task) = 0;
    
      virtual ~DHTTaskQueueImpl();
    
    int main(int argc, char** argv) {
#if !defined(ROCKSDB_LITE)
  rocksdb::port::InstallStackTraceHandler();
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
#else
  (void) argc;
  (void) argv;
  return 0;
#endif
}

    
    #include 'monitoring/perf_context_imp.h'
#include 'rocksdb/env.h'
#include 'rocksdb/status.h'
    
      void NotifyAll() override { cv_.notify_all(); }
    
    #include <string>
    
    
    {  // Sleep just until `num_bytes` is allowed.
  uint64_t sleep_amount =
      static_cast<uint64_t>(num_bytes /
                            static_cast<long double>(delayed_write_rate_) *
                            kMicrosPerSecond) +
      sleep_debt;
  last_refill_time_ = time_now + sleep_amount;
  return sleep_amount;
}
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
      // If true, an error is raised if the database already exists.
  // Default: false
  bool error_if_exists;