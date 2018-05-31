
        
          assert(peekType(msg) == thpp::Type::LONG_LONG);
  int64_t arg4 = unpackInteger(msg);
  assert(arg4 == LLONG_MAX);
    
    
namespace thd {
    }
    
    #include 'override_macros.h'
    
    #define THDPStorage TH_CONCAT_3(THDP,Real,Storage)
#define THDPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THDPStorageClass TH_CONCAT_3(THDP,Real,StorageClass)
#define THDPStorage_(NAME) TH_CONCAT_4(THDP,Real,Storage_,NAME)
    
    
void unregister_fd(int fd) {
  pollfds.erase(
    std::remove_if(pollfds.begin(), pollfds.end(),
        [fd](const struct pollfd &pfd) { return pfd.fd == fd; }),
    pollfds.end());
  client_sessions.erase(fd);
}
    
    template<template <typename> class Trait, typename... Types>
struct map_to_ptr<Trait, std::tuple<Types...>> {
  using type = std::tuple<
    typename std::add_pointer<Types>::type...,
    typename std::add_pointer<typename Trait<Types>::type>::type...
  >;
};
    
    TreeUpdater* TreeUpdater::Create(const std::string& name) {
  auto *e = ::dmlc::Registry< ::xgboost::TreeUpdaterReg>::Get()->Find(name);
  if (e == nullptr) {
    LOG(FATAL) << 'Unknown tree updater ' << name;
  }
  return (e->body)();
}
    
    // data
#include '../src/data/data.cc'
#include '../src/data/simple_csr_source.cc'
#include '../src/data/simple_dmatrix.cc'
#include '../src/data/sparse_page_raw_format.cc'
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('map@2');
  ASSERT_STREQ(metric->Name(), 'map@2');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.25f, 0.001f);
}

    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  rocksdb::Slice begin  = *v8::String::Utf8Value(args[0]->ToString());
  rocksdb::Slice end    = *v8::String::Utf8Value(args[1]->ToString());
  std::string cf        = *v8::String::Utf8Value(args[2]->ToString());
  db_wrapper->status_    = db_wrapper->db_->CompactRange(
      db_wrapper->columnFamilies_[cf], &begin, &end);
    
      unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(test_dir_ + '/f', &writable_file, soptions_));
  ASSERT_OK(writable_file->Append('foo'));
  ASSERT_OK(writable_file->Append(write_data));
  ASSERT_OK(writable_file->Close());
  writable_file.reset();
    
      private:
    explicit DBWrapper();
    ~DBWrapper();
    
    #pragma once
#include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
    
    
    {  std::string res;
  slists.Get('k1', &res);
  ASSERT_EQ(res, 'v1|v2|v3');
}
    
    
// A file abstraction for sequential writing.  The implementation
// must provide buffering since callers may append small fragments
// at a time to the file.
class LibradosWritableFile : public WritableFile {
  librados::IoCtx * _io_ctx;
  std::string _fid;
  std::string _hint;
  const EnvLibrados * const _env;
    }