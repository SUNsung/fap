
        
        PlatformKind swift::targetPlatform(LangOptions &LangOpts) {
  if (LangOpts.Target.isMacOSX()) {
    return (LangOpts.EnableAppExtensionRestrictions
                ? PlatformKind::OSXApplicationExtension
                : PlatformKind::OSX);
  }
    }
    
    
    {    return GenericTypeParamType::get(genericParam->getDepth(),
                                     genericParam->getIndex(), ctx);
  };
  auto conformanceToSyntheticConformanceFn =
      MakeAbstractConformanceForGenericType();
    
      MutableArrayRef<Type> getReplacementTypes() {
    return MutableArrayRef<Type>(getTrailingObjects<Type>(),
                                 getNumReplacementTypes());
  }
    
    bool CacheImpl::remove(const void *Key) {
  DefaultCache &DCache = *static_cast<DefaultCache*>(Impl);
  llvm::sys::ScopedLock L(DCache.Mux);
    }
    
    
bool Mangle::isNonAscii(StringRef str) {
  for (unsigned char c : str) {
    if (c >= 0x80)
      return true;
  }
  return false;
}
    
    bool Punycode::encodePunycodeUTF8(StringRef InputUTF8,
                                  std::string &OutPunycode,
                                  bool mapNonSymbolChars) {
  std::vector<uint32_t> InputCodePoints;
  InputCodePoints.reserve(InputUTF8.size());
    }
    
    
    {    r->infinity = 0;
    secp256k1_fe_sqr(&z22, &b->z);
    secp256k1_fe_sqr(&z12, &a->z);
    secp256k1_fe_mul(&u1, &a->x, &z22);
    secp256k1_fe_mul(&u2, &b->x, &z12);
    secp256k1_fe_mul(&s1, &a->y, &z22); secp256k1_fe_mul(&s1, &s1, &b->z);
    secp256k1_fe_mul(&s2, &b->y, &z12); secp256k1_fe_mul(&s2, &s2, &a->z);
    secp256k1_fe_negate(&h, &u1, 1); secp256k1_fe_add(&h, &u2);
    secp256k1_fe_negate(&i, &s1, 1); secp256k1_fe_add(&i, &s2);
    if (secp256k1_fe_normalizes_to_zero_var(&h)) {
        if (secp256k1_fe_normalizes_to_zero_var(&i)) {
            secp256k1_gej_double_var(r, a, rzr);
        } else {
            if (rzr != NULL) {
                secp256k1_fe_set_int(rzr, 0);
            }
            r->infinity = 1;
        }
        return;
    }
    secp256k1_fe_sqr(&i2, &i);
    secp256k1_fe_sqr(&h2, &h);
    secp256k1_fe_mul(&h3, &h, &h2);
    secp256k1_fe_mul(&h, &h, &b->z);
    if (rzr != NULL) {
        *rzr = h;
    }
    secp256k1_fe_mul(&r->z, &a->z, &h);
    secp256k1_fe_mul(&t, &u1, &h2);
    r->x = t; secp256k1_fe_mul_int(&r->x, 2); secp256k1_fe_add(&r->x, &h3); secp256k1_fe_negate(&r->x, &r->x, 3); secp256k1_fe_add(&r->x, &i2);
    secp256k1_fe_negate(&r->y, &r->x, 5); secp256k1_fe_add(&r->y, &t); secp256k1_fe_mul(&r->y, &r->y, &i);
    secp256k1_fe_mul(&h3, &h3, &s1); secp256k1_fe_negate(&h3, &h3, 1);
    secp256k1_fe_add(&r->y, &h3);
}
    
    BOOST_AUTO_TEST_CASE(util_ParseTorReplyMapping)
{
    // Data we should receive during normal usage
    CheckParseTorReplyMapping(
        'METHODS=COOKIE,SAFECOOKIE COOKIEFILE=\'/home/x/.tor/control_auth_cookie\'', {
            {'METHODS', 'COOKIE,SAFECOOKIE'},
            {'COOKIEFILE', '/home/x/.tor/control_auth_cookie'},
        });
    CheckParseTorReplyMapping(
        'METHODS=NULL', {
            {'METHODS', 'NULL'},
        });
    CheckParseTorReplyMapping(
        'METHODS=HASHEDPASSWORD', {
            {'METHODS', 'HASHEDPASSWORD'},
        });
    CheckParseTorReplyMapping(
        'Tor=\'0.2.9.8 (git-a0df013ea241b026)\'', {
            {'Tor', '0.2.9.8 (git-a0df013ea241b026)'},
        });
    CheckParseTorReplyMapping(
        'SERVERHASH=aaaa SERVERNONCE=bbbb', {
            {'SERVERHASH', 'aaaa'},
            {'SERVERNONCE', 'bbbb'},
        });
    CheckParseTorReplyMapping(
        'ServiceID=exampleonion1234', {
            {'ServiceID', 'exampleonion1234'},
        });
    CheckParseTorReplyMapping(
        'PrivateKey=RSA1024:BLOB', {
            {'PrivateKey', 'RSA1024:BLOB'},
        });
    CheckParseTorReplyMapping(
        'ClientAuth=bob:BLOB', {
            {'ClientAuth', 'bob:BLOB'},
        });
    }
    
    static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    /* The dispatch table layout is:
 *   [field number] -> [ 48-bit offset ][ 8-bit wt2 ][ 8-bit wt1 ]
 *
 * If wt1 matches, jump to the 48-bit offset.  If wt2 matches, lookup
 * (UPB_MAX_FIELDNUMBER + fieldnum) and jump there.
 *
 * We need two wire types because of packed/non-packed compatibility.  A
 * primitive repeated field can use either wire type and be valid.  While we
 * could key the table on fieldnum+wiretype, the table would be 8x sparser.
 *
 * Storing two wire types in the primary value allows us to quickly rule out
 * the second wire type without needing to do a separate lookup (this case is
 * less common than an unknown field). */
UPB_INLINE uint64_t upb_pbdecoder_packdispatch(uint64_t ofs, uint8_t wt1,
                                               uint8_t wt2) {
  return (ofs << 16) | (wt2 << 8) | wt1;
}
    
    bool RunProtoCompiler(const string& filename,
                      const string& plugin_specific_args,
                      CommandLineInterface* cli, FileDescriptorProto* file) {
  cli->SetInputsAreProtoPathRelative(true);
    }
    
    void ImmutableMapFieldGenerator::
GenerateMergingCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'internalGetMutable$capitalized_name$().mergeFrom(\n'
      '    other.internalGet$capitalized_name$());\n');
}
    
    string ClassNameResolver::GetClassName(const EnumDescriptor* descriptor,
                                       bool immutable) {
  return GetClassFullName(ClassNameWithoutPackage(descriptor, immutable),
                          descriptor->file(), immutable,
                          MultipleJavaFiles(descriptor->file(), immutable));
}
    
    static void AppendWithSpace(std::string* str, Slice msg) {
  if (msg.empty()) return;
  if (!str->empty()) {
    str->push_back(' ');
  }
  str->append(msg.data(), msg.size());
}
    
    Status DestroyDB(const std::string& dbname, const Options& options) {
  Env* env = options.env;
  std::vector<std::string> filenames;
  Status result = env->GetChildren(dbname, &filenames);
  if (!result.ok()) {
    // Ignore error in case directory does not exist
    return Status::OK();
  }
    }
    
      delete db;
  db = nullptr;
    
    std::string DescriptorFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  char buf[100];
  snprintf(buf, sizeof(buf), '/MANIFEST-%06llu',
           static_cast<unsigned long long>(number));
  return dbname + buf;
}
    
    TEST(FileNameTest, Parse) {
  Slice db;
  FileType type;
  uint64_t number;
    }
    
          case kBadRecord:
        if (in_fragmented_record) {
          ReportCorruption(scratch->size(), 'error in middle of record');
          in_fragmented_record = false;
          scratch->clear();
        }
        break;
    
    // Compatibility:
// - std::string support is only guaranteed to work from C++11. 
//   If you try to use it pre-C++11, please share your findings (w/ info about compiler/architecture)
    
            VkSubmitInfo end_info = {};
        end_info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        end_info.commandBufferCount = 1;
        end_info.pCommandBuffers = &command_buffer;
        err = vkEndCommandBuffer(command_buffer);
        check_vk_result(err);
        err = vkQueueSubmit(g_Queue, 1, &end_info, VK_NULL_HANDLE);
        check_vk_result(err);
    
        // Main loop
    bool running = true;
    while (running)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplAllegro5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplAllegro5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                ImGui_ImplAllegro5_CreateDeviceObjects();
            }
        }
    }
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
      // If this routine is called with items > 0, then an items/s
  // label is printed on the benchmark report line for the currently
  // executing benchmark. It is typically called at the end of a processing
  // benchmark where a processing items/second output is desired.
  //
  // REQUIRES: a benchmark has exited its benchmarking loop.
  BENCHMARK_ALWAYS_INLINE
  void SetItemsProcessed(size_t items) { items_processed_ = items; }
    
    void ColorPrintf(std::ostream& out, LogColor color, const char* fmt,
                 va_list args);
void ColorPrintf(std::ostream& out, LogColor color, const char* fmt, ...);
    
    // Parses a string for an Int32 flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseInt32Flag(const char* str, const char* flag, int32_t* value);
    
    #include 'benchmark/benchmark.h'
    
    #include <cstdint>
    
      // FIXME: Add locking to output.
  template <class Tp>
  friend LogType& operator<<(LogType&, Tp const&);
  friend LogType& operator<<(LogType&, EndLType*);
    
    
    {#ifndef NDEBUG
  Out << '***WARNING*** Library was built as DEBUG. Timings may be '
         'affected.\n';
#endif
}
    
    #include 'internal_macros.h'
    
        KeepAlive& operator=(KeepAlive&& other) {
      reset();
      executorAndDummyFlag_ = exchange(other.executorAndDummyFlag_, 0);
      return *this;
    }
    
    template <class RNG>
struct StateSize<RNG, void_t<decltype(RNG::state_size)>> {
  using type = std::integral_constant<size_t, RNG::state_size>;
};
    
      /**
   * Returns a secure random uint64_t in [min, max). If min == max, returns 0.
   */
  static uint64_t secureRand64(uint64_t min, uint64_t max) {
    SecureRNG<uint64_t> srng;
    return rand64(min, max, srng);
  }
    
    
    {} // namespace folly

    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}
    
    
    {    auto res = CountedDetail::template get_shared_ptr_from_counted_base<T>(
        p.get(), inc);
    if (aliased) {
      auto aliasedp =
          CountedDetail::template get_shared_ptr_from_counted_base<SharedPtr>(
              p.get());
      res = *aliasedp;
    }
    return res;
  }
    
      while (true) {
    auto cpu = cpus.size();
    std::vector<size_t> levels;
    for (size_t index = 0;; ++index) {
      auto dir =
          sformat('/sys/devices/system/cpu/cpu{}/cache/index{}/', cpu, index);
      auto cacheType = mapping(dir + 'type');
      auto equivStr = mapping(dir + 'shared_cpu_list');
      if (cacheType.size() == 0 || equivStr.size() == 0) {
        // no more caches
        break;
      }
      if (cacheType[0] == 'I') {
        // cacheType in { 'Data', 'Instruction', 'Unified' }. skip icache
        continue;
      }
      auto equiv = parseLeadingNumber(equivStr);
      auto level = levels.size();
      levels.push_back(equiv);
    }
    }
    
      t7 = a[5].imag;
  t4 = a[1].imag - t7;
  t7 += a[1].imag;
  a[1].imag = t7;
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    void ComputeBlockDCT(coeff_t* coeffs) {
  ColumnDct(coeffs);
  RowDct(coeffs + 0 * 8, kTable04);
  RowDct(coeffs + 1 * 8, kTable17);
  RowDct(coeffs + 2 * 8, kTable26);
  RowDct(coeffs + 3 * 8, kTable35);
  RowDct(coeffs + 4 * 8, kTable04);
  RowDct(coeffs + 5 * 8, kTable35);
  RowDct(coeffs + 6 * 8, kTable26);
  RowDct(coeffs + 7 * 8, kTable17);
}
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
      tmp0 = in[3 * stride];
  tmp1 = kIDCTMatrix[ 3] * tmp0;
  tmp2 = kIDCTMatrix[11] * tmp0;
  tmp3 = kIDCTMatrix[19] * tmp0;
  tmp4 = kIDCTMatrix[27] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_