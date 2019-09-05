
        
            // Create the pipes to which the ConPTY will connect
    if (CreatePipe(&hPipePTYIn, phPipeOut, NULL, 0) &&
        CreatePipe(phPipeIn, &hPipePTYOut, NULL, 0))
    {
        // Determine required size of Pseudo Console
        COORD consoleSize{};
        CONSOLE_SCREEN_BUFFER_INFO csbi{};
        HANDLE hConsole{ GetStdHandle(STD_OUTPUT_HANDLE) };
        if (GetConsoleScreenBufferInfo(hConsole, &csbi))
        {
            consoleSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
            consoleSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
        }
    }
    
        int                 xSampling;
    int                 ySampling;
    
    Rational
guessExactFps (double fps)
{
    return guessExactFps (Rational (fps));
}
    
        OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, magic);
    OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, version);
    
    
#endif /* IMFGENERICINPUTFILE_H_ */

    
    inline Header::ConstIterator &
Header::ConstIterator::operator ++ ()
{
    ++_i;
    return *this;
}
    
    	    for (Int64 i = 1 << (HUF_DECBITS - l); i > 0; i--, pl++)
	    {
		if (pl->len || pl->p)
		{
		    //
		    // Error: a short code or a long code has
		    // already been stored in table entry *pl.
		    //
    }
    }
    
        
    //---------------------------------------------------------------
    // Check if SSE optimization is enabled
    //
    // Call after setFrameBuffer() to query whether optimized file decoding
    // is available - decode times will be faster if returns true
    //
    // Optimization depends on:
    //   the file type (only scanline data is supported),
    //   the framebuffer channels (RGB/RGBA mono or stereo)
    //   the framebuffer channel types (all channels half-float format only)
    //   the file channels (RGB/RGBA mono or stereo)
    //   the file channel types (all channel half-float format only)
    //   whether SSE2 instruction support was detected at compile time
    //
    // Calling isOptimizationEnabled before setFrameBuffer will throw an exception
    //
    //---------------------------------------------------------------
    
    IMF_EXPORT
    bool                isOptimizationEnabled () const;
    
    
    
    
    
    {    private:
        InputFile* file;
    // for internal use - give OutputFile and TiledOutputFile access to file for copyPixels
    friend void OutputFile::copyPixels(InputPart&);
    friend void TiledOutputFile::copyPixels(InputPart&);
    
};
    
    //
// Used to wrap OPENEXR_IMF_INTERNAL_NAMESPACE::IStream as a Mutex.
//
struct InputStreamMutex : public Mutex
{
    OPENEXR_IMF_INTERNAL_NAMESPACE::IStream* is;
    Int64 currentPosition;
    }
    
    //-----------------------------------------------------------------------------
//
//	class IntAttribute
//
//-----------------------------------------------------------------------------
    
    template <typename Dtype>
void SGDSolver<Dtype>::RestoreSolverStateFromBinaryProto(
    const string& state_file) {
  SolverState state;
  ReadProtoFromBinaryFile(state_file, &state);
  this->iter_ = state.iter();
  if (state.has_learned_net()) {
    NetParameter net_param;
    ReadNetParamsFromBinaryFileOrDie(state.learned_net().c_str(), &net_param);
    this->net_->CopyTrainedLayersFrom(net_param);
  }
  this->current_step_ = state.current_step();
  CHECK_EQ(state.history_size(), history_.size())
      << 'Incorrect length of history blobs.';
  LOG(INFO) << 'SGDSolver: restoring history';
  for (int i = 0; i < history_.size(); ++i) {
    history_[i]->FromProto(state.history(i));
  }
}
    
      /**
   * @brief Computes the error gradient w.r.t. the clipped inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} = \left\{
   *        \begin{array}{lr}
   *            0 & \mathrm{if} \; x < min \vee x > max \\
   *            \frac{\partial E}{\partial y} & \mathrm{if} \; x \ge min \wedge x \le max
   *        \end{array} \right.
   *      @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
      // vector wrappers for all the vector types we use
  bp::class_<vector<shared_ptr<Blob<Dtype> > > >('BlobVec')
    .def(bp::vector_indexing_suite<vector<shared_ptr<Blob<Dtype> > >, true>())
    .def('add_blob', bp::raw_function(&BlobVec_add_blob));
  bp::class_<vector<Blob<Dtype>*> >('RawBlobVec')
    .def(bp::vector_indexing_suite<vector<Blob<Dtype>*>, true>());
  bp::class_<vector<shared_ptr<Layer<Dtype> > > >('LayerVec')
    .def(bp::vector_indexing_suite<vector<shared_ptr<Layer<Dtype> > >, true>());
  bp::class_<vector<string> >('StringVec')
    .def(bp::vector_indexing_suite<vector<string> >());
  bp::class_<vector<int> >('IntVec')
    .def(bp::vector_indexing_suite<vector<int> >());
  bp::class_<vector<Dtype> >('DtypeVec')
    .def(bp::vector_indexing_suite<vector<Dtype> >());
  bp::class_<vector<shared_ptr<Net<Dtype> > > >('NetVec')
    .def(bp::vector_indexing_suite<vector<shared_ptr<Net<Dtype> > >, true>());
  bp::class_<vector<bool> >('BoolVec')
    .def(bp::vector_indexing_suite<vector<bool> >());
    
    template <typename Dtype>
void PoolingLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  PoolingParameter pool_param = this->layer_param_.pooling_param();
  if (pool_param.global_pooling()) {
    CHECK(!(pool_param.has_kernel_size() ||
      pool_param.has_kernel_h() || pool_param.has_kernel_w()))
      << 'With Global_pooling: true Filter size cannot specified';
  } else {
    CHECK(!pool_param.has_kernel_size() !=
      !(pool_param.has_kernel_h() && pool_param.has_kernel_w()))
      << 'Filter size is kernel_size OR kernel_h and kernel_w; not both';
    CHECK(pool_param.has_kernel_size() ||
      (pool_param.has_kernel_h() && pool_param.has_kernel_w()))
      << 'For non-square filters both kernel_h and kernel_w are required.';
  }
  CHECK((!pool_param.has_pad() && pool_param.has_pad_h()
      && pool_param.has_pad_w())
      || (!pool_param.has_pad_h() && !pool_param.has_pad_w()))
      << 'pad is pad OR pad_h and pad_w are required.';
  CHECK((!pool_param.has_stride() && pool_param.has_stride_h()
      && pool_param.has_stride_w())
      || (!pool_param.has_stride_h() && !pool_param.has_stride_w()))
      << 'Stride is stride OR stride_h and stride_w are required.';
  global_pooling_ = pool_param.global_pooling();
  round_mode_ = pool_param.round_mode();
  if (global_pooling_) {
    kernel_h_ = bottom[0]->height();
    kernel_w_ = bottom[0]->width();
  } else {
    if (pool_param.has_kernel_size()) {
      kernel_h_ = kernel_w_ = pool_param.kernel_size();
    } else {
      kernel_h_ = pool_param.kernel_h();
      kernel_w_ = pool_param.kernel_w();
    }
  }
  CHECK_GT(kernel_h_, 0) << 'Filter dimensions cannot be zero.';
  CHECK_GT(kernel_w_, 0) << 'Filter dimensions cannot be zero.';
  if (!pool_param.has_pad_h()) {
    pad_h_ = pad_w_ = pool_param.pad();
  } else {
    pad_h_ = pool_param.pad_h();
    pad_w_ = pool_param.pad_w();
  }
  if (!pool_param.has_stride_h()) {
    stride_h_ = stride_w_ = pool_param.stride();
  } else {
    stride_h_ = pool_param.stride_h();
    stride_w_ = pool_param.stride_w();
  }
  if (global_pooling_) {
    CHECK(pad_h_ == 0 && pad_w_ == 0 && stride_h_ == 1 && stride_w_ == 1)
      << 'With Global_pooling: true; only pad = 0 and stride = 1';
  }
  if (pad_h_ != 0 || pad_w_ != 0) {
    CHECK(this->layer_param_.pooling_param().pool()
        == PoolingParameter_PoolMethod_AVE
        || this->layer_param_.pooling_param().pool()
        == PoolingParameter_PoolMethod_MAX)
        << 'Padding implemented only for average and max pooling.';
    CHECK_LT(pad_h_, kernel_h_);
    CHECK_LT(pad_w_, kernel_w_);
  }
}
    
    template <typename Dtype>
void Net<Dtype>::CopyTrainedLayersFromHDF5(const string& trained_filename) {
#ifdef USE_HDF5
  hid_t file_hid = H5Fopen(trained_filename.c_str(), H5F_ACC_RDONLY,
                           H5P_DEFAULT);
  CHECK_GE(file_hid, 0) << 'Couldn't open ' << trained_filename;
  hid_t data_hid = H5Gopen2(file_hid, 'data', H5P_DEFAULT);
  CHECK_GE(data_hid, 0) << 'Error reading weights from ' << trained_filename;
  int num_layers = hdf5_get_num_links(data_hid);
  for (int i = 0; i < num_layers; ++i) {
    string source_layer_name = hdf5_get_name_by_idx(data_hid, i);
    if (!layer_names_index_.count(source_layer_name)) {
      LOG(INFO) << 'Ignoring source layer ' << source_layer_name;
      continue;
    }
    int target_layer_id = layer_names_index_[source_layer_name];
    DLOG(INFO) << 'Copying source layer ' << source_layer_name;
    vector<shared_ptr<Blob<Dtype> > >& target_blobs =
        layers_[target_layer_id]->blobs();
    hid_t layer_hid = H5Gopen2(data_hid, source_layer_name.c_str(),
        H5P_DEFAULT);
    CHECK_GE(layer_hid, 0)
        << 'Error reading weights from ' << trained_filename;
    // Check that source layer doesn't have more params than target layer
    int num_source_params = hdf5_get_num_links(layer_hid);
    CHECK_LE(num_source_params, target_blobs.size())
        << 'Incompatible number of blobs for layer ' << source_layer_name;
    for (int j = 0; j < target_blobs.size(); ++j) {
      ostringstream oss;
      oss << j;
      string dataset_name = oss.str();
      int target_net_param_id = param_id_vecs_[target_layer_id][j];
      if (!H5Lexists(layer_hid, dataset_name.c_str(), H5P_DEFAULT)) {
        // Target param doesn't exist in source weights...
        if (param_owners_[target_net_param_id] != -1) {
          // ...but it's weight-shared in target, so that's fine.
          continue;
        } else {
          LOG(FATAL) << 'Incompatible number of blobs for layer '
              << source_layer_name;
        }
      }
      hdf5_load_nd_dataset(layer_hid, dataset_name.c_str(), 0, kMaxBlobAxes,
          target_blobs[j].get());
    }
    H5Gclose(layer_hid);
  }
  H5Gclose(data_hid);
  H5Fclose(file_hid);
#else
  LOG(FATAL) << 'CopyTrainedLayersFromHDF5 requires hdf5;'
             << ' compile with USE_HDF5.';
#endif  // USE_HDF5
}
    
      // Set the signal handlers to the default.
  void UnhookHandler() {
    if (already_hooked_up) {
      struct sigaction sa;
      // Setup the sighup handler
      sa.sa_handler = SIG_DFL;
      // Restart the system call, if at all possible
      sa.sa_flags = SA_RESTART;
      // Block every signal during the handler
      sigfillset(&sa.sa_mask);
      // Intercept SIGHUP and SIGINT
      if (sigaction(SIGHUP, &sa, NULL) == -1) {
        LOG(FATAL) << 'Cannot uninstall SIGHUP handler.';
      }
      if (sigaction(SIGINT, &sa, NULL) == -1) {
        LOG(FATAL) << 'Cannot uninstall SIGINT handler.';
      }
    }
    }
    
    const int kCIFARSize = 32;
const int kCIFARImageNBytes = 3072;
const int kCIFARBatchSize = 10000;
const int kCIFARTrainBatches = 5;
    
    #include 'resource_importer_image.h'
    
    String ResourceImporterOGGVorbis::get_resource_type() const {
    }
    
    		if (has_node(drag_node_path)) {
			Node *n = get_node(drag_node_path);
			drag_node = Object::cast_to<Control>(n);
		}
    
    
    {	CPUParticles2DEditorPlugin(EditorNode *p_node);
	~CPUParticles2DEditorPlugin();
};
    
    void FileAccessNetworkClient::put_32(int p_32) {
    }
    
    
    {			return p_left->center.y < p_right->center.y;
		}
	};
	struct BVHCmpZ {
    
    public:
	float get_length() const;
	float get_max(float p_time, float p_time_next) const;
	float get_min(float p_time, float p_time_next) const;
    
    
    {		image->lock();
		for (int i = 0; i < width; i++) {
			for (int j = 0; j < height; j++) {
				image->set_pixel(i, j, image->get_pixel(i, j).inverted());
			}
		}
		image->unlock();
	}
    
    	ClassDB::bind_method('_removed_from_graph', &AnimationNodeBlendSpace2DEditor::_removed_from_graph);
    
            explicit Rational(PRAT prat) noexcept;
        PRAT ToPRAT() const;
    
        /// <summary>
    /// Calculate the remainder after division, the sign of a result will match the sign of lhs.
    /// </summary>
    /// <remarks>
    /// This function has the same behavior as the standard C/C++ operator '%', to calculate the modulus after division instead, use <see
    /// cref='Rational::operator%'/> instead.
    /// </remarks>
    Rational operator%(Rational lhs, Rational const& rhs)
    {
        lhs %= rhs;
        return lhs;
    }
    
    
    {
    {        return Calc_ULongLongToULong(ull64Result, pulResult);
    }
}
    
        auto operandCommand = std::make_shared<COpndCommand>(commands, fNegative, fDecimal, fSciFmt);
    operandCommand->Initialize(rat);
    int iCommandEnd = AddCommand(operandCommand);
    m_lastOpStartIndex = IchAddSzToEquationSz(numStr, iCommandEnd);
    
        private:
        // Make CalculatorAnnouncement a friend class so it is the only
        // class that can access the private constructor.
        friend class CalculatorAnnouncement;
    
    void PSOutputDev::updateStrokeOverprint(GfxState *state) {
  if (level >= psLevel2) {
    writePSFmt('{0:s} OP\n', state->getStrokeOverprint() ? 'true' : 'false');
  }
}
    
    private:
  void parse(Object *tree);
    
    #ifndef POPPLER_CACHE_H
#define POPPLER_CACHE_H
    
    #include <config.h>
    
    
    {  if (readAttrs)
  {
    Object tmp;
    Dict *dict = streamObj->getStream()->getDict();
    dict->lookup('F', &tmp);
    if (!tmp.isNull()) {
      Object obj1;
      // valid 'F' key -> external file
      kind = soundExternal;
      if (getFileSpecNameForPlatform (&tmp, &obj1)) {
        fileName = obj1.getString()->copy();
        obj1.free();
      }
    } else {
      // no file specification, then the sound data have to be
      // extracted from the stream
      kind = soundEmbedded;
    }
    tmp.free();
    // sampling rate
    dict->lookup('R', &tmp);
    if (tmp.isNum()) {
      samplingRate = tmp.getNum();
    }
    tmp.free();
    // sound channels
    dict->lookup('C', &tmp);
    if (tmp.isInt()) {
      channels = tmp.getInt();
    }
    tmp.free();
    // bits per sample
    dict->lookup('B', &tmp);
    if (tmp.isInt()) {
      bitsPerSample = tmp.getInt();
    }
    tmp.free();
    // encoding format
    dict->lookup('E', &tmp);
    if (tmp.isName())
    {
      const char *enc = tmp.getName();
      if (strcmp('Raw', enc) == 0) {
        encoding = soundRaw;
      } else if (strcmp('Signed', enc) == 0) {
        encoding = soundSigned;
      } else if (strcmp('muLaw', enc) == 0) {
        encoding = soundMuLaw;
      } else if (strcmp('ALaw', enc) == 0) {
        encoding = soundALaw;
      }
    }
    tmp.free();
  }
}