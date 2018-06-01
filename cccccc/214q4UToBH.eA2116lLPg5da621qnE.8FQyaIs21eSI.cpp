
        
          // The resource is deleted from the resource manager only when it is private
  // to kernel. Ideally the resource should be deleted when it is no longer held
  // by anyone, but it would break backward compatibility.
  ~ResourceOpKernel() override {
    if (resource_ != nullptr) {
      resource_->Unref();
      if (cinfo_.resource_is_private_to_kernel()) {
        if (!cinfo_.resource_manager()
                 ->template Delete<T>(cinfo_.container(), cinfo_.name())
                 .ok()) {
          // Do nothing; the resource can have been deleted by session resets.
        }
      }
    }
  }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
REGISTER_COMPLEX(GPU, float, complex64);
REGISTER_COMPLEX(GPU, double, complex128);
#endif
    
    Status SinhGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      {{'cosh'}, 'Cosh', {'x'}, {}, {'dy'}},
      {{'dx'}, 'Mul', {'dy', 'cosh'}},  // dy * cosh(x)
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Sinh', SinhGrad);
    
    namespace internal {
    }
    
      // Sent when a CrxInstaller finishes. Source is the CrxInstaller that
  // finished. The details are the extension which was installed.
  NOTIFICATION_CRX_INSTALLER_DONE,
    
    // Changes the notification timeout to |new_timeout|, returns the old timeout.
base::TimeDelta SetNotificationTimeoutForTesting(base::TimeDelta new_timeout);
    
      std::unique_ptr<gfx::SingletonHwndObserver> singleton_hwnd_observer_;
    
    
    { protected:
  virtual ~PrintViewManagerObserver() {}
};
    
    #endif  // GRPC_TEST_CPP_UTIL_BENCHMARK_CONFIG_H

    
    std::vector<grpc::string_ref> SecureAuthContext::GetPeerIdentity() const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter = grpc_auth_context_peer_identity(ctx_);
  std::vector<grpc::string_ref> identity;
  const grpc_auth_property* property = nullptr;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    identity.push_back(
        grpc::string_ref(property->value, property->value_length));
  }
  return identity;
}
    
    
    {	if (_is_multiplayer) {
		emit_signal('connection_failed');
	} else {
		emit_signal('connection_error');
	}
}
    
    	void set_verify_ssl_enabled(bool p_verify_ssl);
	bool is_verify_ssl_enabled() const;
    
    
    {	Vector<StringName> get_native_call_types();
};
    
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
    
    # if defined(OC_COLLECT_METRICS)
struct oc_mode_metrics{
  double fragw;
  double satd;
  double rate;
  double rmse;
  double satd2;
  double satdrate;
  double rate2;
  double satdrmse;
  double rmse2;
};
    
    #endif

    
    
    {
    {            assert(index != sampleSize);
            dest[destIndex++] = static_cast<DestType>(index);
        }
        assert(currentp == lastp);
    }
    
    void GranularGPUDataTransferer::CopyCPUToGPUAsync(const void* cpuBuffer, size_t numElements, size_t elementSize, void* gpuBuffer)
{
    PrepareDevice(m_deviceId);
    cudaMemcpyAsync(gpuBuffer, cpuBuffer, numElements * elementSize, cudaMemcpyHostToDevice, GetAssignStream()) || 'cudaMemcpyAsync failed';
}
    
            // set the include paths to all paths that configs were read from; no additional configurable include paths are supported by BrainScriptNetworkBuilder
        auto includePaths = ConfigParameters::GetBrainScriptNetworkBuilderIncludePaths();
    
        CopyNodeFlags GetOptionalCopyNodeFlags(const ConfigParamList& params, const size_t numFixedParams)
    {
        CopyNodeFlags copyFlags = CopyNodeFlags::copyNodeAll; // by default copy both values and link structure
    }
    
    template void FindConfigNames<ConfigParameters>(const ConfigParameters&, std::string key, std::vector<std::wstring>& names);
template void FindConfigNames<ScriptableObjects::IConfigRecord>(const ScriptableObjects::IConfigRecord&, std::string key, std::vector<std::wstring>& names);
    
    class latticepair : public std::pair<msra::lattices::lattice, msra::lattices::lattice>
{
public:
    // NOTE: we don't check numerator lattice now
    size_t getnumframes() const
    {
        return second.getnumframes();
    }
    size_t getnumnodes() const
    {
        return second.getnumnodes();
    }
    size_t getnumedges() const
    {
        return second.getnumedges();
    }
    std::wstring getkey() const
    {
        return second.getkey();
    }
};
    
        // construct from a single float, copy to all components
    float4(float f)
        : v(_mm_load1_ps(&f))
    {
    }
    // float4 (float f) : v (_mm_set_ss (f)) {}  // code seems more complex than _mm_load1_ps()
    
    	PathCombine(configDirPath, exeDir, L'config');
	if (wcscmp(userConfigDirPath, L'') == 0)
	{
		PathCombine(userConfigDirPath, exeDir, L'config');
	}
	else
	{
		PathCombine(userBinDirPath, userConfigDirPath, L'bin');
		SHCreateDirectoryEx(0, userBinDirPath, 0);
    }
    
    // explicit instantiations are required, as HostDeviceVector isn't header-only
template class HostDeviceVector<bst_float>;
template class HostDeviceVector<GradientPair>;
template class HostDeviceVector<unsigned int>;
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('map@2');
  ASSERT_STREQ(metric->Name(), 'map@2');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.25f, 0.001f);
}

    
    class ShotgunUpdater : public LinearUpdater {
 public:
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> > &args) override {
    param_.InitAllowUnknown(args);
    selector_.reset(FeatureSelector::Create(param_.feature_selector));
  }
  void Update(HostDeviceVector<GradientPair> *in_gpair, DMatrix *p_fmat,
              gbm::GBLinearModel *model, double sum_instance_weight) override {
    std::vector<GradientPair> &gpair = in_gpair->HostVector();
    param_.DenormalizePenalties(sum_instance_weight);
    const int ngroup = model->param.num_output_group;
    }
    }
    
    TEST(IOBuf, positionTracking) {
  unique_ptr<IOBuf> iobuf1(IOBuf::create(6));
  iobuf1->append(6);
  unique_ptr<IOBuf> iobuf2(IOBuf::create(24));
  iobuf2->append(24);
  iobuf1->prependChain(std::move(iobuf2));
    }
    
    template <typename T>
struct constexpr_abs_helper<
    T,
    typename std::enable_if<std::is_floating_point<T>::value>::type> {
  static constexpr T go(T t) {
    return t < static_cast<T>(0) ? -t : t;
  }
};
    
      BlockingQueueAddResult addWithPriority(T item, int8_t priority) override {
    int mid = getNumPriorities() / 2;
    size_t queue = priority < 0
        ? std::max(0, mid + priority)
        : std::min(getNumPriorities() - 1, mid + priority);
    CHECK_LT(queue, queues_.size());
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queues_[queue].write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queues_[queue].blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
    
    {  auto const slack = currentCapacity - currentSize;
  if (slack * 2 > currentSize) {
    // Too much slack, malloc-copy-free cycle:
    auto const result = checkedMalloc(newCapacity);
    std::memcpy(result, p, currentSize);
    free(p);
    return result;
  }
  // If there's not too much slack, we realloc in hope of coalescing
  return checkedRealloc(p, newCapacity);
}
    
    #include <folly/logging/example/lib.h>