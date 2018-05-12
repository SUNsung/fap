
        
        class EventDisabler : public ui::EventRewriter {
 public:
  EventDisabler();
  ~EventDisabler() override;
    }
    
    
    {}  // namespace atom
    
      // Sets time interval between updates. By default list of sources and their
  // thumbnail are updated once per second. If called after StartUpdating() then
  // it will take effect only after the next update.
  virtual void SetUpdatePeriod(base::TimeDelta period) = 0;
    
    namespace nw {
    }
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    void MenuItem::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    if (enable_shortcut_){
      focus_manager->RegisterAccelerator(
        accelerator_,
        ui::AcceleratorManager::kHighPriority,
        this);
    }
    if (submenu_ != NULL){
      submenu_->UpdateKeys(focus_manager);
    }
  }
}
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    //#include 'log.h'
#include 'include_gunit.h'
#include 'baseapi.h'
#include 'leptonica/allheaders.h'
#include <iostream>
#include <string>
#include <fstream>
#include <locale>
#include <limits.h>
#include <time.h>
    
      // Writes to the given file. Returns false in case of error.
  bool Serialize(TFile* fp) const override;
  // Reads from the given file. Returns false in case of error.
  bool DeSerialize(TFile* fp) override;
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
    // Base class for a SIMD function to multiply a matrix by a vector, with sources
// of 8-bit signed integer, and result in a double, after appropriate scaling.
// Assumes a specific method of multiplication that can be applied to any size
// and number of SIMD registers as follows:
// int32_t results are computed with num_outputs_per_register_ in each of
// max_output_registers_ result registers, repeatedly until it would make too
// many results, then the number of registers is halved, and so-on down to a
// single result register. The last calculation only outputs the required number
// of results instead of writing beyond the bounds. Eg: matrix has 75 outputs,
//  num_outputs_per_register_ = 4, and max_output_registers_ = 8,
// Step 1: 8x4=32 results are computed,
// Step 2: 8x4=32 again, total 64,
// Step 3: 2x4=8 (since 8x4 is too many, so is 4x4), total 72,
// Step 4: 1x3, total 75.
// Each step above is computed using a PartialFunc, which runs over the input
// vector once. The input is read one registerful of num_inputs_per_register_
// at a time (presumably 4x num_outputs_per_register_ since they are int8_t)
// so the inputs MUST BE PADDED to a multiple of num_inputs_per_register_.
// Since it is slow (on Intel at least) to horizontally add in a register,
// provision is made to process num_inputs_per_group_ inputs at a time, with
// the group being replicated num_input_groups_ times and multiplied by a
// num_inputs_per_group_ by num_input_groups_ rectangle of the weights matrix.
// This is most convenient if num_inputs_per_group_ is 4, and the product
// sign-extends and sums 8x8=16 bit results to 32 bits, adding 4 adjacent
// results in the process, but it doesn't have to be implemented that way.
// The weights are re-ordered by Init() to be used sequentially by the above
// algorithm, followed by the biases, so they can be added at the end.
// The base class computes the base C++ implementation.
// NOTE that, although the subclasses execute on different SIMD hardware, no
// virtual methods are needed, as the constructor sets up everything that
// is required to allow the base class implementation to do all the work.
class IntSimdMatrix {
 public:
  // Constructor should set the data members to indicate the sizes.
  // NOTE: Base constructor public only for test purposes.
  IntSimdMatrix()
      : num_outputs_per_register_(1),
        max_output_registers_(1),
        num_inputs_per_register_(1),
        num_inputs_per_group_(1),
        num_input_groups_(1) {}
    }
    
    IntSimdMatrixAVX2::IntSimdMatrixAVX2() {
#ifdef __AVX2__
  num_outputs_per_register_ = kNumOutputsPerRegister;
  max_output_registers_ = kMaxOutputRegisters;
  num_inputs_per_register_ = kNumInputsPerRegister;
  num_inputs_per_group_ = kNumInputsPerGroup;
  num_input_groups_ = kNumInputGroups;
  partial_funcs_ = {PartialMatrixDotVector64, PartialMatrixDotVector32,
                    PartialMatrixDotVector16, PartialMatrixDotVector8};
#endif  // __AVX2__
}
    
        OpSchemaRegistry::DomainToVersionRange& OpSchemaRegistry::DomainToVersionRange::Instance()
    {
        static DomainToVersionRange domain_to_version_range;
        return domain_to_version_range;
    }
    
                std::string result;
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(ScaledTanh)
        .Description('ScaledTanh takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the scaled hyperbolic tangent function, '
            'f(x) = alpha*tanh⁡(beta*x), is applied to the  tensor elementwise.')
        .Input('input', 'Input tensor, typically 1-D.', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('beta', 'Scaling value', AttrType::AttributeProto_AttributeType_FLOAT);
    
                Equations:
              - Ht = Activation(Wi*Xt + Ri*Ht-1 + Wbi + Rbi)
            )DOC')
        .FillUsing(RNNDocGeneratorInputX())
        .Input('W',
            'The weight tensor for input gate. Concatenation of `Wi` and `WBi` '
            '(if bidirectional). The tensor has shape '
            '`[num_directions, hidden_size, input_size]`.', 'T')
        .Input('R',
            'The recurrence weight tensor. Concatenation of `Ri` and `RBi` '
            '(if bidirectional). The tensor has shape '
            '`[num_directions, hidden_size, hidden_size]`.', 'T')
        .Input('B',
            'The bias tensor for input gate. Concatenation of `[Wbi, Rbi]` '
            'and `[WBbi, RBbi]` (if bidirectional). The tensor has shape '
            '`[num_directions, 2*hidden_size]`, Optional: If not specified - assumed '
            'to be 0.', 'T',
            true)
        .FillUsing(RNNDocGeneratorInputSeqLen())
        .FillUsing(RNNDocGeneratorInputInitialH())
        .Attr('activations', 'One (or two if bidirectional) activation function for '
            'input gate. It must be one of tanh and ReLU. Default `tanh`.',
            AttrType::AttributeProto_AttributeType_STRINGS)
        .FillUsing(RNNDocGeneratorActivationArgs())
        .FillUsing(RNNDocGeneratorAttrOutput());
    
    LatticeDeserializer::LatticeDeserializer(
    CorpusDescriptorPtr corpus,
    const ConfigParameters& cfg,
    bool primary)
    : DataDeserializerBase(primary),
      m_verbosity(0),
      m_corpus(corpus)
{
    if (primary)
        LogicError('Lattice deserializer does not support primary mode, it cannot control chunking. '
            'Please specify HTK deserializer as the first deserializer in your config file.');
    }
    
        // set each element of the matrix to value
    inline void setvalue(float value)
    {
        auto &us = *this;
        foreach_coord (i, j, us)
            us(i, j) = value;
    }
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Resize the buffer to the specified length.
  void resize(size_type length)
  {
    BOOST_ASIO_ASSERT(length <= capacity());
    if (begin_offset_ + length <= capacity())
    {
      end_offset_ = begin_offset_ + length;
    }
    else
    {
      using namespace std; // For memmove.
      memmove(&buffer_[0], &buffer_[0] + begin_offset_, size());
      end_offset_ = length;
      begin_offset_ = 0;
    }
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #define BOOST_ASIO_HANDSHAKE_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::one_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0))) == 1, \
      'HandshakeHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
      STDMETHODIMP get_Length(UINT32 *value)
  {
    *value = length_;
    return S_OK;
  }
    
    
    {  // close database
  delete db;
  DestroyDB(dbpath, leveldb::Options());
}
    
    Status Footer::DecodeFrom(Slice* input) {
  const char* magic_ptr = input->data() + kEncodedLength - 8;
  const uint32_t magic_lo = DecodeFixed32(magic_ptr);
  const uint32_t magic_hi = DecodeFixed32(magic_ptr + 4);
  const uint64_t magic = ((static_cast<uint64_t>(magic_hi) << 32) |
                          (static_cast<uint64_t>(magic_lo)));
  if (magic != kTableMagicNumber) {
    return Status::Corruption('not an sstable (bad magic number)');
  }
    }
    
    double Histogram::Percentile(double p) const {
  double threshold = num_ * (p / 100.0);
  double sum = 0;
  for (int b = 0; b < kNumBuckets; b++) {
    sum += buckets_[b];
    if (sum >= threshold) {
      // Scale linearly within this bucket
      double left_point = (b == 0) ? 0 : kBucketLimit[b-1];
      double right_point = kBucketLimit[b];
      double left_sum = sum - buckets_[b];
      double right_sum = sum;
      double pos = (threshold - left_sum) / (right_sum - left_sum);
      double r = left_point + (right_point - left_point) * pos;
      if (r < min_) r = min_;
      if (r > max_) r = max_;
      return r;
    }
  }
  return max_;
}
    
    #ifndef STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
#define STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
    
    
    {}  // namespace leveldb
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    
    {  Dispatcher::stopServices();
  Dispatcher::joinServices();
}
    
    #include <osquery/core.h>
    
    #include <boost/algorithm/string.hpp>
    
    Status EphemeralDatabasePlugin::get(const std::string& domain,
                                    const std::string& key,
                                    std::string& value) const {
  if (db_.count(domain) > 0 && db_.at(domain).count(key) > 0) {
    value = db_.at(domain).at(key);
    return Status(0);
  } else {
    return Status(1);
  }
}
    
      uint32_t idval = id->getOrAllocate(meta);
  if (prevCapacity > idval) {
    return;
  }
  // Growth factor < 2, see folly/docs/FBVector.md; + 5 to prevent
  // very slow start.
  size_t newCapacity = static_cast<size_t>((idval + 5) * 1.7);
  assert(newCapacity > prevCapacity);
  ElementWrapper* reallocated = nullptr;
    
    template <typename T>
struct constexpr_abs_helper<
    T,
    typename std::enable_if<
        std::is_integral<T>::value && !std::is_same<T, bool>::value &&
        std::is_unsigned<T>::value>::type> {
  static constexpr T go(T t) {
    return t;
  }
};
    
        Cursor curs1(chain.get());
    curs1.skip(5);
    Cursor curs2(chain.get());
    curs2.skip(3);
    EXPECT_EQ(2, curs1 - curs2);
    EXPECT_EQ(5, curs1 - chain.get());
    EXPECT_THROW(curs2 - curs1, std::out_of_range);
    
    template <>
FutexResult Futex<std::atomic>::futexWaitImpl(
    uint32_t expected,
    system_clock::time_point const* absSystemTime,
    steady_clock::time_point const* absSteadyTime,
    uint32_t waitMask) {
#ifdef __linux__
  return nativeFutexWaitImpl(
      this, expected, absSystemTime, absSteadyTime, waitMask);
#else
  return emulatedFutexWaitImpl(
      this, expected, absSystemTime, absSteadyTime, waitMask);
#endif
}
    
    
    {  {
    const auto start = Clock::now();
    const auto deadline = time_point_cast<Duration>(
        start - 2 * start.time_since_epoch());
    EXPECT_EQ(f.futexWaitUntil(0, deadline), FutexResult::TIMEDOUT);
    LOG(INFO) << 'Futex wait with invalid deadline timed out after waiting for '
              << duration_cast<milliseconds>(Clock::now() - start).count()
              << 'ms using clock with ' << Duration::period::den
              << ' precision, should be ~0ms';
  }
}
    
    #include <glog/logging.h>