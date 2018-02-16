
        
          string name() const override { return 'model_pruner'; };
    
    void SubProcess::ClosePipes() {
  for (int i = 0; i < kNFds; i++) {
    if (parent_pipe_[i] >= 0) {
      close(parent_pipe_[i]);
      parent_pipe_[i] = -1;
    }
    if (child_pipe_[i] >= 0) {
      close(child_pipe_[i]);
      child_pipe_[i] = -1;
    }
  }
}
    
    
    {}  // namespace tensorflow

    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {    io::RecordReaderOptions options =
        io::RecordReaderOptions::CreateRecordReaderOptions(compression_type_);
    reader_.reset(new io::RecordReader(file_.get(), options));
    return Status::OK();
  }
    
    leveldb_comparator_t* leveldb_comparator_create(
    void* state,
    void (*destructor)(void*),
    int (*compare)(
        void*,
        const char* a, size_t alen,
        const char* b, size_t blen),
    const char* (*name)(void*)) {
  leveldb_comparator_t* result = new leveldb_comparator_t;
  result->state_ = state;
  result->destructor_ = destructor;
  result->compare_ = compare;
  result->name_ = name;
  return result;
}
    
    namespace leveldb {
    }
    
    
    {}  // namespace leveldb

    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    
    {
    {      // Install new manifest
      status = env_->RenameFile(tmp, DescriptorFileName(dbname_, 1));
      if (status.ok()) {
        status = SetCurrentFile(env_, dbname_, 1);
      } else {
        env_->DeleteFile(tmp);
      }
    }
    return status;
  }
    
    namespace leveldb {
    }
    
    TEST(FindFileTest, Single) {
  Add('p', 'q');
  ASSERT_EQ(0, Find('a'));
  ASSERT_EQ(0, Find('p'));
  ASSERT_EQ(0, Find('p1'));
  ASSERT_EQ(0, Find('q'));
  ASSERT_EQ(1, Find('q1'));
  ASSERT_EQ(1, Find('z'));
    }
    
        if (bytes_ > 0) {
      char rate[100];
      snprintf(rate, sizeof(rate), '%6.1f MB/s',
               (bytes_ / 1048576.0) / (finish - start_));
      if (!message_.empty()) {
        message_  = std::string(rate) + ' ' + message_;
      } else {
        message_ = rate;
      }
    }
    
    #include <string>
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
    #include <grpc++/security/credentials.h>
    
    gpr_once g_once_init_add_prod_ssl_provider = GPR_ONCE_INIT;
// Register ssl with non-test roots type to the credentials provider.
void AddProdSslType() {
  testing::GetCredentialsProvider()->AddSecureType(
      kProdTlsCredentialsType, std::unique_ptr<testing::CredentialTypeProvider>(
                                   new SslCredentialProvider));
}
    
    #include <set>
    
    
    {  gpr_atm done_;
};
    
    #include 'helloworld.grpc.pb.h'
    
      std::cout << '-------------- GetFeature --------------' << std::endl;
  guide.GetFeature();
  std::cout << '-------------- ListFeatures --------------' << std::endl;
  guide.ListFeatures();
  std::cout << '-------------- RecordRoute --------------' << std::endl;
  guide.RecordRoute();
  std::cout << '-------------- RouteChat --------------' << std::endl;
  guide.RouteChat();
    
    #define GPR_ONCE_INIT PTHREAD_ONCE_INIT
    
      ASSERT_FLOAT_EQ(10, YGNodeLayoutGetMargin(child, YGEdgeTop));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetPadding(child, YGEdgeTop));
    
    template<typename... ARGS>
inline void logi(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_INFO, tag, msg, args...);
}
    
    namespace facebook {
namespace jni {
    }
    }