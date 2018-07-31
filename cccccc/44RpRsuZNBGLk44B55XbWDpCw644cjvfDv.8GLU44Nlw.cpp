
        
        // Identical to RelaunchApp, but uses |helper| as the path to the relauncher
// process, and allows additional arguments to be supplied to the relauncher
// process in relauncher_args. Unlike args[0], |helper| must be a pathname to
// an executable file. The helper path given must be from the same version of
// Chrome as the running parent browser process, as there are no guarantees
// that the parent and relauncher processes from different versions will be
// able to communicate with one another. This variant can be useful to
// relaunch the same version of Chrome from another location, using that
// location's helper.
bool RelaunchAppWithHelper(const base::FilePath& helper,
                           const StringVector& relauncher_args,
                           const StringVector& args);
    
    void DragFileItems(const std::vector<base::FilePath>& files,
                   const gfx::Image& icon,
                   gfx::NativeView view);
    
      // ui::EventRewriter:
  ui::EventRewriteStatus RewriteEvent(
      const ui::Event& event,
      std::unique_ptr<ui::Event>* rewritten_event) override;
  ui::EventRewriteStatus NextDispatchEvent(
      const ui::Event& last_event,
      std::unique_ptr<ui::Event>* new_event) override;
    
    
    {}  // namespace atom
    
    // Attempts to send the current command line to an already running instance of
// Chrome via a WM_COPYDATA message.
// Returns true if a running Chrome is found and successfully notified.
// |fast_start| is true when this is being called on the window fast start path.
NotifyChromeResult AttemptToNotifyRunningChrome(HWND remote_window,
                                                bool fast_start);
    
    void TtsPlatformImpl::clear_error() {
  error_ = std::string();
}
    
    
    {
    {
    {
    {                        const float eps = 1e-4f;
                        //TODO: perhaps it is better to normalize the cross product by norms of the tangent vectors
                        if (fabs(tangentVector_1.cross(tangentVector_2)) < eps)
                        {
                            isGeneralPosition = false;
                        }
                    }
                }
            }
        }
        while(!isGeneralPosition);
    }
    else
    {
        //create points in a degenerate position (there are at least 3 points belonging to the same line)
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    const float g_8x32fTab[] =
{
    -128.f, -127.f, -126.f, -125.f, -124.f, -123.f, -122.f, -121.f,
    -120.f, -119.f, -118.f, -117.f, -116.f, -115.f, -114.f, -113.f,
    -112.f, -111.f, -110.f, -109.f, -108.f, -107.f, -106.f, -105.f,
    -104.f, -103.f, -102.f, -101.f, -100.f,  -99.f,  -98.f,  -97.f,
     -96.f,  -95.f,  -94.f,  -93.f,  -92.f,  -91.f,  -90.f,  -89.f,
     -88.f,  -87.f,  -86.f,  -85.f,  -84.f,  -83.f,  -82.f,  -81.f,
     -80.f,  -79.f,  -78.f,  -77.f,  -76.f,  -75.f,  -74.f,  -73.f,
     -72.f,  -71.f,  -70.f,  -69.f,  -68.f,  -67.f,  -66.f,  -65.f,
     -64.f,  -63.f,  -62.f,  -61.f,  -60.f,  -59.f,  -58.f,  -57.f,
     -56.f,  -55.f,  -54.f,  -53.f,  -52.f,  -51.f,  -50.f,  -49.f,
     -48.f,  -47.f,  -46.f,  -45.f,  -44.f,  -43.f,  -42.f,  -41.f,
     -40.f,  -39.f,  -38.f,  -37.f,  -36.f,  -35.f,  -34.f,  -33.f,
     -32.f,  -31.f,  -30.f,  -29.f,  -28.f,  -27.f,  -26.f,  -25.f,
     -24.f,  -23.f,  -22.f,  -21.f,  -20.f,  -19.f,  -18.f,  -17.f,
     -16.f,  -15.f,  -14.f,  -13.f,  -12.f,  -11.f,  -10.f,   -9.f,
      -8.f,   -7.f,   -6.f,   -5.f,   -4.f,   -3.f,   -2.f,   -1.f,
       0.f,    1.f,    2.f,    3.f,    4.f,    5.f,    6.f,    7.f,
       8.f,    9.f,   10.f,   11.f,   12.f,   13.f,   14.f,   15.f,
      16.f,   17.f,   18.f,   19.f,   20.f,   21.f,   22.f,   23.f,
      24.f,   25.f,   26.f,   27.f,   28.f,   29.f,   30.f,   31.f,
      32.f,   33.f,   34.f,   35.f,   36.f,   37.f,   38.f,   39.f,
      40.f,   41.f,   42.f,   43.f,   44.f,   45.f,   46.f,   47.f,
      48.f,   49.f,   50.f,   51.f,   52.f,   53.f,   54.f,   55.f,
      56.f,   57.f,   58.f,   59.f,   60.f,   61.f,   62.f,   63.f,
      64.f,   65.f,   66.f,   67.f,   68.f,   69.f,   70.f,   71.f,
      72.f,   73.f,   74.f,   75.f,   76.f,   77.f,   78.f,   79.f,
      80.f,   81.f,   82.f,   83.f,   84.f,   85.f,   86.f,   87.f,
      88.f,   89.f,   90.f,   91.f,   92.f,   93.f,   94.f,   95.f,
      96.f,   97.f,   98.f,   99.f,  100.f,  101.f,  102.f,  103.f,
     104.f,  105.f,  106.f,  107.f,  108.f,  109.f,  110.f,  111.f,
     112.f,  113.f,  114.f,  115.f,  116.f,  117.f,  118.f,  119.f,
     120.f,  121.f,  122.f,  123.f,  124.f,  125.f,  126.f,  127.f,
     128.f,  129.f,  130.f,  131.f,  132.f,  133.f,  134.f,  135.f,
     136.f,  137.f,  138.f,  139.f,  140.f,  141.f,  142.f,  143.f,
     144.f,  145.f,  146.f,  147.f,  148.f,  149.f,  150.f,  151.f,
     152.f,  153.f,  154.f,  155.f,  156.f,  157.f,  158.f,  159.f,
     160.f,  161.f,  162.f,  163.f,  164.f,  165.f,  166.f,  167.f,
     168.f,  169.f,  170.f,  171.f,  172.f,  173.f,  174.f,  175.f,
     176.f,  177.f,  178.f,  179.f,  180.f,  181.f,  182.f,  183.f,
     184.f,  185.f,  186.f,  187.f,  188.f,  189.f,  190.f,  191.f,
     192.f,  193.f,  194.f,  195.f,  196.f,  197.f,  198.f,  199.f,
     200.f,  201.f,  202.f,  203.f,  204.f,  205.f,  206.f,  207.f,
     208.f,  209.f,  210.f,  211.f,  212.f,  213.f,  214.f,  215.f,
     216.f,  217.f,  218.f,  219.f,  220.f,  221.f,  222.f,  223.f,
     224.f,  225.f,  226.f,  227.f,  228.f,  229.f,  230.f,  231.f,
     232.f,  233.f,  234.f,  235.f,  236.f,  237.f,  238.f,  239.f,
     240.f,  241.f,  242.f,  243.f,  244.f,  245.f,  246.f,  247.f,
     248.f,  249.f,  250.f,  251.f,  252.f,  253.f,  254.f,  255.f
};
    
    namespace internal {
    }
    
    
    {  // Tersely prints the first N fields of a tuple to a string vector,
  // one element for each field.
  template <typename Tuple>
  static void TersePrintPrefixToStrings(const Tuple& t, Strings* strings) {
    TuplePrefixPrinter<N - 1>::TersePrintPrefixToStrings(t, strings);
    ::std::stringstream ss;
    UniversalTersePrint(::std::tr1::get<N - 1>(t), &ss);
    strings->push_back(ss.str());
  }
};
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
    namespace testing {
    }
    
    #if GTEST_HAS_DEATH_TEST
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
        static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
        static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
        static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
        static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
        static_cast<T>(v36_), static_cast<T>(v37_)};
    return ValuesIn(array);
  }
    
    // The following family of struct and struct templates are used to
// represent template lists.  In particular, TemplatesN<T1, T2, ...,
// TN> represents a list of N templates (T1, T2, ..., and TN).  Except
// for Templates0, every struct in the family has two member types:
// Head for the selector of the first template in the list, and Tail
// for the rest of the list.
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
        // -------------------------------------------------------------------
    // GetMinibatchIntoNetwork() -- get one minibatch from Reader (this->trainSetDataReader) into Network (this->net)
    // Returns false if no data is read. In that case, no other return value can be expected to contain meaningful values (e.g. actualMBSize will be unchanged).
    // Sets actualMBSize to the number of matrix columns. Note that 0 is a valid value to be returned for actualMBSize, caller must handle that correctly.
    // -------------------------------------------------------------------
    // Note: This will go away with the redesigned reader interface.
    // TODO: callers of this often do ComputationNetwork::BumpEvalTimeStamp(featureNodes) and also for labels; we should eliminate the need for this.
    template <class ElemType>
    static bool GetMinibatchIntoNetwork(IDataReader& trainSetDataReader,
                                        ComputationNetworkPtr net,
                                        ComputationNodeBasePtr criterionNode,
                                        bool useDistributedMBReading,
                                        bool useParallelTrain,
                                        StreamMinibatchInputs& inputMatrices,
                                        size_t& actualMBSize, 
                                        const MPIWrapperPtr& mpi)
    {
        // Reading consists of a sequence of Reader API calls:
        //  - GetMinibatch() --fills the inputMatrices and copies the MBLayout from Reader into inputMatrices
        //  - SetActualMiniBatchSizeFromFeatures()  --tells Network to resize the nodes' buffers
        // with the special twist that in presence of parallelization, there is some decimation involved.
    }
    
    
    {    mA.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, false);
    BOOST_CHECK_EQUAL(MatrixType::DENSE, mA.GetMatrixType());
}
    
    void GPUDataTransferer::CopyGPUToCPUAsync(void* gpuBuffer, size_t totalSize, void* cpuBuffer)
{
    m_inner->CopyGPUToCPUAsync(gpuBuffer, 1, totalSize, cpuBuffer);
    m_inner->RecordGPUToCPUCopy();
}
    
    template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, float>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, double>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, float>(const ConfigParameters& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, double>(const ConfigParameters& config);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, float> (const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, double>(const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);

    
    private:
    static VariableLayout ToVariableLayout(const ComputationNodeBasePtr n);
    std::vector<ComputationNodeBasePtr> m_outputNodes;
    std::shared_ptr<ScopedNetworkOperationMode> m_scopedNetworkOperationMode;
    std::vector<ComputationNodeBasePtr> m_inputNodes;
    StreamMinibatchInputs m_inputMatrices;
    bool m_started;
    
    
    {
    {
    {      if (Rcpp::as<std::string>(grad_reqs[i]) != 'null') {
        ret->at(i) = NDArray::Empty(NDArray::FromRObject(source_array[i]).dim(), ctx);
        handles->at(i) = NDArray::FromRObject(ret->at(i))->handle;
        grad_req_type->at(i) = req_map[Rcpp::as<std::string>(grad_reqs[i])];
      }
    }
  } catch(const Rcpp::exception& ex) {
    delete ret;
    throw ex;
  }
  return ret;
}
    
    /*!
 * \brief MXNet's internal data iterator.
 */
class MXDataIter : public DataIter {
 public:
  /*! \return typename from R side. */
  inline static const char* TypeName() {
    return 'MXNativeDataIter';
  }
  // implement the interface
  virtual void Reset();
  virtual bool Next();
  virtual int NumPad() const;
  virtual Rcpp::List Value() const;
  virtual ~MXDataIter() {
    MX_CALL(MXDataIterFree(handle_));
  }
    }
    
    /*!
 * \brief An array packer that packs NDArray array together on
 *   slowest changing dimension.
 */
class NDArrayPacker {
 public:
  // constructor
  NDArrayPacker() {}
  /*!
   * \brief Push the array to the packer
   * \param nd The array to push the data into.
   */
  void Push(const NDArray::RObjectType& nd);
  /*!
   * \brief Get the R array out from packed data.
   * \return The packed data.
   */
  Rcpp::NumericVector Get() const;
  /*! \return constructor */
  static Rcpp::RObject CreateNDArrayPacker();
    }
    
    /*!
 * \brief Register a function to determine if the output of a quantized operator
 * needs to be requantized. This is usually used for the operators
 * taking int8 data types while accumulating in int32, e.g. quantized_conv.
 * \note Register under 'FNeedRequantize' for non-quantized operators
 */
using FNeedRequantize = std::function<bool (const NodeAttrs& attrs)>;
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file graph_executor.h
 * \brief Executor to execute the computation graph.
 */
#ifndef MXNET_EXECUTOR_GRAPH_EXECUTOR_H_
#define MXNET_EXECUTOR_GRAPH_EXECUTOR_H_
    
    using CachedOpPtr = std::shared_ptr<CachedOp>;
    
    void ElementwiseSumContainsDnsImpl(mshadow::Stream<cpu>* s,
                                   const Resource& rsc,
                                   const std::vector<NDArray>& nds,
                                   NDArray* out) {
  using namespace mxnet::op;
  using namespace mxnet::op::mxnet_op;
  const TBlob& out_data = out->data();
  MSHADOW_TYPE_SWITCH(out->dtype(), DType, {  // data type
    Kernel<set_zero, cpu>::Launch(s, out_data.Size(), out_data.dptr<DType>());
    for (size_t i = 0; i < nds.size(); ++i) {
      const NDArray& nd = nds[i];
      const nnvm::dim_t num_rows = nd.shape()[0];
      const nnvm::dim_t num_cols = nd.shape()[1];
      const TBlob& nd_data = nd.data();
    }
    }
    }
    
      auto write = [&](std::vector<AttrType> *vec, size_t size, const char *name) {
      for (size_t i = 0; i < size; ++i) {
        CHECK(assign(&(*vec)[i], dattr))
          << 'Incompatible attr in node ' << attrs.name << ' at ' << i << '-th '
          << name << ': ' << 'expected ' << attr_string(dattr)
          << ', got ' << attr_string((*vec)[i]);
      }
    };
  write(in_attrs, in_size, 'input');
  write(out_attrs, out_size, 'output');
    
      template<typename xpu, typename OP>
  static void Compute(const nnvm::NodeAttrs &attrs,
                      const OpContext &ctx,
                      const std::vector<TBlob> &inputs,
                      const std::vector<OpReqType> &req,
                      const std::vector<TBlob> &outputs) {
    using namespace mxnet_op;
    if (req[0] != kNullOp) {
      Stream<xpu> *s = ctx.get_stream<xpu>();
      CHECK_EQ(inputs.size(), 2U);
      CHECK_EQ(outputs.size(), 1U);
      MXNET_ASSIGN_REQ_SWITCH(req[0], Req, {
        MSHADOW_TYPE_SWITCH(outputs[0].type_flag_, DType, {
          const size_t size = (minthree(outputs[0].Size(), inputs[0].Size(), inputs[1].Size())
          + DataType<DType>::kLanes - 1) / DataType<DType>::kLanes;
          Kernel<mxnet_op::op_with_req<OP, Req>, xpu>::Launch(s, size,
          outputs[0].dptr<DType>(),
          inputs[0].dptr<DType>(), inputs[1].dptr<DType>());
        });
      });
    }
  }
    
    /*! \brief Fill output with a scalar integer value */
template<typename xpu, int value>
void FillCompute(const nnvm::NodeAttrs& attrs,
                 const OpContext& ctx,
                 const std::vector<TBlob>& inputs,
                 const std::vector<OpReqType>& req,
                 const std::vector<TBlob>& outputs) {
  Fill<true>(ctx.get_stream<xpu>(), outputs[0], req[0], value);
}
    
    #endif  // MXNET_OPERATOR_CONTRIB_ROI_ALIGN_INL_H_

    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
            hr = cmdList->Close();
        IM_ASSERT(SUCCEEDED(hr));
    
    VkSurfaceFormatKHR ImGui_ImplVulkanH_SelectSurfaceFormat(VkPhysicalDevice physical_device, VkSurfaceKHR surface, const VkFormat* request_formats, int request_formats_count, VkColorSpaceKHR request_color_space)
{
    IM_ASSERT(request_formats != NULL);
    IM_ASSERT(request_formats_count > 0);
    }
    
    static bool show_demo_window = true;
static bool show_another_window = false;
static ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
    int main(int, char**)
{
    // Setup window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    GLFWwindow* window = glfwCreateWindow(1280, 720, 'Dear ImGui GLFW+OpenGL2 example', NULL, NULL);
    if (window == NULL)
        return 1;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    static void check_vk_result(VkResult err)
{
    if (err == 0) return;
    printf('VkResult %d\n', err);
    if (err < 0)
        abort();
}