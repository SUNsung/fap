
        
        class OpenURIDialog : public QDialog
{
    Q_OBJECT
    }
    
    
    {    /* d += a3 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rcx\n'
    'movq %%rdx,%%r15\n'
    /* d += a2 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d = a0 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c = a4 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* d += a4 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a0 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a4 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a1 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rcx,%%rsi\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a1 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a4 * b2 */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a2 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%r15,%%rcx\n'
    'xorq %%r15,%%r15\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a2 * b0 */
    'movq 0(%%rbx),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a1 * b1 */
    'movq 8(%%rbx),%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* c += a0 * b2 (last use of %%r10 = a0) */
    'movq 16(%%rbx),%%rax\n'
    'mulq %%r10\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0), t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* d += a4 * b3 */
    'movq 24(%%rbx),%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* d += a3 * b4 */
    'movq 32(%%rbx),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rcx\n'
    'adcq %%rdx,%%r15\n'
    /* c += (d & M) * R */
    'movq %%rcx,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rcx only) */
    'shrdq $52,%%r15,%%rcx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rcx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'movq $0xfffffffffffff,%%rdx\n'
    'andq %%rdx,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'b'(b), 'D'(r)
: '%rax', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
    
    {    /* Try to multiply it by bad values */
    CHECK(secp256k1_ecdh(ctx, output, &point, s_zero) == 0);
    CHECK(secp256k1_ecdh(ctx, output, &point, s_overflow) == 0);
    /* ...and a good one */
    s_overflow[31] -= 1;
    CHECK(secp256k1_ecdh(ctx, output, &point, s_overflow) == 1);
}
    
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 0));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 1));
    CHECK(secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 2));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 3));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    
        // C escapes
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\nBaz\\t\' Spam=\'\\rEggs\' Octals=\'\\1a\\11\\17\\18\\81\\377\\378\\400\\2222\' Final=Check', {
            {'Foo', 'Bar\nBaz\t'},
            {'Spam', '\rEggs'},
            {'Octals', '\1a\11\17\1' '881\377\37' '8\40' '0\222' '2'},
            {'Final', 'Check'},
        });
    CheckParseTorReplyMapping(
        'Valid=Mapping Escaped=\'Escape\\\\\'', {
            {'Valid', 'Mapping'},
            {'Escaped', 'Escape\\'},
        });
    CheckParseTorReplyMapping(
        'Valid=Mapping Bare=\'Escape\\\'', {});
    CheckParseTorReplyMapping(
        'OneOctal=\'OneEnd\\1\' TwoOctal=\'TwoEnd\\11\'', {
            {'OneOctal', 'OneEnd\1'},
            {'TwoOctal', 'TwoEnd\11'},
        });
    
    bool ParseInt32(const std::string& str, int32_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtol will not set errno if valid
    long int n = strtol(str.c_str(), &endp, 10);
    if(out) *out = (int32_t)n;
    // Note that strtol returns a *long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int32_t*. On 64-bit
    // platforms the size of these types may be different.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int32_t>::min() &&
        n <= std::numeric_limits<int32_t>::max();
}
    
        BOOST_CHECK(v.setStr('zum'));
    BOOST_CHECK(v.isStr());
    BOOST_CHECK_EQUAL(v.getValStr(), 'zum');
    
    // Bech32 is a string encoding format used in newer address types.
// The output consists of a human-readable part (alphanumeric), a
// separator character (1), and a base32 data section, the last
// 6 characters of which are a checksum.
//
// For more information, see BIP 173.
    
    #include <string.h>
    
    public:
    static const size_t OUTPUT_SIZE = 20;
    
    enum class ImmType {
              // Supports TOC? | Supports li64? | Fixed size?
              // -------------------------------------------
  AnyCompact, // Yes           | Yes            | No
  AnyFixed,   // Yes           | Yes            | Yes (5 instr)
  TocOnly,    // Yes           | No             | Yes (2 instr)
};
    
    static HackStrictOption GetHackStrictOption(const IniSettingMap& ini,
                                            const Hdf& config,
                                            const std::string& name /* = '' */,
                                            HackStrictOption def
                                           ) {
  auto val = Config::GetString(ini, config, name);
  if (val.empty()) {
    return def;
  }
  if (val == 'warn') {
    return HackStrictOption::WARN;
  }
  bool ret;
  ini_on_update(val, ret);
  return ret ? HackStrictOption::ON : HackStrictOption::OFF;
}
    
    /**
 * Parts of the language can individually be made stricter, warning or
 * erroring when there's dangerous/unintuive usage; for example,
 * array_fill_keys() with non-int/string keys: Hack.Lang.StrictArrayFillKeys
 */
enum class HackStrictOption {
  OFF, // PHP5 behavior
  WARN,
  ON
};
    
    Variant ArrayDirectory::read() {
  if (!m_it) {
    return false;
  }
    }
    
      int cnt = 1;
  bool ignore_default_configs = ::getenv('HHVM_NO_DEFAULT_CONFIGS') != nullptr;
  while (cnt < argc) {
    if (strcmp(argv[cnt], '-a') == 0 ||
        strcmp(argv[cnt], '--interactive') == 0) {
      need_file = false;
      newargv.push_back('-a');
      cnt++;
      continue;
    }
    if (strcmp(argv[cnt], '-z') == 0) {
      std::string arg = '-vDynamicExtensions.0=';
      arg.append(argv[cnt+1]);
      newargv.push_back(arg.c_str());
      cnt += 2;
      continue;
    }
    if (strcmp(argv[cnt], '-l') == 0 || strcmp(argv[cnt], '--lint') == 0) {
      cnt++;
      lint = true;
      continue;
    }
    if (strcmp(argv[cnt], '-r') == 0) {
      if (cnt + 1 == argc) {
        // Hmm, no program fragment passed along. Let hhvm print its usage
        // message?
        newargv.push_back(argv[cnt++]);
        continue;
      }
      assertx(cnt + 1 < argc);
      program = argv[cnt + 1];
      need_file = true;
      cnt += 2;
      continue;
    }
    if (strcmp(argv[cnt], '-i') == 0 || strcmp(argv[cnt], '--info') == 0) {
      // Pretend they did '-r 'phpinfo();''
      program = 'phpinfo();';
      need_file = true;
      cnt = argc; // no need to check the rest of options and arguments
      break;
    }
    if (strcmp(argv[cnt], '-w') == 0) {
      cnt++;
      show = true;
      continue;
    }
    if (strcmp(argv[cnt], '-v') == 0 || strcmp(argv[cnt], '--version') == 0) {
      newargv.push_back('--version');
      cnt = argc; // no need to check the rest of options and arguments
      need_file = false;
      break;
    }
    if (strcmp(argv[cnt], '--modules') == 0) {
    // zend has a -m flag but we're already using it for --mode
      newargv.push_back('--modules');
      cnt = argc; // no need to check the rest of options and arguments
      need_file = false;
      break;
    }
    if (strcmp(argv[cnt], '-f') == 0 || strcmp(argv[cnt], '--file') == 0) {
      cnt++;
      newargv.push_back(lint ? '-l' : '-f');
      newargv.push_back(argv[cnt++]);
      need_file = false;
      break;
    }
    if (strcmp(argv[cnt], '-n') == 0) {
      ignore_default_configs = true;
      cnt++;
      newargv.push_back('--no-config');
      continue;
    }
    if (strcmp(argv[cnt], '-c')  == 0) {
      if (cnt + 1 < argc && argv[cnt + 1][0] != '-') {
        newargv.push_back('-c');
        newargv.push_back(argv[cnt + 1]);
        cnt = cnt + 2;
        continue;
      } else {
        fprintf(stderr, 'Notice: No config file specified');
        exit(EXIT_FAILURE);
      }
    }
    if (strcmp(argv[cnt], '-d')  == 0 || strcmp(argv[cnt], '--define') == 0) {
      ini_fd = get_tempfile_if_not_exists(ini_fd, ini_path);
    }
    }
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    #include 'hphp/util/perf-event.h'
    
    template<typename F>
void logPerfWarningImpl(folly::StringPiece event, int64_t priority,
                        int64_t rate, F fillCols) {
  auto const effectiveRate = rate * RuntimeOption::EvalPerfWarningSampleRate;
  if (effectiveRate > std::numeric_limits<uint32_t>::max()) return;
  if (!StructuredLog::coinflip(effectiveRate)) return;
    }