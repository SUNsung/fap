  // Convert output shapes.
  output_tensor_shape_protos->resize(c.num_outputs());
  CppShapeInferenceResult out;
  for (int i = 0; i < c.num_outputs(); ++i) {
    out.Clear();
    ProtoFromShapeHandle(c.output(i), &c, out.mutable_shape());
    }
    
      // Register ufuncs
  auto register_ufunc = [&](const char* name, PyUFuncGenericFunction fn,
                            const std::array<int, 3>& types) {
    Safe_PyObjectPtr ufunc_obj =
        make_safe(PyObject_GetAttrString(numpy.get(), name));
    if (!ufunc_obj) {
      return false;
    }
    PyUFuncObject* ufunc = reinterpret_cast<PyUFuncObject*>(ufunc_obj.get());
    if (types.size() != ufunc->nargs) {
      PyErr_Format(PyExc_AssertionError,
                   'ufunc %s takes %d arguments, loop takes %lu', name,
                   ufunc->nargs, types.size());
      return false;
    }
    if (PyUFunc_RegisterLoopForType(ufunc, npy_bfloat16_, fn,
                                    const_cast<int*>(types.data()),
                                    nullptr) < 0) {
      return false;
    }
    return true;
  };
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
    }
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include 'tensorflow/python/util/kernel_registry.h'
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  VLOG(2) << 'building executor';
  port::StatusOr<std::unique_ptr<StreamExecutor>> result = factory();
  if (!result.ok()) {
    VLOG(2) << 'failed to get build executor: ' << result.status();
    // If construction failed, leave the cache Entry around, but with a null
    // executor.
    return result.status();
  }
  entry->configurations.emplace_back(config, std::move(result.ValueOrDie()));
  return entry->configurations.back().second.get();
}
    
    namespace atom {
    }
    
     private:
  void QuerySystemIdleState(v8::Isolate* isolate,
                            int idle_threshold,
                            const ui::IdleCallback& callback);
  void QuerySystemIdleTime(const ui::IdleTimeCallback& callback);
    
    #include 'atom/common/api/api_messages.h'
#include 'atom/common/native_mate_converters/string16_converter.h'
#include 'atom/common/native_mate_converters/value_converter.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/web_contents.h'
#include 'native_mate/object_template_builder.h'
    
      // content::WebContentsObserver implementations:
  void RenderFrameDeleted(content::RenderFrameHost* rfh) override;
  void RenderFrameHostChanged(content::RenderFrameHost* old_rfh,
                              content::RenderFrameHost* new_rfh) override;
  void FrameDeleted(content::RenderFrameHost* rfh) override;
    
      bool Handle(const base::FilePath& full_path,
              const content::SavePageType& save_type);
    
    #include 'atom/browser/atom_quota_permission_context.h'
    
    // --------------------------- Typedefs ---------------------------
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j), v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
    void add(const Size2D &size,
         const s8 * src0Base, ptrdiff_t src0Stride,
         const s8 * src1Base, ptrdiff_t src1Stride,
         s8 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<s8, s16>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<s8, s16>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    #define IMPL_ADDWEIGHTED(type)                                \
void addWeighted(const Size2D &size,                          \
                 const type * src0Base, ptrdiff_t src0Stride, \
                 const type * src1Base, ptrdiff_t src1Stride, \
                 type * dstBase, ptrdiff_t dstStride,         \
                 f32 alpha, f32 beta, f32 gamma)              \
{                                                             \
    internal::assertSupportedConfiguration();                 \
    wAdd<type> wgtAdd(alpha,                                  \
                      beta,                                   \
                      gamma);                                 \
    internal::vtransform(size,                                \
                         src0Base, src0Stride,                \
                         src1Base, src1Stride,                \
                         dstBase, dstStride,                  \
                         wgtAdd);                             \
}
    
    
    {} // namespace
#endif
    
    namespace internal {
    }
    
                    uint8x8x2_t vRes;
                vRes.val[0] = vrshrn_n_u16(vSum_0_4, 8);
                vRes.val[1] = vrshrn_n_u16(vSum_1_5, 8);
                vst2_u8(dst + x, vRes);
#endif
            }
            break;
        case 3:
            for (; x <= colsn - 8*3; x += 8*3)
            {
                internal::prefetch(lane + x);
    
    
    {
    {        for (u32 v = vgetq_lane_u32(prev, 3); j < size.width; ++j)
            sum[j] = (v += src[j]) + prevSum[j];
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)sumBase;
    (void)sumStride;
#endif
}
    
    /**
 * Returns a binary image of the current object at the given level.
 * The position and size match the return from BoundingBoxInternal, and so this
 * could be upscaled with respect to the original input image.
 * Use pixDestroy to delete the image after use.
 * The following methods are used to generate the images:
 * RIL_BLOCK: mask the page image with the block polygon.
 * RIL_TEXTLINE: Clip the rectangle of the line box from the page image.
 * TODO(rays) fix this to generate and use a line polygon.
 * RIL_WORD: Clip the rectangle of the word box from the page image.
 * RIL_SYMBOL: Render the symbol outline to an image for cblobs (prior
 * to recognition) or the bounding box otherwise.
 * A reconstruction of the original image (using xor to check for double
 * representation) should be reasonably accurate,
 * apart from removed noise, at the block level. Below the block level, the
 * reconstruction will be missing images and line separators.
 * At the symbol level, kerned characters will be invade the bounding box
 * if rendered after recognition, making an xor reconstruction inaccurate, but
 * an or construction better. Before recognition, symbol-level reconstruction
 * should be good, even with xor, since the images come from the connected
 * components.
 */
Pix* PageIterator::GetBinaryImage(PageIteratorLevel level) const {
  int left, top, right, bottom;
  if (!BoundingBoxInternal(level, &left, &top, &right, &bottom))
    return nullptr;
  if (level == RIL_SYMBOL && cblob_it_ != nullptr &&
      cblob_it_->data()->area() != 0)
    return cblob_it_->data()->render();
  Box* box = boxCreate(left, top, right - left, bottom - top);
  Pix* pix = pixClipRectangle(tesseract_->pix_binary(), box, nullptr);
  boxDestroy(&box);
  if (level == RIL_BLOCK || level == RIL_PARA) {
    // Clip to the block polygon as well.
    TBOX mask_box;
    Pix* mask = it_->block()->block->render_mask(&mask_box);
    int mask_x = left - mask_box.left();
    int mask_y = top - (tesseract_->ImageHeight() - mask_box.top());
    // AND the mask and pix, putting the result in pix.
    pixRasterop(pix, std::max(0, -mask_x), std::max(0, -mask_y), pixGetWidth(pix),
                pixGetHeight(pix), PIX_SRC & PIX_DST, mask, std::max(0, mask_x),
                std::max(0, mask_y));
    pixDestroy(&mask);
  }
  return pix;
}
    
    void Tesseract::PrerecAllWordsPar(const GenericVector<WordData>& words) {
  // Prepare all the blobs.
  GenericVector<BlobData> blobs;
  for (int w = 0; w < words.size(); ++w) {
    if (words[w].word->ratings != nullptr &&
        words[w].word->ratings->get(0, 0) == nullptr) {
      for (int s = 0; s < words[w].lang_words.size(); ++s) {
        Tesseract* sub = s < sub_langs_.size() ? sub_langs_[s] : this;
        const WERD_RES& word = *words[w].lang_words[s];
        for (int b = 0; b < word.chopped_word->NumBlobs(); ++b) {
          blobs.push_back(BlobData(b, sub, word));
        }
      }
    }
  }
  // Pre-classify all the blobs.
  if (tessedit_parallelize > 1) {
#ifdef _OPENMP
#pragma omp parallel for num_threads(10)
#endif  // _OPENMP
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  } else {
    // TODO(AMD) parallelize this.
    for (int b = 0; b < blobs.size(); ++b) {
      *blobs[b].choices =
          blobs[b].tesseract->classify_blob(blobs[b].blob, 'par', White, nullptr);
    }
  }
}
    
      // Add all parameters to a list.
  int v, i;
  int num_iterations = (tess->params() == nullptr) ? 1 : 2;
  for (v = 0; v < num_iterations; ++v) {
    tesseract::ParamsVectors *vec = (v == 0) ? GlobalParams() : tess->params();
    for (i = 0; i < vec->int_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->int_params[i]));
    }
    for (i = 0; i < vec->bool_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->bool_params[i]));
    }
    for (i = 0; i < vec->string_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->string_params[i]));
    }
    for (i = 0; i < vec->double_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->double_params[i]));
    }
  }
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
      // Read until size drops significantly.
  std::string limit_key = Key(n);
  for (int read = 0; true; read++) {
    ASSERT_LT(read, 100) << 'Taking too long to compact';
    Iterator* iter = db_->NewIterator(ReadOptions());
    for (iter->SeekToFirst();
         iter->Valid() && iter->key().ToString() < limit_key;
         iter->Next()) {
      // Drop data
    }
    delete iter;
    // Wait a little bit to allow any triggered compactions to complete.
    Env::Default()->SleepForMicroseconds(1000000);
    uint64_t size = Size(Key(0), Key(n));
    fprintf(stderr, 'iter %3d => %7.3f MB [other %7.3f MB]\n',
            read+1, size/1048576.0, Size(Key(n), Key(kCount))/1048576.0);
    if (size <= initial_size/10) {
      break;
    }
  }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta);
    
      // Make multiple inputs so we need to compact.
  for (int i = 0; i < 2; i++) {
    Build(10);
    dbi->TEST_CompactMemTable();
    Corrupt(kTableFile, 100, 1);
    env_.SleepForMicroseconds(100000);
  }
  dbi->CompactRange(nullptr, nullptr);
    
          if (fresh_db) {
        if (FLAGS_use_existing_db) {
          fprintf(stdout, '%-12s : skipped (--use_existing_db is true)\n',
                  name.ToString().c_str());
          method = nullptr;
        } else {
          delete db_;
          db_ = nullptr;
          DestroyDB(FLAGS_db, Options());
          Open();
        }
      }
    
    namespace leveldb {
    }
    
    static void Usage() {
  fprintf(
      stderr,
      'Usage: leveldbutil command...\n'
      '   dump files...         -- dump contents of specified files\n'
      );
}
    
      // If memtable contains a value for key, store it in *value and return true.
  // If memtable contains a deletion for key, store a NotFound() error
  // in *status and return true.
  // Else, return false.
  bool Get(const LookupKey& key, std::string* value, Status* s);
    
    
    {        // Advance to next key in the valid key space
        if (key(pos) < key(current)) {
          pos = MakeKey(key(pos) + 1, 0);
        } else {
          pos = MakeKey(key(pos), gen(pos) + 1);
        }
      }
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    class SplitEvaluator {
 public:
  // Factory method for constructing new SplitEvaluators
  static SplitEvaluator* Create(const std::string& name);
    }
    
    
    {
    {/*!
 * \brief Quantile sketch use WXQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WXQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WXQSummary<DType, RType> > {
};
/*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class GKQuantileSketch :
      public QuantileSketchTemplate<DType, RType, GKSummary<DType, RType> > {
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_QUANTILE_H_

    
    
    { private:
  ColumnType type_;
  const uint32_t* index_;
  uint32_t index_base_;
  const size_t* row_ind_;
  const size_t len_;
};
    
    class Env;
class WriteControllerToken;
    
    int main() {
  DBOptions db_opt;
  db_opt.create_if_missing = true;
    }
    
    #ifndef ROCKSDB_LITE
    
    // Take a string representation of option names and  values, apply them into the
// base_options, and return the new options as a result. The string has the
// following format:
//   'write_buffer_size=1024;max_write_buffer_number=2'
// Nested options config is also possible. For example, you can define
// BlockBasedTableOptions as part of the string for block-based table factory:
//   'write_buffer_size=1024;block_based_table_factory={block_size=4k};'
//   'max_write_buffer_num=2'
Status GetColumnFamilyOptionsFromString(
    const ColumnFamilyOptions& base_options,
    const std::string& opts_str,
    ColumnFamilyOptions* new_options);
    
    
    {  static FlushBlockPolicy* NewFlushBlockPolicy(
      const uint64_t size, const int deviation,
      const BlockBuilder& data_block_builder);
};
    
      // Return stats as map of {string, double} per-tier
  //
  // Persistent cache can be initialized as a tier of caches. The stats are per
  // tire top-down
  virtual StatsType Stats() = 0;
    
      const Snapshot* snapshot();
    
    // Database with TTL support.
//
// USE-CASES:
// This API should be used to open the db when key-values inserted are
//  meant to be removed from the db in a non-strict 'ttl' amount of time
//  Therefore, this guarantees that key-values inserted will remain in the
//  db for >= ttl amount of time and the db will make efforts to remove the
//  key-values as soon as possible after ttl seconds of their insertion.
//
// BEHAVIOUR:
// TTL is accepted in seconds
// (int32_t)Timestamp(creation) is suffixed to values in Put internally
// Expired TTL values deleted in compaction only:(Timestamp+ttl<time_now)
// Get/Iterator may return expired entries(compaction not run on them yet)
// Different TTL may be used during different Opens
// Example: Open1 at t=0 with ttl=4 and insert k1,k2, close at t=2
//          Open2 at t=3 with ttl=5. Now k1,k2 should be deleted at t>=5
// read_only=true opens in the usual read-only mode. Compactions will not be
//  triggered(neither manual nor automatic), so no expired entries removed
//
// CONSTRAINTS:
// Not specifying/passing or non-positive TTL behaves like TTL = infinity
//
// !!!WARNING!!!:
// Calling DB::Open directly to re-open a db created by this API will get
//  corrupt values(timestamp suffixed) and no ttl effect will be there
//  during the second Open, so use this API consistently to open the db
// Be careful when passing ttl with a small positive value because the
//  whole database may be deleted in a small amount of time
    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    void ObjectExtendedInfo60D::Parse(const std::uint8_t* bytes, int32_t length,
                                  ContiRadar* conti_radar) const {
  int obj_id = object_id(bytes, length);
  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_accel(longitude_accel(bytes, length));
      obs->set_lateral_accel(lateral_accel(bytes, length));
      obs->set_oritation_angle(oritation_angle(bytes, length));
      obs->set_length(object_length(bytes, length));
      obs->set_width(object_width(bytes, length));
      obs->set_obstacle_class(obstacle_class(bytes, length));
      break;
    }
  }
  // auto conti_obs = conti_radar->mutable_contiobs(object_id(bytes, length));
}
    
    void ObjectListStatus60A::Parse(const std::uint8_t* bytes, int32_t length,
                                ContiRadar* conti_radar) const {
  auto status = conti_radar->mutable_object_list_status();
  auto num_of_obj = num_of_objects(bytes, length);
  status->set_nof_objects(num_of_obj);
  status->set_meas_counter(meas_counter(bytes, length));
  status->set_interface_version(interface_version(bytes, length));
  conti_radar->mutable_contiobs()->Reserve(num_of_obj);
}
    
    unsigned int BaseMapMatrix::GetBinarySize() const { return 0; }
    
    TEST_F(SpeedLimitTest, GetSpeedLimitByS) {
  EXPECT_EQ(speed_limit_.speed_limit_points().size(), 100);
  double s = 0.0;
  const double ds = 0.01;
  while (s < 99.0) {
    double v_limit = speed_limit_.GetSpeedLimitByS(s);
    }
    }
    
    #include 'modules/planning/lattice/trajectory_generation/backup_trajectory_generator.h'
    
    const TopoNode* NodeWithRange::GetTopoNode() const { return topo_node_; }