
        
                //  Create the Pseudo Console and pipes to it
        HANDLE hPipeIn{ INVALID_HANDLE_VALUE };
        HANDLE hPipeOut{ INVALID_HANDLE_VALUE };
        hr = CreatePseudoConsoleAndPipes(&hPC, &hPipeIn, &hPipeOut);
        if (S_OK == hr)
        {
            // Create & start thread to listen to the incoming pipe
            // Note: Using CRT-safe _beginthread() rather than CreateThread()
            HANDLE hPipeListenerThread{ reinterpret_cast<HANDLE>(_beginthread(PipeListener, 0, hPipeIn)) };
    }
    
    
    {  // Compare
  util::MessageDifferencer differencer;
  differencer.set_message_field_comparison(
      util::MessageDifferencer::EQUIVALENT);
  differencer.set_scope(util::MessageDifferencer::PARTIAL);
  EXPECT_TRUE(differencer.Compare(msg1, msg2));
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    TEST(StatusOr, TestPointerDefaultCtor) {
  StatusOr<int*> thing;
  EXPECT_FALSE(thing.ok());
  EXPECT_EQ(Status::UNKNOWN, thing.status());
}
    
    TEST(StructurallyValidTest, ValidUTF8String) {
  // On GCC, this string can be written as:
  //   'abcd 1234 - \u2014\u2013\u2212'
  // MSVC seems to interpret \u differently.
  string valid_str('abcd 1234 - \342\200\224\342\200\223\342\210\222 - xyz789');
  EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data(),
                                      valid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data() + i,
                                        valid_str.size() - i));
  }
}
    
    
    {  // Yes || Yes == true.
  value = or_<true_, true_>::value;
  EXPECT_TRUE(value);
  // Yes || No == true.
  value = or_<true_, false_>::value;
  EXPECT_TRUE(value);
  // No || Yes == true.
  value = or_<false_, true_>::value;
  EXPECT_TRUE(value);
  // No || No == false.
  value = or_<false_, false_>::value;
  EXPECT_FALSE(value);
}
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    namespace nw {
    }
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
    // Tell browser to delete a object.
// function DeallocateObject(id);
v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id);
    
    void Clipboard::Clear() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
}
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
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
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
      // implement nw.Screen.startMonitor()
  class NwScreenStartMonitorFunction : public NWSyncExtensionFunction {
  public:
    NwScreenStartMonitorFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    ELISTIZE(PARA)
    
    
    {    while (next_num_ < kMaxNaturalNumberValue) {
      n = GetBinaryReversedInteger(next_num_++);
      if (n < N_) break;
    }
    return (next_num_ > kMaxNaturalNumberValue) ? kInvalidVal : n;
  }
    
    template <typename Dtype>
void HDF5OutputLayer<Dtype>::Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  CHECK_GE(bottom.size(), 2);
  CHECK_EQ(bottom[0]->num(), bottom[1]->num());
  data_blob_.Reshape(bottom[0]->num(), bottom[0]->channels(),
                     bottom[0]->height(), bottom[0]->width());
  label_blob_.Reshape(bottom[1]->num(), bottom[1]->channels(),
                     bottom[1]->height(), bottom[1]->width());
  const int data_datum_dim = bottom[0]->count() / bottom[0]->num();
  const int label_datum_dim = bottom[1]->count() / bottom[1]->num();
    }
    
    TYPED_TEST(NeuronLayerTest, TestExpLayerWithShift) {
  typedef typename TypeParam::Dtype Dtype;
  // Test default base of '-1' -- should actually set base := e,
  // with a non-zero shift
  const Dtype kBase = -1;
  const Dtype kScale = 1;
  const Dtype kShift = 1;
  this->TestExpForward(kBase, kScale, kShift);
}
    
    bp::object Blob_Reshape(bp::tuple args, bp::dict kwargs) {
  if (bp::len(kwargs) > 0) {
    throw std::runtime_error('Blob.reshape takes no kwargs');
  }
  Blob<Dtype>* self = bp::extract<Blob<Dtype>*>(args[0]);
  vector<int> shape(bp::len(args) - 1);
  for (int i = 1; i < bp::len(args); ++i) {
    shape[i - 1] = bp::extract<int>(args[i]);
  }
  self->Reshape(shape);
  // We need to explicitly return None to use bp::raw_function.
  return bp::object();
}
    
    
    {  LOG(INFO) << 'Writing Testing data';
  scoped_ptr<db::DB> test_db(db::GetDB(db_type));
  test_db->Open(output_folder + '/cifar10_test_' + db_type, db::NEW);
  txn.reset(test_db->NewTransaction());
  // Open files
  std::ifstream data_file((input_folder + '/test_batch.bin').c_str(),
      std::ios::in | std::ios::binary);
  CHECK(data_file) << 'Unable to open test file.';
  for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
    read_image(&data_file, &label, str_buffer);
    datum.set_label(label);
    datum.set_data(str_buffer, kCIFARImageNBytes);
    string out;
    CHECK(datum.SerializeToString(&out));
    txn->Put(caffe::format_int(itemid, 5), out);
  }
  txn->Commit();
  test_db->Close();
}
    
      FLAGS_alsologtostderr = 1;
    
      char label_i;
  char label_j;
  char* pixels = new char[2 * rows * cols];
  std::string value;
    
    void store_t::read(
        DEBUG_ONLY(const metainfo_checker_t& metainfo_checker, )
        const read_t &_read,
        read_response_t *response,
        read_token_t *token,
        signal_t *interruptor)
        THROWS_ONLY(interrupted_exc_t) {
    assert_thread();
    scoped_ptr_t<txn_t> txn;
    scoped_ptr_t<real_superblock_t> superblock;
    }
    
        bool acquire_sindex_superblocks_for_write(
            optional<std::set<uuid_u> > sindexes_to_acquire, //none means acquire all sindexes
            buf_lock_t *sindex_block,
            sindex_access_vector_t *sindex_sbs_out)
    THROWS_ONLY(sindex_not_ready_exc_t);
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_

    
      // Appends the given TestPartResult to the array.
  void Append(const TestPartResult& result);
    
    #if GTEST_HAS_TYPED_TEST_P
    
      // Returns a pathname for a file that does not currently exist. The pathname
  // will be directory/base_name.extension or
  // directory/base_name_<number>.extension if directory/base_name.extension
  // already exists. The number will be incremented until a pathname is found
  // that does not already exist.
  // Examples: 'dir/foo_test.xml' or 'dir/foo_test_1.xml'.
  // There could be a race condition if two or more processes are calling this
  // function at the same time -- they could both pick the same filename.
  static FilePath GenerateUniqueFileName(const FilePath& directory,
                                         const FilePath& base_name,
                                         const char* extension);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8>
class ValueArray8 {
 public:
  ValueArray8(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
      T8 v8) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8) {}
    }
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
    
    
template<int req>
struct hawkesll_backward_compensator {
  template<typename DType>
  MSHADOW_XINLINE static void Map(int i,
                                  DType* mu_gbfr,
                                  DType* alpha_gbfr,
                                  DType* beta_gbfr,  // (N, K)
                                  DType* out_grad,  // read this  (N,)
                                  const DType* mu,  // (N, K)
                                  const DType* alpha,   // (K,)
                                  const DType* beta,    // (K,)
                                  const DType* max_time,  // (N,)
                                  const int K,
                                  DType* last_buffer,
                                  DType* phi_buffer,
                                  DType* phig_buffer
                                  ) {
    DType d, ed;
    int m = i % K;  // mark
    int j = i / K;  // particle
    int32_t part_ix_K = j*K;
    DType* mug_ = &mu_gbfr[part_ix_K];
    DType* alphag_ = &alpha_gbfr[part_ix_K];
    DType* betag_ = &beta_gbfr[part_ix_K];
    }
    }
    
    )code' ADD_FILELINE)
.set_attr_parser(ParamParser<MomentsParam>)
.set_num_inputs(1)
.set_num_outputs(2)
.set_attr<nnvm::FListInputNames>('FListInputNames',
  [](const NodeAttrs& attrs) {
    return std::vector<std::string>{'data'};
  })
.set_attr<mxnet::FInferShape>('FInferShape', MomentsShape)
.set_attr<nnvm::FInferType>('FInferType', MomentsType)
.set_attr<FCompute>('FCompute<cpu>', MomentsForward<cpu>)
.set_attr<FResourceRequest>('FResourceRequest',
  [](const NodeAttrs& attrs) {
    return std::vector<ResourceRequest>{ResourceRequest::kTempSpace};
  })
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseInOut{'_backward_moments'})
.set_attr<nnvm::FInplaceOption>('FInplaceOption',
  [](const NodeAttrs& attrs) {
    return std::vector<std::pair<int, int> >{{0, 0}};
  })
.add_argument('data', 'NDArray-or-Symbol', 'Input ndarray')
.add_arguments(MomentsParam::__FIELDS__());
    
    inline void MultiAllFiniteCPU(const nnvm::NodeAttrs& attrs,
                              const OpContext &ctx,
                              const std::vector<TBlob> &inputs,
                              const std::vector<OpReqType> &req,
                              const std::vector<TBlob> &outputs) {
  using namespace mxnet_op;
  Stream<cpu>* s = ctx.get_stream<cpu>();
  const MultiAllFiniteParam& op_param = nnvm::get<MultiAllFiniteParam>(attrs.parsed);
  Tensor<cpu, 2, float> out = outputs[0].FlatTo2D<cpu, float>(s);
  if (op_param.init_output)
    out = 1.;
  MSHADOW_REAL_TYPE_SWITCH(inputs[0].type_flag_, DType, {
    MultiAllFiniteKernelParam<DType> param =
      FillMultiAllFiniteParam<cpu, DType>(op_param, ctx, inputs);
    Kernel<MultiAllFiniteCPUKernel<DType>, cpu>::Launch(s, param.max_size,
                                                       param, out.dptr_);
  });
}
    
    namespace mxnet {
namespace op {
    }
    }
    
    NNVM_REGISTER_OP(amp_cast)
.describe(R'code(Cast function between low precision float/FP32 used by AMP.
    
    
    {    Assign(grad_in, req[deformablepsroipool::kData], 0);
    if (!param_.no_trans) {
      Assign(grad_trans, req[deformablepsroipool::kTrans], 0);
    }
    DeformablePSROIPoolBackwardAcc(grad_in, grad_trans, grad_out, data, bbox, trans,
      top_count, param_.no_trans, param_.spatial_scale, param_.output_dim, param_.group_size,
      param_.pooled_size, param_.part_size, param_.sample_per_part, param_.trans_std);
    Assign(grad_roi, req[deformablepsroipool::kBox], 0);
  }
    
          for (index_t ih = 0; ih < sample_per_part; ih++) {
        for (index_t iw = 0; iw < sample_per_part; iw++) {
          DType w = wstart + iw * sub_bin_size_w;
          DType h = hstart + ih * sub_bin_size_h;
          // bilinear interpolation
          if (w < -0.5 || w > width - 0.5 || h < -0.5 || h > height - 0.5) {
            continue;
          }
          w = min(max(w, static_cast<DType>(0)), static_cast<DType>(width - 1));
          h = min(max(h, static_cast<DType>(0)), static_cast<DType>(height - 1));
          index_t c = (ctop * group_size + gh) * group_size + gw;
          // backward on feature
          index_t x0 = floor(w);
          index_t x1 = ceil(w);
          index_t y0 = floor(h);
          index_t y1 = ceil(h);
          DType dist_x = w - x0, dist_y = h - y0;
          DType q00 = (1 - dist_x) * (1 - dist_y);
          DType q01 = (1 - dist_x) * dist_y;
          DType q10 = dist_x * (1 - dist_y);
          DType q11 = dist_x * dist_y;
          index_t bottom_index_base = c * height * width;
          offset_bottom_data_diff[bottom_index_base + y0 * width + x0] += q00 * diff_val;
          offset_bottom_data_diff[bottom_index_base + y1 * width + x0] += q01 * diff_val;
          offset_bottom_data_diff[bottom_index_base + y0 * width + x1] += q10 * diff_val;
          offset_bottom_data_diff[bottom_index_base + y1 * width + x1] += q11 * diff_val;
    }
    }
    
    // keep zero-center
struct dequantize_zero_centered {
  template<typename DstDType, typename SrcDType>
  MSHADOW_XINLINE static void Map(int i, DstDType *out, const SrcDType *in,
                                  const float *imin_range, const float *imax_range,
                                  const float quantized_range) {
    const float real_range = MaxAbs(*imax_range, *imin_range);
    out[i] = in[i] * (real_range / quantized_range);
  }
};
    
    /*!
 *  Copyright (c) 2017 by Contributors
 * \file quantize-inl.h
 * \brief implementation of quantize operation
 */
#ifndef MXNET_OPERATOR_QUANTIZATION_QUANTIZE_INL_H_
#define MXNET_OPERATOR_QUANTIZATION_QUANTIZE_INL_H_
    
    static bool ElemwiseAddShape(const nnvm::NodeAttrs& attrs,
                             mxnet::ShapeVector* in_shape,
                             mxnet::ShapeVector* out_shape) {
  // A, B, A_min, A_max, B_min, B_max
  CHECK_EQ(in_shape->size(), 6U);
  // C, C_min, C_max
  CHECK_EQ(out_shape->size(), 3U);
  CHECK_EQ((*in_shape)[0], (*in_shape)[1]);
    }
    
    
    {
    {}  // namespace storage
}  // namespace mxnet
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file broadcast_reduce_op.h
 * \brief Function definition of broadcast and reduce operators
 */
#ifndef MXNET_OPERATOR_TENSOR_BROADCAST_REDUCE_OP_H_
#define MXNET_OPERATOR_TENSOR_BROADCAST_REDUCE_OP_H_
    
    template <typename DType>
void LstmBackward(DType* ws,
                  DType* rs,
                  const int L,
                  const int D,
                  const int T,
                  const int N,
                  const int I,
                  const int H,
                  DType* x_ptr,
                  DType* hx_ptr,
                  DType* cx_ptr,
                  DType* w_ptr,
                  DType* y_ptr,
                  DType* dy_ptr,
                  DType* dhy_ptr,
                  DType* dcy_ptr,
                  DType* dx_ptr,
                  DType* dhx_ptr,
                  DType* dcx_ptr,
                  DType* dw_ptr,
                  DType* db_ptr,
                  int req_data,
                  int req_params,
                  int req_state,
                  int req_statecell,
                  const float dropout) {
  DType* dropout_random = rs + (L - 1) * D * T * N * H;
  DType* rs2 = rs + (L - 1) * D * T * N * H;
  DType* tmp_buf = ws;
  DType* ws2 = tmp_buf + 8 * T * H;
  const int total_layers = D * L;
  Tensor<cpu, 3, DType> hx(hx_ptr, Shape3(total_layers, N, H));
  Tensor<cpu, 3, DType> cx(cx_ptr, Shape3(total_layers, N, H));
  Tensor<cpu, 3, DType> dhx(dhx_ptr, Shape3(total_layers, N, H));
  Tensor<cpu, 3, DType> dcx(dcx_ptr, Shape3(total_layers, N, H));
  const int b_size = 2 * H * 4;
  const int r_size = D * T * N * H * 6;
  const int y_offset = T * N * H * 5;
  const int w_size1 = (I + H) * H * 4;      // first layer
  const int w_size2 = (D * H + H) * H * 4;  // other layers
  const int cell_size = N * H;
  DType* dy_tmp_ptr = ws2 + T * cell_size * 4 + cell_size * 3;
  for (int i = L - 1; i >= 0; --i) {
    const int input_size = i ? H * D : I;
    const int w_size = i ? w_size2 : w_size1;
    int idx = i * D;
    DType* w_cur_ptr = i ? w_ptr + (w_size1 + (i - 1) * w_size2) * D : w_ptr;
    DType* dw_cur_ptr = i ? dw_ptr + (w_size1 + (i - 1) * w_size2) * D : dw_ptr;
    DType* db_cur_ptr = db_ptr + i * b_size * D;
    DType* rs_cur_ptr = rs2 + i * r_size;
    DType* dhy_cur_ptr = dhy_ptr ? dhy_ptr + i * cell_size * D : NULL;
    DType* dcy_cur_ptr = dcy_ptr ? dcy_ptr + i * cell_size * D : NULL;
    Tensor<cpu, 3, DType> y(rs_cur_ptr + y_offset, Shape3(T, N, H * D));
    Tensor<cpu, 3, DType> dy(dy_ptr, Shape3(T, N, H * D));
    Tensor<cpu, 2, DType> x(i ? y.dptr_ - r_size : x_ptr, Shape2(T * N, input_size));
    Tensor<cpu, 2, DType> dx(i ? dy_tmp_ptr : dx_ptr, Shape2(T * N, input_size));
    LstmBackwardSingleLayer<DType>(ws2, rs_cur_ptr, tmp_buf, false, T, N, input_size, H,
                                   x, hx[idx], cx[idx], y, dy, dx, dhx[idx], dcx[idx],
                                   dhy_cur_ptr, dcy_cur_ptr, w_cur_ptr, dw_cur_ptr, db_cur_ptr,
                                   req_data, req_params, req_state, req_statecell);
    if (D == 2) {
      w_cur_ptr += w_size;
      dw_cur_ptr += w_size;
      db_cur_ptr += b_size;
      ++idx;
      dhy_cur_ptr = dhy_ptr ? dhy_cur_ptr + cell_size : NULL;
      dcy_cur_ptr = dcy_ptr ? dcy_cur_ptr + cell_size : NULL;
      LstmBackwardSingleLayer<DType>(ws2, rs_cur_ptr, tmp_buf, true, T, N, input_size, H,
                                     x, hx[idx], cx[idx], y, dy, dx, dhx[idx], dcx[idx],
                                     dhy_cur_ptr, dcy_cur_ptr, w_cur_ptr, dw_cur_ptr, db_cur_ptr,
                                     req_data, req_params, req_state, req_statecell);
    }
    if (dropout > 0.0f && i > 0 && req_data != kNullOp) {
      dropout_random = dropout_random - T * N * D * H;
      const int omp_threads = mxnet::engine::OpenMP::Get()->GetRecommendedOMPThreadCount();
      #pragma omp parallel for num_threads(omp_threads)
      for (int j = 0; j < T * N * D * H; j++) {
        if (dropout_random[j] == 0) {
          dx.dptr_[j] = 0;
        } else {
          dx.dptr_[j] = dx.dptr_[j] / (1.0f - dropout);
        }
      }
    }
    dy_ptr = dx.dptr_;
  }
}
    
    namespace mongo {
    }
    
    void Top::record(OperationContext* opCtx,
                 StringData ns,
                 LogicalOp logicalOp,
                 LockType lockType,
                 long long micros,
                 bool command,
                 Command::ReadWriteType readWriteType) {
    if (ns[0] == '?')
        return;
    }
    
        virtual ~Base() {
        if (!collection())
            return;
        WriteUnitOfWork wunit(&_opCtx);
        _context.db()->dropCollection(&_opCtx, nss()).transitional_ignore();
        wunit.commit();
    }
    
    UnicodeString &ScientificNumberFormatter::format(
        const Formattable &number,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    UnicodeString original;
    FieldPositionIterator fpi;
    fDecimalFormat->format(number, original, &fpi, status);
    return fStyle->format(
            original,
            fpi,
            fPreExponent,
            *fStaticSets,
            appendTo,
            status);
}
    
    #endif // __SCRIPTSET_H__

    
    void SearchIterator::setText(CharacterIterator &text, UErrorCode &status)
{
    if (U_SUCCESS(status)) {
        text.getText(m_text_);
        setText(m_text_, status);
    }
}
    
const UnicodeString & SearchIterator::getText(void) const
{
    return m_text_;
}
    
    U_NAMESPACE_BEGIN
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};