
        
        CV_EXPORTS void  EstimateUncertainties(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                           const IntrinsicParams& params, InputArray omc, InputArray Tc,
                           IntrinsicParams& errors, Vec2d& std_err, double thresh_cond, int check_cond, double& rms);
    
    class BareModelEstimator : public CvModelEstimator2
{
public:
    BareModelEstimator(int modelPoints, CvSize modelSize, int maxBasicSolutions);
    }
    
        // Extension: 1.5
    extern void (CODEGEN_FUNCPTR *GenQueries)(GLsizei n, GLuint *ids);
    extern void (CODEGEN_FUNCPTR *DeleteQueries)(GLsizei n, const GLuint *ids);
    extern GLboolean (CODEGEN_FUNCPTR *IsQuery)(GLuint id);
    extern void (CODEGEN_FUNCPTR *BeginQuery)(GLenum target, GLuint id);
    extern void (CODEGEN_FUNCPTR *EndQuery)(GLenum target);
    extern void (CODEGEN_FUNCPTR *GetQueryiv)(GLenum target, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetQueryObjectiv)(GLuint id, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetQueryObjectuiv)(GLuint id, GLenum pname, GLuint *params);
    extern void (CODEGEN_FUNCPTR *BindBuffer)(GLenum target, GLuint buffer);
    extern void (CODEGEN_FUNCPTR *DeleteBuffers)(GLsizei n, const GLuint *buffers);
    extern void (CODEGEN_FUNCPTR *GenBuffers)(GLsizei n, GLuint *buffers);
    extern GLboolean (CODEGEN_FUNCPTR *IsBuffer)(GLuint buffer);
    extern void (CODEGEN_FUNCPTR *BufferData)(GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage);
    extern void (CODEGEN_FUNCPTR *BufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data);
    extern void (CODEGEN_FUNCPTR *GetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data);
    extern GLvoid* (CODEGEN_FUNCPTR *MapBuffer)(GLenum target, GLenum access);
    extern GLboolean (CODEGEN_FUNCPTR *UnmapBuffer)(GLenum target);
    extern void (CODEGEN_FUNCPTR *GetBufferParameteriv)(GLenum target, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetBufferPointerv)(GLenum target, GLenum pname, GLvoid* *params);
    
    #endif //HAVE_LAPACK
#endif //OPENCV_CORE_HAL_INTERNAL_HPP

    
    // Sets flags necessary for recognition in the training mode.
// Opens and returns the pointer to the output file.
FILE *Tesseract::init_recog_training(const STRING &fname) {
  if (tessedit_ambigs_training) {
    tessedit_tess_adaption_mode.set_value(0);    // turn off adaption
    tessedit_enable_doc_dict.set_value(0);       // turn off document dictionary
    // Explore all segmentations.
    getDict().stopper_no_acceptable_choices.set_value(1);
  }
    }
    
    // This file contains types that are used both by the API and internally
// to Tesseract. In order to decouple the API from Tesseract and prevent cyclic
// dependencies, THIS FILE SHOULD NOT DEPEND ON ANY OTHER PART OF TESSERACT.
// Restated: It is OK for low-level Tesseract files to include publictypes.h,
// but not for the low-level tesseract code to include top-level API code.
// This file should not use other Tesseract types, as that would drag
// their includes into the API-level.
// API-level code should include apitypes.h in preference to this file.
    
      if (argv0 != nullptr && *argv0 != '\0') {
    /* Use tessdata prefix from the command line. */
    datadir = argv0;
  } else if (tessdata_prefix) {
    /* Use tessdata prefix from the environment. */
    datadir = tessdata_prefix;
#if defined(_WIN32)
  } else if (datadir == nullptr || _access(datadir.string(), 0) != 0) {
    /* Look for tessdata in directory of executable. */
    char drive[_MAX_DRIVE];
    char dir[_MAX_DIR];
    char path[_MAX_PATH];
    DWORD length = GetModuleFileName(nullptr, path, sizeof(path));
    if (length > 0 && length < sizeof(path)) {
      errno_t result = _splitpath_s(path, drive, sizeof(drive),
                                    dir, sizeof(dir), nullptr, 0, nullptr, 0);
      if (result == ERANGE) {
        tprintf('Error: Path too long: %s\n', path);
      }
    }
    }
    
    #ifndef SWIG
template <class T1, class T2, class R, class P1, class P2, class A1, class A2, class A3, class A4, class A5>
inline typename _TessMemberResultCallback_2_5<true,R,T1,P1,P2,A1,A2,A3,A4,A5>::base*
NewTessCallback( T1* obj, R (T2::*member)(P1,P2,A1,A2,A3,A4,A5) , typename Identity<P1>::type p1, typename Identity<P2>::type p2) {
  return new _TessMemberResultCallback_2_5<true,R,T1,P1,P2,A1,A2,A3,A4,A5>(obj, member, p1, p2);
}
#endif
    
    namespace mars {
namespace baseevent {
    }
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #ifdef ANDROID
#include 'comm/android/callstack.h'
#endif
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    {  private:
    virtual void __OnAttach(const char* _key) {}
    virtual void __OnDetach(const char* _key) {}
};
