
        
        // CertificateManagerModel provides the data to be displayed in the certificate
// manager dialog, and processes changes from the view.
class CertificateManagerModel {
 public:
  typedef base::Callback<void(std::unique_ptr<CertificateManagerModel>)>
      CreationCallback;
    }
    
    CallbackHolderBase::CallbackHolderBase(v8::Isolate* isolate)
    : v8_ref_(isolate, v8::External::New(isolate, this)) {
  v8_ref_.SetWeak(this, &CallbackHolderBase::FirstWeakCallback,
                  v8::WeakCallbackType::kParameter);
}
    
      // Add 'destroy' and 'isDestroyed' methods.
  ObjectTemplateBuilder& MakeDestroyable();
    
    
    {}  // namespace mate
    
    template <typename T>
class Wrappable : public WrappableBase {
 public:
  Wrappable() {}
    }
    
    #ifndef CHROME_BROWSER_PROCESS_SINGLETON_H_
#define CHROME_BROWSER_PROCESS_SINGLETON_H_
    
    bool DownloadItem::IsDone() const {
  return download_item_->IsDone();
}
    
    #if defined(WIDEVINE_CDM_AVAILABLE)
bool IsWidevineAvailable(
    base::FilePath* cdm_path,
    std::vector<media::VideoCodec>* codecs_supported,
    base::flat_set<media::CdmSessionType>* session_types_supported,
    base::flat_set<media::EncryptionMode>* modes_supported) {
  static enum {
    NOT_CHECKED,
    FOUND,
    NOT_FOUND,
  } widevine_cdm_file_check = NOT_CHECKED;
    }
    
    TegraRowOp_Invoker(combine2, combine2, 2, 1, 0, RANGE_DATA(ST, src1_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(ST, src2_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(DT, dst1_data, 2*sizeof(DT)), range.end-range.start)
TegraRowOp_Invoker(combine3, combine3, 3, 1, 0, RANGE_DATA(ST, src1_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(ST, src2_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(ST, src3_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(DT, dst1_data, 3*sizeof(DT)), range.end-range.start)
TegraRowOp_Invoker(combine4, combine4, 4, 1, 0, RANGE_DATA(ST, src1_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(ST, src2_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(ST, src3_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(ST, src4_data, sizeof(ST)), range.end-range.start,
                                                RANGE_DATA(DT, dst1_data, 4*sizeof(DT)), range.end-range.start)
#define TEGRA_MERGE64S(type, src, dst, len, cn) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
        cn == 2 ? \
        parallel_for_(Range(0, len), \
        TegraRowOp_combine2_Invoker<const type, type>(src[0], src[1], dst), \
        (len) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        cn == 3 ? \
        parallel_for_(Range(0, len), \
        TegraRowOp_combine3_Invoker<const type, type>(src[0], src[1], src[2], dst), \
        (len) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        cn == 4 ? \
        parallel_for_(Range(0, len), \
        TegraRowOp_combine4_Invoker<const type, type>(src[0], src[1], src[2], src[3], dst), \
        (len) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        typename internal::VecTraits<T>::vec128 v_min = internal::vminq(v_src0, v_src1);
        typename internal::VecTraits<T>::vec128 v_max = internal::vmaxq(v_src0, v_src1);
        v_dst = internal::vqsubq(v_max, v_min);
    }
    
    namespace {
    }
    
        if (borderType == BORDER_MODE_CONSTANT)
        for (s32 k = 0; k < cn; ++k)
        {
            lanea[-cn+k] = borderValue;
            lanea[colsn+k] = borderValue;
            laneA[-cn+k] = borderValue;
            laneA[colsn+k] = borderValue;
            laneb[-cn+k] = borderValue;
            laneb[colsn+k] = borderValue;
            laneB[-cn+k] = borderValue;
            laneB[colsn+k] = borderValue;
        }
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
    namespace CAROTENE_NS {
    }
    
                    tprev[1] = tcurr[1];
                tcurr[1] = tnext[1];
    
    template <typename T>
inline void inRangeCheck(const Size2D &_size,
                         const T * srcBase, ptrdiff_t srcStride,
                         const T * rng1Base, ptrdiff_t rng1Stride,
                         const T * rng2Base, ptrdiff_t rng2Stride,
                         u8 * dstBase, ptrdiff_t dstStride)
{
    typedef typename internal::VecTraits<T>::vec128 vec128;
    typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
    }
    
    enum PSOutMode {
  psModePS,
  psModeEPS,
  psModeForm,
  psModePSOrigPageSizes
};
    
    GBool PSTokenizer::getToken(char *buf, int size, int *length) {
  GBool comment, backslash;
  int c;
  int i;
    }
    
    int StdinCacheLoader::load(const std::vector<ByteRange> &ranges, CachedFileWriter *writer)
{
  return 0;
}
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(offset_vec.size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), data_vec.size());
    fo->Write(offset_vec);
    min_index_ = page.base_rowid;
    fo->Write(&min_index_, sizeof(min_index_));
    index_.data.resize(data_vec.size());
    value_.data.resize(data_vec.size());
    }
    
    
    {
    {    for (const auto &batch : (*dmat)->GetRowBatches()) {
      for (int i = 0; i < batch.Size(); i++) {
        auto inst = batch[i];
        for (int j = 0; i < inst.size(); i++) {
          ASSERT_EQ(inst[j].fvalue, 1.5);
        }
      }
    }
    delete dmat;
  }
}

    
    #include '../helpers.h'
    
    
    {    if (learner->AllowLazyCheckPoint()) {
      rabit::LazyCheckPoint(learner.get());
    } else {
      rabit::CheckPoint(learner.get());
    }
    version += 1;
    CHECK_EQ(version, rabit::VersionNumber());
  }
  // always save final round
  if ((param.save_period == 0 || param.num_round % param.save_period != 0) &&
      param.model_out != 'NONE' &&
      rabit::GetRank() == 0) {
    std::ostringstream os;
    if (param.model_out == 'NULL') {
      os << param.model_dir << '/'
         << std::setfill('0') << std::setw(4)
         << param.num_round << '.model';
    } else {
      os << param.model_out;
    }
    std::unique_ptr<dmlc::Stream> fo(
        dmlc::Stream::Create(os.str().c_str(), 'w'));
    learner->Save(fo.get());
  }
    
    // global
#include '../src/learner.cc'
#include '../src/logging.cc'
#include '../src/common/common.cc'
#include '../src/common/host_device_vector.cc'
#include '../src/common/hist_util.cc'
    
      EXPECT_ANY_THROW(xgboost::Metric::Create('error@abc', &lparam));
  delete metric;
    
    TEST(Objective, DeclareUnifiedTest(LogisticRegressionGPair)) {
  xgboost::LearnerTrainParam tparam = xgboost::CreateEmptyGenericParam(0, NGPUS);
  std::vector<std::pair<std::string, std::string>> args;
  xgboost::ObjFunction * obj = xgboost::ObjFunction::Create('reg:logistic', &tparam);
    }
    
    #pragma once
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
        free(chash);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Glut has 1 function for characters and one for 'special keys'. We map the characters in the 0..255 range and the keys above.
    io.KeyMap[ImGuiKey_Tab]         = '\t'; // == 9 == CTRL+I
    io.KeyMap[ImGuiKey_LeftArrow]   = 256 + GLUT_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow]  = 256 + GLUT_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow]     = 256 + GLUT_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow]   = 256 + GLUT_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp]      = 256 + GLUT_KEY_PAGE_UP;
    io.KeyMap[ImGuiKey_PageDown]    = 256 + GLUT_KEY_PAGE_DOWN;
    io.KeyMap[ImGuiKey_Home]        = 256 + GLUT_KEY_HOME;
    io.KeyMap[ImGuiKey_End]         = 256 + GLUT_KEY_END;
    io.KeyMap[ImGuiKey_Insert]      = 256 + GLUT_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete]      = 127;
    io.KeyMap[ImGuiKey_Backspace]   = 8;  // == CTRL+H
    io.KeyMap[ImGuiKey_Space]       = ' ';
    io.KeyMap[ImGuiKey_Enter]       = 13; // == CTRL+M
    io.KeyMap[ImGuiKey_Escape]      = 27;
    io.KeyMap[ImGuiKey_A]           = 'A';
    io.KeyMap[ImGuiKey_C]           = 'C';
    io.KeyMap[ImGuiKey_V]           = 'V';
    io.KeyMap[ImGuiKey_X]           = 'X';
    io.KeyMap[ImGuiKey_Y]           = 'Y';
    io.KeyMap[ImGuiKey_Z]           = 'Z';
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        if (out_offset)
        *out_offset = ImVec2(line_width, text_size.y + line_height);  // offset allow for the possibility of sitting after a trailing \n
    
    #endif // D_DHT_REGISTRY_H

    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
    #include 'common.h'
    
    #include 'DHTTask.h'
#include 'Logger.h'
#include 'LogFactory.h'
#include 'a2functional.h'
#include 'fmt.h'
    
    public:
  DHTTaskExecutor(int numConcurrent);
    
    #endif // D_DHT_TASK_QUEUE_H

    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
    void DHTTokenUpdateCommand::setTokenTracker(DHTTokenTracker* tokenTracker)
{
  tokenTracker_ = tokenTracker;
}
    
    void DNSCache::remove(const std::string& hostname, uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  entries_.erase(target);
}
    
    
    {  void remove(const std::string& hostname, uint16_t port);
};
    
    using json = nlohmann::json;
    
        // create (integer) JSON numbers
    json j_short(n_short);
    json j_int(n_int);
    json j_long(n_long);
    json j_int_least32_t(n_int_least32_t);
    json j_uint8_t(n_uint8_t);