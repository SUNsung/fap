void AutoUpdater::OnUpdateDownloaded(const std::string& release_notes,
                                     const std::string& release_name,
                                     const base::Time& release_date,
                                     const std::string& url) {
  Emit('update-downloaded', release_notes, release_name, release_date, url,
       // Keep compatibility with old APIs.
       base::Bind(&AutoUpdater::QuitAndInstall, base::Unretained(this)));
}
    
    // static
void InAppPurchase::BuildPrototype(v8::Isolate* isolate,
                                   v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'InAppPurchase'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetMethod('canMakePayments', &in_app_purchase::CanMakePayments)
      .SetMethod('getReceiptURL', &in_app_purchase::GetReceiptURL)
      .SetMethod('purchaseProduct', &InAppPurchase::PurchaseProduct)
      .SetMethod('finishAllTransactions',
                 &in_app_purchase::FinishAllTransactions)
      .SetMethod('finishTransactionByDate',
                 &in_app_purchase::FinishTransactionByDate)
      .SetMethod('getProducts', &in_app_purchase::GetProducts);
}
    
      // TransactionObserver:
  void OnTransactionsUpdated(
      const std::vector<in_app_purchase::Transaction>& transactions) override;
    
    void AtomBrowserMainParts::HandleShutdownSignals() {
  int pipefd[2];
  int ret = pipe(pipefd);
  if (ret < 0) {
    PLOG(DFATAL) << 'Failed to create pipe';
  } else {
    g_pipe_pid = getpid();
    g_shutdown_pipe_read_fd = pipefd[0];
    g_shutdown_pipe_write_fd = pipefd[1];
#if !defined(ADDRESS_SANITIZER) && !defined(KEEP_SHADOW_STACKS)
    const size_t kShutdownDetectorThreadStackSize = PTHREAD_STACK_MIN * 2;
#else
    // ASan instrumentation and -finstrument-functions (used for keeping the
    // shadow stacks) bloat the stack frames, so we need to increase the stack
    // size to avoid hitting the guard page.
    const size_t kShutdownDetectorThreadStackSize = PTHREAD_STACK_MIN * 4;
#endif
    // TODO(viettrungluu,willchan): crbug.com/29675 - This currently leaks, so
    // if you change this, you'll probably need to change the suppression.
    if (!base::PlatformThread::CreateNonJoinable(
            kShutdownDetectorThreadStackSize,
            new ShutdownDetector(g_shutdown_pipe_read_fd))) {
      LOG(DFATAL) << 'Failed to create shutdown detector task.';
    }
  }
  // Setup signal handlers for shutdown AFTER shutdown pipe is setup because
  // it may be called right away after handler is set.
    }
    
    namespace api {
class WebContents;
}
    
    #include 'atom/browser/atom_quota_permission_context.h'
    
     private:
  ~AtomQuotaPermissionContext() override;
    
    #include 'base/macros.h'
    
    void AddFile(const string& filename, const string& data) {
  GOOGLE_CHECK_OK(File::SetContents(TestTempDir() + '/' + filename, data,
                             true));
}
    
    EnumGenerator::~EnumGenerator() {
}
    
    #include <memory>
    
    ReflectionClassGenerator::~ReflectionClassGenerator() {
}
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    void ImmutableMapFieldGenerator::
GenerateParsingCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'if (!$get_mutable_bit_parser$) {\n'
      '  $name$_ = com.google.protobuf.MapField.newMapField(\n'
      '      $map_field_parameter$);\n'
      '  $set_mutable_bit_parser$;\n'
      '}\n');
  if (!SupportUnknownEnumValue(descriptor_->file()) &&
      GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        'com.google.protobuf.ByteString bytes = input.readBytes();\n'
        'com.google.protobuf.MapEntry<$type_parameters$>\n'
        '$name$__ = $default_entry$.getParserForType().parseFrom(bytes);\n');
    printer->Print(
        variables_,
        'if ($value_enum_type$.forNumber($name$__.getValue()) == null) {\n'
        '  unknownFields.mergeLengthDelimitedField($number$, bytes);\n'
        '} else {\n'
        '  $name$_.getMutableMap().put(\n'
        '      $name$__.getKey(), $name$__.getValue());\n'
        '}\n');
  } else {
    printer->Print(
        variables_,
        'com.google.protobuf.MapEntry<$type_parameters$>\n'
        '$name$__ = input.readMessage(\n'
        '    $default_entry$.getParserForType(), extensionRegistry);\n'
        '$name$_.getMutableMap().put(\n'
        '    $name$__.getKey(), $name$__.getValue());\n');
  }
}
    
      if (HasDescriptorMethods(file_, options_.enforce_lite)) {
    // Generate descriptors.
    string classname = name_resolver_->GetDescriptorClassName(file_);
    string filename = package_dir + classname + '.java';
    file_list->push_back(filename);
    std::unique_ptr<io::ZeroCopyOutputStream> output(context->Open(filename));
    GeneratedCodeInfo annotations;
    io::AnnotationProtoCollector<GeneratedCodeInfo> annotation_collector(
        &annotations);
    std::unique_ptr<io::Printer> printer(
        new io::Printer(output.get(), '$',
                        options_.annotate_code ? &annotation_collector : NULL));
    string info_relative_path = classname + '.java.pb.meta';
    string info_full_path = filename + '.pb.meta';
    printer->Print(
        '// Generated by the protocol buffer compiler.  DO NOT EDIT!\n'
        '// source: $filename$\n'
        '\n',
        'filename', file_->name());
    if (!java_package.empty()) {
      printer->Print(
        'package $package$;\n'
        '\n',
        'package', java_package);
    }
    PrintGeneratedAnnotation(printer.get(), '$',
                             options_.annotate_code ? info_relative_path : '');
    printer->Print(
        'public final class $classname$ {\n'
        '  public static com.google.protobuf.Descriptors.FileDescriptor\n'
        '      descriptor;\n'
        '  static {\n',
        'classname', classname);
    printer->Annotate('classname', file_->name());
    printer->Indent();
    printer->Indent();
    GenerateDescriptors(printer.get());
    printer->Outdent();
    printer->Outdent();
    printer->Print(
      '  }\n'
      '}\n');
    }
    
        for (std::vector<ExtensionGenerator *>::iterator iter =
             extension_generators_.begin();
         iter != extension_generators_.end(); ++iter) {
      (*iter)->GenerateMembersHeader(printer);
    }
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google
    
    
#define TegraCvtColor_Invoker(name, func, ...) \
class TegraCvtColor_##name##_Invoker : public cv::ParallelLoopBody \
{ \
public: \
    TegraCvtColor_##name##_Invoker(const uchar * src_data_, size_t src_step_, uchar * dst_data_, size_t dst_step_, int width_, int height_) : \
        cv::ParallelLoopBody(), src_data(src_data_), src_step(src_step_), dst_data(dst_data_), dst_step(dst_step_), width(width_), height(height_) {} \
    virtual void operator()(const cv::Range& range) const CV_OVERRIDE \
    { \
        CAROTENE_NS::func(CAROTENE_NS::Size2D(width, range.end-range.start), __VA_ARGS__); \
    } \
private: \
    const uchar * src_data; \
    size_t src_step; \
    uchar * dst_data; \
    size_t dst_step; \
    int width, height; \
    const TegraCvtColor_##name##_Invoker& operator= (const TegraCvtColor_##name##_Invoker&); \
};
    
    #ifndef UINT32_MAX
    #define UINT32_MAX (4294967295U)
#endif
    
            //left&right borders
        if (borderType != BORDER_MODE_CONSTANT)
            for (s32 k = 0; k < cn; ++k)
            {
                lanea[-cn+k] = lanea[idx_l + k];
                lanea[colsn+k] = lanea[idx_r + k];
                laneb[-cn+k] = laneb[idx_l + k];
                laneb[colsn+k] = laneb[idx_r + k];
            }
    
    void extract3(const Size2D &size,
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
    
                vec128 v_src00 = internal::vld1q(src0 + x), v_src01 = internal::vld1q(src0 + x + 16 / sizeof(type));
            vec128 v_src10 = internal::vld1q(src1 + x), v_src11 = internal::vld1q(src1 + x + 16 / sizeof(type));
            uvec128 v_dst0;
            uvec128 v_dst1;
    
    #include 'common.hpp'
    
    #include <limits>
    
        v1k0 = vextq_s16(d8_15, d16_23, 1);
    q0 = vmaxq_s16(q0, vminq_s16(ak0, v1k0));
    q1 = vminq_s16(q1, vmaxq_s16(bk0, v1k0));
    
            x -= 8;
        if (x == width)
            --x;
    
    // calculate reciprocal value
    
    void Speed::startWithTarget(Node* target)
{
    if (target && _innerAction)
    {
        Action::startWithTarget(target);
        _innerAction->startWithTarget(target);
    }
    else
        log('Speed::startWithTarget error: target(%p) or _innerAction(%p) is nullptr!', target, _innerAction);
}
    
    #ifndef M_PI_X_2
#define M_PI_X_2 (float)M_PI * 2.0f
#endif
    
    void ReuseGrid::cacheTargetAsGridNode()
{
    _gridNodeTarget = dynamic_cast<NodeGrid*> (_target);
    CCASSERT(_gridNodeTarget, 'GridActions can only used on NodeGrid');
}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(FlipX3D);
};
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual FlipX* reverse() const override;
    virtual FlipX* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    FlipX() :_flipX(false) {}
    virtual ~FlipX() {}
    
        //
    // Overrides
    //
    virtual Blink* clone() const override;
    virtual Blink* reverse() const override;
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual void startWithTarget(Node *target) override;
    virtual void stop() override;
    
CC_CONSTRUCTOR_ACCESS:
    Blink() {}
    virtual ~Blink() {}
    
    
    {
    {
    {            p.z = (r * ( 1 - cosBeta ) * cosTheta);// '100' didn't work for
            p.x = p.z * sinf(rotateByYAxis) + p.x * cosf(rotateByYAxis);
            p.z = p.z * cosf(rotateByYAxis) - p.x * sinf(rotateByYAxis);
            p.z/=7;
            //    Stop z coord from dropping beneath underlying page in a transition
            // issue #751
            if( p.z < 0.5f )
            {
                p.z = 0.5f;
            }
            
            // Set new coords
            p.x += getGridRect().origin.x;
            setVertex(Vec2(i, j), p);
            
        }
    }
}
    
    bool Animation::initWithSpriteFrames(const Vector<SpriteFrame*>& frames, float delay/* = 0.0f*/, unsigned int loops/* = 1*/)
{
    _delayPerUnit = delay;
    _loops = loops;
    }
    
        auto propsItr = dictionary.find('properties');
    if(propsItr != dictionary.end() )
    {
        const ValueMap& properties = propsItr->second.asValueMap();
        version = properties.at('format').asInt();
        const ValueVector& spritesheets = properties.at('spritesheets').asValueVector();
    }
    
        /** Width of each char. */
    int    _itemWidth;
    /** Height of each char. */
    int    _itemHeight;
    
    Color3B    _colorUnmodified;
    
    TextureAtlas* _textureAtlas;
    /** Protocol variables. */
    bool _isOpacityModifyRGB;
    BlendFunc _blendFunc;
    
        /** @deprecated Use method getTrianglesCount() instead */
    CC_DEPRECATED_ATTRIBUTE unsigned int getTriaglesCount() const;
    
    /**
     * get sum of all triangle area size
     * @return sum of all triangle area size
     */
    float getArea() const;
    
    DEFINE_bool(populate_cache, false, 'Populate cache before operations');
DEFINE_int32(insert_percent, 40,
             'Ratio of insert to total workload (expressed as a percentage)');
DEFINE_int32(lookup_percent, 50,
             'Ratio of lookup to total workload (expressed as a percentage)');
DEFINE_int32(erase_percent, 10,
             'Ratio of erase to total workload (expressed as a percentage)');
    
    #include <atomic>
#include <memory>
#include 'rocksdb/rate_limiter.h'
    
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
    
    class PosixRandomRWFile : public RandomRWFile {
 public:
  explicit PosixRandomRWFile(const std::string& fname, int fd,
                             const EnvOptions& options);
  virtual ~PosixRandomRWFile();
    }
    
      // drop column family
  s = db->DropColumnFamily(handles[1]);
  assert(s.ok());
    
    #include <cstdio>
#include <string>
    
    struct UndumpOptions {
  // Database that we will load the dumped file into
  std::string db_path;
  // File location of the dumped file that will be loaded
  std::string dump_location;
  // Compact the db after loading the dumped file
  bool compact_db = false;
};
    
        static BOOST_FORCEINLINE storage_type fetch_or(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        base_type::fence_before(order);
        int backup;
        __asm
        {
            mov backup, ebx
            xor edx, edx
            mov edi, storage
            movzx ebx, v
            movzx eax, word ptr [edi]
            align 16
        again:
            mov dx, ax
            or dx, bx
            lock cmpxchg word ptr [edi], dx
            jne again
            mov v, ax
            mov ebx, backup
        };
        base_type::fence_after(order);
        return v;
    }
    
    
    {    BOOST_FORCEINLINE bool operator! () const BOOST_NOEXCEPT
    {
        return data[0] == 0 && data[1] == 0;
    }
};