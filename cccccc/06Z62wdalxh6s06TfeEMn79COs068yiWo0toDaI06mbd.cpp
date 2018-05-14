
        
        #endif  // ATOM_COMMON_API_LOCKER_H_

    
     protected:
  RemoteCallbackFreer(v8::Isolate* isolate,
                      v8::Local<v8::Object> target,
                      int object_id,
                      content::WebContents* web_conents);
  ~RemoteCallbackFreer() override;
    
    #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
      // Sent when one or more URLs are deleted.
  //
  // The source is the profile owning the history service that changed, and
  // the details is history::URLsDeletedDetails that lists the deleted URLs.
  NOTIFICATION_HISTORY_URLS_DELETED,
    
      // Returns whether shortcut handling is currently suspended.
  bool IsShortcutHandlingSuspended() const;
    
    #include 'content/public/browser/web_contents_observer.h'
#include 'ui/gfx/native_widget_types.h'
    
     private:
  friend class base::RefCountedThreadSafe<MonitorFinder>;
  ~MonitorFinder();
    
    #include 'base/memory/ref_counted.h'
#include 'chrome/browser/ui/views/color_chooser_dialog.h'
#include 'third_party/skia/include/core/SkColor.h'
#include 'ui/shell_dialogs/base_shell_dialog.h'
#include 'ui/shell_dialogs/base_shell_dialog_win.h'
    
      assert(peekType(msg) == thpp::Type::LONG_STORAGE);
  THLongStorage *storage2 = unpackTHLongStorage(msg);
  assert(storage2->size == STORAGE_SIZE);
  for (int64_t i = 0; i < STORAGE_SIZE; i++)
    assert(storage2->data[i] == i);
  
  int vec_size = unpackInteger(msg);
  assert(vec_size == VEC_SIZE);
  for (int i = 0; i < VEC_SIZE; i++)
    assert(unpackInteger(msg) == 7);
    
    #undef THStoragePtr
#undef THPStoragePtr
#undef THTensorPtr
#undef THPTensorPtr
    
    #define THPStorage TH_CONCAT_3(THP,Real,Storage)
#define THPStorageStr TH_CONCAT_STRING_3(torch.,Real,Storage)
#define THPStorageClass TH_CONCAT_3(THP,Real,StorageClass)
#define THPStorage_(NAME) TH_CONCAT_4(THP,Real,Storage_,NAME)
    
    using THDGeneratorTypes = std::tuple<THDGenerator>;
    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list) {
  feature_list->clear();
  std::string db_content(db);
  db_content.erase(
      std::remove_if(db_content.begin(), db_content.end(), isspace),
      db_content.end());
    }
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
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
    
    
    {  grpc::string package = service->full_name();
  size_t pos = package.rfind('.' + service->name());
  if (pos != grpc::string::npos) {
    package.erase(pos);
    result.append('package: ' + package + ';\n');
  }
  result.append('service ' + service->name() + ' {\n');
  for (int i = 0; i < service->method_count(); ++i) {
    result.append(DescribeMethod(service->method(i)));
  }
  result.append('}\n\n');
  return result;
}
    
    int protoc_main(int argc, char* argv[]) {
  google::protobuf::compiler::CommandLineInterface cli;
  cli.AllowPlugins('protoc-');
    }
    
    
    {    get_bits_no_markers(8 + (23 - ofs));
  }
  else
    get_bits_no_markers(pH->code_size[symbol]);
    
    #ifndef M_PI
#  define M_PI (3.1415926536f)
#endif
    
    
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
    
        // return true if precomputation is executed.
    bool PreCompute(ComputationNetworkPtr net,
                    IDataReader* trainSetDataReader,
                    const std::vector<ComputationNodeBasePtr>& featureNodes,
                    const std::vector<ComputationNodeBasePtr>& labelNodes,
                    StreamMinibatchInputs* inputMatrices);
    
        const std::unordered_map<std::string, std::pair<int, int>>&
        OpSchemaRegistry::DomainToVersionRange::Map() const
    {
        return m_map;
    }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(PRelu)
        .Description('PRelu takes input data (Tensor<T>) and slope tensor as input, '
            'and produces one output data (Tensor<T>) where the function '
            '`f(x) = slope * x for x < 0`, `f(x) = x for x >= 0`., is applied to the '
            'data tensor elementwise.')
        .Input('X', 'Input tensor', 'T')
        .Input('Slope', 'Slope tensor. If `Slope` is of size 1, the value is shared'
            'across different channels', 'T')
        .Output('Y', 'The PRelu value of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
        //‘GREATER’, ‘LESS’, ‘EQUALS,
    REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Greater)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Less)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Equal)
    
                Equations (GRU with default activations):
              - zt = sigmoid(Wz*Xt + Rz*Ht-1 + Wbz + Rbz)
              - rt = sigmoid(Wr*Xt + Rr*Ht-1 + Wbr + Rbr)
              - ht = tanh(Wh*Xt + rt*(Rh*Ht-1 + Rbh) + Wbh)
              - H = (1 - zt) (.) ht + it (.) Ht-1
            )DOC')
        .FillUsing(RNNDocGeneratorInputX())
        .Input('W',
            'The weight tensor for the gates. Concatenation of `W[zrh]` and `WB[zrh]` '
            '(if bidirectional) along dimension 0. This tensor has shape '
            '`[num_directions, 3*hidden_size, input_size]`.', 'T')
        .Input('R',
            'The recurrence weight tensor. Concatenation of `R[zrh]` and `RB[zrh]` '
            '(if bidirectional) along dimension 0. This tensor has shape '
            '`[num_directions, 3*hidden_size, hidden_size]`.', 'T')
        .Input('B',
            'The bias tensor for the gates. Concatenation of `[Wb[zrh], Rb[zrh]]` and '
            '`[WBb[zrh], RBb[zrh]]` (if bidirectional) along dimension 0. This tensor '
            'has shape `[num_directions, 6*hidden_size]`. Optional: If not specified '
            '- assumed to be 0', 'T',
            true /*optional*/)
        .FillUsing(RNNDocGeneratorInputSeqLen())
        .FillUsing(RNNDocGeneratorInputInitialH())
        .Attr('activations', 'A list of 3 (or 6 if bidirectional) activation functions '
            'for update, reset, and hidden gates. The activation functions must be '
            'one of sigmoid and tanh. See the equations for default.',
            AttrType::AttributeProto_AttributeType_STRINGS)
        .FillUsing(RNNDocGeneratorActivationArgs())
        .FillUsing(RNNDocGeneratorAttrOutput());
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Split)
        .Description('Split a tensor into a list of tensors, along the specified 'axis'. '
            'The lengths of the split can be specified using argument 'axis' or '
            'optional second input blob to the operator. Otherwise, the tensor is split '
            'to equal sized parts.')
        .Input('input', 'The tensor to split', 'T')
        .Input('split', 'Optional list of output lengths (see also arg 'split')', 'T')
        .Output('output', 'A list of output tensors', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('axis', 'Which axis to split on', AttrType::AttributeProto_AttributeType_INT)
        .Attr('split', 'Number of tensors to output.', AttrType::AttributeProto_AttributeType_INTS);
    
            try
        {
            // feature reader (we reinstantiate it for each block, i.e. we reopen the file actually)
            // if this is the first feature read ever, we explicitly open the first file to get the information such as feature dimension
            htkfeatreader reader;
    }
    
    // Gets sequences for a particular chunk.
// This information is used by the randomizer to fill in current windows of sequences.
void LatticeDeserializer::SequenceInfosForChunk(ChunkIdType, vector<SequenceInfo>& result)
{
    UNUSED(result);
    LogicError('Lattice deserializer does not support primary mode, it cannot control chunking. '
        'Please specify HTK deserializer as the first deserializer in your config file.');
    }
    
    
    {    RemoveNodeFromNet(node);        // take it out remporarily
    node->SetNodeName(newNodeName); // change the name
    AddNodeToNet(node);             // and put it back
}
    
      /// Perform an IO control command on the acceptor.
  /**
   * This function is used to execute an IO control command on the acceptor.
   *
   * @param command The IO control command to be performed on the acceptor.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @sa IoControlCommand @n
   * boost::asio::socket_base::non_blocking_io
   *
   * @par Example
   * Getting the number of bytes ready to read:
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::acceptor::non_blocking_io command(true);
   * boost::system::error_code ec;
   * socket.io_control(command, ec);
   * if (ec)
   * {
   *   // An error occurred.
   * }
   * @endcode
   */
  template <typename IoControlCommand>
  boost::system::error_code io_control(IoControlCommand& command,
      boost::system::error_code& ec)
  {
    return this->get_service().io_control(
        this->get_implementation(), command, ec);
  }
    
    #ifndef BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP
#define BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    template <typename Function, typename Context>
inline void invoke(const Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
    
    {  // Returns a heuristic cutoff on block errors in the sense that we won't
  // consider distortions where a block error is greater than this.
  virtual float BlockErrorLimit() const = 0;
  // Given the search direction (+1 for upwards and -1 for downwards) and the
  // current distance map, fills in *block_weight image with the relative block
  // error adjustment weights.
  // The target_mul param has the same semantics as in DistanceOK().
  // Note that this is essentially a static function in the sense that it does
  // not depend on the last Compare() call.
  virtual void ComputeBlockErrorAdjustmentWeights(
      int direction, int max_block_dist, double target_mul, int factor_x,
      int factor_y, const std::vector<float>& distmap,
      std::vector<float>* block_weight) = 0;
};
    
    void OutputImage::ToLinearRGB(int xmin, int ymin, int xsize, int ysize,
                              std::vector<std::vector<float> >* rgb) const {
  const double* lut = Srgb8ToLinearTable();
  std::vector<uint8_t> rgb_pixels = ToSRGB(xmin, ymin, xsize, ysize);
  for (int p = 0; p < xsize * ysize; ++p) {
    for (int i = 0; i < 3; ++i) {
      (*rgb)[i][p] = static_cast<float>(lut[rgb_pixels[3 * p + i]]);
    }
  }
}
    
    void ComputeBlockDCTDouble(double block[64]) {
  TransformBlock(block, DCT1d);
}
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    #include <math.h>
    
    #endif  // GUETZLI_FDCT_H_

    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_