bool InternalFilterPolicy::KeyMayMatch(const Slice& key, const Slice& f) const {
  return user_policy_->KeyMayMatch(ExtractUserKey(key), f);
}
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = NULL;
  Table* table = NULL;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
    class Env;
    
          case kPrevLogNumber:
        if (GetVarint64(&input, &prev_log_number_)) {
          has_prev_log_number_ = true;
        } else {
          msg = 'previous log number';
        }
        break;
    
    
TEST(FindFileTest, Multiple) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_EQ(0, Find('100'));
  ASSERT_EQ(0, Find('150'));
  ASSERT_EQ(0, Find('151'));
  ASSERT_EQ(0, Find('199'));
  ASSERT_EQ(0, Find('200'));
  ASSERT_EQ(1, Find('201'));
  ASSERT_EQ(1, Find('249'));
  ASSERT_EQ(1, Find('250'));
  ASSERT_EQ(2, Find('251'));
  ASSERT_EQ(2, Find('299'));
  ASSERT_EQ(2, Find('300'));
  ASSERT_EQ(2, Find('349'));
  ASSERT_EQ(2, Find('350'));
  ASSERT_EQ(3, Find('351'));
  ASSERT_EQ(3, Find('400'));
  ASSERT_EQ(3, Find('450'));
  ASSERT_EQ(4, Find('451'));
    }
    
    void WriteBatchInternal::Append(WriteBatch* dst, const WriteBatch* src) {
  SetCount(dst, Count(dst) + Count(src));
  assert(src->rep_.size() >= kHeader);
  dst->rep_.append(src->rep_.data() + kHeader, src->rep_.size() - kHeader);
}
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
    // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
    
      if (filename.empty()) {
    *error = filename_error;
    return false;
  }
  scoped_ptr<io::ZeroCopyOutputStream> output(
      generator_context->Open(filename));
  io::Printer printer(output.get(), '$');
    
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
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
    
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    OCL_PERF_TEST_P(StereoBMFixture, StereoBM, ::testing::Combine(OCL_PERF_ENUM(32, 64, 128), OCL_PERF_ENUM(11,21) ) )
{
    const int n_disp = get<0>(GetParam()), winSize = get<1>(GetParam());
    UMat left, right, disp;
    }
    
        // construct the multiplication matrix via schur compliment of the Macaulay
    // matrix
    Mtilde = M2_1 - M2_5.t()*M2_4;
    
    CV_EXPORTS void  EstimateUncertainties(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                           const IntrinsicParams& params, InputArray omc, InputArray Tc,
                           IntrinsicParams& errors, Vec2d& std_err, double thresh_cond, int check_cond, double& rms);
    
        cv::merge(vector<Mat>(2, cb), img);
    errors += run_test_case( CV_StsUnsupportedFormat, '2 channel image' );
    
        filepath = cv::format('%scv/cameracalibration/', ts->get_data_path().c_str() );
    filename = cv::format('%schessboard_timing_list.dat', filepath.c_str() );
    CvFileStorage* fs = cvOpenFileStorage( filename.c_str(), 0, CV_STORAGE_READ );
    CvFileNode* board_list = fs ? cvGetFileNodeByName( fs, 0, 'boards' ) : 0;
    
                composeRT( rv1, tv1, rv2, tv2 + ev, rv3_p, tv3_p);
            composeRT( rv1, tv1, rv2, tv2 - ev, rv3_m, tv3_m);
    
    CV_DecomposeProjectionMatrixTest::CV_DecomposeProjectionMatrixTest()
{
    test_case_count = 30;
}