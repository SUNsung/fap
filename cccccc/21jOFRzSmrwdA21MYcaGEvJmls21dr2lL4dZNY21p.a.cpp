
        
        		// the alpha mix for a 4x4 block of pixels
		enum class SourceAlphaMix
		{
			UNKNOWN,
			//
			OPAQUE,			// all 1.0
			TRANSPARENT,	// all 0.0 or NAN
			TRANSLUCENT		// not all opaque or transparent
		};
    
    		float CalcPixelError(ColorFloatRGBA a_frgbaDecodedColor, float a_fDecodedAlpha,
								ColorFloatRGBA a_frgbaSourcePixel);
    
    			// treat alpha NAN as 0.0f
			for (unsigned int uiPixel = 0; uiPixel < PIXELS; uiPixel++)
			{
				afSourceAlpha[uiPixel] = isnan(m_pafrgbaSource[uiPixel].fA) ? 
																		0.0f : 
																		m_pafrgbaSource[uiPixel].fA;
			}
    
    //------------------------------------------------------------------------------
//------------------------------------------------------------------------------
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
    #define QCONST16(x,bits) ((opus_val16)(.5+(x)*(((opus_val32)1)<<(bits))))
#define QCONST32(x,bits) ((opus_val32)(.5+(x)*(((opus_val32)1)<<(bits))))
    
    /* (opus_val32)(opus_val16) gives TI compiler a hint that it's 16x16->32 multiply */
/** 16x16 multiplication where the result fits in 32 bits */
#define MULT16_16(a,b)     (((opus_val32)(opus_val16)(a))*((opus_val32)(opus_val16)(b)))
    
    /*#define silk_MACRO_COUNT */          /* Used to enable WMOPS counting */
    
    // Returns the user key portion of an internal key.
inline Slice ExtractUserKey(const Slice& internal_key) {
  assert(internal_key.size() >= 8);
  return Slice(internal_key.data(), internal_key.size() - 8);
}
    
    
    {}  // namespace leveldb

    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-null, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(SequentialFile* file, Reporter* reporter, bool checksum,
         uint64_t initial_offset);
    
    
    {  // No copying allowed
  Writer(const Writer&);
  void operator=(const Writer&);
};
    
    
    {  FileMetaData() : refs(0), allowed_seeks(1 << 30), file_size(0) { }
};
    
    
    {}  // namespace leveldb
    
            if (std::find(extent.begin(), extent.end(), 0) != extent.end())
            InvalidArgument('NDArrayView::SliceView: Specified slice extent is zero along at least one of the axes.');
    
    
    {
    {    private:
        // Disallow copy and move construction and assignment
        VariableFields(const VariableFields&) = delete; VariableFields& operator=(const VariableFields& other) = delete; VariableFields(VariableFields&&) = delete; VariableFields& operator=(VariableFields&&) = delete;
    };
}

    
    class ComputationNetworkWithEdits : public ComputationNetwork
{
    // helper to execute a BS function that maps a CompuationNode to a ComputationNode
    // The function may return:
    //  - its input --> no edit was made
    //  - an different existing node --> all nodes that use this input should use the returned node instead
    //  - a newly created node or sub-graph --> this node should replace the old one
    // In the latter two cases, the returned node may have inputs that are totally different
    // from the original node's.
    ComputationNodeBasePtr CallEditFunction(ComputationNodeBasePtr node, const ConfigLambda& editFn)
    {
        // wrap the argument in a ConfigValuePtr
        const wstring& nodeName = node->NodeName();
        const wstring& expressionName = nodeName;   // TODO: think this through
        auto valuep = ConfigValuePtr(static_pointer_cast<Object>(node), [nodeName](const std::wstring &) { LogicError('CallEditFunction: Failed to retrieve node '%ls'.', nodeName.c_str()); }, expressionName);
        vector<ConfigValuePtr> args{ valuep };
        // execute the lambda (this executes a function that is BS)
        ConfigValuePtr result = editFn.Apply(move(args), ConfigLambda::NamedParams(), expressionName);
        // cast the result back
        return result.AsPtr<ComputationNodeBase>();
    }
    }
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        auto sliceInputValue  = InputRef(0).ValueFor(fr);
        auto sliceOutputValue =           ValueFor(fr); // row vector
    }
    
    template<class ElemType>
void OptimizedRNNStackNode<ElemType>::BackpropTo(const size_t inputIndex, const FrameRange& fr)
{
    MBLayoutPtr mb = this->GetMBLayout();
    }
    
    #include 'DHTNode.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'util.h'
#include 'TimeA2.h'
#include 'fmt.h'
#include 'File.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    
    {} // namespace aria2

    
      virtual void
  addPeriodicTask1(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
    #include <memory>
    
    #include 'DHTNode.h'
#include 'util.h'
#include 'a2functional.h'
    
    TEST(SocketCanClientRawTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::SOCKET_CAN_RAW);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
      x <<= 2;
  x |= t;
    
    Eigen::MatrixXd SplineSegKernel::SecondOrderDerivativeKernel(
    const uint32_t num_params, const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateSecondOrderDerivative(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'second_order', &term_matrix);
  return kernel_second_order_derivative_.block(0, 0, num_params, num_params)
      .cwiseProduct(term_matrix);
}
    
    namespace apollo {
namespace canbus {
    }
    }
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    using ::apollo::drivers::canbus::Byte;