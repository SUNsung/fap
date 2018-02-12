
        
        #ifndef TENSORFLOW_DEBUGGER_STATE_IMPL_H_
#define TENSORFLOW_DEBUGGER_STATE_IMPL_H_
    
    
    {  // Run constant folding operations on the given module. Returns whether the
  // module was changed (constant expressions folded).
  StatusOr<bool> Run(HloModule* module) override;
};
    
    
    { private:
  Cluster* cluster_;  // Not owned.
  int measurement_steps_;
  int measurement_threads_;
  std::vector<std::pair<string, Tensor>> feed_;
  std::vector<string> fetch_;
  std::unique_ptr<thread::ThreadPool> thread_pool_;
};
    
      string frame_name;
  std::deque<Node*> ready;
  ready.push_back(src_node);
  while (!ready.empty()) {
    Node* curr_node = ready.front();
    ready.pop_front();
    const ControlFlowInfo& curr_info = (*info)[curr_node->id()];
    const Node* frame = curr_info.frame;
    const Node* parent = curr_info.parent_frame;
    frame_name = curr_info.frame_name;
    }
    
    namespace internal {
template <typename T>
struct functor_traits<scalar_tanh_fast_derivative_op<T> > {
  enum {
    Cost = NumTraits<T>::AddCost * 2 + NumTraits<T>::MulCost * 1,
    PacketAccess = packet_traits<T>::HasAdd && packet_traits<T>::HasMul &&
                   packet_traits<T>::HasNegate
  };
};
}  // namespace internal
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    class PyDescriptorDatabase : public DescriptorDatabase {
 public:
  explicit PyDescriptorDatabase(PyObject* py_database);
  ~PyDescriptorDatabase();
    }
    
    #include <Python.h>
    
    // Author: anuraag@google.com (Anuraag Agrawal)
// Author: tibell@google.com (Johan Tibell)
    
    
    {
    {}  // namespace
}  // namespace protobuf
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    cv::Mat dls::Hessian(const double s[])
{
    // the vector of monomials is
    // m = [ const ; s1^2 * s2 ; s1 * s2 ; s1 * s3 ; s2 * s3 ; s2^2 * s3 ; s2^3 ; ...
    //       s1 * s3^2 ; s1 ; s3 ; s2 ; s2 * s3^2 ; s1^2 ; s3^2 ; s2^2 ; s3^3 ;   ...
    //       s1 * s2 * s3 ; s1 * s2^2 ; s1^2 * s3 ; s1^3]
    //
    }
    
    CV_EXPORTS void  EstimateUncertainties(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                           const IntrinsicParams& params, InputArray omc, InputArray Tc,
                           IntrinsicParams& errors, Vec2d& std_err, double thresh_cond, int check_cond, double& rms);
    
    CV_EXPORTS_W void multiply(InputArray src1, Scalar src2, OutputArray dst, double scale=1, int dtype=-1);
    
            static void* AppleGLGetProcAddress (const char* name)
        {
            static bool initialized = false;
            static void * handle = NULL;
            if (!handle)
            {
                if (!initialized)
                {
                    initialized = true;
                    const char * const path = '/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL';
    }
    }
    }
    
      void SendRpc(int num_rpcs, bool expect_ok = true) {
    EchoRequest request;
    EchoResponse response;
    request.set_message('Live long and prosper.');
    for (int i = 0; i < num_rpcs; i++) {
      ClientContext context;
      Status status = stub_->Echo(&context, request, &response);
      if (expect_ok) {
        EXPECT_TRUE(status.ok());
        EXPECT_EQ(response.message(), request.message());
      } else {
        EXPECT_FALSE(status.ok());
      }
    }
  }
    
      /// Guarantee that all bytes have been written to the wire before completing
  /// this write (usually writes are completed when they pass flow control)
  inline WriteOptions& set_write_through() {
    SetBit(GRPC_WRITE_THROUGH);
    return *this;
  }
    
      void TearDown() override {
    server_->Shutdown();
    if (picked_port_ > 0) {
      grpc_recycle_unused_port(picked_port_);
    }
  }
    
      void push_back(T&& value) { emplace_back(std::move(value)); }
    
    class WorkerServiceImpl;
    
    
    {
    {        // And we are done! Let the gRPC runtime know we've finished, using the
        // memory address of this instance as the uniquely identifying tag for
        // the event.
        status_ = FINISH;
        responder_.Finish(reply_, Status::OK, this);
      } else {
        GPR_ASSERT(status_ == FINISH);
        // Once in the FINISH state, deallocate ourselves (CallData).
        delete this;
      }
    }
    
    
    { private:
  std::unique_ptr<Greeter::Stub> stub_;
};
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list) {
  feature_list->clear();
  std::string db_content(db);
  db_content.erase(
      std::remove_if(db_content.begin(), db_content.end(), isspace),
      db_content.end());
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_DETAIL_EVENT_HPP

    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
# include <boost/asio/detail/null_fenced_block.hpp>
#elif defined(__MACH__) && defined(__APPLE__)
# include <boost/asio/detail/macos_fenced_block.hpp>
#elif defined(__sun)
# include <boost/asio/detail/solaris_fenced_block.hpp>
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
# include <boost/asio/detail/gcc_arm_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
# include <boost/asio/detail/gcc_hppa_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
# include <boost/asio/detail/gcc_x86_fenced_block.hpp>
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
# include <boost/asio/detail/gcc_sync_fenced_block.hpp>
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
# include <boost/asio/detail/win_fenced_block.hpp>
#else
# include <boost/asio/detail/null_fenced_block.hpp>
#endif
    
    #include <boost/asio/detail/push_options.hpp>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #define BOOST_ASIO_RESOLVE_HANDLER_CHECK( \
    handler_type, handler, iter_type) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code, iter_type)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::two_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0), \
          static_cast<const iter_type*>(0))) == 1, \
      'ResolveHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>(), \
            boost::asio::detail::lvref<const iter_type>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
        // Check if we need to run the operation again.
    if (ec == boost::asio::error::would_block
        || ec == boost::asio::error::try_again)
      return false;
    
    template <typename Time_Traits>
void epoll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  mutex::scoped_lock lock(mutex_);
    }
    
      /**
   * @brief Support the registry calling API for extensions.
   *
   * The database plugin 'fast-calls' directly to local plugins.
   * Extensions cannot use an extension-local backing store so their requests
   * are routed like all other plugins.
   */
  Status call(const PluginRequest& request, PluginResponse& response) override;
    
    
    { private:
  FRIEND_TEST(DispatcherTests, test_run);
  FRIEND_TEST(DispatcherTests, test_independent_run);
  FRIEND_TEST(DispatcherTests, test_interruption);
  FRIEND_TEST(BufferedLogForwarderTests, test_async);
};
    
    /**
 * @brief Request the extensions API to autoload any appropriate extensions.
 *
 * Extensions may be 'autoloaded' using the `extensions_autoload` command line
 * argument. loadExtensions should be called before any plugin or registry item
 * is used. This allows appropriate extensions to expose plugin requirements.
 *
 * An 'appropriate' extension is one within the `extensions_autoload` search
 * path with file ownership equivalent or greater (root) than the osquery
 * process requesting autoload.
 */
void loadExtensions();
    
     private:
  /// Track duplicate registry item support, used for testing.
  bool allow_duplicates_{false};
    
    /// Helper replacement for REGISTER, used within extension modules.
#define REGISTER_MODULE(t, r, n)                                               \
  auto t##Module = Registry::get().registry(r)->add(n, std::make_shared<t>());
    
    Status FilesystemConfigPlugin::genPack(const std::string& name,
                                       const std::string& value,
                                       std::string& pack) {
  if (name == '*') {
    // The config requested a multi-pack.
    std::vector<std::string> paths;
    resolveFilePattern(value, paths);
    }
    }
    
    template<typename StorageIndex>
class SparsePageLZ4Format : public SparsePage::Format {
 public:
  explicit SparsePageLZ4Format(bool use_lz4_hc)
      : use_lz4_hc_(use_lz4_hc) {
    raw_bytes_ = raw_bytes_value_ = raw_bytes_index_ = 0;
    encoded_bytes_value_ = encoded_bytes_index_ = 0;
    nthread_ = dmlc::GetEnv('XGBOOST_LZ4_DECODE_NTHREAD', 4);
    nthread_write_ = dmlc::GetEnv('XGBOOST_LZ4_COMPRESS_NTHREAD', 12);
  }
  virtual ~SparsePageLZ4Format() {
    size_t encoded_bytes = raw_bytes_ +  encoded_bytes_value_ + encoded_bytes_index_;
    raw_bytes_ += raw_bytes_value_ + raw_bytes_index_;
    if (raw_bytes_ != 0) {
      LOG(CONSOLE) << 'raw_bytes=' << raw_bytes_
                   << ', encoded_bytes=' << encoded_bytes
                   << ', ratio=' << double(encoded_bytes) / raw_bytes_
                   << ', ratio-index=' << double(encoded_bytes_index_) /raw_bytes_index_
                   << ', ratio-value=' << double(encoded_bytes_value_) /raw_bytes_value_;
    }
  }
    }
    
     protected:
  /*!
   * \brief to be implemented by subclass,
   * get next token, return EOF if end of file
   */
  virtual char GetChar(void) = 0;
  /*! \brief to be implemented by child, check if end of stream */
  virtual bool IsEnd(void) = 0;
    
      size_t Read(void* dptr, size_t size) override {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer == 0) return strm_->Read(dptr, size);
    if (nbuffer < size) {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, nbuffer);
      buffer_ptr_ += nbuffer;
      return nbuffer + strm_->Read(reinterpret_cast<char*>(dptr) + nbuffer,
                                   size - nbuffer);
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      buffer_ptr_ += size;
      return size;
    }
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
    
    TEST(MetaInfo, SaveLoadBinary) {
  xgboost::MetaInfo info;
  double vals[2] = {1.0, 2.0};
  info.SetInfo('label', vals, xgboost::kDouble, 2);
  info.num_row = 2;
  info.num_col = 1;
    }
    
    	for (int i = 0; i < service->method_count(); i++) {
		GenerateServerMethod(service->method(i).get(), printer, vars);
		printer->Print('\n');
	}
    
    #include 'src/compiler/schema_interface.h'
    
        // The `ReleaseMessage<T>()` function detaches the message from the
    // builder, so we can transfer the resopnse to gRPC while simultaneously
    // detaching that memory buffer from the builer.
    *response_msg = mb_.ReleaseMessage<HelloReply>();
    assert(response_msg->Verify());
    
    struct TableInNestedNSBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_foo(int32_t foo) {
    fbb_.AddElement<int32_t>(TableInNestedNS::VT_FOO, foo, 0);
  }
  explicit TableInNestedNSBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TableInNestedNSBuilder &operator=(const TableInNestedNSBuilder &);
  flatbuffers::Offset<TableInNestedNS> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TableInNestedNS>(end);
    return o;
  }
};
    
    inline flatbuffers::unique_ptr<MonsterT> UnPackMonster(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return flatbuffers::unique_ptr<MonsterT>(GetMonster(buf)->UnPack(res));
}
    
    
    {  printer->Print(*vars,
                 'class Mock$Service$Stub : public $Service$::StubInterface {\n'
                 ' public:\n');
  printer->Indent();
  for (int i = 0; i < service->method_count(); ++i) {
    PrintMockClientMethods(printer, service->method(i).get(), vars);
  }
  printer->Outdent();
  printer->Print('};\n');
}
    
    
    {  virtual void Print(const std::map<grpc::string, grpc::string> &vars,
                     const char *template_string) = 0;
  virtual void Print(const char *string) = 0;
  virtual void Indent() = 0;
  virtual void Outdent() = 0;
};
    
    inline std::string FlatBufferToString(const uint8_t *buffer,
                                      const TypeTable *type_table) {
  ToStringVisitor tostring_visitor;
  IterateFlatBuffer(buffer, type_table, &tostring_visitor);
  return tostring_visitor.s;
}
    
      // Generate text from an arbitrary FlatBuffer by looking up its
  // file_identifier in the registry.
  bool FlatBufferToText(const uint8_t *flatbuf, size_t len, std::string *dest) {
    // Get the identifier out of the buffer.
    // If the buffer is truncated, exit.
    if (len < sizeof(uoffset_t) + FlatBufferBuilder::kFileIdentifierLength) {
      lasterror_ = 'buffer truncated';
      return false;
    }
    std::string ident(
        reinterpret_cast<const char *>(flatbuf) + sizeof(uoffset_t),
        FlatBufferBuilder::kFileIdentifierLength);
    // Load and parse the schema.
    Parser parser;
    if (!LoadSchema(ident, &parser)) return false;
    // Now we're ready to generate text.
    if (!GenerateText(parser, flatbuf, dest)) {
      lasterror_ = 'unable to generate text for FlatBuffer binary';
      return false;
    }
    return true;
  }