
        
        
    {			PathCombine(userConEmuCfgPath, userConfigDirPath, L'ConEmu-%COMPUTERNAME%.xml');
			ExpandEnvironmentStrings(userConEmuCfgPath, userConEmuCfgPath, sizeof(userConEmuCfgPath) / sizeof(userConEmuCfgPath[0]));
		}
	}
	else if (PathFileExists(userCfgPath)) // config/user_conemu.xml exists, use it. 
	{
		if (cfgRoot.length() == 0) // '/c [path]' was NOT specified
		{
			if (PathFileExists(cfgPath)) // vendor/conemu-maximus5/ConEmu.xml exists, copy vendor/conemu-maximus5/ConEmu.xml to config/user_conemu.xml.
			{
				if (!CopyFile(cfgPath, userCfgPath, FALSE))
				{
					MessageBox(NULL,
						(GetLastError() == ERROR_ACCESS_DENIED)
						? L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml! Access Denied.'
						: L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml!', MB_TITLE, MB_ICONSTOP);
					exit(1);
				}
			}
			else // vendor/conemu-maximus5/ConEmu.xml does not exist, copy config/user-conemu.xml to vendor/conemu-maximus5/ConEmu.xml
			{
				if (!CopyFile(userCfgPath, cfgPath, FALSE))
				{
					MessageBox(NULL,
						(GetLastError() == ERROR_ACCESS_DENIED)
						? L'Failed to copy config/user-conemu.xml file to vendor/conemu-maximus5/ConEmu.xml! Access Denied.'
						: L'Failed to copy config/user-conemu.xml file to vendor/conemu-maximus5/ConEmu.xml!', MB_TITLE, MB_ICONSTOP);
					exit(1);
				}
			}
		}
		else // '/c [path]' was specified, don't copy anything and use existing user_conemu.xml to start comemu.
		{
			PathCombine(userConEmuCfgPath, userConfigDirPath, L'user-ConEmu.xml');
		}
	}
	else if (cfgRoot.length() == 0) // '/c [path]' was NOT specified 
	{
		if (PathFileExists(cfgPath)) // vendor/conemu-maximus5/ConEmu.xml exists, copy vendor/conemu-maximus5/ConEmu.xml to config/user_conemu.xml
		{
			if (!CopyFile(cfgPath, userCfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml! Access Denied.'
					: L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
			else // vendor/ConEmu.xml.default config exists, copy Cmder vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml.
			{
				if (!CopyFile(defaultCfgPath, cfgPath, FALSE))
				{
					MessageBox(NULL,
						(GetLastError() == ERROR_ACCESS_DENIED)
						? L'Failed to copy vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml! Access Denied.'
						: L'Failed to copy vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml!', MB_TITLE, MB_ICONSTOP);
					exit(1);
				}
			}
		}
		else {
			if (!CopyFile(defaultCfgPath, cfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml! Access Denied.'
					: L'Failed to copy vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
	}
	else if (PathFileExists(cfgPath)) // vendor/conemu-maximus5/ConEmu.xml exists, copy vendor/conemu-maximus5/ConEmu.xml to config/user_conemu.xml
	{
		if (!CopyFile(cfgPath, userCfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml! Access Denied.'
				: L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
    
    
    {
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<ImageAugmenter *()> ImageAugmenterFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct ImageAugmenterReg
    : public dmlc::FunctionRegEntryBase<ImageAugmenterReg,
                                        ImageAugmenterFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register image augmenter
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IMAGE_AUGMENTER(aug_default)
 * .describe('default augmenter')
 * .set_body([]() {
 *     return new DefaultAugmenter();
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IMAGE_AUGMENTER(name)                            \
  DMLC_REGISTRY_REGISTER(::mxnet::io::ImageAugmenterReg, ImageAugmenterReg, name)
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_USE_OPENCV
    
      void InitParams(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    std::vector<std::pair<std::string, std::string> > kwargs_left;
    // init image rec param
    kwargs_left = param_.InitAllowUnknown(kwargs);
    // maximum prefetch threaded iter internal size
    const int kMaxPrefetchBuffer = 16;
    // init thread iter
    iter.set_max_capacity(kMaxPrefetchBuffer);
  }
    
    /*!
 * \file tvm_bridge.cc
 * \brief Bridge to run TVM's PackedFunc in MXNet's async engine.
 *
 *  This bridge is mainly used to expose MXNet's async engine push to
 *  TVM. It only uses TVM runtime in aheader only mode, which means
 *  there is no link dependencies.
 *
 *  Support for TVM is optional even when this code
 *  is always compiled and built with the project.
 *  We choose this strategy because we do not yet want
 *  llvm as dependency(which TVM uses). So instead we expose hook
 *  to TVM and let user use this feature when they have TVM installed.
 *
 *  We do require TVM and MXNet to be built with same C++ ABI of std::function
 */
#define TVM_RUNTIME_HEADER_ONLY 1
#include <tvm/runtime/packed_func.h>
#include <mxnet/c_api.h>
#include <mxnet/ndarray.h>
#include <mxnet/engine.h>
    
        info = MXNET_LAPACK_posv<DType>(MXNET_LAPACK_ROW_MAJOR, 'U',
      k, out.size(1), hadamard_prod.dptr_, hadamard_prod.stride_,
      out.dptr_, out.stride_);
  } else {
    Tensor<cpu, 2, DType> kr(Shape2(out.size(1), out.size(0)));
    AllocSpace(&kr);
    khatri_rao(kr, ts_arr);
    
    DMLC_REGISTER_PARAMETER(CropParam);
    
      ~CuDNNLocalResponseNormOp() {
    if (init_cudnn_) {
      CUDNN_CALL(cudnnDestroyLRNDescriptor(lrn_desc_));
      CUDNN_CALL(cudnnDestroyTensorDescriptor(shape_desc_));
    }
  }
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
        size_t* it = begin;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].left.begin(), row_split_tloc[tid].left.end(), it);
      it += row_split_tloc[tid].left.size();
    }
    size_t* split_pt = it;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].right.begin(), row_split_tloc[tid].right.end(), it);
      it += row_split_tloc[tid].right.size();
    }
    
    class SimpleBatchIteratorImpl : public BatchIteratorImpl {
 public:
  explicit SimpleBatchIteratorImpl(SparsePage* page) : page_(page) {}
  const SparsePage& operator*() const override {
    CHECK(page_ != nullptr);
    return *page_;
  }
  void operator++() override { page_ = nullptr; }
  bool AtEnd() const override { return page_ == nullptr; }
  SimpleBatchIteratorImpl* Clone() override {
    return new SimpleBatchIteratorImpl(*this);
  }
    }