
        
        #ifndef TENSORFLOW_LIB_IO_RECORD_WRITER_H_
#define TENSORFLOW_LIB_IO_RECORD_WRITER_H_
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    Status status = input_buffer_->ReadLine(value);
    ++line_number_;
    if (status.ok()) {
      *key = strings::StrCat(current_work(), ':', line_number_);
      *produced = true;
      return status;
    }
    if (errors::IsOutOfRange(status)) {  // End of file, advance to the next.
      *at_end = true;
      return Status::OK();
    } else {  // Some other reading error
      return status;
    }
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #if GOOGLE_CUDA
    
    bool IsUnresponsiveEventSuppressed() {
  return g_suppress_level > 0;
}
    
      // Whether this object is listening for global shortcuts.
  bool is_listening_;
    
    static bool extractFirstUnicodeScalarImpl(StringRef S, unsigned &Scalar) {
  if (S.empty())
    return false;
    }
    
    #include 'swift/Index/IndexRecord.h'
#include 'swift/AST/ASTContext.h'
#include 'swift/AST/Decl.h'
#include 'swift/AST/Expr.h'
#include 'swift/AST/Module.h'
#include 'swift/AST/ParameterList.h'
#include 'swift/AST/Pattern.h'
#include 'swift/AST/Stmt.h'
#include 'swift/AST/Types.h'
#include 'swift/AST/DiagnosticsFrontend.h'
#include 'swift/AST/ModuleLoader.h'
#include 'swift/ClangImporter/ClangModule.h'
#include 'swift/Index/Index.h'
#include 'swift/Strings.h'
#include 'clang/Basic/FileManager.h'
#include 'clang/Frontend/CompilerInstance.h'
#include 'clang/Index/IndexingAction.h'
#include 'clang/Index/IndexRecordWriter.h'
#include 'clang/Index/IndexUnitWriter.h'
#include 'clang/Lex/Preprocessor.h'
#include 'llvm/Support/Path.h'
    
    #ifndef SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
#define SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
    
    // The compiler generates the swift_once_t values as word-sized zero-initialized
// variables, so we want to make sure swift_once_t isn't larger than the
// platform word or the function below might overwrite something it shouldn't.
static_assert(sizeof(swift_once_t) <= sizeof(void*),
              'swift_once_t must be no larger than the platform word');
    
    // Read through the first n keys repeatedly and check that they get
// compacted (verified by checking the size of the key space).
void AutoCompactTest::DoReads(int n) {
  std::string value(kValueSize, 'x');
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
    }
    
          case kPrevLogNumber:
        if (GetVarint64(&input, &prev_log_number_)) {
          has_prev_log_number_ = true;
        } else {
          msg = 'previous log number';
        }
        break;
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
    #include <string>
    
    #ifdef WITH_MPI
    std::cout << '--------------------------' << std::endl;
    
      for (auto s: tensor->sizes())
    assert(s == 2);
  for (int i = 0; i < 2; i++)
    assert(reinterpret_cast<float*>(tensor->data())[i] == 5);
    
    template<typename To, typename From> To convert(From f) {
  return static_cast<To>(f);
}
    
      rank_type getRank() override;
  rank_type getNumProcesses() override;
    
    #define THCPDoubleStorage_CData(obj)  (obj)->cdata
#define THCPFloatStorage_CData(obj)   (obj)->cdata
#define THCPLongStorage_CData(obj)    (obj)->cdata
#define THCPIntStorage_CData(obj)     (obj)->cdata
#define THCPShortStorage_CData(obj)   (obj)->cdata
#define THCPCharStorage_CData(obj)    (obj)->cdata
#define THCPByteStorage_CData(obj)    (obj)->cdata
    
    #undef THPStorage_
#undef THPStorage
#undef THPStorageBaseStr
#undef THPStorageStr
#undef THPStorageClass
#undef THPStorageType
    
    #define THPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THPDoubleStorageClass)
#define THPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THPLongStorageClass)
#define THPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THPIntStorageClass)
#define THPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THPShortStorageClass)
#define THPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THPCharStorageClass)
#define THPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THPByteStorageClass)
    
    using THDGeneratorPtrTypes = map_to_ptr<std::add_const, THDGeneratorTypes>::type;
using THDTensorPtrTypes = map_to_ptr<std::add_const, THDTensorTypes>::type;
using THDStoragePtrTypes = map_to_ptr<std::add_const, THDStorageTypes>::type;