
        
          // Check for input iterator errors
  if (!iter->status().ok()) {
    s = iter->status();
  }
    
    const char* InternalFilterPolicy::Name() const {
  return user_policy_->Name();
}
    
    
    {  delete iter;
  delete table;
  delete file;
  return Status::OK();
}
    
    std::string CurrentFileName(const std::string& dbname) {
  return dbname + '/CURRENT';
}
    
    
    {  std::vector< std::pair<int, InternalKey> > compact_pointers_;
  DeletedFileSet deleted_files_;
  std::vector< std::pair<int, FileMetaData> > new_files_;
};
    
    TEST(WriteBatchTest, Append) {
  WriteBatch b1, b2;
  WriteBatchInternal::SetSequence(&b1, 200);
  WriteBatchInternal::SetSequence(&b2, 300);
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('',
            PrintContents(&b1));
  b2.Put('a', 'va');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200',
            PrintContents(&b1));
  b2.Clear();
  b2.Put('b', 'vb');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200'
            'Put(b, vb)@201',
            PrintContents(&b1));
  b2.Delete('foo');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200'
            'Put(b, vb)@202'
            'Put(b, vb)@201'
            'Delete(foo)@203',
            PrintContents(&b1));
}
    
        // Preparing sqlite3 statements
    status = sqlite3_prepare_v2(db_, begin_trans_str.c_str(), -1,
                                &begin_trans_stmt, NULL);
    ErrorCheck(status);
    status = sqlite3_prepare_v2(db_, end_trans_str.c_str(), -1,
                                &end_trans_stmt, NULL);
    ErrorCheck(status);
    status = sqlite3_prepare_v2(db_, read_str.c_str(), -1, &read_stmt, NULL);
    ErrorCheck(status);
    
    
    {    done_++;
    if (done_ >= next_report_) {
      if      (next_report_ < 1000)   next_report_ += 100;
      else if (next_report_ < 5000)   next_report_ += 500;
      else if (next_report_ < 10000)  next_report_ += 1000;
      else if (next_report_ < 50000)  next_report_ += 5000;
      else if (next_report_ < 100000) next_report_ += 10000;
      else if (next_report_ < 500000) next_report_ += 50000;
      else                            next_report_ += 100000;
      fprintf(stderr, '... finished %d ops%30s\r', done_, '');
      fflush(stderr);
    }
  }
    
    // Return a new filter policy that uses a bloom filter with approximately
// the specified number of bits per key.  A good value for bits_per_key
// is 10, which yields a filter with ~ 1% false positive rate.
//
// Callers must delete the result after any database that is using the
// result has been closed.
//
// Note: if you are using a custom comparator that ignores some parts
// of the keys being compared, you must not use NewBloomFilterPolicy()
// and must provide your own FilterPolicy that also ignores the
// corresponding parts of the keys.  For example, if the comparator
// ignores trailing spaces, it would be incorrect to use a
// FilterPolicy (like NewBloomFilterPolicy) that does not ignore
// trailing spaces in keys.
extern const FilterPolicy* NewBloomFilterPolicy(int bits_per_key);
    
    
    {  if (argc != 4) {
    printf('This script converts the CIFAR dataset to the leveldb format used\n'
           'by caffe to perform classification.\n'
           'Usage:\n'
           '    convert_cifar_data input_folder output_folder db_type\n'
           'Where the input folder should contain the binary batch files.\n'
           'The CIFAR dataset could be downloaded at\n'
           '    http://www.cs.toronto.edu/~kriz/cifar.html\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(string(argv[1]), string(argv[2]), string(argv[3]));
  }
  return 0;
}

    
    /* Wrap the input layer of the network in separate cv::Mat objects
 * (one per channel). This way we save one memcpy operation and we
 * don't need to rely on cudaMemcpy2D. The last preprocessing
 * operation will write the separate channels directly to the input
 * layer. */
void Classifier::WrapInputLayer(std::vector<cv::Mat>* input_channels) {
  Blob<float>* input_layer = net_->input_blobs()[0];
    }
    
    using namespace caffe;  // NOLINT(build/namespaces)
using boost::scoped_ptr;
using std::string;
    
      caffe::Datum datum;
  datum.set_channels(2);  // one channel for each image in the pair
  datum.set_height(rows);
  datum.set_width(cols);
  LOG(INFO) << 'A total of ' << num_items << ' items.';
  LOG(INFO) << 'Rows: ' << rows << ' Cols: ' << cols;
  for (int itemid = 0; itemid < num_items; ++itemid) {
    int i = caffe::caffe_rng_rand() % num_items;  // pick a random  pair
    int j = caffe::caffe_rng_rand() % num_items;
    read_image(&image_file, &label_file, i, rows, cols,
        pixels, &label_i);
    read_image(&image_file, &label_file, j, rows, cols,
        pixels + (rows * cols), &label_j);
    datum.set_data(pixels, 2*rows*cols);
    if (label_i  == label_j) {
      datum.set_label(1);
    } else {
      datum.set_label(0);
    }
    datum.SerializeToString(&value);
    std::string key_str = caffe::format_int(itemid, 8);
    db->Put(leveldb::WriteOptions(), key_str, value);
  }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    
    {  /// when divided by UINT_MAX, the randomly generated values @f$u\sim U(0,1)@f$
  Blob<unsigned int> rand_vec_;
  /// the probability @f$ p @f$ of dropping any input
  Dtype threshold_;
  /// the scale for undropped inputs at train time @f$ 1 / (1 - p) @f$
  Dtype scale_;
  unsigned int uint_thres_;
};
    
    /**
 * @brief A layer for learning 'embeddings' of one-hot vector input.
 *        Equivalent to an InnerProductLayer with one-hot vectors as input, but
 *        for efficiency the input is the 'hot' index of each column itself.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class EmbedLayer : public Layer<Dtype> {
 public:
  explicit EmbedLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
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
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
    #define THDPStorage TH_CONCAT_3(THDP,Real,Storage)
#define THDPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THDPStorageClass TH_CONCAT_3(THDP,Real,StorageClass)
#define THDPStorage_(NAME) TH_CONCAT_4(THDP,Real,Storage_,NAME)
    
    #undef THStoragePtr
#undef THPStoragePtr
#undef THTensorPtr
#undef THPTensorPtr
    
    ByteArray::ByteArray(const char* arr, std::size_t size)
  : _data(arr, arr + size)
{}
    
    /*
 * Timing execution of block of codes.
 */
struct Timer {
  enum Type {
    WallTime,
    SystemCPU,
    UserCPU,
    TotalCPU,
  };
  enum ReportType {
    Log,
    Stderr,
    Trace,
  };
  enum Who {
    Self = RUSAGE_SELF,
    Children = RUSAGE_CHILDREN,
#ifdef RUSAGE_THREAD
    Thread = RUSAGE_THREAD,
#endif
  };
    }
    
      const timespec& getStartTimer() const;
  int getTimeoutSeconds() const;
    
    extern 'C' {
HHVM_ATTRIBUTE_WEAK extern void numa_init();
}
    
      switch (file_fsmagic(ms, inname, &sb, stream)) {
  case -1:    /* error */
    goto done;
  case 0:      /* nothing found */
    break;
  default:    /* matched it and printed type */
    rv = 0;
    goto done;
  }
    
      void clear() {
    setFrontier(m_base);
  }
    
    #include 'power_iphone.h'
    
    	if (vorbis_p) {
		vorbis_synthesis_init(&vd, &vi);
		vorbis_block_init(&vd, &vb);
		//_setup(vi.channels, vi.rate);
	} else {
		/* tear down the partial vorbis setup */
		vorbis_info_clear(&vi);
		vorbis_comment_clear(&vc);
	}
    
    
    {	available = true;
}
    
    
    {	StreamPeerMbedTLS();
	~StreamPeerMbedTLS();
};
    
    
    {	WebSocketClient();
	~WebSocketClient();
};
    
    		Vector3 r0 = frictionPosWorld - body1->get_global_transform().origin;
		Vector3 c0 = (r0).cross(frictionDirectionWorld);
		Vector3 vec = s->get_inverse_inertia_tensor().xform_inv(c0).cross(r0);
		//denom1= body1->get_inverse_mass() + frictionDirectionWorld.dot(vec);
    
    Ref<Texture> VideoPlayer::get_video_texture() {
    }
    
        Value(void)
    : unit(YGUnitUndefined)
    , value(0.0)
    {
    }
    
    
    {
    {
    {  static void OnLoad();
 private:
  bool attachedWithThisScope_;
};
}
}

    
    #define FBASSERT(expr) FBASSERTMSGF(expr, '%s', #expr)