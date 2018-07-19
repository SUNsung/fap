
        
        
    {#if GOOGLE_CUDA
// A special GPU kernel for int32.
// TODO(b/25387198): Also enable int32 in device memory. This kernel
// registration requires all int32 inputs and outputs to be in host memory.
REGISTER_KERNEL_BUILDER(Name('Mod')
                            .Device(DEVICE_GPU)
                            .HostMemory('x')
                            .HostMemory('y')
                            .HostMemory('z')
                            .TypeConstraint<int32>('T'),
                        BinaryOp<CPUDevice, functor::safe_mod<int32>>);
REGISTER_KERNEL_BUILDER(Name('TruncateMod')
                            .Device(DEVICE_GPU)
                            .HostMemory('x')
                            .HostMemory('y')
                            .HostMemory('z')
                            .TypeConstraint<int32>('T'),
                        BinaryOp<CPUDevice, functor::safe_mod<int32>>);
#endif
}  // namespace tensorflow

    
      // TODO(josh11b): Implement serializing and restoring the state.
    
    #include 'tensorflow/cc/ops/const_op.h'
#include 'tensorflow/cc/ops/image_ops.h'
#include 'tensorflow/cc/ops/nn_ops.h'
#include 'tensorflow/cc/ops/sendrecv_ops.h'
#include 'tensorflow/cc/ops/standard_ops.h'
#include 'tensorflow/core/framework/tensor_testutil.h'
#include 'tensorflow/core/lib/core/status_test_util.h'
#include 'tensorflow/core/platform/test.h'
#include 'tensorflow/core/platform/test_benchmark.h'
#include 'tensorflow/core/public/session.h'
#include 'tensorflow/tools/graph_transforms/transform_utils.h'
    
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
    
    bool object_exists(const char *name) {
  int fd = shm_open(name, O_RDONLY, 0);
  if (fd >= 0) {
    close(fd);
    return true;
  } else {
    return false;
  }
}
    
    
    {  if (free_b) THDTensor_(free)(b);
}
    
    	XLoggerInfo xlog_info;
	gettimeofday(&xlog_info.timeval, NULL);
	xlog_info.level = (TLogLevel)_level;
	xlog_info.line = (int)_line;
	xlog_info.pid = (int)_pid;
	xlog_info.tid = LONGTHREADID2INT(_tid);
	xlog_info.maintid = LONGTHREADID2INT(_maintid);
    
        _packlen = ntoh(*(T*)_rawbuf);
    
    #include <stdint.h>
#include <cstddef>
#include <list>
    
    
Test_Spy_Sample::Test_Spy_Sample()
{
    SPY_ATTACH_CLASS(NULL);
}
    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    class ScopedJstring {
  public:
    ScopedJstring(JNIEnv* _env, jstring _jstr);
    ScopedJstring(JNIEnv* _env, const char* _char);
    }