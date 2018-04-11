
        
          // Implement the abstract interface. All these functions fill the output
  // with a copy of FileDescriptorProto.
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
      std::string class_access_level();
  const Options* options();
    
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
    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
        for (UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++)
    {
        g_driverType = driverTypes[driverTypeIndex];
        hr = D3D11CreateDeviceAndSwapChain(NULL, g_driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
                D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &g_featureLevel, &g_pImmediateContext);
        if (SUCCEEDED(hr))
            break;
    }
    if (FAILED(hr))
        return hr;
    
        // check that the points are infront of the center of perspectivity
    for (int k = 0; k < sols.cols; ++k)
    {
        cv::Mat cam_points = C_est[k] * pp + cv::repeat(t_est[k], 1, pp.cols);
        cv::Mat cam_points_k = cam_points.row(2);
    }
    
                template<typename T>
            static __device__ __forceinline__ T atomicMin(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count = ::min(*address, val);
                do
                {
                    *address = count;
                } while (*address > count);
    }
    
    //! @endcond
    
        static void CODEGEN_FUNCPTR Switch_TransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar* const *varyings, GLenum bufferMode)
    {
        TransformFeedbackVaryings = (PFNTRANSFORMFEEDBACKVARYINGSPROC)IntGetProcAddress('glTransformFeedbackVaryings');
        TransformFeedbackVaryings(program, count, varyings, bufferMode);
    }
    
    #undef cv_hal_QR32f
#define cv_hal_QR32f lapack_QR32f
#undef cv_hal_QR64f
#define cv_hal_QR64f lapack_QR64f
    
        static void* WinGetProcAddress(const char* name)
    {
        static HMODULE opencl_module = NULL;
        if (!opencl_module)
        {
            opencl_module = GetModuleHandleA('clAmdBlas.dll');
            if (!opencl_module)
            {
                opencl_module = LoadLibraryA('clAmdBlas.dll');
                if (!opencl_module)
                    return NULL;
            }
        }
        return (void*)GetProcAddress(opencl_module, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) WinGetProcAddress(name)
#endif // _WIN32
    
    namespace cv { namespace ocl { namespace runtime {
    }
    }
    }
    
    bool js_cocos2dx_studio_BaseData_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_BaseData_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_BaseData(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_BaseData_getColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BaseData_setColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BaseData_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BaseData_BaseData(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    				body->CreateFixture(&fd);
    
    
    {		m_break = false;
		m_broke = false;
	}
    
    struct DNSBreaker {
	DNSBreaker(): isbreak(false), dnsstatus(NULL) {}
	bool isbreak;
	int* dnsstatus;
};
    
    
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-14.
//
    
    Handle<Value> DBWrapper::Delete(const Arguments& args) {
  HandleScope scope;
    }
    
      BlockIter(const Comparator* comparator, const char* data, uint32_t restarts,
            uint32_t num_restarts, BlockPrefixIndex* prefix_index,
            SequenceNumber global_seqno, BlockReadAmpBitmap* read_amp_bitmap)
      : BlockIter() {
    Initialize(comparator, data, restarts, num_restarts, prefix_index,
               global_seqno, read_amp_bitmap);
  }
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    allowGlobalSeqNo
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_IngestExternalFileOptions_allowGlobalSeqNo(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  return static_cast<jboolean>(options->allow_global_seqno);
}
    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
    void SyncPoint::DisableProcessing() {
  impl_->DisableProcessing();
}