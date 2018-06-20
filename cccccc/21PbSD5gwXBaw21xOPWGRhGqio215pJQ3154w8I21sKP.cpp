
        
        namespace atom {
    }
    
    #include 'base/command_line.h'
    
    namespace atom {
    }
    
    
    {}  // namespace
    
    void GlobalShortcut::OnKeyPressed(const ui::Accelerator& accelerator) {
  if (accelerator_callback_map_.find(accelerator) ==
      accelerator_callback_map_.end()) {
    // This should never occur, because if it does, GlobalGlobalShortcutListener
    // notifes us with wrong accelerator.
    NOTREACHED();
    return;
  }
  accelerator_callback_map_[accelerator].Run();
}
    
    bool PowerMonitor::ShouldShutdown() {
  return !Emit('shutdown');
}
    
    #include 'base/win/wrapped_window_proc.h'
#include 'ui/base/win/shell.h'
#include 'ui/gfx/win/hwnd_util.h'
#include 'Wtsapi32.h'
    
    namespace api {
    }
    
    
    {}  // namespace
    
    template <unsigned int BITS>
base_uint<BITS>& base_uint<BITS>::operator<<=(unsigned int shift)
{
    base_uint<BITS> a(*this);
    for (int i = 0; i < WIDTH; i++)
        pn[i] = 0;
    int k = shift / 32;
    shift = shift % 32;
    for (int i = 0; i < WIDTH; i++) {
        if (i + k + 1 < WIDTH && shift != 0)
            pn[i + k + 1] |= (a.pn[i] >> (32 - shift));
        if (i + k < WIDTH)
            pn[i + k] |= (a.pn[i] << shift);
    }
    return *this;
}
    
    std::string EncodeBase58(const unsigned char* pbegin, const unsigned char* pend)
{
    // Skip & count leading zeroes.
    int zeroes = 0;
    int length = 0;
    while (pbegin != pend && *pbegin == 0) {
        pbegin++;
        zeroes++;
    }
    // Allocate enough space in big-endian base58 representation.
    int size = (pend - pbegin) * 138 / 100 + 1; // log(256) / log(58), rounded up.
    std::vector<unsigned char> b58(size);
    // Process the bytes.
    while (pbegin != pend) {
        int carry = *pbegin;
        int i = 0;
        // Apply 'b58 = b58 * 256 + ch'.
        for (std::vector<unsigned char>::reverse_iterator it = b58.rbegin(); (carry != 0 || i < length) && (it != b58.rend()); it++, i++) {
            carry += 256 * (*it);
            *it = carry % 58;
            carry /= 58;
        }
    }
    }
    
    // Microbenchmark for verification of a basic P2WPKH script. Can be easily
// modified to measure performance of other types of scripts.
static void VerifyScriptBench(benchmark::State& state)
{
    const int flags = SCRIPT_VERIFY_WITNESS | SCRIPT_VERIFY_P2SH;
    const int witnessversion = 0;
    }
    
    class CTxMemPool;
    
    #include <chainparamsbase.h>
#include <consensus/params.h>
#include <primitives/block.h>
#include <protocol.h>
    
    template <typename T>
class CCheckQueueControl;
    
    
    {        boost::filesystem::path absTestPath(m_testDataPath);
        absTestPath = boost::filesystem::canonical(absTestPath);
        m_testDataPath = absTestPath.generic_wstring();
    }
    
        std::map<std::wstring, std::vector<ElemType>*> input;
    std::map<std::wstring, std::vector<ElemType>*> output;
    std::vector<ElemType>* arr = input[inputName] = new std::vector<ElemType>(dimFeatures * mbSize);
    output[outputName] = new std::vector<ElemType>(dimLabels * mbSize);
    
            '   Wmr = Parameter(outputDim, cellDim, init = \'uniform\', initValueScale = 1);\n'
        '   output = Times(Wmr, mt); \n'
        ']\n'
    
        GPUMatrix<half> m1(c_deviceIdZero);
    m00.VectorMax(m1, m3, true);
    m2.Resize(1, 3);
    array[0] = 4;
    array[1] = 5;
    array[2] = 6;
    m2.SetValue(1, 3, m2.GetComputeDeviceId(), array.data(), matrixFlagNormal);
    BOOST_CHECK(m3.IsEqualTo(m2));
    
    
    {        matGsparseBSC.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseBlockCol, false);
        SingleMatrix::MultiplyAndAdd(matG2, false, matG1sparseCSC, true, matGsparseBSC);
        timestamps = SingleMatrix::RandomGaussian(1, dim2, c_deviceIdZero, -1.0f, 1.0f, IncrementCounter());
    }
    
    #if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessagePush::kTopicFieldNumber;
const int MessagePush::kContentFieldNumber;
const int MessagePush::kFromFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
    
      // required string content = 2;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 2;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);