
        
        #include 'hphp/runtime/base/array-init.h'
#include 'hphp/runtime/base/datetime.h'
#include 'hphp/runtime/base/resource-data.h'
#include 'hphp/runtime/base/type-array.h'
#include 'hphp/runtime/base/type-string.h'
#include 'hphp/util/timer.h'
    
    #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/fixup.h'
#include 'hphp/runtime/vm/jit/phys-reg-saver.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
      for (auto& block : blocks) {
    for (auto& inst : block.code) {
      if (inst.op == Vinstr::copyargs) return true;
    }
  }
    
      if (asprintf(&default_magic, '%s:%s', hmagicpath, MAGIC) < 0)
    goto out;
  free(hmagicpath);
  return default_magic;
out:
  default_magic = NULL;
  free(hmagicpath);
  return MAGIC;
#else
  char *hmagicp = hmagicpath;
  char *tmppath = NULL;
  LPTSTR dllpath;
    
    #include 'hphp/runtime/vm/hhbc.h'
    
    
// Logical immediates can't encode zero, so a return value of zero is used to
// indicate a failure case. Specifically, where the constraints on imm_s are
// not met.
uint64_t Instruction::ImmLogical() {
  unsigned reg_size = SixtyFourBits() ? kXRegSize : kWRegSize;
  int64_t n = BitN();
  int64_t imm_s = ImmSetBits();
  int64_t imm_r = ImmRotate();
    }
    
    std::string GetDbFileContent(int argc, char** argv);
    
    namespace grpc_node_generator {
    }
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
    #if TARGET_OS_IPHONE
GRPC_XMACRO_ITEM(isWWAN, IsWWAN)
#endif
GRPC_XMACRO_ITEM(reachable, Reachable)
GRPC_XMACRO_ITEM(transientConnection, TransientConnection)
GRPC_XMACRO_ITEM(connectionRequired, ConnectionRequired)
GRPC_XMACRO_ITEM(connectionOnTraffic, ConnectionOnTraffic)
GRPC_XMACRO_ITEM(interventionRequired, InterventionRequired)
GRPC_XMACRO_ITEM(connectionOnDemand, ConnectionOnDemand)
GRPC_XMACRO_ITEM(isLocalAddress, IsLocalAddress)
GRPC_XMACRO_ITEM(isDirect, IsDirect)

    
    gpr_atm grpc::testing::interop::g_got_sigint;
    
      int Join();
  void Interrupt();
    
    #include 'test/cpp/util/test_credentials_provider.h'
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/python/python_generator.h>
    
      // Generate filter for current set of keys and append to result_.
  filter_offsets_.push_back(result_.size());
  policy_->CreateFilter(&tmp_keys_[0], static_cast<int>(num_keys), &result_);
    
    TEST(LogTest, RandomRead) {
  const int N = 500;
  Random write_rnd(301);
  for (int i = 0; i < N; i++) {
    Write(RandomSkewedString(i, &write_rnd));
  }
  Random read_rnd(301);
  for (int i = 0; i < N; i++) {
    ASSERT_EQ(RandomSkewedString(i, &read_rnd), Read());
  }
  ASSERT_EQ('EOF', Read());
}
    
      ReadOptions read_options;
  Iterator *iter = db->NewIterator(read_options);
    
    class FilterPolicy;
    
      // Check first filter
  ASSERT_TRUE(reader.KeyMayMatch(0, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(2000, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(0, 'hello'));
    
    TEST(CRC, StandardResults) {
  // From rfc3720 section B.4.
  char buf[32];
    }
    
      int ReadBits(int nbits) {
    FillBitWindow();
    uint64_t val = (val_ >> (bits_left_ - nbits)) & ((1ULL << nbits) - 1);
    bits_left_ -= nbits;
    return val;
  }
    
    
    {}  // namespace guetzli
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    
    {}  // namespace guetzli

    
    namespace guetzli {
    }
    
    // Returns string with first letter to lowerCase
grpc::string unexportName(grpc::string s) {
	if (s.empty())
		return s;
	s[0] = static_cast<char>(std::tolower(s[0]));
	return s;
}
    
    static const char* MonsterStorage_method_names[] = {
  '/MyGame.Example.MonsterStorage/Store',
  '/MyGame.Example.MonsterStorage/Retrieve',
};
    
    
#endif  // GRPC_monster_5ftest__INCLUDED

    
    
    {  // Package name for the service
  grpc::string package_name;
};
    
    
    {
    {
    {      std::vector<FieldDef *> requiredProperties;
      std::copy_if(properties.begin(), properties.end(),
                   back_inserter(requiredProperties),
                   [](FieldDef const *prop) { return prop->required; });
      if (requiredProperties.size() > 0) {
        std::string required_string('      \'required\' : [');
        for (auto req_prop = requiredProperties.cbegin();
             req_prop != requiredProperties.cend(); ++req_prop) {
          required_string.append('\'' + (*req_prop)->name + '\'');
          if (*req_prop != requiredProperties.back()) {
            required_string.append(', ');
          }
        }
        required_string.append('],');
        code_ += required_string;
      }
      code_ += '      \'additionalProperties\' : false';
      std::string closeType('    }');
      if (*s != parser_.structs_.vec.back()) { closeType.append(','); }
      code_ += closeType;  // close type
    }
    code_ += '  },';  // close definitions