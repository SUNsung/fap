
        
            const DWORD BUFF_SIZE{ 512 };
    char szBuffer[BUFF_SIZE]{};
    
        (void)ctx;
    ARG_CHECK(sig != NULL);
    ARG_CHECK(sigin != NULL);
    
    bool ParseInt64(const std::string& str, int64_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtoll will not set errno if valid
    long long int n = strtoll(str.c_str(), &endp, 10);
    if(out) *out = (int64_t)n;
    // Note that strtoll returns a *long long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int64_t*.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int64_t>::min() &&
        n <= std::numeric_limits<int64_t>::max();
}
    
        strKey = 'calories';
    BOOST_CHECK(obj.pushKV(strKey, (int) 12));
    
    #endif // BITCOIN_CRYPTO_RIPEMD160_H

    
    namespace leveldb {
    }
    
    inline Int64 
FastHufDecoder::readBits
    (int numBits,
     Int64 &buffer,             // c
     int &bufferNumBits,        // lc
     const char *&currByte)     // in
{
    while (bufferNumBits < numBits)
    {
        buffer = (buffer << 8) | *(unsigned char*)(currByte++);
        bufferNumBits += 8;
    }
    }
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    void
InputPart::readPixels (int scanLine1, int scanLine2)
{
    file->readPixels(scanLine1, scanLine2);
}
    
    #ifndef IMFINPUTPART_H_
#define IMFINPUTPART_H_
    
      GpuIdType const n_available_devices = n_devices_visible - gpu_id;
    
    #if _MSC_VER >= 1800
  return lgamma(v);
#else
#pragma message('Warning: lgamma function was not available until VS2013'\
                ', poisson regression will be disabled')
  utils::Error('lgamma function was not available until VS2013');
  return static_cast<T>(1.0);
#endif  // _MSC_VER >= 1800
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(const HostDeviceVector<bst_float> &preds,
                   const MetaInfo &info,
                   int iter,
                   HostDeviceVector<GradientPair> *out_gpair) override {
    out_gpair->Resize(preds.Size());
    const std::vector<bst_float>& preds_h = preds.HostVector();
    std::vector<GradientPair>& out_gpair_h = out_gpair->HostVector();
    const std::vector<bst_float>& labels_h = info.labels_.HostVector();
    for (size_t i = 0; i < preds_h.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (labels_h[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds_h[i]));
      // this is the gradient
      bst_float grad = (p - labels_h[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair_h.at(i) = GradientPair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(HostDeviceVector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = io_preds->HostVector();
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
    
    {    // Read 5 bytes - the maximum we will need
    uint64_t tmp = static_cast<uint64_t>(buffer_[start_byte_idx - 4]) << 32 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 3]) << 24 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 2]) << 16 |
                   static_cast<uint64_t>(buffer_[start_byte_idx - 1]) << 8 |
                   buffer_[start_byte_idx];
    int bit_shift =
        (bits_per_byte - ((offset_ + 1) * symbol_bits_)) % bits_per_byte;
    tmp >>= bit_shift;
    // Mask off unneeded bits
    uint64_t mask = (1 << symbol_bits_) - 1;
    return static_cast<T>(tmp & mask);
  }