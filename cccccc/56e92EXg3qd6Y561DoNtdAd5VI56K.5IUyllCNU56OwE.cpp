
        
        
    {
/**
 * @name tess_add_doc_word
 *
 * Add the given word to the document dictionary
 */
void Tesseract::tess_add_doc_word(WERD_CHOICE *word_choice) {
  getDict().add_document_word(*word_choice);
}
}  // namespace tesseract

    
    namespace tesseract  {
    }
    
    // This class fits a line to a set of ICOORD points.
// There is no restriction on the direction of the line, as it
// uses a vector method, ie no concern over infinite gradients.
// The fitted line has the least upper quartile of squares of perpendicular
// distances of all source points from the line, subject to the constraint
// that the line is made from one of the pairs of [{p1,p2,p3},{pn-2, pn-1, pn}]
// i.e. the 9 combinations of one of the first 3 and last 3 points.
// A fundamental assumption of this algorithm is that one of the first 3 and
// one of the last 3 points are near the best line fit.
// The points must be Added in line order for the algorithm to work properly.
// No floating point calculations are needed* to make an accurate fit,
// and no random numbers are needed** so the algorithm is deterministic,
// architecture-stable, and compiler-stable as well as stable to minor
// changes in the input.
// *A single floating point division is used to compute each line's distance.
// This is unlikely to result in choice of a different line, but if it does,
// it would be easy to replace with a 64 bit integer calculation.
// **Random numbers are used in the nth_item function, but the worst
// non-determinism that can result is picking a different result among equals,
// and that wouldn't make any difference to the end-result distance, so the
// randomness does not affect the determinism of the algorithm. The random
// numbers are only there to guarantee average linear time.
// Fitting time is linear, but with a high constant, as it tries 9 different
// lines and computes the distance of all points each time.
// This class is aimed at replacing the LLSQ (linear least squares) and
// LMS (least median of squares) classes that are currently used for most
// of the line fitting in Tesseract.
class DetLineFit {
 public:
  DetLineFit();
  ~DetLineFit();
    }
    
    // A useful base class to facilitate the common operation of sorting a vector
// of owned pointer data using a separate key. This class owns its data pointer,
// deleting it when it has finished with it, and providing copy constructor and
// operator= that have move semantics so that the data does not get copied and
// only a single instance of KDPtrPair holds a specific data pointer.
template <typename Key, typename Data>
class KDPtrPair {
 public:
  KDPtrPair() : data_(NULL) {}
  KDPtrPair(Key k, Data* d) : data_(d), key_(k) {}
  // Copy constructor steals the pointer from src and NULLs it in src, thereby
  // moving the (single) ownership of the data.
  KDPtrPair(KDPtrPair& src) : data_(src.data_), key_(src.key_) {
    src.data_ = NULL;
  }
  // Destructor deletes data, assuming it is the sole owner.
  ~KDPtrPair() {
    delete this->data_;
    this->data_ = NULL;
  }
  // Operator= steals the pointer from src and NULLs it in src, thereby
  // moving the (single) ownership of the data.
  void operator=(KDPtrPair& src) {
    delete this->data_;
    this->data_ = src.data_;
    src.data_ = NULL;
    this->key_ = src.key_;
  }
    }
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'host.h'
#include <stdio.h>
#include <math.h>
    
    namespace tesseract {
    }
    
    void FreeMFOutline(void *agr);  //MFOUTLINE                             Outline);
    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setBackgroundMusicVolume'', nullptr);
        return 0;
    }
#endif
    
    
    
    
    
    
    
    
    CHECK_GL_ERROR_DEBUG();
    
    void Test::LaunchBomb()
{
	b2Vec2 p(RandomFloat(-15.0f, 15.0f), 30.0f);
	b2Vec2 v = -5.0f * p;
	LaunchBomb(p, v);
}
    
    				// For a circle: I = 0.5 * m * r * r ==> r = sqrt(2 * I / m)
				float32 radius = b2Sqrt(2.0f * I / mass);
    
    			b2PrismaticJointDef pjd;
			pjd.Initialize(ground, m_platform, b2Vec2(0.0f, 5.0f), b2Vec2(1.0f, 0.0f));
    
    // redirect the messages to R's console.
namespace dmlc {
void CustomLogMessage::Log(const std::string& msg) {
  Rprintf('%s\n', msg.c_str());
}
}  // namespace dmlc
    
    namespace xgboost {
    }
    
    template<typename DType>
inline void CompressArray<DType>::Read(dmlc::SeekStream* fi) {
  CHECK(fi->Read(&raw_chunks_));
  CHECK(fi->Read(&encoded_chunks_));
  size_t buffer_size = encoded_chunks_.back();
  in_buffer_.resize(buffer_size);
  CHECK_EQ(fi->Read(dmlc::BeginPtr(in_buffer_), buffer_size), buffer_size);
  data.resize(raw_chunks_.back());
}
    
    #define XGBOOST_TYPE_SWITCH(dtype, OP)        \
switch (dtype) {                \
  case xgboost::common::uint32 : {           \
    typedef uint32_t DType;         \
    OP; break;              \
  }               \
  case xgboost::common::uint16 : {           \
    typedef uint16_t DType;         \
    OP; break;              \
  }               \
  case xgboost::common::uint8 : {            \
    typedef uint8_t DType;          \
    OP; break;              \
    default: LOG(FATAL) << 'don't recognize type flag' << dtype;  \
  }               \
}
    
    TEST(MetaInfo, GetSet) {
  xgboost::MetaInfo info;
    }
    
    
    {  vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3,2,1';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
}
    
    /*!
 * \brief Check if alignas(*) keyword is supported. (g++ 4.8 or higher)
 */
#if defined(__GNUC__) && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 8) || __GNUC__ > 4)
#define XGBOOST_ALIGNAS(X) alignas(X)
#else
#define XGBOOST_ALIGNAS(X)
#endif
    
    void SparsePage::Writer::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    struct EvalMAE : public EvalEWiseBase<EvalMAE> {
  const char *Name() const override {
    return 'mae';
  }
  inline bst_float EvalRow(bst_float label, bst_float pred) const {
    return std::abs(label - pred);
  }
};
    
      AlignedBuffer& operator=(AlignedBuffer&& o) ROCKSDB_NOEXCEPT {
    alignment_ = std::move(o.alignment_);
    buf_ = std::move(o.buf_);
    capacity_ = std::move(o.capacity_);
    cursize_ = std::move(o.cursize_);
    bufstart_ = std::move(o.bufstart_);
    return *this;
  }
    
    #include 'db/dbformat.h'
#include 'db/pinned_iterators_manager.h'
#include 'rocksdb/iterator.h'
#include 'rocksdb/options.h'
#include 'rocksdb/statistics.h'
#include 'table/block_prefix_index.h'
#include 'table/internal_iterator.h'
#include 'util/random.h'
#include 'util/sync_point.h'
#include 'format.h'
    
      // Decide column family (i.e. the time window) to put into
  ColumnFamilyHandle* column_family;
  s = FindColumnFamily(timestamp, &column_family, true /*create_if_missing*/);
  if (!s.ok()) {
    return s;
  }
    
    
    { private:
    std::unique_ptr<const char[]> m_name;
    jmethodID m_jcreate_compaction_filter_methodid;
};
    
        // The `ReleaseMessage<T>()` function detaches the message from the
    // builder, so we can transfer the resopnse to gRPC while simultaneously
    // detaching that memory buffer from the builer.
    *response_msg = mb_.ReleaseMessage<HelloReply>();
    assert(response_msg->Verify());
    
    inline void IterateObject(const uint8_t *obj, const TypeTable *type_table,
                          IterationVisitor *visitor) {
  visitor->StartSequence();
  const uint8_t *prev_val = nullptr;
  size_t set_idx = 0;
  for (size_t i = 0; i < type_table->num_elems; i++) {
    auto type_code = type_table->type_codes[i];
    auto type = static_cast<ElementaryType>(type_code.base_type);
    auto is_vector = type_code.is_vector != 0;
    auto ref_idx = type_code.sequence_ref;
    const TypeTable *ref = nullptr;
    if (ref_idx >= 0) { ref = type_table->type_refs[ref_idx](); }
    auto name = type_table->names ? type_table->names[i] : nullptr;
    const uint8_t *val = nullptr;
    if (type_table->st == ST_TABLE) {
      val = reinterpret_cast<const Table *>(obj)->GetAddressOf(
          FieldIndexToOffset(static_cast<voffset_t>(i)));
    } else {
      val = obj + type_table->values[i];
    }
    visitor->Field(i, set_idx, type, is_vector, ref, name, val);
    if (val) {
      set_idx++;
      if (is_vector) {
        val += ReadScalar<uoffset_t>(val);
        auto vec = reinterpret_cast<const Vector<uint8_t> *>(val);
        visitor->StartVector();
        auto elem_ptr = vec->Data();
        for (size_t j = 0; j < vec->size(); j++) {
          visitor->Element(j, type, ref, elem_ptr);
          IterateValue(type, elem_ptr, ref, prev_val, static_cast<soffset_t>(j),
                       visitor);
          elem_ptr += InlineSize(type, ref);
        }
        visitor->EndVector();
      } else {
        IterateValue(type, val, ref, prev_val, -1, visitor);
      }
    }
    prev_val = val;
  }
  visitor->EndSequence();
}
    
      // Get a test an element from the `inventory` FlatBuffer's `vector`.
  auto inv = monster->inventory();
  assert(inv);
  assert(inv->Get(9) == 9);
  (void)inv;
    
    
    {} // namespace fuzzer
    
    namespace fuzzer {
    }
    
    size_t MutationDispatcher::Mutate_CrossOver(uint8_t *Data, size_t Size,
                                            size_t MaxSize) {
  if (Size > MaxSize) return 0;
  if (!Corpus || Corpus->size() < 2 || Size == 0) return 0;
  size_t Idx = Rand(Corpus->size());
  const Unit &O = (*Corpus)[Idx];
  if (O.empty()) return 0;
  MutateInPlaceHere.resize(MaxSize);
  auto &U = MutateInPlaceHere;
  size_t NewSize = 0;
  switch(Rand(3)) {
    case 0:
      NewSize = CrossOver(Data, Size, O.data(), O.size(), U.data(), U.size());
      break;
    case 1:
      NewSize = InsertPartOf(O.data(), O.size(), U.data(), U.size(), MaxSize);
      if (NewSize)
        break;
      // LLVM_FALLTHROUGH;
    case 2:
      NewSize = CopyPartOf(O.data(), O.size(), U.data(), U.size());
      break;
    default: assert(0);
  }
  assert(NewSize > 0 && 'CrossOver returned empty unit');
  assert(NewSize <= MaxSize && 'CrossOver returned overisized unit');
  memcpy(Data, U.data(), NewSize);
  return NewSize;
}
    
    static std::mutex SignalMutex;
// Global variables used to keep track of how signal handling should be
// restored. They should **not** be accessed without holding `SignalMutex`.
static int ActiveThreadCount = 0;
static struct sigaction OldSigIntAction;
static struct sigaction OldSigQuitAction;
static sigset_t OldBlockedSignalsSet;