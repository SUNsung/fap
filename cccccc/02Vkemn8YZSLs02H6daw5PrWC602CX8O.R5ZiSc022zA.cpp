
        
        void ChannelArguments::SetSslTargetNameOverride(const grpc::string& name) {
  SetString(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG, name);
}
    
    #include <grpc/support/port_platform.h>
    
    
    {  TraceContextEncoding() = delete;
  TraceContextEncoding(const TraceContextEncoding&) = delete;
  TraceContextEncoding(TraceContextEncoding&&) = delete;
  TraceContextEncoding operator=(const TraceContextEncoding&) = delete;
  TraceContextEncoding operator=(TraceContextEncoding&&) = delete;
};
    
    // Force InitProtoReflectionServerBuilderPlugin() to be called at static
// initialization time.
struct StaticProtoReflectionPluginInitializer {
  StaticProtoReflectionPluginInitializer() {
    InitProtoReflectionServerBuilderPlugin();
  }
} static_proto_reflection_plugin_initializer;
    
    #include <mutex>
    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    #include 'hphp/ppc64-asm/asm-ppc64.h'
#include 'hphp/ppc64-asm/decoded-instr-ppc64.h'
#include 'hphp/ppc64-asm/decoder-ppc64.h'
#include 'hphp/runtime/base/runtime-option.h'
#include 'hphp/util/trace.h'
#include <folly/MicroSpinLock.h>
    
          DS_form_t ds_formater {{
                             xop,
                             static_cast<uint32_t>(imm) >> 2,
                             static_cast<uint32_t>(ra),
                             static_cast<uint32_t>(rt),
                             op
                            }};
    
    std::string Config::IniName(const std::string& config,
                            bool prepend_hhvm /* = true */) {
  std::string out = '';
  if (prepend_hhvm) {
    out += 'hhvm.';
  }
  size_t idx = 0;
  for (auto& c : config) {
    // This is the first or last character
    if (idx == 0 || idx == config.length() - 1) {
      out += tolower(c);
    } else if (!isalpha(c)) {
      // Any . or _ or numeral is just output with no special behavior
      out += c;
    } else {
      if (isupper(c) && isupper(config[idx - 1 ]) && islower(config[idx + 1])) {
      // Handle something like 'SSLPort', and c = 'P', which will then put
      // the underscore between the 'L' and 'P'
        out += '_';
        out += tolower(c);
      } else if (islower(c) && isupper(config[idx + 1])) {
      // Handle something like 'PathDebug', and c = 'h', which will then put
      // the underscore between the 'h' and 'D'
        out += tolower(c);
        out += '_';
      } else {
      // Otherwise we just output as lower
        out += tolower(c);
      }
    }
    idx++;
  }
    }