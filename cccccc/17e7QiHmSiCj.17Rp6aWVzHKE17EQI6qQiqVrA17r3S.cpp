
        
        #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    // Get the name of a message's Java class without package name prefix.
string ClassNameWithoutPackage(const Descriptor* descriptor,
                               bool immutable) {
  return StripPackageName(descriptor->full_name(),
                          descriptor->file());
}
    
    EnumFieldGenerator::~EnumFieldGenerator() {}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace objectivec {
    }
    }
    }
    }
    
    #include <grpc/grpc_security.h>
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    Aggregation MillisDistributionAggregation() {
  return Aggregation::Distribution(BucketBoundaries::Explicit(
      {0,   0.01, 0.05, 0.1,  0.3,   0.6,   0.8,   1,     2,   3,   4,
       5,   6,    8,    10,   13,    16,    20,    25,    30,  40,  50,
       65,  80,   100,  130,  160,   200,   250,   300,   400, 500, 650,
       800, 1000, 2000, 5000, 10000, 20000, 50000, 100000}));
}
    
    #ifdef BOOST_REGEX_FI_WIN32_MAP // win32 mapfile
    
    
    {   if(greedy)
   {
      if((rep->leading) && (count < rep->max))
         restart = position;
      // push backtrack info if available:
      if(count - rep->min)
         push_single_repeat(count, rep, position, saved_state_greedy_single_repeat);
      // jump to next state:
      pstate = rep->alt.p;
      return true;
   }
   else
   {
      // non-greedy, push state and return true if we can skip:
      if(count < rep->max)
         push_single_repeat(count, rep, position, saved_state_rep_short_set);
      pstate = rep->alt.p;
      return (position == last) ? (rep->can_be_null & mask_skip) : can_start(*position, rep->_map, mask_skip);
   }
#ifdef __BORLANDC__
#pragma option pop
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    template <class F, class M, class O>
struct format_traits_imp
{
private:
   //
   // F must be a pointer, a function, or a class with a function call operator:
   //
   BOOST_STATIC_ASSERT((::boost::is_pointer<F>::value || ::boost::is_function<F>::value || ::boost::is_class<F>::value));
   static formatter_wrapper<typename unwrap_reference<F>::type> f;
   static M m;
   static O out;
   static boost::regex_constants::match_flag_type flags;
public:
   BOOST_STATIC_CONSTANT(int, value = sizeof(check_is_formatter(f(m), f(m, out), f(m, out, flags))));
};
    
    template<>
struct padding3<4>
{
   enum{
      padding_size = 4,
      padding_mask = 3
   };
};
    
    #endif  // BOOST_REGEX_V4_REGEX_SEARCH_HPP