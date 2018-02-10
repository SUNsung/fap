
        
        int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
      virtual inline const char* type() const { return 'AbsVal'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    #endif  // CAFFE_CUDNN_POOLING_LAYER_HPP_

    
    #include <vector>
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
    
    {    int nindex = index_.num_chunk();
    int nvalue = value_.num_chunk();
    int ntotal = nindex + nvalue;
    #pragma omp parallel for schedule(dynamic, 1)  num_threads(nthread_write_)
    for (int i = 0; i < ntotal; ++i) {
      if (i < nindex) {
        index_.Compress(i, use_lz4_hc_);
      } else {
        value_.Compress(i - nindex, use_lz4_hc_);
      }
    }
    index_.Write(fo);
    value_.Write(fo);
    // statistics
    raw_bytes_index_ += index_.RawBytes() * sizeof(bst_uint) / sizeof(StorageIndex);
    raw_bytes_value_ += value_.RawBytes();
    encoded_bytes_index_ += index_.EncodedBytes();
    encoded_bytes_value_ += value_.EncodedBytes();
    raw_bytes_ += page.offset.size() * sizeof(size_t);
  }
    
      inline void ParseStr(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        case '\r':
        case '\n': LOG(FATAL)<< 'ConfigReader: unterminated string';
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'ConfigReader: unterminated string';
  }
  inline void ParseStrML(std::string *tok) {
    while ((ch_buf = this->GetChar()) != EOF) {
      switch (ch_buf) {
        case '\\': *tok += this->GetChar(); break;
        case '\'': return;
        default: *tok += ch_buf;
      }
    }
    LOG(FATAL) << 'unterminated string';
  }
  // return newline
  inline bool GetNextToken(std::string *tok) {
    tok->clear();
    bool new_line = false;
    while (ch_buf != EOF) {
      switch (ch_buf) {
        case '#' : SkipLine(); new_line = true; break;
        case '\'':
          if (tok->length() == 0) {
            ParseStr(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '\'':
          if (tok->length() == 0) {
            ParseStrML(tok); ch_buf = this->GetChar(); return new_line;
          } else {
            LOG(FATAL) << 'ConfigReader: token followed directly by string';
          }
        case '=':
          if (tok->length() == 0) {
            ch_buf = this->GetChar();
            *tok = '=';
          }
          return new_line;
        case '\r':
        case '\n':
          if (tok->length() == 0) new_line = true;
        case '\t':
        case ' ' :
          ch_buf = this->GetChar();
          if (tok->length() != 0) return new_line;
          break;
        default:
          *tok += ch_buf;
          ch_buf = this->GetChar();
          break;
      }
    }
    if (tok->length() == 0) {
      return true;
    } else {
      return false;
    }
  }
};
/*!
 * \brief an iterator use stream base, allows use all types of istream
 */
class ConfigStreamReader: public ConfigReaderBase {
 public:
  /*!
   * \brief constructor
   * \param fin istream input stream
   */
  explicit ConfigStreamReader(std::istream &fin) : fin(fin) {}
    
    #include <random>
#include <limits>
    
    #include '../helpers.h'
    
    
    {  col_iter_.cpages_.clear();
  if (info().num_row < max_row_perbatch) {
    std::unique_ptr<SparsePage> page(new SparsePage());
    this->MakeOneBatch(enabled, pkeep, page.get());
    col_iter_.cpages_.push_back(std::move(page));
  } else {
    this->MakeManyBatch(enabled, pkeep, max_row_perbatch);
  }
  // setup col-size
  col_size_.resize(info().num_col);
  std::fill(col_size_.begin(), col_size_.end(), 0);
  for (size_t i = 0; i < col_iter_.cpages_.size(); ++i) {
    SparsePage *pcol = col_iter_.cpages_[i].get();
    for (size_t j = 0; j < pcol->Size(); ++j) {
      col_size_[j] += pcol->offset[j + 1] - pcol->offset[j];
    }
  }
}
    
    
    {template<typename IndexType>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(const std::vector<bst_float> &preds,
                   const MetaInfo &info,
                   int iter,
                   std::vector<bst_gpair> *out_gpair) override {
    out_gpair->resize(preds.size());
    for (size_t i = 0; i < preds.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (info.labels[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds[i]));
      // this is the gradient
      bst_float grad = (p - info.labels[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair->at(i) = bst_gpair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(std::vector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = *io_preds;
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
    
    {    // Return an OK status.
    return grpc::Status::OK;
  }
    
    inline flatbuffers::Offset<Enum> CreateEnumDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<flatbuffers::Offset<EnumVal>> *values = nullptr,
    bool is_union = false,
    flatbuffers::Offset<Type> underlying_type = 0,
    const std::vector<flatbuffers::Offset<KeyValue>> *attributes = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *documentation = nullptr) {
  return reflection::CreateEnum(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      values ? _fbb.CreateVector<flatbuffers::Offset<EnumVal>>(*values) : 0,
      is_union,
      underlying_type,
      attributes ? _fbb.CreateVector<flatbuffers::Offset<KeyValue>>(*attributes) : 0,
      documentation ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*documentation) : 0);
}
    
    inline const char **EnumNamesEnumInNestedNS() {
  static const char *names[] = {
    'A',
    'B',
    'C',
    nullptr
  };
  return names;
}
    
      virtual grpc::string input_type_name() const = 0;
  virtual grpc::string output_type_name() const = 0;
    
     private:
  const uint8_t *Indirect() const {
    return flexbuffers::Indirect(data_, parent_width_);
  }
    
    // Get a field, if you know it's floating point and its exact type.
template<typename T>
T GetFieldF(const Table &table, const reflection::Field &field) {
  assert(sizeof(T) == GetTypeSize(field.type()->base_type()));
  return table.GetField<T>(field.offset(),
                           static_cast<T>(field.default_real()));
}
    
      // here, parser.builder_ contains a binary buffer that is the parsed data.
    
                        cout << 'Connections: ' << sockets.size() << endl;
    
        framePack.base = (char *) framePackBuffer;
    framePack.len = framePackBufferLength;
    
    namespace uS {
    }
    
            if (ssl) {
            if (!h.listen(3000,
                          uS::TLS::createContext('misc/ssl/cert.pem',
                          'misc/ssl/key.pem', '1234'))) {
                std::cerr << 'FAILURE: Cannot listen!' << std::endl;
                exit(-1);
            }
            h.connect('wss://localhost:3000', nullptr);
        } else {
            if (!h.listen(3000)) {
                std::cerr << 'FAILURE: Cannot listen!' << std::endl;
                exit(-1);
            }
            h.connect('ws://localhost:3000', nullptr);
        }
    
    
    {
    {
    {
    {                    return webSocket;
                } else {
                    httpSocket->onEnd(httpSocket);
                }
                return httpSocket;
            }
        } else {
            if (!httpSocket->httpBuffer.length()) {
                if (length > MAX_HEADER_BUFFER_SIZE) {
                    httpSocket->onEnd(httpSocket);
                } else {
                    httpSocket->httpBuffer.append(lastCursor, end - lastCursor);
                }
            }
            return httpSocket;
        }
    } while(cursor != end);
    
        void enqueue(Queue::Message *message) {
        messageQueue.push(message);
    }
    
    
    {            static size_t transform(const char *src, char *dst, size_t length, int transformData) {
                memcpy(dst, src, length);
                return length;
            }
        };
    
            Timepoint t = {cb, this, timepoint, repeat};
        loop->timers.insert(
            std::upper_bound(loop->timers.begin(), loop->timers.end(), t, [](const Timepoint &a, const Timepoint &b) {
                return a.timepoint < b.timepoint;
            }),
            t
        );
    
    #endif // HUB_UWS_H
