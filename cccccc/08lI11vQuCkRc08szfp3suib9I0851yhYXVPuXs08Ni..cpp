
        
            void convertScale(const Size2D &_size,
                      const f32 * srcBase, ptrdiff_t srcStride,
                      s16 * dstBase, ptrdiff_t dstStride,
                      f64 alpha, f64 beta);
    
    
    {
    {
    {            v_src0 = internal::vld1(src0 + x);
            v_src1 = internal::vld1(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1(dst + x, v_dst);
            x+=8;
        }
    }
};
    
    namespace CAROTENE_NS {
    }
    
    f64 dotProduct(const Size2D &_size,
               const u8 * src0Base, ptrdiff_t src0Stride,
               const u8 * src1Base, ptrdiff_t src1Stride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (src0Stride == src1Stride &&
        src0Stride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    }
    
    
    {    minLocCount >>= 1;
    maxLocCount >>= 1;
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)minVal;
    (void)minLocPtr;
    (void)minLocCount;
    (void)minLocCapacity;
    (void)maxVal;
    (void)maxLocPtr;
    (void)maxLocCount;
    (void)maxLocCapacity;
#endif
}
    
    void flip(const Size2D &size,
          const u8 * srcBase, ptrdiff_t srcStride,
          u8 * dstBase, ptrdiff_t dstStride,
          FLIP_MODE flipMode, u32 elemSize)
{
    internal::assertSupportedConfiguration(isFlipSupported(flipMode, elemSize));
#ifdef CAROTENE_NEON
    }
    
    
    { protected:
  int n_ = 0;
  std::mutex m_;
  std::condition_variable cv_;
};
    
      auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    REGISTER_GRADIENT(Flatten, GetFlattenGradient);
    
    #ifndef GRPC_INTERNAL_CPP_CLIENT_SECURE_CREDENTIALS_H
#define GRPC_INTERNAL_CPP_CLIENT_SECURE_CREDENTIALS_H
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    
    {}  // namespace grpc

    
    void SliderJointBullet::setLowerLinLimit(real_t lowerLimit) {
	sliderConstraint->setLowerLinLimit(lowerLimit);
}
real_t SliderJointBullet::getUpperLinLimit() const {
	return sliderConstraint->getUpperLinLimit();
}
    
    
    {	memdelete(resource_loader_dds);
}

    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
        template <typename ElementType>
    void LearnerSGD::Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, 
                            const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) const
    {
        UNUSED(smoothedGradientValue);
        const auto& gradientMatrix = GetWritableMatrix<ElementType>(gradientValue);
        const auto& parameterMatrix = GetWritableMatrix<ElementType>(parameter.Value());
        const auto learningRate = ElementType(LearningRate(trainingSampleCount));
    }
    
            // Inner state of the underlying reader.
        // Is set in the RestoreFromCheckpoint call and used in the next GetNextMinibatch
        // when the reader state is restored after the first StartEpoch call.
        Internal::Optional<Dictionary> m_state;
    
        NDMaskPtr NDMask::DeepClone(const DeviceDescriptor& device) const
    {
        NDMaskPtr newMask = MakeSharedObject<NDMask>(this->Shape(), device);
        newMask->CopyFrom(*this);
    }
    
    #include <chrono>
    
        std::pair<size_t, size_t> Value::GetSequenceAndBatchLength(const Variable& outputVariable, NDShape* inferredVarShape)
    {
        Utils::VerifyVariableValueCompatibility(outputVariable, shared_from_this(), inferredVarShape);
    }
    
    #include <functional>
#include <stdexcept>
    
                // reshape Input(1)
            Input(1)->SetDims(TensorShape(dimsA), false);
            fprintf(stderr, '\n%ls %ls operation: For legacy compatibility, the sample layout of second input (%ls %ls operation) was patched to [%s] (from [%s])\n',
                NodeName().c_str(), OperationName().c_str(), Input(1)->NodeName().c_str(), Input(1)->OperationName().c_str(), string(Input(1)->GetSampleLayout()).c_str(), dimsBstring.c_str());
    
    
    {        // change to other values so can support multiple sentences in each minibatch
        ForwardCompute(alpha, backtrace, pos_scores, pair_scores, stt);
        BackwardCompute(functionValues, backtrace, stp);
    };
    
    #include <set>
#include <string>
    
    
    {
    {      // View has been updated
      osquery::query('DROP VIEW ' + name, r);
      auto s = osquery::query('CREATE VIEW ' + name + ' AS ' + query, r);
      if (s.ok()) {
        setDatabaseValue(kQueries, kConfigViews + name, query);
      } else {
        LOG(INFO) << 'Error creating view (' << name << '): ' << s.getMessage();
      }
    }
  }
    
      /**
   * @brief Update the internal context buffer with additional content
   *
   * This method allows you to chunk up large content so that it doesn't all
   * have to be loaded into memory at the same time
   *
   * @param buffer The buffer to be hashed
   * @param size The size of the buffer to be hashed
   */
  void update(const void* buffer, size_t size);
    
    #include <osquery/logger.h>
#include <osquery/system.h>
    
      struct ConstraintList cl2;
  cl2.affinity = INTEGER_TYPE;
  constraint = Constraint(LESS_THAN);
  constraint.expr = '1000';
  cl2.add(constraint);
  constraint = Constraint(GREATER_THAN);
  constraint.expr = '1';
  cl2.add(constraint);
    
    void Initializer::platformTeardown() {
  // Before we shutdown, we must insure to free the COM libs in windows
  ::CoUninitialize();
}
    
    ActionCamera * ActionCamera::reverse() const
{
    // FIXME: This conversion isn't safe.
    return (ActionCamera*)ReverseTime::create(const_cast<ActionCamera*>(this));
}
    
    CatmullRomTo* CatmullRomTo::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CatmullRomTo();
    a->initWithDuration(this->_duration, this->_points->clone());
    a->autorelease();
    return a;
}
    
        /**
    @brief Get the amplitude rate of the effect.
    @return Return the amplitude rate of the effect.
    */
    float getAmplitudeRate() const { return _amplitudeRate; }
    /**
    @brief Set the amplitude rate of the effect.
    @param amplitudeRate The value of amplitude rate will be set.
    */
    void setAmplitudeRate(float amplitudeRate) { _amplitudeRate = amplitudeRate; }
    
    http://www.cocos2d-x.org
    
    void TargetedAction::setForcedTarget(Node* forcedTarget)
{
    if( _forcedTarget != forcedTarget )
    {
        CC_SAFE_RETAIN(forcedTarget);
        CC_SAFE_RELEASE(_forcedTarget);
        _forcedTarget = forcedTarget;
    }
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
        /** Removes all actions matching at least one bit in flags and the target.
     *
     * @param flags     The flag field to match the actions' flags based on bitwise AND.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeActionsByFlags(unsigned int flags, Node *target);
    
        /**
     * @brief Initializes the action with a duration, a 'from' percentage and a 'to' percentage.
     * @param duration Specify the duration of the ProgressFromTo action. It's a value in seconds.
     * @param fromPercentage Specify the source percentage.
     * @param toPercentage Specify the destination percentage.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, float fromPercentage, float toPercentage);
    
        /** Returns a Animation that was previously added.
     * If the name is not found it will return nil.
     * You should retain the returned copy if you are going to use it.
     *
     * @return A Animation that was previously added. If the name is not found it will return nil.
     */
    Animation* getAnimation(const std::string& name);
    /**
     * @deprecated. Use getAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE Animation* animationByName(const std::string& name){ return getAnimation(name); }
    
    
// AtlasNode - Atlas generation
    
    static int InputTextCallback(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData* user_data = (InputTextCallback_UserData*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        std::string* str = user_data->Str;
        IM_ASSERT(data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}
    
        void FreeTypeFont::Shutdown()
    {
        if (FreetypeFace) 
        {
            FT_Done_Face(FreetypeFace);
            FreetypeFace = NULL;
            FT_Done_FreeType(FreetypeLibrary);
            FreetypeLibrary = NULL;
        }
    }
    
            ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
        ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
        ImGui::Checkbox('Another Window', &show_another_window);
    
    
    {    return 0;
}

    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        // Setup render state
    al_set_blender(ALLEGRO_ADD, ALLEGRO_ALPHA, ALLEGRO_INVERSE_ALPHA);
    
        // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right).
    // Being agnostic of whether <d3dx9.h> or <DirectXMath.h> can be used, we aren't relying on D3DXMatrixIdentity()/D3DXMatrixOrthoOffCenterLH() or DirectX::XMMatrixIdentity()/DirectX::XMMatrixOrthographicOffCenterLH()
    {
        float L = draw_data->DisplayPos.x + 0.5f;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x + 0.5f;
        float T = draw_data->DisplayPos.y + 0.5f;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y + 0.5f;
        D3DMATRIX mat_identity = { { 1.0f, 0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f,  0.0f, 0.0f, 1.0f, 0.0f,  0.0f, 0.0f, 0.0f, 1.0f } };
        D3DMATRIX mat_projection =
        {
            2.0f/(R-L),   0.0f,         0.0f,  0.0f,
            0.0f,         2.0f/(T-B),   0.0f,  0.0f,
            0.0f,         0.0f,         0.5f,  0.0f,
            (L+R)/(L-R),  (T+B)/(B-T),  0.5f,  1.0f,
        };
        g_pd3dDevice->SetTransform(D3DTS_WORLD, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_VIEW, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_PROJECTION, &mat_projection);
    }
    
    void ImGui_ImplFreeGLUT_MouseWheelFunc(int button, int dir, int x, int y)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MousePos = ImVec2((float)x, (float)y);
    if (dir > 0)
        io.MouseWheel += 1.0;
    else if (dir < 0)
        io.MouseWheel -= 1.0;
    (void)button; // Unused
}
    
    // Format of each probe arguments as operand.
// Size of the arugment tagged with FOLLY_SDT_Sn, with 'n' constraint.
// Value of the argument tagged with FOLLY_SDT_An, with configured constraint.
#define FOLLY_SDT_ARG(n, x)                                                    \
  [FOLLY_SDT_S##n] 'n'                ((size_t)FOLLY_SDT_ARGSIZE(x)),          \
  [FOLLY_SDT_A##n] FOLLY_SDT_ARG_CONSTRAINT (x)
    
    TEST(StaticTracepoint, TestStruct) {
  structTestFunc();
    }
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
    template <>
struct hash<folly::Uri> {
  std::size_t operator()(const folly::Uri& k) const {
    return std::hash<folly::uri_detail::UriTuple>{}(
        folly::uri_detail::as_tuple(k));
  }
};
    
      // Test for overflow.
  if (std::numeric_limits<decltype(tv.tv_sec)>::max() >=
      std::numeric_limits<int64_t>::max()) {
    // Use our own type alias here rather than std::chrono::nanoseconds
    // to ensure we have 64-bit rep type.
    using nsec_i64 = std::chrono::duration<int64_t, std::nano>;
    tv.tv_sec = std::numeric_limits<decltype(tv.tv_sec)>::max();
    tv.tv_usec = std::numeric_limits<decltype(tv.tv_usec)>::max();
    EXPECT_THROW(to<nsec_i64>(tv), std::range_error);
    }
    
      /* Get a reference to the pointer, either from the local batch or
   * from the global count.
   *
   * return is the base ptr, and the previous local count, if it is
   * needed for compare_and_swap later.
   */
  PackedPtr takeOwnedBase(std::memory_order order) const noexcept {
    PackedPtr local, newlocal;
    local = ptr_.load(std::memory_order_acquire);
    while (true) {
      if (!local.get()) {
        return local;
      }
      newlocal = local;
      if (get_local_count(newlocal) + 1 > EXTERNAL_OFFSET) {
        // spinlock in the rare case we have more than
        // EXTERNAL_OFFSET threads trying to access at once.
        std::this_thread::yield();
        // Force DeterministicSchedule to choose a different thread
        local = ptr_.load(std::memory_order_acquire);
      } else {
        newlocal.setExtra(newlocal.extra() + 1);
        assert(get_local_count(newlocal) > 0);
        if (ptr_.compare_exchange_weak(local, newlocal, order)) {
          break;
        }
      }
    }
    }