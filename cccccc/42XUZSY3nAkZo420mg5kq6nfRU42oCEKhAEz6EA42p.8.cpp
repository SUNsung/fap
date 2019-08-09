
        
          CHROMEG_CALLBACK_1(GlobalMenuBarRegistrarX11,
                     void,
                     OnProxyCreated,
                     GObject*,
                     GAsyncResult*);
  CHROMEG_CALLBACK_1(GlobalMenuBarRegistrarX11,
                     void,
                     OnNameOwnerChanged,
                     GObject*,
                     GParamSpec*);
    
    namespace mate {
    }
    
    // static
void WrappableBase::FirstWeakCallback(
    const v8::WeakCallbackInfo<WrappableBase>& data) {
  WrappableBase* wrappable = data.GetParameter();
  wrappable->wrapper_.Reset();
  data.SetSecondPassCallback(SecondWeakCallback);
}
    
      template <typename T>
  bool GetRemaining(std::vector<T>* out) {
    if (next_ >= info_->Length()) {
      insufficient_arguments_ = true;
      return false;
    }
    int remaining = info_->Length() - next_;
    out->resize(remaining);
    for (int i = 0; i < remaining; ++i) {
      v8::Local<v8::Value> val = (*info_)[next_++];
      if (!ConvertFromV8(isolate_, val, &out->at(i)))
        return false;
    }
    return true;
  }
    
      v8::Global<v8::External> v8_ref_;
    
    #endif  // NATIVE_MATE_NATIVE_MATE_PROMISE_H_

    
     private:
  v8::Isolate* isolate_;
  v8::Persistent<T> handle_;
    
    
    {}  // namespace
    
    
    {    DISALLOW_COPY_AND_ASSIGN(SocketReader);
  };
    
     private:
  ~UvTaskRunner() override;
  static void OnTimeout(uv_timer_t* timer);
  static void OnClose(uv_handle_t* handle);
    
    #ifndef BITCOIN_QT_INTRO_H
#define BITCOIN_QT_INTRO_H
    
        BOOST_CHECK(obj['key1'].isStr());
    std::string correctValue('str');
    correctValue.push_back('\0');
    BOOST_CHECK_EQUAL(obj['key1'].getValStr(), correctValue);
    BOOST_CHECK(obj['key2'].isNum());
    BOOST_CHECK_EQUAL(obj['key2'].getValStr(), '800');
    BOOST_CHECK(obj['key3'].isObject());
    
    
    {} // namespace bech32
    
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; void sha256_sse4(void *input_data, UINT32 digest[8], UINT64 num_blks)
;; arg 1 : pointer to input data
;; arg 2 : pointer to digest
;; arg 3 : Num blocks
section .text
global sha256_sse4
align 32
sha256_sse4:
    push	rbx
%ifndef LINUX
    push	rsi
    push	rdi
%endif
    push	rbp
    push	r13
    push	r14
    push	r15
    
        // Merging compaction (will fail)
    error_type->Release_Store(env_);
    dbfull()->TEST_CompactRange(last, NULL, NULL);  // Should fail
    ASSERT_EQ('bar', Get('foo'));
    
      void DoTest() {
    Random rnd(0);
    ASSERT_OK(OpenDB());
    for (size_t idx = 0; idx < kNumIterations; idx++) {
      int num_pre_sync = rnd.Uniform(kMaxNumValues);
      int num_post_sync = rnd.Uniform(kMaxNumValues);
    }
    }
    
    std::string SSTTableFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'sst');
}
    
    namespace caffe2 {
    }
    
    
    {  auto nn = caffe2::convertToNNModule(net);
  auto new_netdef = caffe2::convertToCaffe2Proto(nn);
  EXPECT_EQ(new_netdef.external_output().size(), net.external_output().size());
  for (auto i = 0; i < net.external_output().size(); ++i) {
    EXPECT_EQ(new_netdef.external_output(i), net.external_output(i));
  }
}
    
    OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    Example 2 (with KEY):
DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
KEY   = [0, 1, 3, 2, 1, 0, 1, 0]
RANGES = [
  [
    [2, 4],
    [0, 2],
  ],
  [
    [0, 0],
    [6, 2],
  ]
]
lengths = [4, 2]
OUTPUT[0] = [[6, 5, 4, 3], [0, 0, 0, 0]]
OUTPUT[1] = [[1, 2], [8, 7]]
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/common.hpp'
#include 'caffe/layers/hdf5_data_layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
    
    {}  // namespace caffe

    
      /**
   * The network backward should take no input and output, since it solely
   * computes the gradient w.r.t the parameters, and the data has already been
   * provided during the forward pass.
   */
  void Backward();
  void BackwardFromTo(int start, int end);
  void BackwardFrom(int start);
  void BackwardTo(int end);
    
      // Timing information, handy to tune e.g. nbr of GPUs
  Timer iteration_timer_;
  float iterations_last_;
    
      bp::class_<SolverParameter>('SolverParameter', bp::no_init)
    .add_property('max_iter', &SolverParameter::max_iter)
    .add_property('display', &SolverParameter::display)
    .add_property('layer_wise_reduce', &SolverParameter::layer_wise_reduce)
    .add_property('base_lr', &SolverParameter::base_lr,
           &SolverParameter::set_base_lr);
  bp::class_<LayerParameter>('LayerParameter', bp::no_init);
    
    template <typename Dtype>
bool Net<Dtype>::has_layer(const string& layer_name) const {
  return layer_names_index_.find(layer_name) != layer_names_index_.end();
}
    
    #if defined(USE_LEVELDB) && defined(USE_LMDB)
    
      caffe::Datum datum;
  datum.set_channels(2);  // one channel for each image in the pair
  datum.set_height(rows);
  datum.set_width(cols);
  LOG(INFO) << 'A total of ' << num_items << ' items.';
  LOG(INFO) << 'Rows: ' << rows << ' Cols: ' << cols;
  for (int itemid = 0; itemid < num_items; ++itemid) {
    int i = caffe::caffe_rng_rand() % num_items;  // pick a random  pair
    int j = caffe::caffe_rng_rand() % num_items;
    read_image(&image_file, &label_file, i, rows, cols,
        pixels, &label_i);
    read_image(&image_file, &label_file, j, rows, cols,
        pixels + (rows * cols), &label_j);
    datum.set_data(pixels, 2*rows*cols);
    if (label_i  == label_j) {
      datum.set_label(1);
    } else {
      datum.set_label(0);
    }
    datum.SerializeToString(&value);
    std::string key_str = caffe::format_int(itemid, 8);
    db->Put(leveldb::WriteOptions(), key_str, value);
  }
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
    namespace leveldb {
    }
    
      static Key RandomTarget(Random* rnd) {
    switch (rnd->Next() % 10) {
      case 0:
        // Seek to beginning
        return MakeKey(0, 0);
      case 1:
        // Seek to end
        return MakeKey(K, 0);
      default:
        // Seek to middle
        return MakeKey(rnd->Next() % K, 0);
    }
  }
    
    namespace leveldb {
    }
    
    
    {  Status result = metaindex_handle_.DecodeFrom(input);
  if (result.ok()) {
    result = index_handle_.DecodeFrom(input);
  }
  if (result.ok()) {
    // We skip over any leftover data (just padding for now) in 'input'
    const char* end = magic_ptr + 8;
    *input = Slice(end, input->data() + input->size() - end);
  }
  return result;
}
    
    #ifndef STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_
#define STORAGE_LEVELDB_TABLE_ITERATOR_WRAPPER_H_
    
    // Return a new two level iterator.  A two-level iterator contains an
// index iterator whose values point to a sequence of blocks where
// each block is itself a sequence of key,value pairs.  The returned
// two-level iterator yields the concatenation of all key/value pairs
// in the sequence of blocks.  Takes ownership of 'index_iter' and
// will delete it when no longer needed.
//
// Uses a supplied function to convert an index_iter value into
// an iterator over the contents of the corresponding block.
Iterator* NewTwoLevelIterator(
    Iterator* index_iter,
    Iterator* (*block_function)(void* arg, const ReadOptions& options,
                                const Slice& index_value),
    void* arg, const ReadOptions& options);
    
        a0.t = 0x88a6b5e2c10d3f9f; a0.v = 0x98713e0ad31c6b55;
    a1.t = 0x256b36bd8ef79236; a1.v = 0x63f4b85d224d9dfb;
    r.t = 0; r.v = 0;
    
    ///////////////////////////////////////////////////////////////////////////////
    
    void smashJmp(TCA inst, TCA target) {
  always_assert(is_aligned(inst, Alignment::SmashJmp));
    }
    
      auto const release = emitDecRefHelper(cb, data, local, type, local | last);
  // Now we know where release is, we can patch the calls to
  // releaseFake and point them to the correct address.
  for (auto addr = start; addr < release; ) {
    x64::DecodedInstruction di(addr, addr);
    if (di.hasPicOffset() && di.picAddress() == releaseFake) {
      always_assert(di.isCall());
      di.setPicAddress(release);
    }
    addr += di.size();
  }
    
      Label(const Label&) = delete;
  Label& operator=(const Label&) = delete;
    
      size_t numFrees()   const { return m_nfree; }
  size_t numAllocs()  const { return m_nalloc; }
  size_t bytesFree()  const { return m_bytesFree; }
  size_t blocksFree() const { return m_freeRanges.size(); }
    
    bool File::flush() {
  return true;
}
    
    bool BZ2File::closeImpl() {
  if (!isClosed()) {
    if (m_bzFile) {
      BZ2_bzclose(m_bzFile);
      m_bzFile = nullptr;
    }
    setIsClosed(true);
    if (m_innerFile) {
      m_innerFile->close();
    }
  }
  File::closeImpl();
  return true;
}
    
      void initStandard();
  void initErrorFunc();
  void initClassobj();
  void initClosure();
  void initNetwork();
  void initOptions();
  void initGc();
  void initOutput();
  void initString();
  void initVariable();
  void initFunction();
  void initMisc();
  void initFile();
  void initIntrinsics();
  void initMath();
  void initProcess();
    
      void addControlArc(TransID srcId, TransID destId) {
    assert(srcId  < nTranslations);
    assert(destId < nTranslations);
    succs[srcId].insert(destId);
    preds[destId].insert(srcId);
  }