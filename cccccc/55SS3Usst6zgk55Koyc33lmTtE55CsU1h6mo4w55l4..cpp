
        
        napi_value Print(napi_env env, napi_callback_info info) {
  size_t argc = 1;
  napi_value args[1];
  napi_status status;
    }
    
    #endif  // NATIVE_MATE_NATIVE_MATE_CONSTRUCTOR_H_

    
      template <typename T>
  bool SetHidden(const base::StringPiece& key, T val) {
    v8::Local<v8::Value> v8_value;
    if (!TryConvertToV8(isolate_, val, &v8_value))
      return false;
    v8::Local<v8::Context> context = isolate_->GetCurrentContext();
    v8::Local<v8::Private> privateKey =
        v8::Private::ForApi(isolate_, StringToV8(isolate_, key));
    v8::Maybe<bool> result =
        GetHandle()->SetPrivate(context, privateKey, v8_value);
    return !result.IsNothing() && result.FromJust();
  }
    
    #endif  // NATIVE_MATE_NATIVE_MATE_PROMISE_H_

    
    
    {  static bool FromV8(v8::Isolate* isolate, v8::Local<v8::Value> val, T** out) {
    *out = static_cast<T*>(
        static_cast<WrappableBase*>(internal::FromV8Impl(isolate, val)));
    return *out != nullptr;
  }
};
    
    #include 'native_mate/object_template_builder.h'
    
    // Read a symbolic link, return empty string if given path is not a symbol link.
base::FilePath ReadLink(const base::FilePath& path) {
  base::FilePath target;
  if (!base::ReadSymbolicLink(path, &target)) {
    // The only errno that should occur is ENOENT.
    if (errno != 0 && errno != ENOENT)
      PLOG(ERROR) << 'readlink(' << path.value() << ') failed';
  }
  return target;
}
    
    #include 'content/public/common/content_client.h'
    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
    /// The list of known CF types.  We use 'constexpr' to verify that this is
/// emitted as a constant.  Note that this is expected to be sorted in
/// quasi-lexicographic order.
static constexpr const llvm::StringLiteral KnownCFTypes[] = {
#define CF_TYPE(NAME) #NAME,
#define NON_CF_TYPE(NAME)
#include 'SortedCFDatabase.def'
};
const size_t NumKnownCFTypes = sizeof(KnownCFTypes) / sizeof(*KnownCFTypes);
    
      IAMAccessorKind accessorKind = IAMAccessorKind::None;
    
    /// Sort a set of paths in an order that's (comparatively) stable against
/// variation in filesystem prefix: lexicographic comparison of the
/// byte-reversals of each path. Used for emitting external dependencies.
std::vector<std::string>
reversePathSortedFilenames(const llvm::ArrayRef<std::string> paths);
    
      /// Whether we've emitted the call for the current callee yet.  This
  /// is just for debugging purposes --- e.g. the destructor asserts
  /// that it's true --- but is otherwise derivable from
  /// RemainingArgsForCallee, at least between calls.
  bool EmittedCall;
    
        QString getURI();
    
    
    {    CRIPEMD160();
    CRIPEMD160& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CRIPEMD160& Reset();
};
    
        movdqa	XFER, [TBL + 3*16]
    paddd	XFER, X0
    movdqa	[rsp + _XFER], XFER
    add	TBL, 4*16
    FOUR_ROUNDS_AND_SCHED
    
      // We iterate twice.  In the second iteration, everything is the
  // same except the log record never makes it to the MANIFEST file.
  for (int iter = 0; iter < 2; iter++) {
    port::AtomicPointer* error_type = (iter == 0)
        ? &env_->manifest_sync_error_
        : &env_->manifest_write_error_;
    }
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
    #include 'common.hpp'
    
        ptrdiff_t width = (ptrdiff_t)size.width, height = (ptrdiff_t)size.height;
    static const vshrq_s32_func vshrq_s32_a[33] =
    {
        vshrq_s32<0>,
        vshrq_s32<1>,
        vshrq_s32<2>,
        vshrq_s32<3>,
        vshrq_s32<4>,
        vshrq_s32<5>,
        vshrq_s32<6>,
        vshrq_s32<7>,
        vshrq_s32<8>,
        vshrq_s32<9>,
        vshrq_s32<10>,
        vshrq_s32<11>,
        vshrq_s32<12>,
        vshrq_s32<13>,
        vshrq_s32<14>,
        vshrq_s32<15>,
        vshrq_s32<16>,
        vshrq_s32<17>,
        vshrq_s32<18>,
        vshrq_s32<19>,
        vshrq_s32<20>,
        vshrq_s32<21>,
        vshrq_s32<22>,
        vshrq_s32<23>,
        vshrq_s32<24>,
        vshrq_s32<25>,
        vshrq_s32<26>,
        vshrq_s32<27>,
        vshrq_s32<28>,
        vshrq_s32<29>,
        vshrq_s32<30>,
        vshrq_s32<31>,
        vshrq_s32<32>
    };
    vshrq_s32_func vshrq_s32_p = vshrq_s32_a[scale];
    
                    vSum_0_4 = vmlaq_u16(vSum_0_4, vLane2.val[0], vc6u16);
                vSum_1_5 = vmlaq_u16(vSum_1_5, vLane2.val[1], vc6u16);
                vSum_2_6 = vmlaq_u16(vSum_2_6, vLane2.val[2], vc6u16);
    
    
    {    return resultString;
}
    
        /**
     * Implements {@link Transliterator#handleTransliterate}.
     * @param text          the buffer holding transliterated and
     *                      untransliterated text
     * @param offset        the start and limit of the text, the position
     *                      of the cursor, and the start and limit of transliteration.
     * @param incremental   if true, assume more text may be coming after
     *                      pos.contextLimit. Otherwise, assume the text is complete.
     */
    virtual void handleTransliterate(Replaceable& text, UTransPosition& offset,
                                     UBool isIncremental) const;
    
    #include 'uelement.h'
    
    class UnicodeSet;
    
    #include 'unicode/unistr.h'
    
    #include 'unicode/uniset.h'
#include 'unicode/udat.h'
#include 'cmemory.h'
#include 'uassert.h'
#include 'ucln_in.h'
#include 'umutex.h'
    
    void CollationKey::setLength(int32_t newLength) {
    // U_ASSERT(newLength >= 0 && newLength <= getCapacity());
    fFlagAndLength = (fFlagAndLength & 0x80000000) | newLength;
    fHashCode = kInvalidHashCode;
}