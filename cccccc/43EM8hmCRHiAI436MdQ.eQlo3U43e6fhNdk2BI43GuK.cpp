
        
        
    {  std::string document_;
  bool yamlCompatiblityEnabled_;
  bool dropNullPlaceholders_;
  bool omitEndingLineFeed_;
};
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
    PyObject* NewMessageEnumsByName(const Descriptor* descriptor);
PyObject* NewMessageEnumsSeq(const Descriptor* descriptor);
PyObject* NewMessageEnumValuesByName(const Descriptor* descriptor);
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    void RepeatedEnumFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $name$_.GetHashCode();\n');
}
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Compute the index of the @f$ K @f$ max values for each datum across
 *        all dimensions @f$ (C \times H \times W) @f$.
 *
 * Intended for use after a classification layer to produce a prediction.
 * If parameter out_max_val is set to true, output is a vector of pairs
 * (max_ind, max_val) for each image. The axis parameter specifies an axis
 * along which to maximise.
 *
 * NOTE: does not implement Backwards operation.
 */
template <typename Dtype>
class ArgMaxLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides ArgMaxParameter argmax_param,
   *     with ArgMaxLayer options:
   *   - top_k (\b optional uint, default 1).
   *     the number @f$ K @f$ of maximal items to output.
   *   - out_max_val (\b optional bool, default false).
   *     if set, output a vector of pairs (max_ind, max_val) unless axis is set then
   *     output max_val along the specified axis.
   *   - axis (\b optional int).
   *     if set, maximise along the specified axis else maximise the flattened
   *     trailing dimensions for each index of the first / num dimension.
   */
  explicit ArgMaxLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
                template <typename T>
            static void UnpackTensorWithRawData(const onnx::TensorProto& p_tensor, /*out*/T* p_data)
            {
                auto& raw_data = p_tensor.raw_data();
                auto buff = raw_data.c_str();
                size_t typeSize = sizeof(T);
    }
    
    
    {    // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Gemm)
        .Description('(General Matrix multiplication: '
            'https://en.wikipedia.org/wiki/Basic_Linear_Algebra_Subprograms#Level_3 '
            'Compute Y = alpha * A * B + beta * C, where input tensor A has dimension (M X K), '
            'input tensor B has dimension (K X N), input tensor C and output tensor Y have '
            'dimension (M X N). Input tensor C can be used inplace as the output tensor Y. '
            'If attribute broadcast is non-zero, input tensor C will be broadcasted to match the '
            'dimension requirement. If A can be transposed before doing the computation if '
            'attribute transA is non-zero, same for B and transB. ')
        .Input('A', 'Input tensor A', 'T')
        .Input('B', 'Input tensor B', 'T')
        .Input('C', 'Input tensor C, can be inplace.', 'T')
        .Output('Y', 'Output tensor.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('transA',
            'Whether A should be transposed',
            AttrType::AttributeProto_AttributeType_INT)
        .Attr('transB',
            'Whether B should be transposed',
            AttrType::AttributeProto_AttributeType_INT)
        .Attr('broadcast',
            'Whether C should be broadcasted',
            AttrType::AttributeProto_AttributeType_INT)
        .Attr('alpha',
            'Scalar multiplier for the product of input tensors A * B',
            AttrType::AttributeProto_AttributeType_FLOAT)
        .Attr('beta',
            'Scalar multiplier for input tensor C',
            AttrType::AttributeProto_AttributeType_FLOAT);
}

    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Slice)
        .Description('Produces a slice of the input tensor along multiple axes. Similar to '
            'numpy: https://docs.scipy.org/doc/numpy/reference/arrays.indexing.html '
            '                                                                              '
            'Slices are passed as two keyword argument lists with starting and end indices '
            'for each dimension of the input `data` tensor. If a negative value is passed '
            'for any of the start or end indices, it represent number of elements before '
            'the end of that dimension. '
            '                                                                            '
            '`strides` is the  step sizes when applying slicing, negative value means in '
            'reverse order.')
        .Input('input', 'Tensor of data to extract slices from.', 'T')
        .Output('output', 'Sliced data tensor.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('starts', 'List of starting indices', AttrType::AttributeProto_AttributeType_INTS)
        .Attr('ends', 'List of ending indices', AttrType::AttributeProto_AttributeType_INTS);
    
        virtual void BackpropToNonLooping(size_t inputIndex) override
    {
        // TODO: We should avoid this copy but that requires carefully managing the 
        // lifetimes of the Gradient objects since to be able to directly use the 
        // Gradient as input's gradient, we have to make sure that the Gradient
        // is not reused until all the inputs are finished backpropagating to their inputs.
        auto inputNode = Input(0)->template As<MultiOutputNode<ElemType>>();
        inputNode->m_outputsGradient[m_outputIndex]->SetValue(Gradient());
    }
    
        static void dotprod4(const_array_ref<float> row, const_array_ref<float> cols4, size_t cols4stride,
                         array_ref<float> usij, size_t usijstride,
                         bool addtoresult, const float thisscale, const float weight = 1.0f)
    {
        // What this function computes is this:
        // for (size_t k = 0; k < 4; k++)
        //     dotprod (row, const_array_ref<float> (&cols4[k * cols4stride], cols4stride), usij[k * usijstride]);
    }
    
        size_t GetNumParallelSequencesForFixingBPTTMode()
    {
        return 1;
    }
    void SetNumParallelSequences(const size_t){};
    void CopyMBLayoutTo(MBLayoutPtr pMBLayout)
    {
        pMBLayout->CopyFrom(m_pMBLayout);
        NOT_IMPLEMENTED;
    }
    virtual const std::map<LabelIdType, LabelType>& GetLabelMapping(const std::wstring& sectionName);
    virtual void SetLabelMapping(const std::wstring& sectionName, const std::map<typename BinaryReader<ElemType>::LabelIdType, typename BinaryReader<ElemType>::LabelType>& labelMapping);
    virtual bool GetData(const std::wstring& sectionName, size_t numRecords, void* data, size_t& dataBufferSize, size_t recordStart = 0);
    
    static const uint8_t* kRangeLimit = kRangeLimitLut + 384;
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    static bool binary_to_compressed_c(const char* filename, const char* symbol, bool use_base85_encoding, bool use_compression);
    
    void DebugHUD_DoInterface(DebugHUD *hud)
{
    // 1. Show a simple window.
    // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
    {
        static float f = 0.0f;
        static int counter = 0;
        ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
        ImGui::ColorEdit3('clear color', hud->clearColor);      // Edit 3 floats representing a color
    }
    }
    
            const uint32_t w = ft_bitmap->bitmap.width;
        const uint32_t h = ft_bitmap->bitmap.rows;
        const uint8_t* src = ft_bitmap->bitmap.buffer;
        const uint32_t src_pitch = ft_bitmap->bitmap.pitch;
    
    
    {        // Rendering
        glViewport(0, 0, (int)ImGui::GetIO().DisplaySize.x, (int)ImGui::GetIO().DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui::Render();
        ImGui_ImplSdlGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
    struct SDL_Window;
typedef union SDL_Event SDL_Event;
    
    int main(int, char**)
{
    // Setup window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    GLFWwindow* window = glfwCreateWindow(1280, 720, 'ImGui GLFW+OpenGL2 example', NULL, NULL);
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync
    }
    
        // Cleanup
    ImGui_ImplGlfwGL3_Shutdown();
    ImGui::DestroyContext();
    
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(1280, 720, 'ImGui GLFW+Vulkan example', NULL, NULL);
    
            D3DCompile(vertexShader, strlen(vertexShader), NULL, NULL, NULL, 'main', 'vs_4_0', 0, 0, &g_pVertexShaderBlob, NULL);
        if (g_pVertexShaderBlob == NULL) // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreateVertexShader((DWORD*)g_pVertexShaderBlob->GetBufferPointer(), g_pVertexShaderBlob->GetBufferSize(), &g_pVertexShader) != S_OK)
            return false;
    
    void    ImGui_ImplGlfwGL2_InvalidateDeviceObjects()
{
    if (g_FontTexture)
    {
        glDeleteTextures(1, &g_FontTexture);
        ImGui::GetIO().Fonts->TexID = 0;
        g_FontTexture = 0;
    }
}
    
    #include <iostream>
#include <map>
    
    // Note:  Many of the methods in this class have comments indicating that
// external synchronization is required as these methods are not thread-safe.
// It is up to higher layers of code to decide how to prevent concurrent
// invokation of these methods.  This is usually done by acquiring either
// the db mutex or the single writer thread.
//
// Some of these methods are documented to only require external
// synchronization if this memtable is immutable.  Calling MarkImmutable() is
// not sufficient to guarantee immutability.  It is up to higher layers of
// code to determine if this MemTable can still be modified by other threads.
// Eg: The Superversion stores a pointer to the current MemTable (that can
// be modified) and a separate list of the MemTables that can no longer be
// written to (aka the 'immutable memtables').
class MemTable {
 public:
  struct KeyComparator : public MemTableRep::KeyComparator {
    const InternalKeyComparator comparator;
    explicit KeyComparator(const InternalKeyComparator& c) : comparator(c) { }
    virtual int operator()(const char* prefix_len_key1,
                           const char* prefix_len_key2) const override;
    virtual int operator()(const char* prefix_len_key,
                           const DecodedType& key) const override;
  };
    }
    
    class MemTableRep {
 public:
  // KeyComparator provides a means to compare keys, which are internal keys
  // concatenated with values.
  class KeyComparator {
   public:
    typedef rocksdb::Slice DecodedType;
    }
    }
    
    inline
bool BlockFetcher::TryGetCompressedBlockFromPersistentCache() {
  if (cache_options_.persistent_cache &&
      cache_options_.persistent_cache->IsCompressed()) {
    // lookup uncompressed cache mode p-cache
    status_ = PersistentCacheHelper::LookupRawPage(
        cache_options_, handle_, &heap_buf_, block_size_ + kBlockTrailerSize);
    if (status_.ok()) {
      used_buf_ = heap_buf_.get();
      slice_ = Slice(heap_buf_.get(), block_size_);
      return true;
    } else if (!status_.IsNotFound() && ioptions_.info_log) {
      assert(!status_.ok());
      ROCKS_LOG_INFO(ioptions_.info_log,
                     'Error reading from persistent cache. %s',
                     status_.ToString().c_str());
    }
  }
  return false;
}
    
    // In order to avoid potentially filling the jni locals table,
// temporary objects (right now, this is just jstrings) need to be
// released. This is done by returning a holder which autoconverts to
// jstring.
template <typename T>
inline T callToJni(T&& t) {
  return t;
}
    
    #include <ios>
#include <memory>
#include <vector>
    
    
    {  YGNodeRef root;
  YGConfigRef config;
};
    
        ~Config(void);
    
        double width;
    double height;
    
        void setPadding(int edge, double padding);
    void setPaddingPercent(int edge, double padding);
    
    #pragma once
    
      void unref() {
    if (0 == --m_refcount) {
      delete this;
    }
  }