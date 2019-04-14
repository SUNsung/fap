
        
        
    {  if (!base::JSONWriter::Write(top_dictionary, &json))
    return false;
  int written = base::WriteFile(path, json.data(), (int)json.size());
  if (static_cast<unsigned>(written) != json.size()) {
    LOG(ERROR) << 'Error writing ' << path.AsUTF8Unsafe()
               << ' ; write result:' << written << ' expected:' << json.size();
    return false;
  }
  return true;
}
    
    v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    
    {} // namespace nwapi

    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
    
    {}  // namespace nwapi

    
       bool IsCommandIdChecked(int command_id) const override;
   bool IsCommandIdEnabled(int command_id) const override;
    
    ui::KeyboardCode GetKeycodeFromText(std::string text){
  ui::KeyboardCode retval = ui::VKEY_UNKNOWN;
  if (text.size() != 0){
    std::string upperText = base::ToUpperASCII(text);
    std::string keyName = text;
    bool found = false;
    if (upperText.size() == 1){
      char key = upperText[0];
      if (key>='0' && key<='9'){//handle digital
        keyName = 'Digit' + upperText;
        found = true;
      } else if (key>='A'&&key<='Z'){//handle alphabet
        keyName = 'Key' + upperText;
        found = true;
      }
    }
    }
    }
    
    
    {} // namespace extensions
#endif

    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    #ifndef STORAGE_LEVELDB_DB_BUILDER_H_
#define STORAGE_LEVELDB_DB_BUILDER_H_
    
      // When user keys are misordered
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('bar', 99, kTypeValue)));
    
    namespace leveldb {
namespace {
    }
    }
    
    void Reader::ReportCorruption(uint64_t bytes, const char* reason) {
  ReportDrop(bytes, Status::Corruption(reason));
}
    
    
    {  // No copying allowed
  Writer(const Writer&);
  void operator=(const Writer&);
};
    
    #include 'db/memtable.h'
#include 'db/dbformat.h'
#include 'leveldb/comparator.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'util/coding.h'
    
      KeyComparator comparator_;
  int refs_;
  Arena arena_;
  Table table_;
    
      // Store the specified number as the sequence number for the start of
  // this batch.
  static void SetSequence(WriteBatch* batch, SequenceNumber seq);
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
    #endif  // MXNET_USE_CUDA && MXNET_ENABLE_CUDA_RTC
#endif  // MXNET_RTC_H_

    
    
    {
    {      if (top_size > DATA) {
        if (param_.flat) {
          batch_data_ = TBlob(nullptr, mshadow::Shape2(batch_size_,
                                                       channels_ * width_ * height_),
                              cpu::kDevCPU, type_flag_);
        } else {
          batch_data_ = TBlob(nullptr, mxnet::TShape(top_[DATA]->shape().begin(),
                                                     top_[DATA]->shape().end()),
                              cpu::kDevCPU, type_flag_);
        }
      }
      out_.data.clear();
      if (top_size > LABEL) {
          batch_label_ = TBlob(nullptr, mxnet::TShape(top_[LABEL]->shape().begin(),
                                                      top_[LABEL]->shape().end()),
                               cpu::kDevCPU, type_flag_);
      }
      out_.batch_size = batch_size_;
    }
  }
    
    
    {
    {
    {  /*!
   * \brief Worker threads.
   */
  std::vector<std::thread> worker_threads_;
  /*!
   * \brief Startup synchronization objects
   */
  std::list<std::shared_ptr<dmlc::ManualEvent>> ready_events_;
  /*!
   * \brief Disallow default construction.
   */
  ThreadPool() = delete;
  /*!
   * \brief Disallow copy construction and assignment.
   */
  DISALLOW_COPY_AND_ASSIGN(ThreadPool);
};
}  // namespace engine
}  // namespace mxnet
#endif  // MXNET_ENGINE_THREAD_POOL_H_

    
    
    {
    {
    {  // creat mean image.
  inline void CreateMeanImg(void) {
    if (param_.verbose) {
      LOG(INFO) << 'Cannot find ' << param_.mean_img
                << ': create mean image, this will take some time...';
    }
    double start = dmlc::GetTime();
    size_t imcnt = 1;  // NOLINT(*)
    CHECK(this->Next_()) << 'input iterator failed.';
    meanimg_.Resize(outimg_.shape_);
    mshadow::Copy(meanimg_, outimg_);
    while (this->Next_()) {
      meanimg_ += outimg_;
      imcnt += 1;
      double elapsed = dmlc::GetTime() - start;
      if (imcnt % 10000L == 0 && param_.verbose) {
        LOG(INFO) << imcnt << ' images processed, ' << elapsed << ' sec elapsed';
      }
    }
    meanimg_ *= (1.0f / imcnt);
    // save as mxnet python compatible format.
    TBlob tmp = meanimg_;
    {
      std::unique_ptr<dmlc::Stream> fo(dmlc::Stream::Create(param_.mean_img.c_str(), 'w'));
      NDArray::Save(fo.get(),
                    {NDArray(tmp, 0)},
                    {'mean_img'});
    }
    if (param_.verbose) {
      LOG(INFO) << 'Save mean image to ' << param_.mean_img << '..';
    }
    meanfile_ready_ = true;
    this->BeforeFirst();
  }
};
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_ITER_NORMALIZE_H_

    
      virtual bool Next(void) {
    if (out_ != nullptr) {
      recycle_queue_.push(out_); out_ = nullptr;
    }
    // do recycle
    if (recycle_queue_.size() == param_.prefetch_buffer) {
      DataBatch *old_batch =  recycle_queue_.front();
      // can be more efficient on engine
      for (NDArray& arr : old_batch->data) {
        arr.WaitToWrite();
      }
      recycle_queue_.pop();
      iter.Recycle(&old_batch);
    }
    return iter.Next(&out_);
  }
  virtual const DataBatch &Value(void) const {
    return *out_;
  }
    
    struct GradientCompressionParam : public dmlc::Parameter<GradientCompressionParam> {
  std::string type;
  float threshold;
  DMLC_DECLARE_PARAMETER(GradientCompressionParam) {
    DMLC_DECLARE_FIELD(type)
      .describe('Type of gradient compression to use, like `2bit` for example');
    DMLC_DECLARE_FIELD(threshold).set_default(0.5)
      .describe('Threshold to use for 2bit gradient compression');
  }
};
    
    #endif  // MXNET_OPERATOR_CONTRIB_KRPROD_H_

    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file native_op.cc
 * \brief
 * \author Junyuan Xie
*/
#include './native_op-inl.h'
    
    /**
 * Factory method
 */
static Transliterator* RemoveTransliterator_create(const UnicodeString& /*ID*/,
                                                   Transliterator::Token /*context*/) {
    /* We don't need the ID or context. We just remove data */
    return new RemoveTransliterator();
}
    
    ScientificNumberFormatter::ScientificNumberFormatter(
        const ScientificNumberFormatter &other)
        : UObject(other),
          fPreExponent(other.fPreExponent),
          fDecimalFormat(NULL),
          fStyle(NULL),
          fStaticSets(other.fStaticSets) {
    fDecimalFormat = static_cast<DecimalFormat *>(
            other.fDecimalFormat->clone());
    fStyle = other.fStyle->clone();
}
    
    
UBool ScriptSet::operator == (const ScriptSet &other) const {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        if (bits[i] != other.bits[i]) {
            return FALSE;
        }
    }
    return TRUE;
}
    
    SearchIterator::~SearchIterator()
{
    if (m_search_ != NULL) {
        uprv_free(m_search_);
    }
}
    
    class NumberFormat;
    
    /**
 * UnicodeReplacer API
 */
UnicodeString& StringMatcher::toReplacerPattern(UnicodeString& rule,
                                                UBool /*escapeUnprintable*/) const {
    // assert(segmentNumber > 0);
    rule.truncate(0);
    rule.append((UChar)0x0024 /*$*/);
    ICU_Utility::appendNumber(rule, segmentNumber, 10, 1);
    return rule;
}
    
    Follow* Follow::create(Node *followedNode, const Rect& rect/* = Rect::ZERO*/)
{
    return createWithOffset(followedNode, 0.0, 0.0,rect);
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
    http://www.cocos2d-x.org