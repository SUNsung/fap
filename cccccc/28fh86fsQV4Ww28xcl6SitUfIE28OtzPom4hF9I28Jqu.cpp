
        
        
    {  return 0;
}

    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    namespace grpc {
namespace testing {
    }
    }
    
    static void get_cpu_usage(unsigned long long* total_cpu_time,
                          unsigned long long* idle_cpu_time) {
#ifdef __linux__
  std::ifstream proc_stat('/proc/stat');
  proc_stat.ignore(5);
  std::string cpu_time_str;
  std::string first_line;
  std::getline(proc_stat, first_line);
  std::stringstream first_line_s(first_line);
  for (int i = 0; i < 10; ++i) {
    std::getline(first_line_s, cpu_time_str, ' ');
    *total_cpu_time += std::stol(cpu_time_str);
    if (i == 3) {
      *idle_cpu_time = std::stol(cpu_time_str);
    }
  }
#else
  gpr_log(GPR_INFO, 'get_cpu_usage(): Non-linux platform is not supported.');
#endif
}
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
    #include <grpc/support/log.h>
    
    static int set_ifname(struct ifaddrs* ifaddr, int interface) {
	char buf[IFNAMSIZ] = {0};
	char* name = if_indextoname(interface, buf);
	if (name == NULL) {
		return -1;
	}
	ifaddr->ifa_name = new char[strlen(name) + 1];
	strncpy(ifaddr->ifa_name, name, strlen(name) + 1);
	return 0;
}
    
    OS::PowerState PowerIphone::get_power_state() {
	if (UpdatePowerInfo()) {
		return power_state;
	} else {
		return OS::POWERSTATE_UNKNOWN;
	}
}
    
    // store all colliding object
struct GodotAllConvexResultCallback : public btCollisionWorld::ConvexResultCallback {
public:
	PhysicsDirectSpaceState::ShapeResult *m_results;
	int m_resultMax;
	int count;
	const Set<RID> *m_exclude;
    }
    
    /**
 * oc_ilog32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_32() or OC_ILOGNZ_32() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog32(ogg_uint32_t _v);
/**
 * oc_ilog64 - Integer binary logarithm of a 64-bit value.
 * @_v: A 64-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * The OC_ILOG_64() or OC_ILOGNZ_64() macros may be able to use a builtin
 *  function instead, which should be faster.
 */
int oc_ilog64(ogg_int64_t _v);
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b),'r'(a<<16)
  );
  return rd_hi;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv4(a, b))
    
    #elif (defined(OPUS_X86_MAY_HAVE_SSE) && !defined(OPUS_X86_PRESUME_SSE)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE2) && !defined(OPUS_X86_PRESUME_SSE2)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE4_1) && !defined(OPUS_X86_PRESUME_SSE4_1)) || \
  (defined(OPUS_X86_MAY_HAVE_AVX) && !defined(OPUS_X86_PRESUME_AVX))
    
    /* (a32 * (opus_int32)((opus_int16)(b32))) >> 16 output have to be 32bit int */
#undef silk_SMULWB
static OPUS_INLINE opus_int32 silk_SMULWB_armv4(opus_int32 a, opus_int16 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#silk_SMULWB\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(a), 'r'(b<<16)
  );
  return rd_hi;
}
#define silk_SMULWB(a, b) (silk_SMULWB_armv4(a, b))
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
}
    
    namespace HPHP { namespace jit {
///////////////////////////////////////////////////////////////////////////////
    }
    }
    
    #include <cstdint>
#include <vector>
#include <numa.h>
    
    void APCObject::Delete(APCHandle* handle) {
  auto const obj = fromHandle(handle);
  auto const allocSize = sizeof(APCObject) + obj->m_propCount *
    (obj->m_persistent ? sizeof(APCHandle*) : sizeof(Prop));
  obj->~APCObject();
  // No need to run Prop destructors.
  apc_sized_free(obj, allocSize);
}
    
    Variant *get_intercept_handler(const String& name, int8_t* flag) {
  TRACE(1, 'get_intercept_handler %s flag is %d\n',
        name.get()->data(), (int)*flag);
  if (*flag == -1) {
    Lock lock(s_mutex);
    if (*flag == -1) {
      auto sd = makeStaticString(name.get());
      auto &entry = s_registered_flags[StrNR(sd)];
      entry.second.push_back(flag);
      *flag = entry.first;
    }
    if (!*flag) return nullptr;
  }
    }
    
        std::wstring m_trainCriterionNodeName;
    std::wstring m_evalCriterionNodeName;
    
    
    {        // perform the operation on one long vector
        msra::math::float4 threshold4(threshold);
        foreach_index (i, us4)
        {
            us4[i] &= ((refs4[i] <= threshold4) & (refs4[i] >= -threshold4));
        }
    }
    
    
    {
    {            // nodeToDelete is a child
            if (child == nodeToDelete)
            {
                // this used to call DetatchInputs(), but it's better for MEL to retain other inputs
                node->SetInput(i, nullptr);
                break;
            }
        }
    }
    
    
        // for every single bn node, the statistics is the average of mean and variance for several times in forward prop
        // the forward prop is from the feature to the current bn node
        for (int iter = 0; iter < iters; iter++)
        {
            // during the bn stat, dataRead must be ensured
            bool wasDataRead = DataReaderHelpers::GetMinibatchIntoNetwork<ElemType>(*dataReader, m_net,
                nullptr, useDistributedMBReading, useParallelTrain, inputMatrices, actualMBSize, m_mpi);
    }
    
    // Data Writer class
// interface for clients of the Data Writer
// mirrors the IDataWriter interface, except the Init method is private (use the constructor)
class DataWriter : public IDataWriter, protected Plugin
{
    IDataWriter* m_dataWriter; // writer
    }
    
    
    {
    {
    {    void setverbosity(int veb)
    {
        verbosity = veb;
        numlattices.setverbosity(veb);
        denlattices.setverbosity(veb);
    }
};
} }

    
    #pragma once
    
    #if DMLC_ENABLE_STD_THREAD
#include './sparse_page_source.h'
#include '../common/common.h'
    
      iter->BeforeFirst();
  while (iter->Next()) {
     auto batch = iter->Value();
    #pragma omp parallel for schedule(static)
    for (long i = 0; i < static_cast<long>(batch.Size()); ++i) { // NOLINT(*)
      int tid = omp_get_thread_num();
      auto inst = batch[i];
      for (bst_uint j = 0; j < inst.length; ++j) {
        builder.Push(
            inst[j].index,
            Entry(static_cast<bst_uint>(batch.base_rowid + i), inst[j].fvalue),
            tid);
      }
    }
  }
    
    
    {
    {
    {  // internal function to make one batch from row iter.
  void MakeOneBatch(
    SparsePage *pcol, bool sorted);
};
}  // namespace data
}  // namespace xgboost
#endif  // XGBOOST_DATA_SIMPLE_DMATRIX_H_
