
        
          // Assignment releases the old value and acquires the new.
  template <typename U> linked_ptr& operator=(linked_ptr<U> const& ptr) {
    depart();
    copy(&ptr);
    return *this;
  }
    
    template<typename Dtype>
void DelCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    delete v->at(i);
}
    
    
    {
    {
    {  // creat mean image.
  inline void CreateMeanImg(void) {
    if (param_.verbose) {
      LOG(INFO) << 'Cannot find ' << param_.mean_img
                << ': create mean image, this will take some time...';
    }
    double start = dmlc::GetTime();
    size_t imcnt = 1;  // NOLINT(*)
    CHECK(this->Next_()) << 'input iterator failed.';
    meanimg_.Resize(outimg_.shape_);
    mshadow::Copy(meanimg_, outimg_);
    while (this->Next_()) {
      meanimg_ += outimg_;
      imcnt += 1;
      double elapsed = dmlc::GetTime() - start;
      if (imcnt % 10000L == 0 && param_.verbose) {
        LOG(INFO) << imcnt << ' images processed, ' << elapsed << ' sec elapsed';
      }
    }
    meanimg_ *= (1.0f / imcnt);
    // save as mxnet python compatible format.
    TBlob tmp = meanimg_;
    {
      std::unique_ptr<dmlc::Stream> fo(dmlc::Stream::Create(param_.mean_img.c_str(), 'w'));
      NDArray::Save(fo.get(),
                    {NDArray(tmp, 0)},
                    {'mean_img'});
    }
    if (param_.verbose) {
      LOG(INFO) << 'Save mean image to ' << param_.mean_img << '..';
    }
    meanfile_ready_ = true;
    this->BeforeFirst();
  }
};
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_ITER_NORMALIZE_H_

    
    
    {
    {
    { private:
  /*! \brief output data */
  DataBatch *out_;
  /*! \brief queue to be recycled */
  std::queue<DataBatch*> recycle_queue_;
};
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_ITER_PREFETCHER_H_

    
    KVStore* KVStore::Create(const char *type_name) {
  std::string tname = type_name;
  std::transform(tname.begin(), tname.end(), tname.begin(), ::tolower);
  KVStore* kv = nullptr;
  bool use_device_comm = false;
  auto has = [tname](const std::string& pattern) {
    return tname.find(pattern) != std::string::npos;
  };
  if (has('device')) {
    use_device_comm = true;
  }
    }
    
    /*!
 *  Copyright (c) 2017 by Contributors
 *  \file krprod.h
 *  \brief Core function for Khatri-Rao product
 *  \author Jencir Lee, Chris Swierczewski
 */
#ifndef MXNET_OPERATOR_CONTRIB_KRPROD_H_
#define MXNET_OPERATOR_CONTRIB_KRPROD_H_
#include <algorithm>
#include <utility>
#include <vector>
#include 'mshadow/tensor.h'
#include '../operator_common.h'
#include '../c_lapack_api.h'
    
    MXNET_REGISTER_OP_PROPERTY(IdentityAttachKLSparseReg, IdentityAttachKLSparseRegProp)
.describe('Apply a sparse regularization to the output a sigmoid activation function.')
.add_argument('data', 'NDArray-or-Symbol', 'Input data.')
.add_arguments(IdentityAttachKLSparseRegParam::__FIELDS__());
    
                if (m_varKind == VariableKind::Input)
            {
                for (auto dim : m_shape.Dimensions())
                {
                    if (dim == 0)
                        InvalidArgument('Variable '%S' has invalid shape '%S'.', AsString().c_str(), m_shape.AsString().c_str());
                }
            }
    
    
    {private:
    shared_ptr<Matrix<ElemType>> m_maxIndexes0, m_maxIndexes1;
    shared_ptr<Matrix<ElemType>> m_maxValues;
    int m_topK;
};
    
            if (aliasInfo.releaseCount >= aliasInfo.totalCount)
            LogicError('number of alias instances exceeded expectation');
    
        // ComputationNode derived classes are guaranteed to have a MBLayout
    if (isFinalValidationPass && !HasMBLayout())
        InvalidArgument('%ls: Input [%s] must operate on minibatches.', NodeDescription().c_str(), string(shapeB).c_str());
    
    int32_t
RuleBasedCollator::internalGetShortDefinitionString(const char *locale,
                                                    char *buffer, int32_t capacity,
                                                    UErrorCode &errorCode) const {
    if(U_FAILURE(errorCode)) { return 0; }
    if(buffer == NULL ? capacity != 0 : capacity < 0) {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return 0;
    }
    if(locale == NULL) {
        locale = internalGetLocaleID(ULOC_VALID_LOCALE, errorCode);
    }
    }
    
    static UBool copyAsSuperscript(
        const UnicodeString &s,
        int32_t beginIndex,
        int32_t endIndex,
        UnicodeString &result,
        UErrorCode &status) {
    if (U_FAILURE(status)) {
        return FALSE;
    }
    for (int32_t i = beginIndex; i < endIndex;) {
        UChar32 c = s.char32At(i);
        int32_t digit = u_charDigitValue(c);
        if (digit < 0) {
            status = U_INVALID_CHAR_FOUND;
            return FALSE;
        }
        result.append(kSuperscriptDigits[digit]);
        i += U16_LENGTH(c);
    }
    return TRUE;
}
    
    #endif

    
    
    {private:
    int32_t fMax;
    int32_t fMin;
};
    
        /**
     * Returns TRUE if this class can format positiveValue using
     * the given range of digit counts.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UBool canFormat(
            int32_t positiveValue, const IntDigitCountRange &range);
    
    /**
 * Implement UnicodeFunctor
 */
void StringMatcher::setData(const TransliterationRuleData* d) {
    data = d;
    int32_t i = 0;
    while (i<pattern.length()) {
        UChar32 c = pattern.char32At(i);
        UnicodeFunctor* f = data->lookup(c);
        if (f != NULL) {
            f->setData(data);
        }
        i += U16_LENGTH(c);
    }
}
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
    TEST(ByteTest, CopyConstructor) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  Byte another_value(value);
  EXPECT_EQ(another_value.to_hex_string(), value.to_hex_string());
  EXPECT_EQ(another_value.to_binary_string(), value.to_binary_string());
}
    
    int ObjectQualityInfo60C::probexist(const std::uint8_t* bytes,
                                    int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(5, 3);
    }
    
      MatrixXd mat_golden(20, 10);
  // clang-format off
  mat_golden <<
    -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     2, -1,  0,  0,  0,  0,  0,  0,  0,  0,
    -2,  1,  0,  0,  0,  0,  0,  0,  0,  0,
    -1,  2, -1,  0,  0,  0,  0,  0,  0,  0,
     1, -2,  1,  0,  0,  0,  0,  0,  0,  0,
     0, -1,  2, -1,  0,  0,  0,  0,  0,  0,
     0,  1, -2,  1,  0,  0,  0,  0,  0,  0,
     0,  0, -1,  2, -1,  0,  0,  0,  0,  0,
     0,  0,  1, -2,  1,  0,  0,  0,  0,  0,
     0,  0,  0, -1,  2, -1,  0,  0,  0,  0,
     0,  0,  0,  1, -2,  1,  0,  0,  0,  0,
     0,  0,  0,  0, -1,  2, -1,  0,  0,  0,
     0,  0,  0,  0,  1, -2,  1,  0,  0,  0,
     0,  0,  0,  0,  0, -1,  2, -1,  0,  0,
     0,  0,  0,  0,  0,  1, -2,  1,  0,  0,
     0,  0,  0,  0,  0,  0, -1,  2, -1,  0,
     0,  0,  0,  0,  0,  0,  1, -2,  1,  0,
     0,  0,  0,  0,  0,  0,  0, -1,  2, -1,
     0,  0,  0,  0,  0,  0,  0,  1, -2,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
    void SplineSegKernel::CalculateThirdOrderDerivative(const uint32_t num_params) {
  kernel_third_order_derivative_ =
      Eigen::MatrixXd::Zero(num_params, num_params);
  for (int r = 3; r < kernel_third_order_derivative_.rows(); ++r) {
    for (int c = 3; c < kernel_third_order_derivative_.cols(); ++c) {
      kernel_third_order_derivative_(r, c) =
          (r * r - r) * (r - 2) * (c * c - c) * (c - 2) / (r + c - 5.0);
    }
  }
}
    
    
    {  auto &brakerpt = chassis_detail.gem().brake_rpt_6c();
  EXPECT_DOUBLE_EQ(brakerpt.manual_input(), 0.258);
  EXPECT_DOUBLE_EQ(brakerpt.commanded_value(), 0.772);
  EXPECT_DOUBLE_EQ(brakerpt.output_value(), 4.37);
  EXPECT_EQ(brakerpt.brake_on_off(), Brake_rpt_6c::BRAKE_ON_OFF_ON);
}
    
    // config detail: {'name': 'commanded_value', 'enum': {0:
// 'COMMANDED_VALUE_HEADLIGHTS_OFF', 1: 'COMMANDED_VALUE_LOW_BEAMS', 2:
// 'COMMANDED_VALUE_HIGH_BEAMS'}, 'precision': 1.0, 'len': 8, 'is_signed_var':
// False, 'offset': 0.0, 'physical_range': '[0|2]', 'bit': 15, 'type': 'enum',
// 'order': 'motorola', 'physical_unit': ''}
Headlight_rpt_77::Commanded_valueType Headlightrpt77::commanded_value(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 8);
    }