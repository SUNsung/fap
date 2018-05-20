
        
        #include <vector>
    
      window->menu_ = menu;
  
#if defined(OS_MACOSX)
  response->Append(NWChangeAppMenu(menu));
#endif
    
    IPC_SYNC_MESSAGE_ROUTED4_1(ShellViewHostMsg_Call_Object_Method_Sync,
                           int /* object id */,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
    
    {} // namespace nwapi

    
    void Menu::OnMenuClosed() {
  CHECK(!message_loop_quit_.is_null());
  message_loop_quit_.Run();
  
#if !defined(OS_WIN)
  // Ask PlatformEventSource to stop dispatching
  // events in this message loop
  // iteration. We want our menu's loop to return
  // before the next event.
  if (ui::PlatformEventSource::GetInstance())
    ui::PlatformEventSource::GetInstance()->StopCurrentEventStream();
#endif
}
    
    void MenuItem::SetSubmenu(Menu* sub_menu) {
  submenu_ = sub_menu;
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    sub_menu->UpdateKeys(gtk_accel_group);
  }
  if (sub_menu == NULL)
    gtk_menu_item_remove_submenu(GTK_MENU_ITEM(menu_item_));
  else
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item_), sub_menu->menu_);
}
    
    using namespace extensions::nwapi::nw__app;
    
      tensor->resize({1, 2, 3});
  assert(tensor->nDim() == 3);
  int i = 0;
  for (auto s: tensor->sizes())
    assert(s == ++i);
    
      struct RequestGloo : DataChannel::Request {
    RequestGloo(QueueWorker::Request&& request);
    virtual ~RequestGloo();
    }
    
    PyObject* tensor_to_list(const Tensor& tensor) {
  Tensor data = tensor;
  if (data.type().backend() != kCPU) {
    with_no_gil([&]() {
      data = data.toBackend(kCPU);
    });
  }
  auto& type = data.type();
  return recursive_to_list(
      (char*)data.data_ptr(), data.sizes(), data.strides(), 0,
      type.scalarType(), type.elementSizeInBytes());
}
    
    #define THCPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPDoubleStorageClass)
#define THCPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPFloatStorageClass)
#define THCPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPHalfStorageClass)
#define THCPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPLongStorageClass)
#define THCPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPIntStorageClass)
#define THCPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPShortStorageClass)
#define THCPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPCharStorageClass)
#define THCPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THCPByteStorageClass)
    
    ByteArray::ByteArray(const char* arr, std::size_t size)
  : _data(arr, arr + size)
{}
    
        template<class ElemType>
    static size_t GetNumSubminibatchesNeeded(IDataReader* dataReader,
                                           size_t maxSamplesInRAM,
                                           size_t numSubminibatches,
                                           size_t tunedMBSize)
    {
        if (numSubminibatches > 1) // user-specified maximum number of samples
            return numSubminibatches;
    }
    
                // Get attribute type.
            AttrType GetType() const;
    
                if (StatusCategory::SYSTEM == m_state->m_category)
            {
                result += 'SystemError';
                result += ' : ';
                result += std::to_string(errno);
            }
            else if (StatusCategory::ONNX == m_state->m_category)
            {
                result += '[ONNXError]';
                result += ' : ';
                result += std::to_string(static_cast<int>(Code()));
                std::string msg;
                switch (static_cast<StatusCode>(Code()))
                {
                case INVALID_ARGUMENT:
                    msg = 'INVALID_ARGUMENT';
                    break;
                case NO_SUCHFILE:
                    msg = 'NO_SUCHFILE';
                    break;
                case NO_MODEL:
                    msg = 'NO_MODEL';
                    break;
                case ENGINE_ERROR:
                    msg = 'ENGINE_ERROR';
                    break;
                case RUNTIME_EXCEPTION:
                    msg = 'RUNTIME_EXCEPTION';
                    break;
                case INVALID_PROTOBUF:
                    msg = 'INVALID_PROTOBUF';
                    break;
                case MODEL_LOADED:
                    msg = 'MODEL_LOADED';
                    break;
                case ONNX_NOT_IMPLEMENTED:
                    msg = 'NOT_IMPLEMENTED';
                    break;
                default:
                    msg = 'GENERAL ERROR';
                    break;
                }
                result += ' : ';
                result += msg;
                result += ' : ';
                result += m_state->m_msg;
            }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(Softsign)
        .Description('Softsign takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the function, y = x / (1 + abs(x)), is applied to the '
            'tensor elementwise.')
        .Input('input', 'Input tensor, typically 1-D.', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
            REGISTER_OPERATOR_SCHEMA(Not)
        .Description('Performs element-wise negation.')
        .Input('X', 'Input tensor of type bool.', 'T')
        .Output('Y', '  Output tensor of type bool.', 'T')
        .TypeConstraint('T', { 'tensor(bool)' }, 'Constrain input and output types to bool tensor.');
    
        const auto* chunk = m_chunks[chunkId];
    const auto& sequence = chunk->Sequences()[sequenceIndexInChunk];
    result.m_indexInChunk = sequenceIndexInChunk;
    result.m_numberOfSamples = sequence.m_numberOfSamples;
    
    enum {
    LSTMPeepholeCountCiIndex = 0,
    LSTMPeepholeCountCoIndex = 1,
    LSTMPeepholeCountCfIndex = 2,
    LSTMPeepholeCount = 3
};
    
      void CheckOffsetPastEndReturnsNoRecords(uint64_t offset_past_end) {
    WriteInitialOffsetLog();
    reading_ = true;
    source_.contents_ = Slice(dest_.contents_);
    Reader* offset_reader = new Reader(&source_, &report_, true/*checksum*/,
                                       WrittenBytes() + offset_past_end);
    Slice record;
    std::string scratch;
    ASSERT_TRUE(!offset_reader->ReadRecord(&record, &scratch));
    delete offset_reader;
  }
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
      switch (data[n]) {
    case kNoCompression:
      if (data != buf) {
        // File implementation gave us pointer to some other data.
        // Use it directly under the assumption that it will be live
        // while the file is open.
        delete[] buf;
        result->data = Slice(data, n);
        result->heap_allocated = false;
        result->cachable = false;  // Do not double-cache
      } else {
        result->data = Slice(buf, n);
        result->heap_allocated = true;
        result->cachable = true;
      }
    }
    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
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
    
    
    {    // Compute (product % M) using the fact that ((x << 31) % M) == x.
    seed_ = static_cast<uint32_t>((product >> 31) + (product & M));
    // The first reduction may overflow by 1 bit, so we may need to
    // repeat.  mod == M is not possible; using > allows the faster
    // sign-bit-based test.
    if (seed_ > M) {
      seed_ -= M;
    }
    return seed_;
  }
  // Returns a uniformly distributed value in the range [0..n-1]
  // REQUIRES: n > 0
  uint32_t Uniform(int n) { return Next() % n; }
    
    static void Usage() {
  fprintf(
      stderr,
      'Usage: leveldbutil command...\n'
      '   dump files...         -- dump contents of specified files\n'
      );
}
    
    #include <stdint.h>
#include 'db/log_format.h'
#include 'leveldb/slice.h'
#include 'leveldb/status.h'
    
    namespace leveldb {
    }
    
    /**
 * \fn  std::shared_ptr<xgboost::DMatrix> CreateDMatrix(int rows, int columns, float sparsity, int seed);
 *
 * \brief Creates dmatrix with uniform random data between 0-1.
 *
 * \param rows      The rows.
 * \param columns   The columns.
 * \param sparsity  The sparsity.
 * \param seed      The seed.
 *
 * \return  The new d matrix.
 */
    
    // objectives
#include '../src/objective/objective.cc'
#include '../src/objective/regression_obj.cc'
#include '../src/objective/multiclass_obj.cc'
#include '../src/objective/rank_obj.cc'
    
    
    {    // lock-free parallel updates of weights
    selector_->Setup(*model, in_gpair->HostVector(), p_fmat,
                     param_.reg_alpha_denorm, param_.reg_lambda_denorm, 0);
    dmlc::DataIter<ColBatch> *iter = p_fmat->ColIterator();
    while (iter->Next()) {
      const ColBatch &batch = iter->Value();
      const auto nfeat = static_cast<bst_omp_uint>(batch.size);
#pragma omp parallel for schedule(static)
      for (bst_omp_uint i = 0; i < nfeat; ++i) {
        int ii = selector_->NextFeature(i, *model, 0, in_gpair->HostVector(), p_fmat,
                                       param_.reg_alpha_denorm, param_.reg_lambda_denorm);
        if (ii < 0) continue;
        const bst_uint fid = batch.col_index[ii];
        ColBatch::Inst col = batch[ii];
        for (int gid = 0; gid < ngroup; ++gid) {
          double sum_grad = 0.0, sum_hess = 0.0;
          for (bst_uint j = 0; j < col.length; ++j) {
            GradientPair &p = gpair[col[j].index * ngroup + gid];
            if (p.GetHess() < 0.0f) continue;
            const bst_float v = col[j].fvalue;
            sum_grad += p.GetGrad() * v;
            sum_hess += p.GetHess() * v * v;
          }
          bst_float &w = (*model)[fid][gid];
          auto dw = static_cast<bst_float>(
              param_.learning_rate *
              CoordinateDelta(sum_grad, sum_hess, w, param_.reg_alpha_denorm,
                              param_.reg_lambda_denorm));
          if (dw == 0.f) continue;
          w += dw;
          // update grad values
          for (bst_uint j = 0; j < col.length; ++j) {
            GradientPair &p = gpair[col[j].index * ngroup + gid];
            if (p.GetHess() < 0.0f) continue;
            p += GradientPair(p.GetHess() * col[j].fvalue * dw, 0);
          }
        }
      }
    }
  }
    
      XGBOOST_DEVICE GradientPairInternal<T> operator-(
      const GradientPairInternal<T> &rhs) const {
    GradientPairInternal<T> g;
    g.grad_ = grad_ - rhs.grad_;
    g.hess_ = hess_ - rhs.hess_;
    return g;
  }