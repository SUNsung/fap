
        
        int main(int argc, char** argv) {
  FLAGS_alsologtostderr = 1;
    }
    
    Classifier::Classifier(const string& model_file,
                       const string& trained_file,
                       const string& mean_file,
                       const string& label_file) {
#ifdef CPU_ONLY
  Caffe::set_mode(Caffe::CPU);
#else
  Caffe::set_mode(Caffe::GPU);
#endif
    }
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_LRN_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/layers/base_conv_layer.hpp'
    
    /**
 * @brief Computes @f$ y = \gamma ^ {\alpha x + \beta} @f$,
 *        as specified by the scale @f$ \alpha @f$, shift @f$ \beta @f$,
 *        and base @f$ \gamma @f$.
 */
template <typename Dtype>
class ExpLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ExpParameter exp_param,
   *     with ExpLayer options:
   *   - scale (\b optional, default 1) the scale @f$ \alpha @f$
   *   - shift (\b optional, default 0) the shift @f$ \beta @f$
   *   - base (\b optional, default -1 for a value of @f$ e \approx 2.718 @f$)
   *         the base @f$ \gamma @f$
   */
  explicit ExpLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    CvRect cvGetValidDisparityROI( CvRect roi1, CvRect roi2, int minDisparity,
                              int numberOfDisparities, int SADWindowSize )
{
    return (CvRect)cv::getValidDisparityROI( roi1, roi2, minDisparity,
                                            numberOfDisparities, SADWindowSize );
}
    
        if (rowRange_ == Range::all())
    {
        rows = m.rows;
    }
    else
    {
        CV_Assert( 0 <= rowRange_.start && rowRange_.start <= rowRange_.end && rowRange_.end <= m.rows );
    }
    
    #undef cv_hal_SVD32f
#define cv_hal_SVD32f lapack_SVD32f
#undef cv_hal_SVD64f
#define cv_hal_SVD64f lapack_SVD64f
    
    namespace grpc {
namespace testing {
    }
    }
    
      grpc::testing::interop::RunServer(
      grpc::testing::CreateInteropServerCredentials());
    
    // Standard library components can't be forward declared, so we'll have to
// include the array header. Fortunately, it's fairly lightweight and doesn't
// add significantly to the compile time.
#if defined(BOOST_ASIO_HAS_STD_ARRAY)
# include <array>
#endif // defined(BOOST_ASIO_HAS_STD_ARRAY)
    
    #endif // BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP

    
      // Resize the buffer to the specified length.
  void resize(size_type length)
  {
    BOOST_ASIO_ASSERT(length <= capacity());
    if (begin_offset_ + length <= capacity())
    {
      end_offset_ = begin_offset_ + length;
    }
    else
    {
      using namespace std; // For memmove.
      memmove(&buffer_[0], &buffer_[0] + begin_offset_, size());
      end_offset_ = length;
      begin_offset_ = 0;
    }
  }
    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    #endif // BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP

    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
        page->offset.clear();
    page->offset.push_back(0);
    for (bst_uint cid : sorted_index_set) {
      page->offset.push_back(
          page->offset.back() + disk_offset_[cid + 1] - disk_offset_[cid]);
    }
    page->data.resize(page->offset.back());
    CHECK_EQ(index_.data.size(), value_.data.size());
    CHECK_EQ(index_.data.size(), disk_offset_.back());
    
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
    {
    { private:
  std::ifstream fi;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_CONFIG_H_

    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
    /*! \brief match error */
struct EvalMatchError : public EvalMClassBase<EvalMatchError> {
  const char* Name() const override {
    return 'merror';
  }
  inline static bst_float EvalRow(int label,
                                  const bst_float *pred,
                                  size_t nclass) {
    return common::FindMaxIndex(pred, pred + nclass) != pred + static_cast<int>(label);
  }
};
    
    void GenerateServerMethod(const grpc_generator::Method *method, grpc_generator::Printer *printer,
                          std::map<grpc::string, grpc::string> vars) {
	vars['Method'] = exportName(method->name());
	vars['Request'] = method->get_input_type_name();
	vars['Response'] = (vars['CustomMethodIO'] == '') ? method->get_output_type_name() : vars['CustomMethodIO'];
	vars['FullMethodName'] = '/' + vars['Package'] + '.' + vars['Service'] + '/' + vars['Method'];
	vars['Handler'] = '_' + vars['Service'] + '_' + vars['Method'] + '_Handler';
	if (method->NoStreaming()) {
		printer->Print(vars, 'func $Handler$(srv interface{}, ctx $context$.Context,\n\tdec func(interface{}) error, interceptor $grpc$.UnaryServerInterceptor) (interface{}, error) {\n');
		printer->Indent();
		printer->Print(vars, 'in := new($Request$)\n');
		printer->Print('if err := dec(in); err != nil { return nil, err }\n');
		printer->Print(vars, 'if interceptor == nil { return srv.($Service$Server).$Method$(ctx, in) }\n');
		printer->Print(vars, 'info := &$grpc$.UnaryServerInfo{\n');
		printer->Indent();
		printer->Print('Server: srv,\n');
		printer->Print(vars, 'FullMethod: \'$FullMethodName$\',\n');
		printer->Outdent();
		printer->Print('}\n\n');
		printer->Print(vars, 'handler := func(ctx $context$.Context, req interface{}) (interface{}, error) {\n');
		printer->Indent();
		printer->Print(vars, 'return srv.($Service$Server).$Method$(ctx, req.(* $Request$))\n');
		printer->Outdent();
		printer->Print('}\n');
		printer->Print('return interceptor(ctx, in, info, handler)\n');
		printer->Outdent();
		printer->Print('}\n\n');
		return;
	}
	vars['StreamType'] = vars['ServiceUnexported'] + vars['Method'] + 'Server';
	printer->Print(vars, 'func $Handler$(srv interface{}, stream $grpc$.ServerStream) error {\n');
	printer->Indent();
	if (ServerOnlyStreaming(method)) {
		printer->Print(vars, 'm := new($Request$)\n');
		printer->Print(vars, 'if err := stream.RecvMsg(m); err != nil { return err }\n');
		printer->Print(vars, 'return srv.($Service$Server).$Method$(m, &$StreamType${stream})\n');
	} else {
		printer->Print(vars, 'return srv.($Service$Server).$Method$(&$StreamType${stream})\n');
	}
	printer->Outdent();
	printer->Print('}\n\n');
    }
    
    
    {    auto status = stub_->SayHello(&context, request_msg, &response_msg);
    if (status.ok()) {
      const HelloReply *response = response_msg.GetRoot();
      return response->message()->str();
    } else {
      std::cerr << status.error_code() << ': ' << status.error_message()
                << std::endl;
      return 'RPC failed';
    }
  }
    
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), cq, rpcmethod_Retrieve_, context, request, true, tag);
}
    
      // Get access to the root:
  auto monster = GetMonster(builder.GetBufferPointer());
    
    // This is an example of parsing text straight into a buffer and then
// generating flatbuffer (JSON) text from the buffer.
int main(int /*argc*/, const char * /*argv*/ []) {
  // load FlatBuffer schema (.fbs) and JSON from disk
  std::string schemafile;
  std::string jsonfile;
  bool ok = flatbuffers::LoadFile('samples/monster.fbs', false, &schemafile) &&
            flatbuffers::LoadFile('samples/monsterdata.json', false, &jsonfile);
  if (!ok) {
    printf('couldn't load files!\n');
    return 1;
  }
    }
    
    FileExistsFunction SetFileExistsFunction(
    FileExistsFunction file_exists_function) {
  FileExistsFunction previous_function = g_file_exists_function;
  g_file_exists_function =
      file_exists_function ? file_exists_function : FileExistsRaw;
  return previous_function;
}