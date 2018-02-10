
        
        #include <google/protobuf/descriptor_database.h>
    
      string data = message.SerializeAsString();
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    
    
    void MapFieldGenerator::GenerateParsingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.AddEntriesFrom(input, _map_$name$_codec);\n');
}
    
    #include <google/protobuf/descriptor.h>
    
      int request_count() {
    std::unique_lock<std::mutex> lock(mu_);
    return request_count_;
  }
    
    /* decompress 'input' to 'output' using 'algorithm'.
   On success, appends slices to output and returns 1.
   On failure, output is unchanged, and returns 0. */
int grpc_msg_decompress(grpc_message_compression_algorithm algorithm,
                        grpc_slice_buffer* input, grpc_slice_buffer* output);
    
    int main(int argc, char** argv) {
  grpc_test_init(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
      Status RequestStream(ServerContext* context,
                       ServerReader<EchoRequest>* reader,
                       EchoResponse* response) override;
    
    TEST(InlinedVectorTest, ConstIndexOperator) {
  const int kNumElements = 10;
  InlinedVector<int, 5> v;
  EXPECT_EQ(0UL, v.size());
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(i);
    EXPECT_EQ(i + 1UL, v.size());
  }
  auto const_func = [kNumElements](const InlinedVector<int, 5>& v) {
    for (int i = 0; i < kNumElements; ++i) {
      EXPECT_EQ(i, v[i]);
    }
  };
  const_func(v);
}
    
    class SslCredentialProvider : public testing::CredentialTypeProvider {
 public:
  std::shared_ptr<ChannelCredentials> GetChannelCredentials(
      grpc::ChannelArguments* args) override {
    return SslCredentials(SslCredentialsOptions());
  }
  std::shared_ptr<ServerCredentials> GetServerCredentials() override {
    return nullptr;
  }
};
    
      size_t PeekRead(void* dptr, size_t size) {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer < size) {
      buffer_ = buffer_.substr(buffer_ptr_, buffer_.length());
      buffer_ptr_ = 0;
      buffer_.resize(size);
      size_t nadd = strm_->Read(dmlc::BeginPtr(buffer_) + nbuffer, size - nbuffer);
      buffer_.resize(nbuffer + nadd);
      std::memcpy(dptr, dmlc::BeginPtr(buffer_), buffer_.length());
      return buffer_.length();
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      return size;
    }
  }
    
     private:
  // try to prune off current leaf
  inline int TryPruneLeaf(RegTree &tree, int nid, int depth, int npruned) { // NOLINT(*)
    if (tree[nid].is_root()) return npruned;
    int pid = tree[nid].parent();
    RegTree::NodeStat &s = tree.stat(pid);
    ++s.leaf_child_cnt;
    if (s.leaf_child_cnt >= 2 && param.need_prune(s.loss_chg, depth - 1)) {
      // need to be pruned
      tree.ChangeToLeaf(pid, param.learning_rate * s.base_weight);
      // tail recursion
      return this->TryPruneLeaf(tree, pid, depth - 1, npruned + 2);
    } else {
      return npruned;
    }
  }
  /*! \brief do pruning of a tree */
  inline void DoPrune(RegTree &tree) { // NOLINT(*)
    int npruned = 0;
    // initialize auxiliary statistics
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      tree.stat(nid).leaf_child_cnt = 0;
    }
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      if (tree[nid].is_leaf()) {
        npruned = this->TryPruneLeaf(tree, nid, tree.GetDepth(nid), npruned);
      }
    }
    if (!param.silent) {
      LOG(INFO) << 'tree pruning end, ' << tree.param.num_roots << ' roots, '
                << tree.num_extra_nodes() << ' extra nodes, ' << npruned
                << ' pruned nodes, max_depth=' << tree.MaxDepth();
    }
  }