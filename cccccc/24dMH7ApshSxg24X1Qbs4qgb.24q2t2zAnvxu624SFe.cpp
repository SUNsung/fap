
        
          EXPECT_EXIT(decode_data.AddString(1, '', ''),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
  EXPECT_EXIT(decode_data.AddString(1, 'a', ''),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
  EXPECT_EXIT(decode_data.AddString(1, '', 'a'),
              ::testing::KilledBySignal(SIGABRT),
              'error: got empty string for making TextFormat data, input:');
    
    #include <google/protobuf/stubs/logging.h>
#include <google/protobuf/stubs/common.h>
    
    #ifdef _WIN32
#ifndef STDIN_FILENO
#define STDIN_FILENO 0
#endif
#ifndef STDOUT_FILENO
#define STDOUT_FILENO 1
#endif
#endif
    
     public:
  static void StripFile(const FileDescriptor* old_file,
                        FileDescriptorProto *file) {
    for (int i = file->mutable_message_type()->size() - 1; i >= 0; i--) {
      if (IsMessageSet(old_file->message_type(i))) {
        file->mutable_message_type()->DeleteSubrange(i, 1);
        continue;
      }
      StripMessage(old_file->message_type(i), file->mutable_message_type(i));
    }
    for (int i = file->mutable_extension()->size() - 1; i >= 0; i--) {
      auto field = old_file->extension(i);
      if (field->type() == FieldDescriptor::TYPE_GROUP ||
          IsMessageSet(field->message_type()) ||
          IsMessageSet(field->containing_type())) {
        file->mutable_extension()->DeleteSubrange(i, 1);
      }
    }
  }
    
    #include 'addressbook.pb.h'
    
    TEST_P(FooTest, DoesBlah) {
  // Inside a test, access the test parameter with the GetParam() method
  // of the TestWithParam<T> class:
  EXPECT_TRUE(foo.Blah(GetParam()));
  ...
}
    
    // A copyable object representing the result of a test part (i.e. an
// assertion or an explicit FAIL(), ADD_FAILURE(), or SUCCESS()).
//
// Don't inherit from TestPartResult as its destructor is not virtual.
class GTEST_API_ TestPartResult {
 public:
  // The possible outcomes of a test part (i.e. an assertion or an
  // explicit SUCCEED(), FAIL(), or ADD_FAILURE()).
  enum Type {
    kSuccess,          // Succeeded.
    kNonFatalFailure,  // Failed but the test can continue.
    kFatalFailure      // Failed and the test should be terminated.
  };
    }
    
    #if GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_)};
    return ValuesIn(array);
  }
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
      s.Set(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    namespace mxnet {
namespace io {
// iterator on image recordio
class PrefetcherIter : public IIterator<DataBatch> {
 public:
  explicit PrefetcherIter(IIterator<TBlobBatch>* base)
      : loader_(base), out_(nullptr) {}
    }
    }
    }
    
    KVStore* KVStore::Create(const char *type_name) {
  std::string tname = type_name;
  std::transform(tname.begin(), tname.end(), tname.begin(), ::tolower);
  KVStore* kv = nullptr;
  bool use_device_comm = false;
  auto has = [tname](const std::string& pattern) {
    return tname.find(pattern) != std::string::npos;
  };
  if (has('device')) {
    use_device_comm = true;
  }
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file cudnn_bilinear_sampler-inl.h
 * \brief
 * \author Xu Dong
*/
#ifndef MXNET_OPERATOR_CUDNN_BILINEAR_SAMPLER_INL_H_
#define MXNET_OPERATOR_CUDNN_BILINEAR_SAMPLER_INL_H_
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~TreeUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief perform update to the tree models
   * \param gpair the gradient pair statistics of the data
   * \param data The data matrix passed to the updater.
   * \param trees references the trees to be updated, updater will change the content of trees
   *   note: all the trees in the vector are updated, with the same statistics,
   *         but maybe different random seeds, usually one tree is passed in at a time,
   *         there can be multiple trees when we train random forest style model
   */
  virtual void Update(HostDeviceVector<GradientPair>* gpair,
                      DMatrix* data,
                      const std::vector<RegTree*>& trees) = 0;
    }
    }
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
    
        // out_of_range.402
    try
    {
        // try to use the array index '-'
        json::const_reference ref = j.at('/array/-'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }