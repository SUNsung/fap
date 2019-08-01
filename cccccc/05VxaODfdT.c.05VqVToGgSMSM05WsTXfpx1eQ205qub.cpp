
        
        
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    
template <>
const char *
FloatVectorAttribute::staticTypeName ()
{
    return 'floatvector';
}
    
    class  FrameBuffer;
class  DeepFrameBuffer;
struct DeepSlice;
    
    //-----------------------------------------------------------------------------
//
//      class Slice
//      class FrameBuffer
//
//-----------------------------------------------------------------------------
    
    //-----------------------------------------------------------------------------
//
//      class Slice
//      class FrameBuffer
//
//-----------------------------------------------------------------------------
    
        if (getVersion (version) != EXR_VERSION)
    {
        THROW (IEX_NAMESPACE::InputExc, 'Cannot read '
                              'version ' << getVersion (version) << ' '
                              'image files.  Current file format version '
                              'is ' << EXR_VERSION << '.');
    }
    
    
//-----------------------------------------------------------------------------
//
//	Low-level file input and output for OpenEXR.
//
//-----------------------------------------------------------------------------
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    
void
InputFile::compatibilityInitialize (OPENEXR_IMF_INTERNAL_NAMESPACE::IStream& is)
{
    is.seekg(0);
    }
    
            IMF_EXPORT
        const char *        fileName () const;
        IMF_EXPORT
        const Header &      header () const;
        IMF_EXPORT
        int                 version () const;
        IMF_EXPORT
        void                setFrameBuffer (const FrameBuffer &frameBuffer);
        IMF_EXPORT
        const FrameBuffer & frameBuffer () const;
        IMF_EXPORT
        bool                isComplete () const;
        IMF_EXPORT
        bool                isOptimizationEnabled () const;
        IMF_EXPORT
        void                readPixels (int scanLine1, int scanLine2);
        IMF_EXPORT
        void                readPixels (int scanLine);
        IMF_EXPORT
        void                rawPixelData (int firstScanLine,
                                          const char *&pixelData,
                                          int &pixelDataSize);
    
    
    {}  // namespace tesseract.

    
      // Adds a new point. Takes a copy - the pt doesn't need to stay in scope.
  // Add must be called on points in sequence along the line.
  void Add(const ICOORD& pt);
  // Associates a half-width with the given point if a point overlaps the
  // previous point by more than half the width, and its distance is further
  // than the previous point, then the more distant point is ignored in the
  // distance calculation. Useful for ignoring i dots and other diacritics.
  void Add(const ICOORD& pt, int halfwidth);
    
    class QRSequenceGenerator {
 public:
  // Object is initialized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
    
    {  UNICHARMAP_NODE* nodes;
};
    
    
    {
  // Total scaled error used by boosting algorithms.
  double scaled_error_;
  // Difference in result rating to be thought of as an 'equal' choice.
  double rating_epsilon_;
  // Vector indexed by font_id from the samples of error accumulators.
  GenericVector<Counts> font_counts_;
  // Counts of the results that map each unichar_id (from samples) to an
  // incorrect shape_id.
  GENERIC_2D_ARRAY<int> unichar_counts_;
  // Count of the number of times each shape_id occurs, is correct, and multi-
  // unichar.
  GenericVector<int> multi_unichar_counts_;
  // Histogram of scores (as percent) for correct answers.
  STATS ok_score_hist_;
  // Histogram of scores (as percent) for incorrect answers.
  STATS bad_score_hist_;
  // Unicharset for printing character ids in results.
  const UNICHARSET& unicharset_;
};
    
      void DirectFreeNoLock(Storage::Handle handle) {
    mxnet::common::cuda::DeviceStore device_store(handle.ctx.real_dev_id(), true);
    cudaError_t err = cudaFree(handle.dptr);
    size_t size = get_size(get_bucket(handle.size));
    // ignore unloading error, as memory has already been recycled
    if (err != cudaSuccess && err != cudaErrorCudartUnloading) {
      LOG(FATAL) << 'CUDA: ' << cudaGetErrorString(err);
    }
    used_memory_ -= size;
  }
    
                const char *type = getenv('MXNET_GPU_MEM_POOL_TYPE');
            const bool default_pool = (type == nullptr);
            if (default_pool) type = 'Naive';
            std::string strategy = type;
    
          // [start, end) interval for spatial sampling
      const DType* offset_bottom_rois = bottom_rois + n * 5;
      index_t roi_batch_ind = offset_bottom_rois[0];
      DType roi_start_w = static_cast<DType>(round(offset_bottom_rois[1])) * spatial_scale - 0.5;
      DType roi_start_h = static_cast<DType>(round(offset_bottom_rois[2])) * spatial_scale - 0.5;
      DType roi_end_w = static_cast<DType>(round(offset_bottom_rois[3]) + 1.) * spatial_scale - 0.5;
      DType roi_end_h = static_cast<DType>(round(offset_bottom_rois[4]) + 1.) * spatial_scale - 0.5;
    
      // create shape map for in_args and aux_states
  std::unordered_map<std::string, mxnet::TShape> arg_shape_map(num_provided_arg_shapes);
  for (mx_uint i = 0; i < num_provided_arg_shapes; ++i) {
    auto p = arg_shape_map.emplace(provided_arg_shape_names[i],
        mxnet::TShape(provided_arg_shape_data+provided_arg_shape_idx[i],
          provided_arg_shape_data+provided_arg_shape_idx[i+1]));
    CHECK(p.second) << 'Duplicate shapes are provided for argument '
      << provided_arg_shape_names[i] << ' in simple_bind';
  }
  if (!Imperative::Get()->is_np_shape()) {
    for (auto &kv : arg_shape_map) {
      common::ConvertToNumpyShape(&kv.second);
    }
  }
    
      for (int i = ndim - 1; i >= 0; i--) {
    index_products[i] = index_products[i + 1] * inshape[i];
  }
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
      Location m_loc;
  std::vector<Location::Range> m_funcLocs;
  std::vector<bool> m_classes; // used to determine if we are currently
                               // inside a regular class or an XHP class
    
    #include <boost/ptr_container/ptr_vector.hpp>
    
    TEST_F(ProxygenTransportBasicTest, no_length) {
  auto req = getRequest(HTTPMethod::POST);
  m_transport->onHeadersComplete(std::move(req));
}
    
    // Relational comparisons of vecs with non-vecs isn't allowed and will always
// throw. Equality comparisons always act as if they are not equal.
SSATmp* emitMixedVecCmp(IRGS& env, Op op) {
  switch (op) {
    case Op::Gt:
    case Op::Gte:
    case Op::Lt:
    case Op::Lte:
    case Op::Cmp:
      gen(
        env,
        ThrowInvalidOperation,
        cns(env, s_cmpWithVec.get())
      );
      return cns(env, false);
    case Op::Same:
    case Op::Eq: return cns(env, false);
    case Op::NSame:
    case Op::Neq: return cns(env, true);
    default: always_assert(false);
  }
}
    
      req::vector<StringData*> pathListStringData;
  IterateVNoInc(
    pathList.get(),
    [&] (TypedValue tv) {
      if (UNLIKELY(!isStringType(tv.m_type))) {
        SystemLib::throwInvalidOperationExceptionObject(
          'HH\\facts_parse expects a varray<string> but was given an array '
          'with a non-string value.'
        );
      }
      pathListStringData.push_back(tv.m_data.pstr);
    }
  );
    
    int main()
{
    // create a JSON value
    json j =
    {
        {'number', 1}, {'string', 'foo'}, {'array', {1, 2}}
    };
    }
    
        // out_of_range.401
    try
    {
        // try to use a an invalid array index
        json::const_reference ref = j.at('/array/4'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create an array from std::list
    std::list<bool> c_list {true, true, false, true};
    json j_list(c_list);