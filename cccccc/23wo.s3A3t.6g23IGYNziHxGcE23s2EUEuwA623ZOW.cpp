
        
        using leveldb::Cache;
using leveldb::Comparator;
using leveldb::CompressionType;
using leveldb::DB;
using leveldb::Env;
using leveldb::FileLock;
using leveldb::FilterPolicy;
using leveldb::Iterator;
using leveldb::kMajorVersion;
using leveldb::kMinorVersion;
using leveldb::Logger;
using leveldb::NewBloomFilterPolicy;
using leveldb::NewLRUCache;
using leveldb::Options;
using leveldb::RandomAccessFile;
using leveldb::Range;
using leveldb::ReadOptions;
using leveldb::SequentialFile;
using leveldb::Slice;
using leveldb::Snapshot;
using leveldb::Status;
using leveldb::WritableFile;
using leveldb::WriteBatch;
using leveldb::WriteOptions;
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      // Three-way comparison.  Returns value:
  //   < 0 iff 'a' < 'b',
  //   == 0 iff 'a' == 'b',
  //   > 0 iff 'a' > 'b'
  virtual int Compare(const Slice& a, const Slice& b) const = 0;
    
    inline int Slice::compare(const Slice& b) const {
  const size_t min_len = (size_ < b.size_) ? size_ : b.size_;
  int r = memcmp(data_, b.data_, min_len);
  if (r == 0) {
    if (size_ < b.size_) r = -1;
    else if (size_ > b.size_) r = +1;
  }
  return r;
}
    
      void OCRTester(const char* imgname, const char* groundtruth, const char* tessdatadir, const char* lang) {
    //log.info() << tessdatadir << ' for language: ' << lang << std::endl;
    char *outText;
    std::locale loc('C'); // You can also use '' for the default system locale
    std::ifstream file(groundtruth);
    file.imbue(loc); // Use it for file input
    std::string gtText((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    ASSERT_FALSE(api->Init(tessdatadir, lang)) << 'Could not initialize tesseract.';
    Pix *image = pixRead(imgname);
    ASSERT_TRUE(image != nullptr) << 'Failed to read test image.';
    api->SetImage(image);
    outText = api->GetUTF8Text();
    EXPECT_EQ(gtText,outText) << 'Phototest.tif OCR does not match ground truth for ' << ::testing::PrintToString(lang);
    api->End();
    delete [] outText;
    pixDestroy(&image);
  }
    
      // Constructor for NT_LSTM (regular 1 or 2-d LSTM), NT_LSTM_SOFTMAX (LSTM with
  // additional softmax layer included and fed back into the input at the next
  // timestep), or NT_LSTM_SOFTMAX_ENCODED (as LSTM_SOFTMAX, but the feedback
  // is binary encoded instead of categorical) only.
  // 2-d and bidi softmax LSTMs are not rejected, but are impossible to build
  // in the conventional way because the output feedback both forwards and
  // backwards in time does become impossible.
  LSTM(const STRING& name, int num_inputs, int num_states, int num_outputs,
       bool two_dimensional, NetworkType type);
  virtual ~LSTM();
    
    // Max number of scripts in ICU + 'NULL' + Japanese and Korean + Fraktur
const int kMaxNumberOfScripts = 116 + 1 + 2 + 1;
    
      do {
    if (fixed_count <= 3)
      break;                     //already too few
    point_diff (d12vec, edgefix1->pos, edgefix2->pos);
    d12 = LENGTH (d12vec);
    // TODO(rays) investigate this change:
    // Only unfix a point if it is part of a low-curvature section
    // of outline and the total angle change of the outlines is
    // less than 90 degrees, ie the scalar product is positive.
    // if (d12 <= gapmin && SCALAR(edgefix0->vec, edgefix2->vec) > 0) {
    if (d12 <= gapmin) {
      point_diff (d01vec, edgefix0->pos, edgefix1->pos);
      d01 = LENGTH (d01vec);
      point_diff (d23vec, edgefix2->pos, edgefix3->pos);
      d23 = LENGTH (d23vec);
      if (d01 > d23) {
        edgefix2->flags[FLAGS] &= ~FIXED;
        fixed_count--;
      }
      else {
        edgefix1->flags[FLAGS] &= ~FIXED;
        fixed_count--;
        edgefix1 = edgefix2;
      }
    }
    else {
      edgefix0 = edgefix1;
      edgefix1 = edgefix2;
    }
    edgefix2 = edgefix3;
    edgept = edgept->next;
    while ((edgept->flags[FLAGS] & FIXED) == 0) {
      if (edgept == startfix)
        stopped = 1;
      edgept = edgept->next;
    }
    edgefix3 = edgept;
    edgefix = edgefix2;
  }
  while ((edgefix != startfix) && (!stopped));
}
    
        void add(           //add element
             double x,  //coords to add
             double y);
    void remove(           //delete element
                double x,  //coords to delete
                double y);
    int32_t count() {  //no of elements
      return n;
    }
    
    namespace HPHP {
    }
    
    void Timer::report() const {
  int64_t ms = getMicroSeconds();
  int seconds = ms / 1000000;
  PRINT_MSG('%s took %d'%02d\' (%' PRId64 ' us) %s', m_name.c_str(),
            seconds / 60, seconds % 60, ms, getName());
}
    
    #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/fixup.h'
#include 'hphp/runtime/vm/jit/phys-reg-saver.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
    
    {  // points to an event with an attached waithandle from a different request
  PageletServerTaskEvent *m_event;
};
    
    #ifdef HAVE_NUMA
    
      errno = 0;
    
    void emitJmpNZ(IRGS& env, Offset relOffset) {
  auto const takenOff = bcOff(env) + relOffset;
  implCondJmp(env, takenOff, false, popC(env));
}
    
    
    {
    {      // If this address spans cache lines, on x64 this is not an atomic store.
      // This being the case, use caution when overwriting code that is
      // reachable by multiple threads: make sure it doesn't span cache lines.
      *reinterpret_cast<uint64_t*>(dest()) = u.qword;
    } else {
      memcpy(dest(), bs, n);
    }
    m_frontier += n;
  }
    
        // update carcs: merge c1arcs to c2arcs
    
    void SynchronizableMulti::wait(int id, int q, Priority pri) {
  waitImpl(id, q, pri, nullptr);
}
    
    	int bytes = file->get_buffer((uint8_t *)buffer, 4096);
	ogg_sync_wrote(&oy, bytes);
	return (bytes);
    
    
    {	return _create();
}
    
    		case LWS_CALLBACK_CLIENT_CONNECTION_ERROR:
			_on_error();
			destroy_context();
			return -1; // we should close the connection (would probably happen anyway)
    
    void WebSocketClient::_on_error() {
    }
    
    	virtual bool is_server() const;
	virtual ConnectionStatus get_connection_status() const = 0;
    
    		String instance_type = bind->get_instance_class();
    
    	Ref<VisualScript> script;
    
      // Memory stream class.
  class jpeg_decoder_mem_stream : public jpeg_decoder_stream
  {
    const uint8 *m_pSrc_data;
    uint m_ofs, m_size;
    }
    
    namespace leveldb {
    }
    
    #ifndef STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
#define STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
    
      std::string Key(int i) {
    char buf[100];
    snprintf(buf, sizeof(buf), 'key%06d', i);
    return std::string(buf);
  }
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    template<typename DType>
inline void CompressArray<DType>::InitCompressChunks(size_t chunk_size, size_t max_nchunk) {
  raw_chunks_.clear();
  raw_chunks_.push_back(0);
  size_t min_chunk_size = data.size() / max_nchunk;
  chunk_size = std::max(min_chunk_size, chunk_size);
  size_t nstep = data.size() / chunk_size;
  for (size_t i = 0; i < nstep; ++i) {
    raw_chunks_.push_back(raw_chunks_.back() + chunk_size);
    CHECK_LE(raw_chunks_.back(), data.size());
  }
  if (nstep == 0) raw_chunks_.push_back(0);
  raw_chunks_.back() = data.size();
  CHECK_GE(raw_chunks_.size(), 2);
  out_buffer_.resize(raw_chunks_.size() - 1);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    out_buffer_[i].resize(raw_chunks_[i + 1] - raw_chunks_[i]);
  }
}
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
      EXPECT_ANY_THROW(xgboost::Metric::Create('error@abc'));
  delete metric;
  metric = xgboost::Metric::Create('error@0.5f');
  EXPECT_STREQ(metric->Name(), 'error');
    
    template <typename T>
HostDeviceVector<T>::~HostDeviceVector() {
  HostDeviceVectorImpl<T>* tmp = impl_;
  impl_ = nullptr;
  delete tmp;
}
    
    /*! \brief training parameters */
struct DartTrainParam : public dmlc::Parameter<DartTrainParam> {
  /*! \brief whether to not print info during training */
  bool silent;
  /*! \brief type of sampling algorithm */
  int sample_type;
  /*! \brief type of normalization algorithm */
  int normalize_type;
  /*! \brief fraction of trees to drop during the dropout */
  float rate_drop;
  /*! \brief whether at least one tree should always be dropped during the dropout */
  bool one_drop;
  /*! \brief probability of skipping the dropout during an iteration */
  float skip_drop;
  /*! \brief learning step size for a time */
  float learning_rate;
  // declare parameters
  DMLC_DECLARE_PARAMETER(DartTrainParam) {
    DMLC_DECLARE_FIELD(silent)
        .set_default(false)
        .describe('Not print information during training.');
    DMLC_DECLARE_FIELD(sample_type)
        .set_default(0)
        .add_enum('uniform', 0)
        .add_enum('weighted', 1)
        .describe('Different types of sampling algorithm.');
    DMLC_DECLARE_FIELD(normalize_type)
        .set_default(0)
        .add_enum('tree', 0)
        .add_enum('forest', 1)
        .describe('Different types of normalization algorithm.');
    DMLC_DECLARE_FIELD(rate_drop)
        .set_range(0.0f, 1.0f)
        .set_default(0.0f)
        .describe('Fraction of trees to drop during the dropout.');
    DMLC_DECLARE_FIELD(one_drop)
        .set_default(false)
        .describe('Whether at least one tree should always be dropped during the dropout.');
    DMLC_DECLARE_FIELD(skip_drop)
        .set_range(0.0f, 1.0f)
        .set_default(0.0f)
        .describe('Probability of skipping the dropout during a boosting iteration.');
    DMLC_DECLARE_FIELD(learning_rate)
        .set_lower_bound(0.0f)
        .set_default(0.3f)
        .describe('Learning rate(step size) of update.');
    DMLC_DECLARE_ALIAS(learning_rate, eta);
  }
};
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    // global
#include '../src/learner.cc'
#include '../src/logging.cc'
#include '../src/common/common.cc'
#include '../src/common/host_device_vector.cc'
#include '../src/common/hist_util.cc'
    
    TEST(Metric, AUC) {
  xgboost::Metric * metric = xgboost::Metric::Create('auc');
  ASSERT_STREQ(metric->Name(), 'auc');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 1}, {}));
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 0}, {0, 0}));
}
    
      std::vector<std::string> DumpModel(const FeatureMap& fmap,
                                     bool with_stats,
                                     std::string format) const override {
    return model_.DumpModel(fmap, with_stats, format);
  }
    
    
#endif // __cocos2dx_cocosbuilder_h__

    
    
    
    
    
        virtual void DrawPolygon(const b2Vec2* vertices, int vertexCount, const b2Color& color);
    
    
    {
    {			float minX = -6.0f;
			float maxX = 0.0f;
			float minY = 4.0f;
			float maxY = 6.0f;
			
			for (int32 i = 0; i < 400; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position = b2Vec2(RandomFloat(minX,maxX),RandomFloat(minY,maxY));
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&shape, 0.01f);
			}
		}
		
		{
			b2PolygonShape shape;
			shape.SetAsBox(1.5f, 1.5f);
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-40.0f,5.0f);
			bd.bullet = true;
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&shape, 1.0f);
			body->SetLinearVelocity(b2Vec2(150.0f, 0.0f));
		}
	}
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
			fd.friction = 0.3f;
    
    			bd.position.Set(230.0f, 3.5f);
			body = m_world->CreateBody(&bd);
			body->CreateFixture(&box, 0.5f);
    
      /**
   * Construct a new string by replacing `this_count` characters starting from
   *   position `this_pos` within this string with `that_count` characters from
   *   string `that` starting at position `that_pos`.
   * \param this_pos The starting offset within `*this` of the first character
   *   to be replaced.
   * \param this_count The number of characters to be replaced. If `npos`,
   *   it is treated as if `this_count` were `size() - this_pos`.
   * \param that A string that contains the replacement string.
   * \param that_pos The offset to the first character in the replacement
   *   string.
   * \param that_count The number of characters in the replacement string.
   * \pre `this_pos <= size() && this_count <= size() - this_pos`
   * \pre `that_pos <= that.size() && that_count <= that.size() - that_pos`
   * \post The size of the returned string is `size() - this_count + that_count`
   * \note Equivalent to <tt>BasicFixedString<Char, N + M>{substr(0, this_pos) +
   *    that.substr(that_pos, that_count) + substr(this_pos + this_count)}</tt>
   * \throw std::out_of_range on any of the following conditions:
   *   - `this_pos > size()`
   *   - `this_count > size() - this_pos`
   *   - `that_pos > that.size()`
   *   - `that_count > that.size() - that_pos`
   */
  template <std::size_t M>
  constexpr BasicFixedString<Char, N + M> creplace(
      std::size_t this_pos,
      std::size_t this_count,
      const BasicFixedString<Char, M>& that,
      std::size_t that_pos,
      std::size_t that_count) const noexcept(false) {
    return detail::fixedstring::Helper::replace_<Char>(
        data_,
        size_,
        detail::fixedstring::checkOverflow(this_pos, size_),
        detail::fixedstring::checkOverflowOrNpos(this_count, size_ - this_pos),
        that.data_,
        detail::fixedstring::checkOverflow(that_pos, that.size_),
        detail::fixedstring::checkOverflowOrNpos(
            that_count, that.size_ - that_pos),
        folly::make_index_sequence<N + M>{});
  }
    
      // Clone one of the IOBufs in the chain
  unique_ptr<IOBuf> iob4clone = iob4ptr->cloneOne();
  gen.seed(fillSeed);
  checkBuf(iob1.get(), gen);
  checkBuf(iob2ptr, gen);
  checkBuf(iob3ptr, gen);
  checkBuf(iob4clone.get(), gen);
  checkBuf(iob5ptr, gen);
    
      // Not yet built.  Is it currently in progress?
  if (creating_thread_.load(std::memory_order_acquire) != std::thread::id()) {
    return true;
  }
    
      void setType(Type type) {
    type_ = type;
  }
    
      ~HazptrLockFreeLIFO() {
    Node* next;
    for (auto node = head(); node; node = next) {
      next = node->next();
      node->retire();
    }
    hazptr_cleanup<Atom>();
  }
    
    
    {} // namespace folly

    
    // I have no idea what the normal values for these are,
// and really don't care what they are. They're only used
// within fcntl, so it's not an issue.
#define FD_CLOEXEC HANDLE_FLAG_INHERIT
#define O_NONBLOCK 1
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4
    
    
    {} // namespace folly

    
    void init(int* argc, char*** argv, bool removeFlags) {
#if FOLLY_USE_SYMBOLIZER
  // Install the handler now, to trap errors received during startup.
  // The callbacks, if any, can be installed later
  folly::symbolizer::installFatalSignalHandler();
#elif !defined(_WIN32)
  google::InstallFailureSignalHandler();
#endif
    }
    
      XLOG(DBG1, 'log arguments are concatenated: ', 12345, ', ', 92.0);
  XLOGF(DBG1, 'XLOGF supports {}-style formatting: {:.3f}', 'python', 1.0 / 3);
  XLOG(DBG2) << 'streaming syntax is also supported: ' << 1234;
  XLOG(DBG2, 'if you really want, ', 'you can even')
      << ' mix function-style and streaming syntax: ' << 42;
  XLOGF(DBG3, 'and {} can mix {} style', 'you', 'format') << ' and streaming';