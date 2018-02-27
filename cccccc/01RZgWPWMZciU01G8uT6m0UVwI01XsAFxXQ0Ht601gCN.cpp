namespace atom {
    }
    
    namespace api {
    }
    
    bool Event::SendReply(const base::string16& json) {
  if (message_ == nullptr || sender_ == nullptr)
    return false;
    }
    
      // event.sendReply(json), used for replying synchronous message.
  bool SendReply(const base::string16& json);
    
    SavePageHandler::SavePageHandler(content::WebContents* web_contents,
                                 const SavePageCallback& callback)
    : web_contents_(web_contents),
      callback_(callback) {
}
    
    
    {}  // namespace atom

    
      const net::AuthChallengeInfo* auth_info() const { return auth_info_.get(); }
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(URLRequestAsyncAsarJob);
};
    
    #ifndef ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_
#define ATOM_BROWSER_NET_URL_REQUEST_STRING_JOB_H_
    
    // The entry point from ChromeMain into the relauncher process.
int RelauncherMain(const content::MainFunctionParams& main_parameters);
    
    // Header is checksum (4 bytes), length (2 bytes), type (1 byte).
static const int kHeaderSize = 4 + 2 + 1;
    
    bool FilterBlockReader::KeyMayMatch(uint64_t block_offset, const Slice& key) {
  uint64_t index = block_offset >> base_lg_;
  if (index < num_) {
    uint32_t start = DecodeFixed32(offset_ + index*4);
    uint32_t limit = DecodeFixed32(offset_ + index*4 + 4);
    if (start <= limit && limit <= static_cast<size_t>(offset_ - data_)) {
      Slice filter = Slice(data_ + start, limit - start);
      return policy_->KeyMayMatch(key, filter);
    } else if (start == limit) {
      // Empty filters do not match any keys
      return false;
    }
  }
  return true;  // Errors are treated as potential matches
}
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
    BlockBuilder::BlockBuilder(const Options* options)
    : options_(options),
      restarts_(),
      counter_(0),
      finished_(false) {
  assert(options->block_restart_interval >= 1);
  restarts_.push_back(0);       // First restart point is at offset 0
}
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
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
    
      // Encoded length of a Footer.  Note that the serialization of a
  // Footer will always occupy exactly this many bytes.  It consists
  // of two block handles and a magic number.
  enum {
    kEncodedLength = 2*BlockHandle::kMaxEncodedLength + 8
  };
    
    namespace {
class MergingIterator : public Iterator {
 public:
  MergingIterator(const Comparator* comparator, Iterator** children, int n)
      : comparator_(comparator),
        children_(new IteratorWrapper[n]),
        n_(n),
        current_(NULL),
        direction_(kForward) {
    for (int i = 0; i < n; i++) {
      children_[i].Set(children[i]);
    }
  }
    }
    }
    
    /**
 * @brief A backing storage domain name, used for key/value based storage.
 *
 * There are certain 'cached' variables such as a node-unique UUID or negotiated
 * 'node_key' following enrollment. If a value or setting must persist between
 * osqueryi or osqueryd runs it should be stored using the kPersistentSetting%s
 * domain.
 */
extern const std::string kPersistentSettings;
    
      /// Keep a lookup of registry items that are blacklisted from broadcast.
  std::vector<std::string> internal_;
    
    #include <map>
#include <functional>
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
    /*! \brief pruner that prunes a tree after growing finishes */
class TreePruner: public TreeUpdater {
 public:
  TreePruner() {
    syncher.reset(TreeUpdater::Create('sync'));
  }
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param.InitAllowUnknown(args);
    syncher->Init(args);
  }
  // update the tree, do pruning
  void Update(const std::vector<bst_gpair> &gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    // rescale learning rate according to size of trees
    float lr = param.learning_rate;
    param.learning_rate = lr / trees.size();
    for (size_t i = 0; i < trees.size(); ++i) {
      this->DoPrune(*trees[i]);
    }
    param.learning_rate = lr;
    syncher->Update(gpair, p_fmat, trees);
  }
    }
    
      std::string tmp_file = TempFileName();
  dmlc::Stream * fs = dmlc::Stream::Create(tmp_file.c_str(), 'w');
  info.SaveBinary(fs);
  delete fs;
    
    
namespace detail {
/*! \brief Implementation of gradient statistics pair. Template specialisation
 * may be used to overload different gradients types e.g. low precision, high
 * precision, integer, floating point. */
template <typename T>
class bst_gpair_internal {
  /*! \brief gradient statistics */
  T grad_;
  /*! \brief second order gradient statistics */
  T hess_;
    }
    }