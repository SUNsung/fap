
        
          content::WebContents* web_contents_;  // Weak Reference.
  scoped_refptr<content::DevToolsAgentHost> agent_host_;
    
    class AtomBrowserContext;
    
    bool SavePageHandler::Handle(const base::FilePath& full_path,
                             const content::SavePageType& save_type) {
  auto download_manager = content::BrowserContext::GetDownloadManager(
      web_contents_->GetBrowserContext());
  download_manager->AddObserver(this);
  // Chromium will create a 'foo_files' directory under the directory of saving
  // page 'foo.html' for holding other resource files of 'foo.html'.
  base::FilePath saved_main_directory_path = full_path.DirName().Append(
      full_path.RemoveExtension().BaseName().value() +
      FILE_PATH_LITERAL('_files'));
  bool result = web_contents_->SavePage(full_path,
                                        saved_main_directory_path,
                                        save_type);
  download_manager->RemoveObserver(this);
  // If initialization fails which means fail to create |DownloadItem|, we need
  // to delete the |SavePageHandler| instance to avoid memory-leak.
  if (!result)
    delete this;
  return result;
}
    
    #include 'atom/browser/net/asar/asar_protocol_handler.h'
    
    // Parse a string as an accelerator.
bool StringToAccelerator(const std::string& description,
                         ui::Accelerator* accelerator);
    
            REGISTER_OPERATOR_SCHEMA(Not)
        .Description('Performs element-wise negation.')
        .Input('X', 'Input tensor of type bool.', 'T')
        .Output('Y', '  Output tensor of type bool.', 'T')
        .TypeConstraint('T', { 'tensor(bool)' }, 'Constrain input and output types to bool tensor.');
    
        // Stores all frames of the chunk consecutively (mutable since this is a cache).
    mutable msra::dbn::matrix m_frames;
    
    #endif  // STORAGE_LEVELDB_DB_SNAPSHOT_H_

    
      // Add string delta to buffer_ followed by value
  buffer_.append(key.data() + shared, non_shared);
  buffer_.append(value.data(), value.size());
    
      // Read the block contents as well as the type/crc footer.
  // See table_builder.cc for the code that built this structure.
  size_t n = static_cast<size_t>(handle.size());
  char* buf = new char[n + kBlockTrailerSize];
  Slice contents;
  Status s = file->Read(handle.offset(), n + kBlockTrailerSize, &contents, buf);
  if (!s.ok()) {
    delete[] buf;
    return s;
  }
  if (contents.size() != n + kBlockTrailerSize) {
    delete[] buf;
    return Status::Corruption('truncated block read');
  }
    
    class Histogram {
 public:
  Histogram() { }
  ~Histogram() { }
    }
    
      // Randomly returns true ~'1/n' of the time, and false otherwise.
  // REQUIRES: n > 0
  bool OneIn(int n) { return (Next() % n) == 0; }
    
    #if 0
static void DumpInternalIter(Iterator* iter) {
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey k;
    if (!ParseInternalKey(iter->key(), &k)) {
      fprintf(stderr, 'Corrupt '%s'\n', EscapeString(iter->key()).c_str());
    } else {
      fprintf(stderr, '@ '%s'\n', k.DebugString().c_str());
    }
  }
}
#endif
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
    void OutputImageComponent::GetCoeffBlock(int block_x, int block_y,
                                         coeff_t block[kDCTBlockSize]) const {
  assert(block_x < width_in_blocks_);
  assert(block_y < height_in_blocks_);
  int offset = (block_y * width_in_blocks_ + block_x) * kDCTBlockSize;
  memcpy(block, &coeffs_[offset], kDCTBlockSize * sizeof(coeffs_[0]));
}
    
    #include 'guetzli/dct_double.h'
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    
    {}  // namespace guetzli
    
    namespace guetzli {
    }
    
      tmp0 = in[4 * stride];
  tmp1 = kIDCTMatrix[ 4] * tmp0;
  out[0] += tmp1;
  out[1] -= tmp1;
  out[2] -= tmp1;
  out[3] += tmp1;
  out[4] += tmp1;
  out[5] -= tmp1;
  out[6] -= tmp1;
  out[7] += tmp1;
    
    #include 'guetzli/output_image.h'
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
        Value(int unit, double value)
    : unit(unit)
    , value(value)
    {
    }
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
        void setAspectRatio(double aspectRatio);
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    #include <cstdarg>
#include <stdio.h>
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
    
      /**
   * As above but with a custom cleanup function
   */
  typedef void (*CleanupFunction)(void* obj);
  explicit ThreadLocal(CleanupFunction cleanup) :
    m_key(0),
    m_cleanup(cleanup) {
    FBASSERT(cleanup);
    initialize();
  }