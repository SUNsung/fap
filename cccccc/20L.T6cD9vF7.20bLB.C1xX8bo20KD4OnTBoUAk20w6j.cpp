
        
        Status ModelAnalyzer::GenerateReport(bool debug, bool assume_valid_feeds,
                                     std::ostream& os) {
  GraphProperties properties(item_);
  TF_RETURN_IF_ERROR(properties.InferStatically(assume_valid_feeds));
    }
    
    namespace tensorflow {
    }
    
    // Creates a numpy array with shapes specified by dim_size and dims and content
// in data. The array does not own the memory, and destructor will be called to
// release it. If the status is not ok the caller is responsible for releasing
// the memory.
Status ArrayFromMemory(int dim_size, npy_intp* dims, void* data, DataType dtype,
                       std::function<void()> destructor, PyObject** result);
    
    #include <map>
    
    namespace tensorflow {
namespace detail {
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include 'tensorflow/python/util/kernel_registry.h'
    
    // Returns the kernel class name required to execute <node_def> on the device
// type of <node_def.device>, or an empty string if the kernel class is not
// found or the device name is invalid.
string TryFindKernelClass(const string& serialized_node_def);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
     protected:
   ~NwCurrentWindowInternalLeaveKioskModeFunction() override {}
    
    IPC_SYNC_MESSAGE_ROUTED4_1(ShellViewHostMsg_Call_Object_Method_Sync,
                           int /* object id */,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    
    {}  // namespace nw

    
    void Clipboard::CallSync(const std::string& method,
                         const base::ListValue& arguments,
                         base::ListValue* result) {
  if (method == 'Get') {
    result->AppendString(GetText());
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
        bool Read(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return ReadText(data);
        break;
        case TYPE_HTML:
        return ReadHTML(data);
        break;
        case TYPE_RTF:
        return ReadRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return ReadImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;      
    }
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.clearSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardClearSyncFunction);
};
    
    #include 'extensions/browser/extension_function.h'
    
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
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    namespace caffe {
    }
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/layers/conv_layer.hpp'
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_CUDNN_SIGMOID_LAYER_HPP_

    
    // Computes one set of 4x8 products of inputs and weights, adding to result.
// Horizontally adds 4 adjacent results, making 8x32-bit results.
// rep_input is assumed to be an 8x replicated set of 4x8-bit signed integers.
// Note that wi must previously have been re-organized with blocks of 4x8
// weights in contiguous memory.
// ones is a register of 16x16-bit values all equal to 1.
// Note: wi is incremented by the amount of data read.
// weights and reps are scratch registers.
// This function must be inlined with references in order for the compiler to
// correctly use the registers declared in the caller.
inline void MultiplyGroup(const __m256i& rep_input, const __m256i& ones,
                          const int8_t*& wi, __m256i& weights, __m256i& reps,
                          __m256i& result) {
  // Load a 4x8 block of weights.
  weights = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(wi));
  wi += kNumInputsPerRegister;
  // Normalize the signs on rep_input, weights, so weights is always +ve.
  reps = _mm256_sign_epi8(rep_input, weights);
  weights = _mm256_sign_epi8(weights, weights);
  // Multiply 32x8-bit reps by 32x8-bit weights to make 16x16-bit results,
  // with adjacent pairs added.
  weights = _mm256_maddubs_epi16(weights, reps);
  // Multiply 16x16-bit result by 16x16-bit ones to make 8x32-bit results,
  // with  adjacent pairs added. What we really want is a horizontal add of
  // 16+16=32 bit result, but there is no such instruction, so multiply by
  // 16-bit ones instead. It is probably faster than all the sign-extending,
  // permuting and adding that would otherwise be required.
  weights = _mm256_madd_epi16(weights, ones);
  result = _mm256_add_epi32(result, weights);
}
    
      // Split the part (horizontally), and save the split result into
  // parts_splitted. Note that it is caller's responsibility to release the
  // memory owns by parts_splitted. On the other hand, the part is unchanged
  // during this process and still owns the blobs, so do NOT call DeleteBoxes
  // when freeing the colpartitions in parts_splitted.
  void SplitCPHor(ColPartition* part,
                  GenericVector<ColPartition*>* parts_splitted);
    
    
    {
/**
 * @name tess_add_doc_word
 *
 * Add the given word to the document dictionary
 */
void Tesseract::tess_add_doc_word(WERD_CHOICE *word_choice) {
  getDict().add_document_word(*word_choice);
}
}  // namespace tesseract

    
    namespace caffe2 {
    }
    
    
<details>
    
    namespace {
    }
    
      FlexibleTopKGradientOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws) {}
    
    namespace caffe2 {
    }
    
    #include 'hphp/runtime/base/apc-object.h'
#include 'hphp/runtime/base/apc-array.h'
#include 'hphp/runtime/base/apc-stats.h'
#include 'hphp/runtime/base/object-data.h'
#include 'hphp/runtime/base/type-object.h'
#include 'hphp/runtime/ext/apc/ext_apc.h'
#include 'hphp/runtime/base/collections.h'
#include 'hphp/runtime/ext/collections/ext_collections-map.h'
#include 'hphp/runtime/ext/collections/ext_collections-set.h'
#include 'hphp/runtime/ext/collections/ext_collections-vector.h'
#include 'hphp/runtime/base/data-walker.h'
    
      static void ParseIniFile(const std::string &filename,
                           const bool is_system = true);
  static void ParseIniFile(const std::string &filename, IniSettingMap &ini,
                           const bool constants_only = false,
                           const bool is_system = true);
    
    #endif

    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    std::string FileUtil::normalizeDir(const std::string &dirname) {
  /*
   * normalizeDir may be called before very early one, such as
   * in Runtime option parsing, when MemoryManager may not have been
   * initialized
   */
  tl_heap.getCheck();
  string ret = FileUtil::canonicalize(dirname).toCppString();
  if (!ret.empty() && !isDirSeparator(ret[ret.length() - 1])) {
    ret += getDirSeparator();
  }
  return ret;
}
    
    #include <memory>
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
    
    {  void setTaskFactory(DHTTaskFactory* taskFactory);
};
    
    DHTRoutingTableSerializer::DHTRoutingTableSerializer(int family)
    : family_(family)
{
}
    
    #include <vector>
#include <memory>
    
    #endif // D_DHT_TASK_H

    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
      std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port,
                            const unsigned char* secret) const;
    
    std::vector<DNSCache::AddrEntry>::const_iterator
DNSCache::CacheEntry::find(const std::string& addr) const
{
  for (auto i = addrEntries_.begin(), eoi = addrEntries_.end(); i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return i;
    }
  }
  return addrEntries_.end();
}