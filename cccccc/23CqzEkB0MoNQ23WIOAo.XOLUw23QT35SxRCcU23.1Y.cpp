// Implements the part of the interface that caches and returns remote
// device status attributes.
class WorkerCachePartial : public WorkerCacheInterface {
 public:
  bool GetDeviceLocalityNonBlocking(const string& device,
                                    DeviceLocality* locality) override;
    }
    
    #include 'tensorflow/core/kernels/cwise_ops_common.h'
    
    // Functor used by ReverseOp to do the computations.
template <typename Device, typename T, int Dims>
struct Reverse {
  void operator()(const Device& d, typename TTypes<T, Dims>::ConstTensor input,
                  const Eigen::array<bool, Dims>& reverse_dims,
                  typename TTypes<T, Dims>::Tensor output) {
    output.device(d) = input.reverse(reverse_dims);
  }
};
    
    void printDims(char* buffer, int max_size, int* dims, int num_dims) {
  if (max_size <= 0) return;
  buffer[0] = '?';
  int size = 1;
  for (int i = 1; i < num_dims; ++i) {
    if (max_size > size) {
      int written_size =
          snprintf(buffer + size, max_size - size, ',%d', dims[i]);
      if (written_size < 0) return;
      size += written_size;
    }
  }
}
    
    JNIEXPORT jintArray JNICALL
Java_org_tensorflow_lite_Tensor_shape(JNIEnv* env, jclass clazz, jlong handle) {
  TfLiteTensor* tensor = convertLongToTensor(env, handle);
  if (tensor == nullptr) return nullptr;
  int num_dims = tensor->dims->size;
  jintArray result = env->NewIntArray(num_dims);
  env->SetIntArrayRegion(result, 0, num_dims, tensor->dims->data);
  return result;
}
    
      Notification extend_done;
  Notification extend_can_start;
    
    // print model stats
// Returns a pair (model params, non-null model params) for aggregate statistics printing.
template <class M>
std::pair<unsigned int, unsigned int> printmatvaluedistributionf(const char *name, const M &m)
{
    const unsigned int num = (unsigned int) (m.rows() * m.cols());
    if (num == 0)
        return std::make_pair(0UL, 0UL);
    fprintf(stderr, '\n###### absolute weight value distribution %s (%d, %d) ######\n', name, m.rows(), m.cols());
    }
    
        alpha = 3.3f;
    beta = 1.3f;
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAdense, transposeB, beta, mC);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAsparse, transposeB, beta, mD);
    
    
    {
    {        // the rest is done in a lambda that is only evaluated when a virgin network is needed
        // Note that evaluating the BrainScript *is* instantiating the network, so the evaluate call must be inside the lambda.
        createNetworkFn = [expr](DEVICEID_TYPE /*deviceId*/)
        {
            // evaluate the parse tree, particularly the top-level field 'network'
            // Evaluating it will create the network.
            let object = EvaluateField(expr, L'network');                   // this comes back as a BS::Object
            let network = dynamic_pointer_cast<ComputationNetwork>(object); // cast it
            if (!network)
                LogicError('BuildNetworkFromDescription: ComputationNetwork not what it was meant to be');
            return network;
        };
        return true;
    }
    else
        return false;
}
    
    // GetWriter - get a reader type from the DLL
// The F version gets the 'float' version, and D gets 'double'.
extern 'C' DATAWRITER_API void GetWriterF(IDataWriter** pwriter);
extern 'C' DATAWRITER_API void GetWriterD(IDataWriter** pwriter);
    
    // not in the cache yet: create it (or not if no such member)
void /*CustomConfigRecord::*/ ComputationNodeBase::LazyCreateConfigMember(const wstring& id) const /*override*/
{
    if (id == L'name') // node name
    {
        InsertConfigMember(id, ConfigValuePtr(make_shared<String>(NodeName()), [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'operation') // type ('operation' parameter to ComputationNode BS constructor)
    {
        InsertConfigMember(id, ConfigValuePtr(make_shared<String>(OperationName()), [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'dim') // scalar dimension (#elements) per sample
    {
        // Note: When freshly creating models, dimensions may not have been inferred yet.
        size_t dim = GetSampleLayout().GetNumElements();
        if (dim == 0)
            InvalidArgument('%ls.dim: The node's dimensions are not known yet.', NodeName().c_str());
        InsertConfigMember(id, MakePrimitiveConfigValuePtr((double) dim, [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    else if (id == L'dims') // tensor dimension vector
    {
        NOT_IMPLEMENTED;
    }
    // TODO: Think through what tags mean. Do we allow user-named tags? Is it a set or a single string? If set, then how to compare?
    //else if (id == L'tag')
    //{
    //}
    else if (id == L'inputs' || id == OperationName() + L'Args') // e.g. node.PlusArg[0] = alternative for node.inputs[0] that shows a user that this is a Plus node
    {
        std::vector<ConfigValuePtr> inputsAsValues;
        for (let& input : GetInputs())
            inputsAsValues.push_back(ConfigValuePtr(input, [](const std::wstring &) { LogicError('should not get here'); }, L''));
        let& arr = make_shared<ScriptableObjects::ConfigArray>(0, move(inputsAsValues));
        InsertConfigMember(id, ConfigValuePtr(arr, [](const std::wstring &) { LogicError('should not get here'); }, L''));
    }
    // any other id does not exist, don't create any entry for it
}
    
    	if (PathFileExists(cpuCfgPath)) {
		if (PathFileExists(cfgPath)) {
			if (!CopyFile(cfgPath, cpuCfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to ConEmu-%COMPUTERNAME%.xml backup location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to ConEmu-%COMPUTERNAME%.xml backup location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
		else
		{
			if (!CopyFile(cpuCfgPath, cfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu-%COMPUTERNAME%.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu-%COMPUTERNAME%.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
	}
	else if (PathFileExists(userCfgPath)) {
		if (PathFileExists(cfgPath)) {
			if (!CopyFile(cfgPath, userCfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to backup location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to backup location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
		else
		{
			if (!CopyFile(userCfgPath, cfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy ConEmu.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
					: L'Failed to copy ConEmu.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
	}
	else if (PathFileExists(cfgPath)) {
		if (!CopyFile(cfgPath, userCfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy ConEmu.xml file to user-conemu.xml backup location! Restart Cmder as Administrator.'
				: L'Failed to copy ConEmu.xml file to user-conemu.xml backup location!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
	}
	else {
		if (!CopyFile(defaultCfgPath, cfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy Cmder default ConEmu.xml file to vendored ConEmu.xml location! Restart Cmder as Administrator.'
				: L'Failed to copy Cmder default ConEmu.xml file to vendored ConEmu.xml location!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
	}
    
    namespace boost {
namespace asio {
    }
    }
    
    #endif // BOOST_ASIO_DETAIL_ARRAY_FWD_HPP

    
    
    {private:
  CompletionCondition completion_condition_;
};
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #include <boost/asio/detail/config.hpp>
    
    #include <boost/asio/detail/push_options.hpp>
    
    template <typename Time_Traits>
void dev_poll_reactor::add_timer_queue(timer_queue<Time_Traits>& queue)
{
  do_add_timer_queue(queue);
}
    
    // implements rabit error handling.
extern 'C' {
  void XGBoostAssert_R(int exp, const char *fmt, ...);
  void XGBoostCheck_R(int exp, const char *fmt, ...);
}
    
      /*! \brief constructor */
  SparsePage() {
    this->Clear();
  }
  /*! \return number of instance in the page */
  inline size_t Size() const {
    return offset.size() - 1;
  }
  /*! \return estimation of memory cost of this page */
  inline size_t MemCostBytes() const {
    return offset.size() * sizeof(size_t) + data.size() * sizeof(Entry);
  }
  /*! \brief clear the page */
  inline void Clear() {
    base_rowid = 0;
    offset.clear();
    offset.push_back(0);
    data.clear();
  }
    
    using LogCallbackRegistryStore = dmlc::ThreadLocalStore<LogCallbackRegistry>;
    
    TEST(Metric, PoissionNegLogLik) {
  xgboost::Metric * metric = xgboost::Metric::Create('poisson-nloglik');
  ASSERT_STREQ(metric->Name(), 'poisson-nloglik');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0.5f, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.2f, 0.1f, 0.2f},
                            {  0,   0,   1,   1}),
              1.1280f, 0.001f);
}

    
    
    {}  // namespace xgboost
    
    #include <dmlc/base.h>
#include <dmlc/omp.h>
#include <cmath>
#include <iostream>
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
      /// If list is empty, return false and leave *result unchanged.
  /// Else, remove the first/last elem, store it in *result, and return true
  bool PopLeft(const std::string& key, std::string* result);  // First
  bool PopRight(const std::string& key, std::string* result); // Last
    
      // when we know more data has been written to the file. we can use this
  // function to force the reader to look again in the file.
  // Also aligns the file position indicator to the start of the next block
  // by reading the rest of the data from the EOF position to the end of the
  // block that was partially read.
  void UnmarkEOF();
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
    namespace rocksdb {
    }
    
    
    { private:
  MergingIterator* merge_iter;
  InternalIterator* first_iter;
  bool use_merging_iter;
  Arena* arena;
};
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }