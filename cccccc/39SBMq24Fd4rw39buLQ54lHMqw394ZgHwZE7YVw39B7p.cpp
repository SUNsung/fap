const int kCIFARSize = 32;
const int kCIFARImageNBytes = 3072;
const int kCIFARBatchSize = 10000;
const int kCIFARTrainBatches = 5;
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_path, const string& db_backend) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
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
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
  cudnnPoolingDescriptor_t  pooling_desc_;
  cudnnPoolingMode_t        mode_;
};
#endif
    
                // emulate all the nodes, find nodes that have state
            m_netStatefulNodes = EnumerateStatefulNode(*net, criterionNodes, evaluationNodes);
            for (auto x : m_netStatefulNodes)
            {
                wstring name = x.first;
                m_netStates[name] = vector<shared_ptr<INodeState>>();
            }
    
    #pragma warning(disable : 4267) // conversion from 'size_t' to 'unsigned int'; happens in CUDA <<<a,b>>> syntax if a and b are size_t
#pragma warning(disable : 4127) // conditional expression is constant; 'if (sizeof(ElemType)==sizeof(float))' triggers this
#pragma warning(disable : 4702) // unreachable code; triggered for unknown reasons
    
    using namespace std;
using namespace Microsoft::MSR::ScriptableObjects;
    
    // ---------------------------------------------------------------------------
// Expression -- the entire config is a tree of Expression types
// We don't use polymorphism here because C++ is so verbose...
// ---------------------------------------------------------------------------
    
    
    {
    {
    {            std::vector<std::string> filePathVec = msra::strfun::split(filePaths, '+');
            for (auto filePath : filePathVec)
            {
                // if file hasn't already been resolved (the resolvedPaths vector doesn't contain it), resolve it.
                if (std::find(resolvedConfigFiles.begin(), resolvedConfigFiles.end(), filePath) == resolvedConfigFiles.end())
                {
                    // Recursively resolve the include statements in the included config files.
                    // Ensure that the same config file isn't included twice, by keeping track of the config
                    // files that have already been resolved in the resolvedPaths vector.
                    resolvedConfigFiles.push_back(filePath);
                    newConfigString += ResolveIncludeStatements(ReadConfigFile(filePath), resolvedConfigFiles);
                }
                else
                {
                    // We already resolved this path.  Write a warning so that user is aware of this.
                    // TODO: This message is written to stderr before stderr gets redirected to the specified file.  Fix this.
                    fprintf(stderr, 'Warning: Config file included multiple times.  Not including config file again: %s', filePath.c_str());
                }
            }
        }
        else
        {
            newConfigString += (line + '\n');
        }
    }
    return newConfigString;
}
    
    // GetWriter - get a reader type from the DLL
// The F version gets the 'float' version, and D gets 'double'.
extern 'C' DATAWRITER_API void GetWriterF(IDataWriter** pwriter);
extern 'C' DATAWRITER_API void GetWriterD(IDataWriter** pwriter);
    
    
    {
    {        return newNumItersSinceLastPrintOfProgress;
    }
};
    
        // other goodies I came across (intrin.h):
    //  - _mm_prefetch
    //  - _mm_stream_ps --store without polluting cache
    //  - unknown: _mm_addsub_ps, _mm_hsub_ps, _mm_movehdup_ps, _mm_moveldup_ps, _mm_blend_ps, _mm_blendv_ps, _mm_insert_ps, _mm_extract_ps, _mm_round_ps
    //  - _mm_dp_ps dot product! http://msdn.microsoft.com/en-us/library/bb514054.aspx
    //    Not so interesting for long vectors, we get better numerical precision with parallel adds and hadd at the end
    
    static const int kDelayMicros = 100000;
static const int kReadOnlyFileLimit = 4;
static const int kMMapLimit = 4;
    
    TEST(LogTest, ReadFourthMiddleBlock) {
  CheckInitialOffsetRecord(log::kBlockSize + 1, 3);
}
    
    // Snapshots are kept in a doubly-linked list in the DB.
// Each SnapshotImpl corresponds to a particular sequence number.
class SnapshotImpl : public Snapshot {
 public:
  SequenceNumber number_;  // const after creation
    }
    
    namespace leveldb {
    }
    
    Status VersionEdit::DecodeFrom(const Slice& src) {
  Clear();
  Slice input = src;
  const char* msg = NULL;
  uint32_t tag;
    }
    
    
  // Iterator interface methods
  bool Valid() const        { return valid_; }
  Slice key() const         { assert(Valid()); return key_; }
  Slice value() const       { assert(Valid()); return iter_->value(); }
  // Methods below require iter() != NULL
  Status status() const     { assert(iter_); return iter_->status(); }
  void Next()               { assert(iter_); iter_->Next();        Update(); }
  void Prev()               { assert(iter_); iter_->Prev();        Update(); }
  void Seek(const Slice& k) { assert(iter_); iter_->Seek(k);       Update(); }
  void SeekToFirst()        { assert(iter_); iter_->SeekToFirst(); Update(); }
  void SeekToLast()         { assert(iter_); iter_->SeekToLast();  Update(); }
    
        return 0;
}
int lua_cocos2dx_physics_PhysicsJointRatchet_getPhase(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsJointRatchet* cobj = nullptr;
    bool ok  = true;
    
    		extern int32 b2_gjkCalls, b2_gjkIters, b2_gjkMaxIters;
		extern int32 b2_toiCalls, b2_toiIters;
		extern int32 b2_toiRootIters, b2_toiMaxRootIters;
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 20.0f;
    
    		// Car
		{
			b2PolygonShape chassis;
			b2Vec2 vertices[8];
			vertices[0].Set(-1.5f, -0.5f);
			vertices[1].Set(1.5f, -0.5f);
			vertices[2].Set(1.5f, 0.0f);
			vertices[3].Set(0.0f, 0.9f);
			vertices[4].Set(-1.15f, 0.9f);
			vertices[5].Set(-1.5f, 0.2f);
			chassis.Set(vertices, 6);
    }
    
    #define EXPECT_MARKER() \
  if (pos + 2 > len || data[pos] != 0xff) {                             \
    fprintf(stderr, 'Marker byte (0xff) expected, found: %d '           \
            'pos=%d len=%d\n',                                          \
            (pos < len ? data[pos] : 0), static_cast<int>(pos),         \
            static_cast<int>(len));                                     \
    jpg->error = JPEG_MARKER_BYTE_NOT_FOUND;                            \
    return false;                                                       \
  }
    
      // Returns an aggregate distance or similarity value between the baseline
  // image and the image in the last Compare() call (or the baseline image, if
  // Compare() was not called yet).
  // The interpretation of this aggregate value depends on the comparator used.
  virtual float distmap_aggregate() const = 0;
    
    std::vector<float> Sharpen(const std::vector<float>& image, int w, int h,
                           float sigma, float amount) {
  // This is only made for small sigma, e.g. 1.3.
  std::vector<double> kernel(5);
  for (size_t i = 0; i < kernel.size(); i++) {
    kernel[i] = Normal(1.0 * i - kernel.size() / 2, sigma);
  }
    }
    
    namespace guetzli {
    }
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
      tmp0 = in[6 * stride];
  tmp1 = kIDCTMatrix[ 6] * tmp0;
  tmp2 = kIDCTMatrix[14] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] -= tmp2;
  out[3] -= tmp1;
  out[4] -= tmp1;
  out[5] -= tmp2;
  out[6] += tmp2;
  out[7] += tmp1;
    
    int BuildJpegHuffmanTable(const int* count_in, const int* symbols,
                          HuffmanTableEntry* lut) {
  HuffmanTableEntry code;    // current table entry
  HuffmanTableEntry* table;  // next available space in table
  int len;         // current code length
  int idx;         // symbol index
  int key;         // prefix code
  int reps;        // number of replicate key values in current table
  int low;         // low bits for current root entry
  int table_bits;  // key length of current table
  int table_size;  // size of current table
  int total_size;  // sum of root table size and 2nd level table sizes
    }
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    
    {} // namespace aria2
    
    private:
  std::string userDefinedUser_;
  std::string userDefinedPassword_;
    
    AdaptiveFileAllocationIterator::~AdaptiveFileAllocationIterator() = default;
    
    namespace aria2 {
    }