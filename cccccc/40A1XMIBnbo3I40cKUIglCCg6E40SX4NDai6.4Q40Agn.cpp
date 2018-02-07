
        
        #include <string>
    
    void Initialize(v8::Local<v8::Object> exports, v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context, void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary dict(isolate, exports);
  dict.Set('globalShortcut', atom::api::GlobalShortcut::Create(isolate));
}
    
    namespace atom {
    }
    
    v8::Persistent<v8::ObjectTemplate> event_template;
    
      AtomQuotaPermissionContext();
  virtual ~AtomQuotaPermissionContext();
    
    #ifndef GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_DATABASE_H__
#define GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_DATABASE_H__
    
    #include <Python.h>
    
    
    {  printer->Print(
    variables_,
    'private static readonly pbc::MapField<$key_type_name$, $value_type_name$>.Codec _map_$name$_codec\n'
    '    = new pbc::MapField<$key_type_name$, $value_type_name$>.Codec(');
  key_generator->GenerateCodecCode(printer);
  printer->Print(', ');
  value_generator->GenerateCodecCode(printer);
  printer->Print(
    variables_,
    ', $tag$);\n'
    'private readonly pbc::MapField<$key_type_name$, $value_type_name$> $name$_ = new pbc::MapField<$key_type_name$, $value_type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::MapField<$key_type_name$, $value_type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    std::string SourceGeneratorBase::class_access_level() {
  return (IsDescriptorProto(descriptor_) || this->options()->internal_access) ? 'internal' : 'public';
}
    
    /** Max number of blobs to classify together in FindSegmentation. */
const int kMaxGroupSize = 4;
/// Max fraction of median allowed as deviation in xheight before switching
/// to median.
const double kMaxXHeightDeviationFraction = 0.125;
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    // Runs classify_word_pass1() on the current word. Outputs Tesseract's
// raw choice as a result of the classification. For words labeled with a
// single unichar also outputs all alternatives from blob_choices of the
// best choice.
void Tesseract::ambigs_classify_and_output(const char *label,
                                           PAGE_RES_IT* pr_it,
                                           FILE *output_file) {
  // Classify word.
  fflush(stdout);
  WordData word_data(*pr_it);
  SetupWordPassN(1, &word_data);
  classify_word_and_language(1, pr_it, &word_data);
  WERD_RES* werd_res = word_data.word;
  WERD_CHOICE *best_choice = werd_res->best_choice;
  ASSERT_HOST(best_choice != NULL);
    }
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    namespace tesseract {
    }
    
    
/**********************************************************************
 * operator*=
 *
 * Scalar multiply of an ICOORD.
 **********************************************************************/
    
    // Prints the content of the DENORM for debug purposes.
void DENORM::Print() const {
  if (pix_ != NULL) {
    tprintf('Pix dimensions %d x %d x %d\n',
            pixGetWidth(pix_), pixGetHeight(pix_), pixGetDepth(pix_));
  }
  if (inverse_)
    tprintf('Inverse\n');
  if (block_ && block_->re_rotation().x() != 1.0f) {
    tprintf('Block rotation %g, %g\n',
            block_->re_rotation().x(), block_->re_rotation().y());
  }
  tprintf('Input Origin = (%g, %g)\n', x_origin_, y_origin_);
  if (x_map_ != NULL && y_map_ != NULL) {
    tprintf('x map:\n');
    for (int x = 0; x < x_map_->size(); ++x) {
      tprintf('%g ', (*x_map_)[x]);
    }
    tprintf('\ny map:\n');
    for (int y = 0; y < y_map_->size(); ++y) {
      tprintf('%g ', (*y_map_)[y]);
    }
    tprintf('\n');
  } else {
    tprintf('Scale = (%g, %g)\n', x_scale_, y_scale_);
    if (rotation_ != NULL)
      tprintf('Rotation = (%g, %g)\n', rotation_->x(), rotation_->y());
  }
  tprintf('Final Origin = (%g, %g)\n', final_xshift_, final_xshift_);
  if (predecessor_ != NULL) {
    tprintf('Predecessor:\n');
    predecessor_->Print();
  }
}
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    struct IRGS;
    
      template<
    class E,
    class Enable = typename std::enable_if<std::is_enum<E>::value>::type
  >
  explicit Vconst(E e) : Vconst(typename std::underlying_type<E>::type(e)) {}
    
      void delist() {
    auto n = m_next, p = m_prev;
    n->m_prev = p;
    p->m_next = n;
  }
    
    void Clusterizer::initClusters() {
  m_clusters.resize(m_unit.blocks.size());
  m_blockCluster.resize(m_unit.blocks.size());
  for (auto b : m_blocks) {
    m_clusters[b].push_back(b);
    m_blockCluster[b] = b;
  }
}
    
    #include 'hphp/util/numa.h'
#include 'hphp/util/portability.h'
#include <folly/Bits.h>
    
    public:
  void scan(type_scan::Scanner& scanner) const {
    auto const elms = data();
    scanner.scan(*elms, m_used * sizeof(*elms));
  }
    
    namespace HPHP {
    }
    
    
    {
    {}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_RANDOM_H_

    
        // want to compute storage boundary for each feature
    // using variants of prefix sum scan
    boundary_.resize(nfeature);
    size_t accum_index_ = 0;
    size_t accum_row_ind_ = 0;
    for (bst_uint fid = 0; fid < nfeature; ++fid) {
      boundary_[fid].index_begin = accum_index_;
      boundary_[fid].row_ind_begin = accum_row_ind_;
      if (type_[fid] == kDenseColumn) {
        accum_index_ += static_cast<size_t>(nrow);
      } else {
        accum_index_ += feature_counts_[fid];
        accum_row_ind_ += feature_counts_[fid];
      }
      boundary_[fid].index_end = accum_index_;
      boundary_[fid].row_ind_end = accum_row_ind_;
    }
    
      dmlc::DataIter<xgboost::ColBatch> * col_iter = dmat->ColIterator();
  // Loop over the batches and assert the data is as expected
  long num_col_batch = 0;
  col_iter->BeforeFirst();
  while (col_iter->Next()) {
    num_col_batch += 1;
    EXPECT_EQ(col_iter->Value().size, dmat->info().num_col)
      << 'Expected batch size to be same as num_cols as max_row_perbatch is 1.';
  }
  EXPECT_EQ(num_col_batch, dmat->info().num_row)
    << 'Expected num batches to be same as num_rows as max_row_perbatch is 1';
  col_iter = nullptr;
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3.0,2,1)';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
    
    {template<typename IndexType>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.