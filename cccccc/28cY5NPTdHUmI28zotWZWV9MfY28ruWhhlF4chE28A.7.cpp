
        
        // ResourceOpKernel<T> is a virtual base class for resource op implementing
// interface type T. The inherited op looks up the resource name (determined by
// ContainerInfo), and creates a new resource if necessary.
//
// Requirements:
//  - Op must be marked as stateful.
//  - Op must have `container` and `shared_name` attributes. Empty `container`
//  means using the default container. Empty `shared_name` means private
//  resource.
//  - Subclass must override CreateResource().
//  - Subclass is encouraged to override VerifyResource().
template <typename T>
class ResourceOpKernel : public OpKernel {
 public:
  explicit ResourceOpKernel(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context,
                   context->allocate_persistent(DT_STRING, TensorShape({2}),
                                                &handle_, nullptr));
  }
    }
    
    #include <string>
    
      double ComputePrimalLoss(const double wx, const double example_label,
                           const double example_weight) const final {
    const double y_wx = example_label * wx;
    if (y_wx >= 1) return 0;
    if (y_wx <= 1 - gamma) return (1 - y_wx - gamma / 2) * example_weight;
    return (1 - y_wx) * (1 - y_wx) * example_weight * 0.5 / gamma;
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
        NodeDef* add_node2 = graph_def.add_node();
    add_node2->set_name('add_node2');
    add_node2->set_op('Add');
    add_node2->add_input('const_node1');
    add_node2->add_input('const_node2');
    add_node2->set_device('//device:GPU:1');
    
    
    {}  // namespace test
    
    Timer::~Timer() {
  if (!m_name.empty()) {
    report();
  }
}
    
    #include <atomic>
#include 'stddef.h'
    
    private const char *
file_or_stream(struct magic_set *ms, const char *inname, php_stream *stream)
{
  int  rv = -1;
  unsigned char *buf;
  struct stat  sb;
  ssize_t nbytes = 0;  /* number of bytes read from a datafile */
  HPHP::req::ptr<HPHP::File> file;
    }
    
    #include 'hphp/runtime/vm/hhbc.h'
    
      // An integer is constructed from the n, imm_s and imm_r bits according to
  // the following table:
  //
  //  N   imms    immr    size        S             R
  //  1  ssssss  rrrrrr    64    UInt(ssssss)  UInt(rrrrrr)
  //  0  0sssss  xrrrrr    32    UInt(sssss)   UInt(rrrrr)
  //  0  10ssss  xxrrrr    16    UInt(ssss)    UInt(rrrr)
  //  0  110sss  xxxrrr     8    UInt(sss)     UInt(rrr)
  //  0  1110ss  xxxxrr     4    UInt(ss)      UInt(rr)
  //  0  11110s  xxxxxr     2    UInt(s)       UInt(r)
  // (s bits must not be all set)
  //
  // A pattern is constructed of size bits, where the least significant S+1
  // bits are set. The pattern is rotated right by R, and repeated across a
  // 32 or 64-bit value, depending on destination register width.
  //
    
    /*
 * /tmp files created by dlopen_embedded_data().
 */
std::vector<std::string> s_tmp_files;
    
    /*
 * Read data from the named section and place it into the given buffer (of size
 * len) Returns the number of bytes (not null-terminated) read or -1 if
 * unsuccessful
 */
ssize_t hphp_read_embedded_data(const char* section, char* buf, size_t len);
    
      Mutex& mutex() { return m_procMutex; }
    
    struct CurlShareResource : SweepableResourceData {
  DECLARE_RESOURCE_ALLOCATION(CurlShareResource)
  CLASSNAME_IS('curl_share')
  const String& o_getClassNameHook() const override { return classnameof(); }
  bool isInvalid() const override { return !m_share; }
    }
    
    DEFINE_string(benchmark_color, 'auto',
              'Whether to use colors in the output.  Valid values: '
              ''true'/'yes'/1, 'false'/'no'/0, and 'auto'. 'auto' means to use '
              'colors if the output is being sent to a terminal and the TERM '
              'environment variable is set to a terminal type that supports '
              'colors.');
    
            if (family->use_manual_time_) {
          instance.name += '/manual_time';
        } else if (family->use_real_time_) {
          instance.name += '/real_time';
        }