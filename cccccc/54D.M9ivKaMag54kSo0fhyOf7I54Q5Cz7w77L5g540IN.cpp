
        
        #endif  // CHROME_BROWSER_UI_VIEWS_FRAME_GLOBAL_MENU_BAR_REGISTRAR_X11_H_

    
    
    {}  // namespace mate

    
    template <typename P1, typename P2>
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*(P1, P2)>& callback) {
  typename CallbackParamTraits<P1>::LocalType a1;
  typename CallbackParamTraits<P2>::LocalType a2;
  if (!GetNextArgument(args, 0, true, &a1) ||
      !GetNextArgument(args, 0, false, &a2))
    return nullptr;
  return callback.Run(a1, a2);
}
    
    #endif  // NATIVE_MATE_NATIVE_MATE_HANDLE_H_

    
    // This converter handles any subclass of Wrappable.
template <typename T>
struct Converter<T*,
                 typename std::enable_if<
                     std::is_convertible<T*, WrappableBase*>::value>::type> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate, T* val) {
    if (val)
      return val->GetWrapper();
    else
      return v8::Null(isolate);
  }
    }
    
      static void FirstWeakCallback(
      const v8::WeakCallbackInfo<WrappableBase>& data);
  static void SecondWeakCallback(
      const v8::WeakCallbackInfo<WrappableBase>& data);
    
    void GlobalMenuBarRegistrarX11::OnWindowMapped(unsigned long xid) {
  live_xids_.insert(xid);
    }
    
    
    {}  // namespace
    
    
    {  DISALLOW_COPY_AND_ASSIGN(UvTaskRunner);
};
    
        QColor TextColor() const { return textColor; }
    QColor SingleColor() const { return singleColor; }
    
    int secp256k1_ecdsa_recoverable_signature_parse_compact(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature* sig, const unsigned char *input64, int recid) {
    secp256k1_scalar r, s;
    int ret = 1;
    int overflow = 0;
    }
    
    #include <stdio.h>
#include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
    class Env;
class Iterator;
class TableCache;
class VersionEdit;
    
      fname = TableFileName('bar', 200);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(200, number);
  ASSERT_EQ(kTableFile, type);
    
      // REQUIRES: External synchronization
  void WriteStep(Random* rnd) {
    const uint32_t k = rnd->Next() % K;
    const intptr_t g = current_.Get(k) + 1;
    const Key key = MakeKey(k, g);
    list_.Insert(key);
    current_.Set(k, g);
  }
    
    TEST(WriteBatchTest, Multiple) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  batch.Put(Slice('baz'), Slice('boo'));
  WriteBatchInternal::SetSequence(&batch, 100);
  ASSERT_EQ(100, WriteBatchInternal::Sequence(&batch));
  ASSERT_EQ(3, WriteBatchInternal::Count(&batch));
  ASSERT_EQ(
      'Put(baz, boo)@102'
      'Delete(box)@101'
      'Put(foo, bar)@100',
      PrintContents(&batch));
}
    
    inline bool operator!=(const Slice& x, const Slice& y) { return !(x == y); }
    
      // count the keys
  leveldb::Iterator* iter = db->NewIterator(leveldb::ReadOptions());
  size_t num_keys = 0;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    num_keys++;
  }
  delete iter;
  ASSERT_EQ(kNumKeys, num_keys) << 'Bad number of keys';
    
    namespace leveldb {
    }
    
    Status Footer::DecodeFrom(Slice* input) {
  const char* magic_ptr = input->data() + kEncodedLength - 8;
  const uint32_t magic_lo = DecodeFixed32(magic_ptr);
  const uint32_t magic_hi = DecodeFixed32(magic_ptr + 4);
  const uint64_t magic = ((static_cast<uint64_t>(magic_hi) << 32) |
                          (static_cast<uint64_t>(magic_lo)));
  if (magic != kTableMagicNumber) {
    return Status::Corruption('not an sstable (bad magic number)');
  }
    }
    
    Status Table::InternalGet(const ReadOptions& options, const Slice& k, void* arg,
                          void (*handle_result)(void*, const Slice&,
                                                const Slice&)) {
  Status s;
  Iterator* iiter = rep_->index_block->NewIterator(rep_->options.comparator);
  iiter->Seek(k);
  if (iiter->Valid()) {
    Slice handle_value = iiter->value();
    FilterBlockReader* filter = rep_->filter;
    BlockHandle handle;
    if (filter != nullptr && handle.DecodeFrom(&handle_value).ok() &&
        !filter->KeyMayMatch(handle.offset(), k)) {
      // Not found
    } else {
      Iterator* block_iter = BlockReader(this, options, iiter->value());
      block_iter->Seek(k);
      if (block_iter->Valid()) {
        (*handle_result)(arg, block_iter->key(), block_iter->value());
      }
      s = block_iter->status();
      delete block_iter;
    }
  }
  if (s.ok()) {
    s = iiter->status();
  }
  delete iiter;
  return s;
}
    
    
    {  expected = {'select pid from processes where name = 'foobar';'};
  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  EXPECT_EQ(fpack.getDiscoveryQueries(), expected);
}
    
    namespace fs = boost::filesystem;
    
    boost::filesystem::path const& getTestConfigDirectory();
    
    #include <osquery/core/database/database.h>
    
      Expected<int32_t, DatabaseError> getInt32(const std::string& domain,
                                            const std::string& key) override;
  Expected<std::string, DatabaseError> getString(
      const std::string& domain, const std::string& key) override;
    
      rj::Document doc;
  if (doc.Parse(request.at('log').c_str()).HasParseError()) {
    return;
  }
    
      /**
   * @brief See the usesLogStatus method, log a Glog status.
   *
   * @param log A vector of parsed Glog log lines.
   * @return Status non-op indicating success or failure.
   */
  virtual Status logStatus(const std::vector<StatusLogLine>& log) {
    (void)log;
    return Status(1, 'Not enabled');
  }
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }
    
    /**
 * @brief The response part of a plugin (registry item's) call.
 *
 * If a Registry::call succeeds it will fill in a PluginResponse.
 * This response is a vector of key value maps.
 */
using PluginResponse = std::vector<PluginRequest>;