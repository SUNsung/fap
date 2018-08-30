Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Returns the PyObject for the bfloat16 type.
PyObject* Bfloat16PyType();
    
    // Creates a numpy array with shapes specified by dim_size and dims and content
// in data. The array does not own the memory, and destructor will be called to
// release it. If the status is not ok the caller is responsible for releasing
// the memory.
Status ArrayFromMemory(int dim_size, npy_intp* dims, void* data, DataType dtype,
                       std::function<void()> destructor, PyObject** result);
    
    void PyExceptionRegistry::Init(PyObject* code_to_exc_type_map) {
  DCHECK(singleton_ == nullptr) << 'PyExceptionRegistry::Init() already called';
  singleton_ = new PyExceptionRegistry;
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    IPC_MESSAGE_ROUTED3(ShellViewMsg_Object_On_Event,
                    int /* object id */,
                    std::string /* event name */,
                    base::ListValue /* arguments */)
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
     private:
  void SetText(std::string& text);
  std::string GetText();
  void Clear();
    
    bool NwMenuModel::HasIcons() const {
  // Always return false, see the comment about |NwMenuModel|.
  return false;
}
    
      if (type == 'separator') {
    menu_item_ = gtk_separator_menu_item_new();
  } else {
    if (type == 'checkbox') {
      menu_item_ = gtk_check_menu_item_new();
      bool checked;
      if (option.GetBoolean('checked', &checked))
        SetChecked(checked);
    } else {
      menu_item_ = gtk_image_menu_item_new();
      std::string icon;
      if (option.GetString('icon', &icon))
        SetIcon(icon);
    }
    }
    
    
    {  int menu_id;
  if (option.GetInteger('submenu', &menu_id))
    SetSubmenu(object_manager()->GetApiObject<Menu>(menu_id));
}
    
    class NwAppGetDataPathFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetDataPathFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwAppGetDataPathFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.App.getDataPath', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetDataPathFunction);
};
    
        enum FLIP_MODE
    {
        FLIP_HORIZONTAL_MODE = 1,
        FLIP_VERTICAL_MODE = 2,
        FLIP_BOTH_MODE = FLIP_HORIZONTAL_MODE | FLIP_VERTICAL_MODE
    };
    
    #ifdef CAROTENE_NEON
    
            //left&right borders
        if (borderType != BORDER_MODE_CONSTANT)
            for (s32 k = 0; k < cn; ++k)
            {
                lanea[-cn+k] = lanea[idx_l + k];
                lanea[colsn+k] = lanea[idx_r + k];
            }
    
    void extract4(const Size2D &size,
              const u8 * srcBase, ptrdiff_t srcStride,
              u8 * dstBase, ptrdiff_t dstStride,
              u32 coi)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    void combineYUYV(const Size2D &size,
                 const u8 * srcyBase, ptrdiff_t srcyStride,
                 const u8 * srcuBase, ptrdiff_t srcuStride,
                 const u8 * srcvBase, ptrdiff_t srcvStride,
                 u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
            if (sj < roiw8)
        {
#if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
            __asm__ (
            'vld1.8 {d0}, [%[in]]                \n\t'
            'vmov.8 d1, d0                       \n\t'
            'vmov.8 d2, d0                       \n\t'
            'vst3.8 {d0-d2}, [%[out]]            \n\t'
            : /*no output*/
            : [out] 'r' (dst + dj), [in] 'r' (src + sj)
            : 'd0','d1','d2'
            );
#else
            uint8x8x3_t vRgb2;
            vRgb2.val[0] = vld1_u8(src + sj);
            vRgb2.val[1] = vRgb2.val[0];
            vRgb2.val[2] = vRgb2.val[0];
    }
    
    namespace CAROTENE_NS { namespace internal {
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u16 q3, d4                                       \n\t'
            'vmovl.u16 q4, d5                                       \n\t'
             'vcvt.f32.u32 q5, q3                                    \n\t'
            'vcvt.f32.u32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vadd.f32 q10, q8, q1                                   \n\t'
            'vst1.32 {d18-d19}, [%[dst1]]                           \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                           \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(u16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline = vld1q_u16(_src + i);
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
        const s32 K = 8, N = 16 + K + 1;
    ptrdiff_t i, j, k, pixel[N];
    makeOffsets(pixel, srcStride);
    for(k = 16; k < N; k++)
        pixel[k] = pixel[k - 16];
    
                vec128 v_src = vld3q(src + js), v_dst;
            v_src.val[0] = vrev64q(v_src.val[0]);
            v_src.val[1] = vrev64q(v_src.val[1]);
            v_src.val[2] = vrev64q(v_src.val[2]);
    
    #include <vector>
    
    // Serialize LayerParameter to protocol buffer
template <typename Dtype>
void Layer<Dtype>::ToProto(LayerParameter* param, bool write_diff) {
  param->Clear();
  param->CopyFrom(layer_param_);
  param->clear_blobs();
  for (int i = 0; i < blobs_.size(); ++i) {
    blobs_[i]->ToProto(param->add_blobs(), write_diff);
  }
}
    
    #include <vector>
    
    
    {  Blob<Dtype> col_buffer_;
  Blob<Dtype> bias_multiplier_;
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
    
    /**
 * @brief Computes a sum of two input Blobs, with the shape of the latter Blob
 *        'broadcast' to match the shape of the former. Equivalent to tiling
 *        the latter Blob, then computing the elementwise sum.
 *
 * The second input may be omitted, in which case it's learned as a parameter
 * of the layer. Note: in case bias and scaling are desired, both operations can
 * be handled by `ScaleLayer` configured with `bias_term: true`.
 */
template <typename Dtype>
class BiasLayer : public Layer<Dtype> {
 public:
  explicit BiasLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {}  // namespace caffe
    
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
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
    
    {}  // namespace
    
      static void OnDoneSendInitialMetadataCb(void* user_data, grpc_error* error);
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    
    {				Balloon *b = hands[i].first;
				hands[i].first = b->next;
				memfree(b);
			}
    
    		String id = token.value;
		if (id == 'true')
			value = true;
		else if (id == 'false')
			value = false;
		else if (id == 'null' || id == 'nil')
			value = Variant();
		else if (id == 'Vector2') {
    }
    
    		Map<StringName, Pair<int *, int> > render_mode_values;
		Map<StringName, bool *> render_mode_flags;
		Map<StringName, bool *> usage_flag_pointers;
		Map<StringName, bool *> write_flag_pointers;
    
    
    {	return val;
}
    
    	static Semaphore *create_semaphore_posix();
    
    		if (::listen(sockfd, SOMAXCONN) == SOCKET_ERROR) {
    }
    
    	ThreadCreateCallback callback;
	void *user;
	ID id;
	HANDLE handle;
    
    namespace php { struct Unit; struct Program; }
    
        XO_form_t xo_formater {{
                            rc,
                            xop,
                            oe,
                            static_cast<uint32_t>(rb),
                            static_cast<uint32_t>(ra),
                            static_cast<uint32_t>(rt),
                            op
                          }};
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    CONFIG_BODY(bool, Bool)
CONFIG_BODY(char, Byte)
CONFIG_BODY(unsigned char, UByte)
CONFIG_BODY(int16_t, Int16)
CONFIG_BODY(uint16_t, UInt16)
CONFIG_BODY(int32_t, Int32)
CONFIG_BODY(uint32_t, UInt32)
CONFIG_BODY(int64_t, Int64)
CONFIG_BODY(uint64_t, UInt64)
CONFIG_BODY(double, Double)
CONFIG_BODY(std::string, String)
    
      static std::string FormatNumber(const char* fmt, int64_t n);
  static std::string FormatSize(int64_t size);
  static std::string FormatTime(int64_t milliSeconds);
    
    CachedDirectory::CachedDirectory(const String& path) {
  assertx(File::IsVirtualDirectory(path));
  m_files = StaticContentCache::TheFileCache->readDirectory(path.c_str());
}
    
    #endif // BOOST_ATOMIC_FENCES_HPP_INCLUDED_

    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
    #include 'modules/drivers/canbus/can_comm/can_receiver.h'
    
    /**
 * @struct CheckIdArg
 *
 * @brief this struct include data for check ids.
 */
struct CheckIdArg {
  int64_t period = 0;
  int64_t real_period = 0;
  int64_t last_time = 0;
  int32_t error_count = 0;
};
    
    using ::apollo::canbus::ChassisDetail;
    
      /**
   * @brief Transform an integer with the size of one byte to its hexadecimal
   *        represented by a string.
   * @param value The target integer to transform.
   * @return Hexadecimal representing the target integer.
   */
  static std::string byte_to_hex(const uint8_t value);
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
      if (can_receiver_.Init(can_client_.get(), sensor_message_manager_.get(),
                         canbus_conf_.enable_receiver_log()) != ErrorCode::OK) {
    return OnError('Failed to init can receiver.');
  }
  AINFO << 'The can receiver is successfully initialized.';
    
    DECLARE_string(adapter_config_filename);