
        
        class SubstitutionMap::Storage final
  : public llvm::FoldingSetNode,
    llvm::TrailingObjects<Storage, Type, ProtocolConformanceRef>
{
  friend TrailingObjects;
    }
    
    
    {    // Must be 'const' or nothing.
    clang::Qualifiers quals = pointee.getQualifiers();
    bool isConst = quals.hasConst();
    quals.removeConst();
    if (quals.empty()) {
      if (auto record = pointee->getAs<clang::RecordType>()) {
        auto recordDecl = record->getDecl();
        if (recordDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeMutableAttr>() ||
            recordDecl->hasAttr<clang::ObjCBridgeRelatedAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return forRecord(isConst, record->getDecl());
        }
      } else if (pointee->isVoidType()) {
        if (typedefDecl->hasAttr<clang::ObjCBridgeAttr>() ||
            isKnownCFTypeName(typedefDecl->getName())) {
          return isConst ? forConstVoid() : forVoid();
        }
      }
    }
  }
    
    
void ClangDiagnosticConsumer::HandleDiagnostic(
    clang::DiagnosticsEngine::Level clangDiagLevel,
    const clang::Diagnostic &clangDiag) {
  // Handle the module-not-found diagnostic specially if it's a top-level module
  // we're looking for.
  if (clangDiag.getID() == clang::diag::err_module_not_found &&
      CurrentImport && clangDiag.getArgStdStr(0) == CurrentImport->getName()) {
    return;
  }
    }
    
    IPC_MESSAGE_ROUTED3(ShellViewMsg_Object_On_Event,
                    int /* object id */,
                    std::string /* event name */,
                    base::ListValue /* arguments */)
    
    #include 'content/nw/src/api/base/base.h'
    
    #ifndef CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
#define CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
    
    
    {}  // namespace nwapi

    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
    aura::Window* Menu::GetActiveNativeView(content::RenderFrameHost* rfh) {
  content::WebContents* web_contents =
    content::WebContents::FromRenderFrameHost(rfh);
  if (!web_contents) {
    LOG(ERROR) << 'Menu: couldn't find WebContents';
    return NULL;
  }
  return web_contents->GetFullscreenRenderWidgetHostView()
             ? web_contents->GetFullscreenRenderWidgetHostView()
                   ->GetNativeView()
             : web_contents->GetNativeView();
}
    
      static void DoJob(AppWindowRegistry* registry, std::string id);
 protected:
  ~NwAppCloseAllWindowsFunction() override {}
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n) {
  int max_offset = n - 8;
  int offset = 0;
  // Accumulate a set of 4 32-bit sums in sum, by loading 8 pairs of 8-bit
  // values, extending to 16 bit, multiplying to make 32 bit results.
  __m128i sum = _mm_setzero_si128();
  if (offset <= max_offset) {
    offset = 8;
    __m128i packed1 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(u));
    __m128i packed2 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(v));
    sum = _mm_cvtepi8_epi16(packed1);
    packed2 = _mm_cvtepi8_epi16(packed2);
    // The magic _mm_add_epi16 is perfect here. It multiplies 8 pairs of 16 bit
    // ints to make 32 bit results, which are then horizontally added in pairs
    // to make 4 32 bit results that still fit in a 128 bit register.
    sum = _mm_madd_epi16(sum, packed2);
    while (offset <= max_offset) {
      packed1 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(u + offset));
      packed2 = _mm_loadl_epi64(reinterpret_cast<const __m128i*>(v + offset));
      offset += 8;
      packed1 = _mm_cvtepi8_epi16(packed1);
      packed2 = _mm_cvtepi8_epi16(packed2);
      packed1 = _mm_madd_epi16(packed1, packed2);
      sum = _mm_add_epi32(sum, packed1);
    }
  }
  // Sum the 4 packed 32 bit sums and extract the low result.
  sum = _mm_hadd_epi32(sum, sum);
  sum = _mm_hadd_epi32(sum, sum);
  int32_t result = _mm_cvtsi128_si32(sum);
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    // Factory makes and returns an IntSimdMatrix (sub)class of the best
// available type for the current architecture.
/* static */
IntSimdMatrix* IntSimdMatrix::GetFastestMultiplier() {
  IntSimdMatrix* multiplier = nullptr;
  if (SIMDDetect::IsAVX2Available()) {
    multiplier = new IntSimdMatrixAVX2();
  } else if (SIMDDetect::IsSSEAvailable()) {
    multiplier = new IntSimdMatrixSSE();
  } else {
    // Default c++ implementation.
    multiplier = new IntSimdMatrix();
  }
  return multiplier;
}
    
    class ScriptDetector {
 public:
  ScriptDetector(const GenericVector<int>* allowed_scripts,
                 OSResults* osr, tesseract::Tesseract* tess);
  void detect_blob(BLOB_CHOICE_LIST* scores);
  bool must_stop(int orientation);
 private:
  OSResults* osr_;
  static const char* korean_script_;
  static const char* japanese_script_;
  static const char* fraktur_script_;
  int korean_id_;
  int japanese_id_;
  int katakana_id_;
  int hiragana_id_;
  int han_id_;
  int hangul_id_;
  int latin_id_;
  int fraktur_id_;
  tesseract::Tesseract* tess_;
  const GenericVector<int>* allowed_scripts_;
};
    
    /** Returns the polygon outline of the current block. The returned Pta must
 *  be ptaDestroy-ed after use. */
Pta* PageIterator::BlockPolygon() const {
  if (it_->block() == nullptr || it_->block()->block == nullptr)
    return nullptr;  // Already at the end!
  if (it_->block()->block->pdblk.poly_block() == nullptr)
    return nullptr;  // No layout analysis used - no polygon.
  ICOORDELT_IT it(it_->block()->block->pdblk.poly_block()->points());
  Pta* pta = ptaCreate(it.length());
  int num_pts = 0;
  for (it.mark_cycle_pt(); !it.cycled_list(); it.forward(), ++num_pts) {
    ICOORD* pt = it.data();
    // Convert to top-down coords within the input image.
    float x = static_cast<float>(pt->x()) / scale_ + rect_left_;
    float y = rect_top_ + rect_height_ - static_cast<float>(pt->y()) / scale_;
    ptaAddPt(pta, x, y);
  }
  return pta;
}
    
    namespace tesseract {
  class Tesseract;
}
    
            // Retrieve the glyph
        error = FT_Get_Glyph(slot, &ft_glyph);
        if (error != 0)
            return false;
    
            param[0].ParameterType = D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;
        param[0].Constants.ShaderRegister = 0;
        param[0].Constants.RegisterSpace = 0;
        param[0].Constants.Num32BitValues = 16;
        param[0].ShaderVisibility = D3D12_SHADER_VISIBILITY_VERTEX;
    
            for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                // User callback (registered via ImDrawList::AddCallback)
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                ImVec4 clip_rect = ImVec4(pcmd->ClipRect.x - pos.x, pcmd->ClipRect.y - pos.y, pcmd->ClipRect.z - pos.x, pcmd->ClipRect.w - pos.y);
                if (clip_rect.x < fb_width && clip_rect.y < fb_height && clip_rect.z >= 0.0f && clip_rect.w >= 0.0f)
                {
                    // Apply scissor/clipping rectangle
                    glScissor((int)clip_rect.x, (int)(fb_height - clip_rect.w), (int)(clip_rect.z - clip_rect.x), (int)(clip_rect.w - clip_rect.y));
    }
    }
    }
    
    #include 'port/port.h'
#include 'rocksdb/cache.h'
#include 'rocksdb/db.h'
#include 'rocksdb/env.h'
#include 'util/gflags_compat.h'
#include 'util/mutexlock.h'
#include 'util/random.h'
    
      // should be called outside the mutex
  SuperVersion() = default;
  ~SuperVersion();
  SuperVersion* Ref();
  // If Unref() returns true, Cleanup() should be called with mutex held
  // before deleting this SuperVersion.
  bool Unref();
    
      using DBImpl::Put;
  virtual Status Put(const WriteOptions& /*options*/,
                     ColumnFamilyHandle* /*column_family*/,
                     const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Merge;
  virtual Status Merge(const WriteOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/,
                       const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Delete;
  virtual Status Delete(const WriteOptions& /*options*/,
                        ColumnFamilyHandle* /*column_family*/,
                        const Slice& /*key*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  virtual Status Write(const WriteOptions& /*options*/,
                       WriteBatch* /*updates*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::CompactRange;
  virtual Status CompactRange(const CompactRangeOptions& /*options*/,
                              ColumnFamilyHandle* /*column_family*/,
                              const Slice* /*begin*/,
                              const Slice* /*end*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
    
    
    {   private:
    const Compaction* compaction_;
  };
    
    TEST_F(DBEncryptionTest, CheckEncrypted) {
  ASSERT_OK(Put('foo567', 'v1.fetdq'));
  ASSERT_OK(Put('bar123', 'v2.dfgkjdfghsd'));
  Close();
    }
    
    TEST_F(WriteControllerTest, ChangeDelayRateTest) {
  TimeSetEnv env;
  WriteController controller(40000000u);  // also set max delayed rate
  controller.set_delayed_write_rate(10000000u);
  auto delay_token_0 =
      controller.GetDelayToken(controller.delayed_write_rate());
  ASSERT_EQ(static_cast<uint64_t>(2000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_1 = controller.GetDelayToken(2000000u);
  ASSERT_EQ(static_cast<uint64_t>(10000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_2 = controller.GetDelayToken(1000000u);
  ASSERT_EQ(static_cast<uint64_t>(20000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_3 = controller.GetDelayToken(20000000u);
  ASSERT_EQ(static_cast<uint64_t>(1000000),
            controller.GetDelay(&env, 20000000u));
  // This is more than max rate. Max delayed rate will be used.
  auto delay_token_4 =
      controller.GetDelayToken(controller.delayed_write_rate() * 3);
  ASSERT_EQ(static_cast<uint64_t>(500000),
            controller.GetDelay(&env, 20000000u));
}
    
    #pragma once
    
      int (*func)(int, int) = [](int x, int y) { return 10 * x + y; };
  fref = func;
    
    
    {  FLAGS_minloglevel = prev;
}
    
    // Structure of note section for the probe.
#define FOLLY_SDT_NOTE_CONTENT(provider, name, has_semaphore, arg_template)    \
  FOLLY_SDT_ASM_1(990: FOLLY_SDT_NOP)                                          \
  FOLLY_SDT_ASM_3(     .pushsection .note.stapsdt,'','note')                   \
  FOLLY_SDT_ASM_1(     .balign 4)                                              \
  FOLLY_SDT_ASM_3(     .4byte 992f-991f, 994f-993f, FOLLY_SDT_NOTE_TYPE)       \
  FOLLY_SDT_ASM_1(991: .asciz FOLLY_SDT_NOTE_NAME)                             \
  FOLLY_SDT_ASM_1(992: .balign 4)                                              \
  FOLLY_SDT_ASM_1(993: FOLLY_SDT_ASM_ADDR 990b)                                \
  FOLLY_SDT_ASM_1(     FOLLY_SDT_ASM_ADDR 0) /*Reserved for Base Address*/     \
  FOLLY_SDT_SEMAPHORE_NOTE_##has_semaphore(provider, name)                     \
  FOLLY_SDT_ASM_STRING(provider)                                               \
  FOLLY_SDT_ASM_STRING(name)                                                   \
  FOLLY_SDT_ASM_STRING(arg_template)                                           \
  FOLLY_SDT_ASM_1(994: .balign 4)                                              \
  FOLLY_SDT_ASM_1(     .popsection)
    
    #include <folly/Demangle.h>
#include <folly/FBString.h>
#include <folly/Portability.h>
    
    exception_wrapper::VTable const exception_wrapper::uninit_{
    &noop_<void, exception_wrapper const*, exception_wrapper*>,
    &noop_<void, exception_wrapper*, exception_wrapper*>,
    &noop_<void, exception_wrapper*>,
    &noop_<void, exception_wrapper const*>,
    &uninit_type_,
    &noop_<std::exception const*, exception_wrapper const*>,
    &noop_<exception_wrapper, exception_wrapper const*>};
    
      /**
   * Returns a secure random uint64_t
   */
  static uint64_t secureRand64() {
    return secureRandom<uint64_t>();
  }
    
    #pragma once
    
        using nsec_i64 = std::chrono::duration<int64_t, std::nano>;
    ts.tv_sec = std::numeric_limits<int64_t>::max();
    ts.tv_nsec = std::numeric_limits<int64_t>::max();
    EXPECT_THROW(to<nsec_i64>(ts), std::range_error);
    
      ~atomic_shared_ptr() {
    store(SharedPtr(nullptr));
  }
  void operator=(SharedPtr desired) /* noexcept */ {
    store(std::move(desired));
  }
  void operator=(const atomic_shared_ptr<T>&) = delete;