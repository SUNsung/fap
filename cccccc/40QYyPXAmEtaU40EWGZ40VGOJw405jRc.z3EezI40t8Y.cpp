
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // A pass which performs constant folding in order to avoid unnecessary
// computation on constants.
class HloConstantFolding : public HloPassInterface {
 public:
  tensorflow::StringPiece name() const override { return 'constant_folding'; }
    }
    
    
    {    input_buffer_.reset(new io::InputBuffer(file_.get(), kBufferSize));
    for (; line_number_ < skip_header_lines_; ++line_number_) {
      string line_contents;
      Status status = input_buffer_->ReadLine(&line_contents);
      if (errors::IsOutOfRange(status)) {
        // We ignore an end of file error when skipping header lines.
        // We will end up skipping this file.
        return Status::OK();
      }
      TF_RETURN_IF_ERROR(status);
    }
    return Status::OK();
  }
    
    template <typename T>
void DynamicStitchGPUImpl(const Eigen::GpuDevice& gpu_device,
                          const int32 slice_size, const int32 first_dim_size,
                          const CudaDeviceArrayStruct<int>& input_indices,
                          const CudaDeviceArrayStruct<const T*>& input_ptrs,
                          T* output) {
  const int32 output_size = first_dim_size * slice_size;
  auto config = GetCudaLaunchConfig(output_size, gpu_device);
    }
    
    // Gets the path to the content shell's pak file.
bool GetResourcesPakFilePath(base::FilePath& output);
    
    namespace net {
class CertVerifyProc;
class CertVerifyResult;
class X509Certificate;
typedef std::vector<scoped_refptr<X509Certificate> > CertificateList;
}
    
    AutofillAgent::AutofillAgent(content::RenderView* render_view)
    : content::RenderViewObserver(render_view),
      weak_ptr_factory_(this) {
  render_view->GetWebView()->setAutofillClient(this);
}
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
    class DispatcherHost : public content::WebContentsObserver {
 public:
  explicit DispatcherHost(content::RenderViewHost* render_view_host);
  ~DispatcherHost() final;
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
    
    void MenuItem::SetSubmenu(Menu* sub_menu) {
  submenu_ = sub_menu;
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    sub_menu->UpdateKeys(gtk_accel_group);
  }
  if (sub_menu == NULL)
    gtk_menu_item_remove_submenu(GTK_MENU_ITEM(menu_item_));
  else
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item_), sub_menu->menu_);
}
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    #include <algorithm>
    
    SecureAuthContext::~SecureAuthContext() {
  if (take_ownership_) grpc_auth_context_release(ctx_);
}
    
    
    {  const Result start_;
};
    
    #include <iostream>
#include <sstream>
#include <string>
#include <vector>
    
      std::shared_ptr<ChannelCredentials> GetChannelCredentials(
      const grpc::string& type, ChannelArguments* args) override {
    if (type == grpc::testing::kInsecureCredentialsType) {
      return InsecureChannelCredentials();
    } else if (type == grpc::testing::kTlsCredentialsType) {
      SslCredentialsOptions ssl_opts = {test_root_cert, '', ''};
      args->SetSslTargetNameOverride('foo.test.google.fr');
      return SslCredentials(ssl_opts);
    } else {
      std::unique_lock<std::mutex> lock(mu_);
      auto it(std::find(added_secure_type_names_.begin(),
                        added_secure_type_names_.end(), type));
      if (it == added_secure_type_names_.end()) {
        gpr_log(GPR_ERROR, 'Unsupported credentials type %s.', type.c_str());
        return nullptr;
      }
      return added_secure_type_providers_[it - added_secure_type_names_.begin()]
          ->GetChannelCredentials(args);
    }
  }
    
    namespace jpgd
{
  typedef unsigned char  uint8;
  typedef   signed short int16;
  typedef unsigned short uint16;
  typedef unsigned int   uint;
  typedef   signed int   int32;
    }
    
    
int             oc_has_mode_metrics;
oc_mode_metrics OC_MODE_METRICS[64][3][2][OC_SAD_BINS];
# endif
    
    /*Accesses one of four (signed) bytes given an index.
  This can be used to avoid small lookup tables.*/
#define OC_BYTE_TABLE32(_a,_b,_c,_d,_i) \
  ((signed char) \
   (((_a)&0xFF|((_b)&0xFF)<<8|((_c)&0xFF)<<16|((_d)&0xFF)<<24)>>(_i)*8))
/*Accesses one of eight (unsigned) nibbles given an index.
  This can be used to avoid small lookup tables.*/
#define OC_UNIBBLE_TABLE32(_a,_b,_c,_d,_e,_f,_g,_h,_i) \
  ((((_a)&0xF|((_b)&0xF)<<4|((_c)&0xF)<<8|((_d)&0xF)<<12| \
   ((_e)&0xF)<<16|((_f)&0xF)<<20|((_g)&0xF)<<24|((_h)&0xF)<<28)>>(_i)*4)&0xF)
    
    
static const vorbis_mapping_template _mapres_template_16_uncoupled[3]={
  { _map_nominal_u, _res_16u_0 }, /* 0 */
  { _map_nominal_u, _res_16u_1 }, /* 1 */
  { _map_nominal_u, _res_16u_2 }, /* 2 */
};

    
    static const static_bookblock _resbook_44s_n1={
  {
    {0},{0,0,&_44cn1_s_p1_0},{0,0,&_44cn1_s_p2_0},
    {0,0,&_44cn1_s_p3_0},{0,0,&_44cn1_s_p4_0},{0,0,&_44cn1_s_p5_0},
    {&_44cn1_s_p6_0,&_44cn1_s_p6_1},{&_44cn1_s_p7_0,&_44cn1_s_p7_1},
    {&_44cn1_s_p8_0,&_44cn1_s_p8_1,&_44cn1_s_p8_2}
   }
};
static const static_bookblock _resbook_44sm_n1={
  {
    {0},{0,0,&_44cn1_sm_p1_0},{0,0,&_44cn1_sm_p2_0},
    {0,0,&_44cn1_sm_p3_0},{0,0,&_44cn1_sm_p4_0},{0,0,&_44cn1_sm_p5_0},
    {&_44cn1_sm_p6_0,&_44cn1_sm_p6_1},{&_44cn1_sm_p7_0,&_44cn1_sm_p7_1},
    {&_44cn1_sm_p8_0,&_44cn1_sm_p8_1,&_44cn1_sm_p8_2}
   }
};
    
      {2,0,30,  &_residue_44p_hi,
   &_huff_book__44p7_long,&_huff_book__44p7_long,
   &_resbook_44p_7,&_resbook_44p_7},
    
      {1,0,32,  &_residue_44_low_un,
   &_huff_book__44u3__long,&_huff_book__44u3__long,
   &_resbook_44u_3,&_resbook_44u_3}
};
static const vorbis_residue_template _res_44u_4[]={
  {1,0,16,  &_residue_44_low_un,
   &_huff_book__44u4__short,&_huff_book__44u4__short,
   &_resbook_44u_4,&_resbook_44u_4},
    
    #define fromdB(x) (exp((x)*.11512925f))
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    /*Constants used by the entropy encoder/decoder.*/
    
        /* increment using fractional part of input */
    y = silk_SMLAWB(y, y, silk_SMULBB(213, frac_Q7));
    
    
    {    ret = ((limit1) > (limit2) ? ((a) > (limit1) ? (limit1) : ((a) < (limit2) ? (limit2) : (a))) \
        : ((a) > (limit2) ? (limit2) : ((a) < (limit1) ? (limit1) : (a))));
    return(ret);
}
    
        Value(void)
    : unit(YGUnitUndefined)
    , value(0.0)
    {
    }
    
    TEST_F(YogaTest_HadOverflowTests, spacing_overflow_no_wrap_and_no_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
    void Node::setHeight(double height)
{
    YGNodeStyleSetHeight(m_node, height);
}
    
        method(getMinWidth);
    method(getMinHeight);
    
      void unref() {
    if (0 == --m_refcount) {
      delete this;
    }
  }
    
    template <typename T> template <typename U>
RefPtr<T>::operator RefPtr<U>() const {
  static_assert(std::is_base_of<T, U>::value, 'Invalid static cast');
  return assumeAlreadyReffedOrNull<U>(static_cast<U*>(m_ptr));
}