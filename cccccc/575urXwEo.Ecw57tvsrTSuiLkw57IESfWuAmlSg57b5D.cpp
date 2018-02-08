
        
        #include <unordered_set>
#include <vector>
    
    
    {}  // namespace tensorflow

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Logs information about the kernel driver version and userspace driver
  // library version.
  static void LogDriverVersionInformation();
    
    // kNullPlugin denotes an invalid plugin identifier.
extern const PluginId kNullPlugin;
    
          // Skip Sink/Source nodes.
      if (!out->IsOp()) continue;
    
        auto iter = name_index->find(id.first);
    if (iter == name_index->end()) {
      return errors::NotFound('FeedInputs: unable to find feed output ', t);
    }
    const Node* n = iter->second;
    DCHECK_EQ(n->name(), id.first);
    if (id.second >= n->num_outputs()) {
      return errors::InvalidArgument(
          'FeedInputs: ', t, ' should have output index < ', n->num_outputs());
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    { private:
  enum { kBufferSize = 256 << 10 /* 256 kB */ };
  const int skip_header_lines_;
  Env* const env_;
  int64 line_number_;
  std::unique_ptr<RandomAccessFile> file_;  // must outlive input_buffer_
  std::unique_ptr<io::InputBuffer> input_buffer_;
};
    
        // Ignore first non-switch arg if it's not a standalone package.
    bool ignore_arg = !package->self_extract();
    for (unsigned i = 1; i < argv.size(); ++i) {
      if (ignore_arg && argv[i] == args[0]) {
        ignore_arg = false;
        continue;
      }
    }
    
    #include 'base/logging.h'
#include 'base/values.h'
    
    class ObjectManager;
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
      //TODO: change this to object
  if (manifest_val->IsString()) {
    v8::String::Utf8Value manifest_str(manifest_val);
    if (manifest)
      *manifest = blink::WebString::fromUTF8(*manifest_str);
  }
    
      g_context->Enter();
  v8::Local<v8::Object> NwGui = v8::Object::New(isolate);
  args.This()->Set(NwGuiSymbol, NwGui);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'base.js'), IDR_NW_API_BASE_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'menuitem.js'), IDR_NW_API_MENUITEM_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'menu.js'), IDR_NW_API_MENU_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'tray.js'), IDR_NW_API_TRAY_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'clipboard.js'), IDR_NW_API_CLIPBOARD_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'window.js'), IDR_NW_API_WINDOW_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'shell.js'), IDR_NW_API_SHELL_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'app.js'), IDR_NW_API_APP_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'shortcut.js'), IDR_NW_API_SHORTCUT_JS);
  RequireFromResource(args.This(),
                      NwGui, global, v8::String::NewFromUtf8(isolate, 'screen.js'), IDR_NW_API_SCREEN_JS);
    
    #include 'boost/scoped_ptr.hpp'
#include 'glog/logging.h'
#include 'google/protobuf/text_format.h'
#include 'stdint.h'
    
      const string& db_backend = FLAGS_backend;
    
      /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_BNLL_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include <vector>
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs. At training time, we have @f$
   *      y_{\mbox{train}} = \left\{
   *         \begin{array}{ll}
   *            \frac{x}{1 - p} & \mbox{if } u > p \\
   *            0 & \mbox{otherwise}
   *         \end{array} \right.
   *      @f$, where @f$ u \sim U(0, 1)@f$ is generated independently for each
   *      input at each iteration. At test time, we simply have
   *      @f$ y_{\mbox{test}} = \mathbb{E}[y_{\mbox{train}}] = x @f$.
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    }
    
    /**
 * @brief Takes two+ Blobs, interprets last Blob as a selector and
 *  filter remaining Blobs accordingly with selector data (0 means that
 * the corresponding item has to be filtered, non-zero means that corresponding
 * item needs to stay).
 */
template <typename Dtype>
class FilterLayer : public Layer<Dtype> {
 public:
  explicit FilterLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      // If a blob with the same bounding box as one of the truth character
  // bounding boxes is not classified as the corresponding truth character
  // blames character classifier for incorrect answer.
  void BlameClassifier(const UNICHARSET& unicharset,
                       const TBOX& blob_box,
                       const BLOB_CHOICE_LIST& choices,
                       bool debug);
    
    #include          <stdlib.h>
#ifdef __UNIX__
#include          <assert.h>
#endif
#include          'scanutils.h'
#include          'fileerr.h'
#include          'blread.h'
    
    // This is equivalent to returning the Principal Component in PCA, or the
// eigenvector corresponding to the largest eigenvalue in the covariance
// matrix.  However, atan2 is much simpler! The one reference I found that
// uses this formula is http://web.mit.edu/18.06/www/Essays/tlsfit.pdf but
// that is still a much more complex derivation. It seems Pearson had already
// found this simple solution in 1901.
// http://books.google.com/books?id=WXwvAQAAIAAJ&pg=PA559
FCOORD LLSQ::vector_fit() const {
  double x_var = x_variance();
  double y_var = y_variance();
  double covar = covariance();
  double theta = 0.5 * atan2(2.0 * covar, x_var - y_var);
  FCOORD result(cos(theta), sin(theta));
  return result;
}

    
      // Adds an element with a weight of 1.
  void add(double x, double y);
  // Adds an element with a specified weight.
  void add(double x, double y, double weight);
  // Adds a whole LLSQ.
  void add(const LLSQ& other);
  // Deletes an element with a weight of 1.
  void remove(double x, double y);
  inT32 count() const {  // no of elements
    return static_cast<int>(total_weight + 0.5);
  }
    
    
    {            for (auto& x : m_netStatefulNodes)
            {
                const wstring& name = x.first;
                auto& pNode         = x.second;
                if (m_netStates[name][iSubminibatch])
                    pNode->ImportState(std::move(m_netStates[name][iSubminibatch]));
            }
        }
    
        // replace the node in the network
    RemoveNodeFromNet(oldNode);
    AddNodeToNet(newNode);
    
    // ---------------------------------------------------------------------------
// Expression -- the entire config is a tree of Expression types
// We don't use polymorphism here because C++ is so verbose...
// ---------------------------------------------------------------------------
    
    /*static*/ class ProgressTracing
{
    bool m_enabled;
    bool m_tracingFlag;
    bool m_timestampFlag;        // TODO: What does this do? TODO: camelCase
    size_t m_totalNumberOfSteps; // total number of epochs in entire training run
    size_t m_currentStepOffset;  // current offset
    Timer m_progressTracingTimer;
    }
    
    
    {public:
    inline array_ref(_T* ptr, size_t size) throw()
        : data(ptr), n(size)
    {
    }
    inline array_ref() throw()
        : data(NULL), n(0)
    {
    } // in case we have a vector of this
    inline _T& operator[](size_t i) throw()
    {
        check_index(i);
        return data[i];
    }
    inline const _T& operator[](size_t i) const throw()
    {
        check_index(i);
        return data[i];
    }
    inline size_t size() const throw()
    {
        return n;
    }
    inline _T* begin()
    {
        return data;
    }
    inline _T* end()
    {
        return data + n;
    }
    inline void resize(size_t sz)
    {
        sz;
        assert(n == sz);
    } // allow compatibility with some functions
    // construct from other vector types
    template <class _V>
    inline array_ref(_V& v)
        : data(v.size() > 0 ? &v[0] : NULL), n((size_t) v.size())
    {
    }
};
    
    #ifndef let
#define let const auto
#endif
    
            ok &= luaval_to_number(tolua_S, 5,&arg3, 'cc.SimpleAudioEngine:playEffect');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect'', nullptr);
            return 0;
        }
        unsigned int ret = cobj->playEffect(arg0, arg1, arg2, arg3);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 5) 
    {
        const char* arg0;
        bool arg1;
        double arg2;
        double arg3;
        double arg4;
    
    int register_all_cocos2dx_cocosdenshion(lua_State* tolua_S);
    
        glDrawArrays(GL_LINE_LOOP, 0, vertexCount);
    
    // This class implements debug drawing callbacks that are invoked
// inside b2World::Step.
class GLESDebugDraw : public b2Draw
{
    float32 mRatio;
    cocos2d::GLProgram* mShaderProgram;
    GLint        mColorLocation;
    }
    
    	b2Fixture* fixtureA = contact->GetFixtureA();
	b2Fixture* fixtureB = contact->GetFixtureB();
    
    
    {
    {			float minX = -6.0f;
			float maxX = 0.0f;
			float minY = 4.0f;
			float maxY = 6.0f;
			
			for (int32 i = 0; i < 400; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position = b2Vec2(RandomFloat(minX,maxX),RandomFloat(minY,maxY));
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&shape, 0.01f);
			}
		}
		
		{
			b2PolygonShape shape;
			shape.SetAsBox(1.5f, 1.5f);
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-40.0f,5.0f);
			bd.bullet = true;
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&shape, 1.0f);
			body->SetLinearVelocity(b2Vec2(150.0f, 0.0f));
		}
	}
    
    			m_body = m_world->CreateBody(&bd);
			m_body->CreateFixture(&box, 1.0f);
    
    inline float RGBToV(float r, float g, float b) {
  return 0.5f * r - 0.41869f * g - 0.08131f * b + 128.0f;
}
    
        // The nodes are:
    // [0, n): the sorted leaf nodes that we start with.
    // [n]: we add a sentinel here.
    // [n + 1, 2n): new parent nodes are added here, starting from
    //              (n+1). These are naturally in ascending order.
    // [2n]: we add a sentinel at the end as well.
    // There will be (2n+1) elements at the end.
    const HuffmanTree sentinel(~static_cast<uint32_t>(0), -1, -1);
    tree[n] = sentinel;
    tree[n + 1] = sentinel;
    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    #include <cmath>
    
    #include 'guetzli/jpeg_data.h'
    
    namespace guetzli {
    }
    
    struct JpegHistogram {
  static const int kSize = kJpegHuffmanAlphabetSize + 1;
    }
    
      // Fills in out[] array with the floating-point precision pixel view of the
  // component.
  // REQUIRES: factor_x() == 1 and factor_y() == 1.
  void ToFloatPixels(float* out, int stride) const;
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    
    {}  // namespace guetzli

    
    namespace NamespaceC {
    }
    
    inline const char **EnumNamesEnumInNestedNS() {
  static const char *names[] = {
    'A',
    'B',
    'C',
    nullptr
  };
  return names;
}
    
    inline flatbuffers::TypeTable *Vec3TypeTable() {
  static flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_FLOAT, 0, -1 },
    { flatbuffers::ET_FLOAT, 0, -1 },
    { flatbuffers::ET_FLOAT, 0, -1 }
  };
  static const int32_t values[] = { 0, 4, 8, 12 };
  static const char *names[] = {
    'x',
    'y',
    'z'
  };
  static flatbuffers::TypeTable tt = {
    flatbuffers::ST_STRUCT, 3, type_codes, nullptr, values, names
  };
  return &tt;
}
    
    ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
  return ::grpc::internal::ClientReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), rpcmethod_Retrieve_, context, request);
}
    
      printer->Print(*vars,
                 'std::unique_ptr< $ns$$Service$::Stub> $ns$$Service$::NewStub('
                 'const std::shared_ptr< ::grpc::ChannelInterface>& channel, '
                 'const ::grpc::StubOptions& options) {\n'
                 '  std::unique_ptr< $ns$$Service$::Stub> stub(new '
                 '$ns$$Service$::Stub(channel));\n'
                 '  return stub;\n'
                 '}\n\n');
  printer->Print(*vars,
                 '$ns$$Service$::Stub::Stub(const std::shared_ptr< '
                 '::grpc::ChannelInterface>& channel)\n');
  printer->Indent();
  printer->Print(': channel_(channel)');
  for (int i = 0; i < service->method_count(); ++i) {
    auto method = service->method(i);
    (*vars)['Method'] = method->name();
    (*vars)['Idx'] = as_string(i);
    if (method->NoStreaming()) {
      (*vars)['StreamingType'] = 'NORMAL_RPC';
      // NOTE: There is no reason to consider streamed-unary as a separate
      // category here since this part is setting up the client-side stub
      // and this appears as a NORMAL_RPC from the client-side.
    } else if (ClientOnlyStreaming(method.get())) {
      (*vars)['StreamingType'] = 'CLIENT_STREAMING';
    } else if (ServerOnlyStreaming(method.get())) {
      (*vars)['StreamingType'] = 'SERVER_STREAMING';
    } else {
      (*vars)['StreamingType'] = 'BIDI_STREAMING';
    }
    printer->Print(*vars,
                   ', rpcmethod_$Method$_('
                   '$prefix$$Service$_method_names[$Idx$], '
                   '::grpc::internal::RpcMethod::$StreamingType$, '
                   'channel'
                   ')\n');
  }
  printer->Print('{}\n\n');
  printer->Outdent();
    
    #include <thread>
    
    template<typename T> struct NamedHashFunction {
  const char *name;
    }
    
    // Get a field's default, if you know it's floating point and its exact type.
template<typename T> T GetFieldDefaultF(const reflection::Field &field) {
  assert(sizeof(T) == GetTypeSize(field.type()->base_type()));
  return static_cast<T>(field.default_real());
}