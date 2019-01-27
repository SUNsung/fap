
        
          // This gets all the items that any extension has registered for possible
  // inclusion in context menus.
  MenuItem::List GetItems() {
    MenuItem::List result;
    std::set<MenuItem::ExtensionKey> extension_ids =
        menu_manager()->ExtensionIds();
    std::set<MenuItem::ExtensionKey>::iterator i;
    for (i = extension_ids.begin(); i != extension_ids.end(); ++i) {
      const MenuItem::OwnedList* list = menu_manager()->MenuItems(*i);
      for (const auto& item : *list)
        result.push_back(item.get());
    }
    return result;
  }
    
    // third_party/node
// FIXME: node_webkit.h should include v8 headers
#include 'third_party/node-nw/src/node_webkit.h'
    
    v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id) {
  RenderThread::Get()->Send(new ShellViewHostMsg_Deallocate_Object(
      routing_id, object_id));
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  return v8::Undefined(isolate);
}
    
    namespace nwapi {
    }
    
    
namespace nwapi {
    }
    
    void Menu::OnMenuClosed() {
  CHECK(!message_loop_quit_.is_null());
  message_loop_quit_.Run();
  
#if !defined(OS_WIN)
  // Ask PlatformEventSource to stop dispatching
  // events in this message loop
  // iteration. We want our menu's loop to return
  // before the next event.
  if (ui::PlatformEventSource::GetInstance())
    ui::PlatformEventSource::GetInstance()->StopCurrentEventStream();
#endif
}
    
    void MenuItem::SetIcon(const std::string& icon) {
  if (icon.empty()) {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_), NULL); 
  } else {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                  gtk_image_new_from_file(icon.c_str()));
    gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                              TRUE);
  }
}
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    /// @brief Fills a Blob with uniformly distributed values @f$ x\sim U(a, b) @f$.
template <typename Dtype>
class UniformFiller : public Filler<Dtype> {
 public:
  explicit UniformFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), Dtype(this->filler_param_.min()),
        Dtype(this->filler_param_.max()), blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    /**
 * @brief Normalizes the input to have 0-mean and/or unit (1) variance across
 *        the batch.
 *
 * This layer computes Batch Normalization as described in [1]. For each channel
 * in the data (i.e. axis 1), it subtracts the mean and divides by the variance,
 * where both statistics are computed across both spatial dimensions and across
 * the different examples in the batch.
 *
 * By default, during training time, the network is computing global
 * mean/variance statistics via a running average, which is then used at test
 * time to allow deterministic outputs for each input. You can manually toggle
 * whether the network is accumulating or using the statistics via the
 * use_global_stats option. For reference, these statistics are kept in the
 * layer's three blobs: (0) mean, (1) variance, and (2) moving average factor.
 *
 * Note that the original paper also included a per-channel learned bias and
 * scaling factor. To implement this in Caffe, define a `ScaleLayer` configured
 * with `bias_term: true` after each `BatchNormLayer` to handle both the bias
 * and scaling factor.
 *
 * [1] S. Ioffe and C. Szegedy, 'Batch Normalization: Accelerating Deep Network
 *     Training by Reducing Internal Covariate Shift.' arXiv preprint
 *     arXiv:1502.03167 (2015).
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class BatchNormLayer : public Layer<Dtype> {
 public:
  explicit BatchNormLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
    CallCredentials::~CallCredentials() {}
    
    AuthPropertyIterator::AuthPropertyIterator(
    const grpc_auth_property* property, const grpc_auth_property_iterator* iter)
    : property_(property),
      ctx_(iter->ctx),
      index_(iter->index),
      name_(iter->name) {}
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H */

    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
    #pragma once
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Allegro
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#ifdef _WIN32
#include <allegro5/allegro_windows.h>
#endif
#define ALLEGRO_HAS_CLIPBOARD   (ALLEGRO_VERSION_INT >= ((5 << 24) | (1 << 16) | (12 << 8)))    // Clipboard only supported from Allegro 5.1.12
    
    int main(int argc, char** argv)
{
    // Create GLUT window
    glutInit(&argc, argv);
    glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_MULTISAMPLE);
    glutInitWindowSize(1280, 720);
    glutCreateWindow('Dear ImGui FreeGLUT+OpenGL2 Example');
    }
    
        UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
        return E_FAIL;
    
        FrameContext* frameCtxt = &g_frameContext[nextFrameIndex % NUM_FRAMES_IN_FLIGHT];
    UINT64 fenceValue = frameCtxt->FenceValue;
    if (fenceValue != 0) // means no fence was signaled
    {
        frameCtxt->FenceValue = 0;
        g_fence->SetEventOnCompletion(fenceValue, g_fenceEvent);
        waitableObjects[1] = g_fenceEvent;
        numWaitableObjects = 2;
    }
    
        // By using D3DCompile() from <d3dcompiler.h> / d3dcompiler.lib, we introduce a dependency to a given version of d3dcompiler_XX.dll (see D3DCOMPILER_DLL_A)
    // If you would like to use this DX11 sample code but remove this dependency you can:
    //  1) compile once, save the compiled shader blobs into a file or source code and pass them to CreateVertexShader()/CreatePixelShader() [preferred solution]
    //  2) use code to detect any version of the DLL and grab a pointer to D3DCompile from the DLL.
    // See https://github.com/ocornut/imgui/pull/638 for sources and details.
    
            D3D12_STATIC_SAMPLER_DESC staticSampler = {};
        staticSampler.Filter = D3D12_FILTER_MIN_MAG_MIP_LINEAR;
        staticSampler.AddressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.AddressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.AddressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        staticSampler.MipLODBias = 0.f;
        staticSampler.MaxAnisotropy = 0;
        staticSampler.ComparisonFunc = D3D12_COMPARISON_FUNC_ALWAYS;
        staticSampler.BorderColor = D3D12_STATIC_BORDER_COLOR_TRANSPARENT_BLACK;
        staticSampler.MinLOD = 0.f;
        staticSampler.MaxLOD = 0.f;
        staticSampler.ShaderRegister = 0;
        staticSampler.RegisterSpace = 0;
        staticSampler.ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      // One refill: 10240 bytes allowed, 1000 used, 9240 left
  ASSERT_EQ(static_cast<uint64_t>(1124), controller.GetDelay(&env, 1000u));
  env.now_micros_ += 1124u;  // sleep debt 0
    
    #ifdef ROCKSDB_FALLOCATE_PRESENT
Status PosixMmapFile::Allocate(uint64_t offset, uint64_t len) {
  assert(offset <= std::numeric_limits<off_t>::max());
  assert(len <= std::numeric_limits<off_t>::max());
  TEST_KILL_RANDOM('PosixMmapFile::Allocate:0', rocksdb_kill_odds);
  int alloc_status = 0;
  if (allow_fallocate_) {
    alloc_status = fallocate(
        fd_, fallocate_with_keep_size_ ? FALLOC_FL_KEEP_SIZE : 0,
          static_cast<off_t>(offset), static_cast<off_t>(len));
  }
  if (alloc_status == 0) {
    return Status::OK();
  } else {
    return IOError(
        'While fallocate offset ' + ToString(offset) + ' len ' + ToString(len),
        filename_, errno);
  }
}
#endif
    
      // atomically apply a set of updates
  {
    WriteBatch batch;
    batch.Delete('key1');
    batch.Put('key2', value);
    s = db->Write(WriteOptions(), &batch);
  }
    
    
    {  // Cleanup
  delete txn_db;
  DestroyDB(kDBPath, options);
  return 0;
}
    
      std::string smallest_output_key_prefix;
  std::string largest_output_key_prefix;
    
    // TODO(yhchiang): remove this function once c++14 is available
//                 as std::max will be able to cover this.
// Current MS compiler does not support constexpr
template <int A, int B>
struct constexpr_max {
  static const int result = (A > B) ? A : B;
};
    
    struct BackupableDBOptions {
  // Where to keep the backup files. Has to be different than dbname_
  // Best to set this to dbname_ + '/backups'
  // Required
  std::string backup_dir;
    }
    
    #include '2d/CCActionInterval.h'
#include 'math/CCGeometry.h'
    
    /** @class CallFuncN
* @brief Calls a 'callback' with the node as the first argument. N means Node.
* @js NA
*/
class CC_DLL CallFuncN : public CallFunc
{
public:
    /** Creates the action with the callback of type std::function<void()>.
     This is the preferred way to create the callback.
     *
     * @param func  A callback function need to be executed.
     * @return  An autoreleased CallFuncN object.
     */
    static CallFuncN * create(const std::function<void(Node*)>& func);
    }
    
    
    {    if (element->actions->num == 0)
    {
        if (_currentTarget == element)
        {
            _currentTargetSalvaged = true;
        }
        else
        {
            deleteHashElement(element);
        }
    }
}
    
        /** 
     * @brief Initializes with a duration and destination percentage. 
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, float percent);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCAnimationCache.h'
#include '2d/CCSpriteFrameCache.h'
#include 'platform/CCFileUtils.h'
    
        /** Deletes a Animation from the cache.
     *
     * @param name The name of animation.
     */
    void removeAnimation(const std::string& name);
    /** @deprecated. Use removeAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE void removeAnimationByName(const std::string& name){ removeAnimation(name);}
    
    // AtlasNode - Creation & Init
    
    #ifndef __CCATLAS_NODE_H__
#define __CCATLAS_NODE_H__
    
        // output element with key 'the ugly'
    std::cout << object.at('the ugly') << '\n';
    
        // output element at index 2 (third element)
    std::cout << array.at(2) << '\n';
    
        // create a JSON number from number_integer_t
    json::number_integer_t value_integer_t = -42;
    json j_integer_t(value_integer_t);
    
    
    {
    {        BOOST_DEFAULTED_FUNCTION(aligned(), {})
        BOOST_FORCEINLINE BOOST_CONSTEXPR explicit aligned(type v) BOOST_NOEXCEPT : value(v) {}
    };
};
    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
    }