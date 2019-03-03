
        
        
    {
    {}  // namespace python_op_gen_internal
}  // namespace tensorflow
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/lib/core/status.h'
    
    Safe_TF_TensorPtr make_safe(TF_Tensor* tensor) {
  return Safe_TF_TensorPtr(tensor);
}
    
    // Safe containers for an owned TF_Status. On destruction, the handle
// will be deleted by TF_DeleteStatus.
using Safe_TF_StatusPtr = std::unique_ptr<TF_Status, detail::TFStatusDeleter>;
Safe_TF_StatusPtr make_safe(TF_Status* status);
    
      // Return the current record contents.  Only valid after the preceding call
  // to GetNext() returned true
  string record() const { return record_; }
  // Return the current offset in the file.
  uint64 offset() const { return offset_; }
    
    namespace tensorflow {
namespace swig {
    }
    }
    
    
    {}  // namespace stream_executor

    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
      std::vector<const FileDescriptor*> parsed_files;
  for (int i = 0; i < request.file_to_generate_size(); i++) {
    parsed_files.push_back(pool.FindFileByName(request.file_to_generate(i)));
    if (parsed_files.back() == NULL) {
      *error_msg = 'protoc asked plugin to generate a file but '
                   'did not provide a descriptor for the file: ' +
                   request.file_to_generate(i);
      return false;
    }
  }
    
    
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    void MapLiteTestUtil::SetMapFields(unittest::TestMapLite* message) {
  MapTestUtilImpl::SetMapFields<unittest::MapEnumLite,
                                unittest::MAP_ENUM_BAR_LITE,
                                unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
    Example 1:
  DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
  RANGES = [
    [
      [2, 4],
      [0, 2],
    ],
    [
      [0, 0],
      [6, 2],
    ]
  ]
  lengths = [4, 2]
  OUTPUT[0] = [[3, 4, 5, 6], [0, 0, 0, 0]]
  OUTPUT[1] = [[1, 2], [7, 8]]
    
    OPERATOR_SCHEMA(HalfToFloat)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT);
    }
    
    		inline ColorFloatRGBA * GetDecodedColors(void)
		{
			return m_pencoding->GetDecodedColors();
		}
    
    		m_pblockParent = nullptr;
    
    		enum class Format
		{
			UNKNOWN,
			//
			RGB8,
			RGBA8,
			R11,
			RG11,
			RGB8A1,
			//
			FORMATS
		};
    
    #ifndef FASTLZ_H
#define FASTLZ_H
    
    #undef SIG2WORD16
static OPUS_INLINE opus_val16 SIG2WORD16_armv6(opus_val32 x)
{
   celt_sig res;
   __asm__(
       '#SIG2WORD16\n\t'
       'ssat %0, #16, %1, ASR #12\n\t'
       : '=r'(res)
       : 'r'(x+2048)
   );
   return EXTRACT16(res);
}
#define SIG2WORD16(x) (SIG2WORD16_armv6(x))
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#define MULT16_32_Q16(a,b) ADD32(MULT16_16((a),SHR32((b),16)), SHR32(MULT16_16SU((a),((b)&0x0000ffff)),16))