
        
        // ResourceOpKernel<T> is a virtual base class for resource op implementing
// interface type T. The inherited op looks up the resource name (determined by
// ContainerInfo), and creates a new resource if necessary.
//
// Requirements:
//  - Op must be marked as stateful.
//  - Op must have `container` and `shared_name` attributes. Empty `container`
//  means using the default container. Empty `shared_name` means private
//  resource.
//  - Subclass must override CreateResource().
//  - Subclass is encouraged to override VerifyResource().
template <typename T>
class ResourceOpKernel : public OpKernel {
 public:
  explicit ResourceOpKernel(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context,
                   context->allocate_persistent(DT_STRING, TensorShape({2}),
                                                &handle_, nullptr));
  }
    }
    
    namespace xla {
    }
    
    #include <string>
    
    #include <limits>
    
      // Start the child process and setup the file descriptors of both processes.
  // See comment (1) in the header about issues with the use of fork().
  pid_ = fork();
  if (pid_ < 0) {
    LOG(ERROR) << 'Start cannot fork() child process: ' << strerror(errno);
    ClosePipes();
    return false;
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  return device;
}
    
          // Skip Sink/Source nodes.
      if (!out->IsOp()) continue;
    
    // See docs in ../ops/io_ops.cc.
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      if (flags.bit (ADAPTABLE_WERD)) {
    status |= word->tess_would_adapt;  // result of Classify::AdaptableWord()
    if (tessedit_adaption_debug && !status) {
      tprintf('tess_would_adapt bit is false\n');
    }
  }
    
    // Returns the number of misfit blob tops in this word.
int Tesseract::CountMisfitTops(WERD_RES *word_res) {
  int bad_blobs = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
    TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
    UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
    if (unicharset.get_isalpha(class_id) || unicharset.get_isdigit(class_id)) {
      int top = blob->bounding_box().top();
      if (top >= INT_FEAT_RANGE)
        top = INT_FEAT_RANGE - 1;
      int min_bottom, max_bottom, min_top, max_top;
      unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                &min_top, &max_top);
      if (max_top - min_top > kMaxCharTopRange)
        continue;
      bool bad =  top < min_top - x_ht_acceptance_tolerance ||
                  top > max_top + x_ht_acceptance_tolerance;
      if (bad)
        ++bad_blobs;
      if (debug_x_ht_level >= 1) {
        tprintf('Class %s is %s with top %d vs limits of %d->%d, +/-%d\n',
                unicharset.id_to_unichar(class_id),
                bad ? 'Misfit' : 'OK', top, min_top, max_top,
                static_cast<int>(x_ht_acceptance_tolerance));
      }
    }
  }
  return bad_blobs;
}
    
    class ScrollView;
class SVMenuNode;
struct SVEvent;
    
    namespace tesseract {
void Tesseract::tess_segment_pass_n(int pass_n, WERD_RES *word) {
  int saved_enable_assoc = 0;
  int saved_chop_enable = 0;
    }
    }
    
    
    {}  // namespace tesseract.
    
    
// Returns the median value of the vector, given that the values are
// circular, with the given modulus. Values may be signed or unsigned,
// eg range from -pi to pi (modulus 2pi) or from 0 to 2pi (modulus 2pi).
// NOTE that the array is shuffled, but the time taken is linear.
// An assumption is made that most of the values are spread over no more than
// half the range, but wrap-around is accounted for if the median is near
// the wrap-around point.
// Cannot be a member of GenericVector, as it makes heavy used of LLSQ.
// T must be an integer or float/double type.
template<typename T> T MedianOfCircularValues(T modulus, GenericVector<T>* v) {
  LLSQ stats;
  T halfrange = static_cast<T>(modulus / 2);
  int num_elements = v->size();
  for (int i = 0; i < num_elements; ++i) {
    stats.add((*v)[i], (*v)[i] + halfrange);
  }
  bool offset_needed = stats.y_variance() < stats.x_variance();
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] += halfrange;
    }
  }
  int median_index = v->choose_nth_item(num_elements / 2);
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] -= halfrange;
    }
  }
  return (*v)[median_index];
}
    
    #endif  // TESSERACT_CCSTRUCT_OCRPARA_H_

    
        explicit ServerData(const grpc::string& server_host, int port = 0) {
      port_ = port > 0 ? port : grpc_pick_unused_port_or_die();
      gpr_log(GPR_INFO, 'starting server on port %d', port_);
      std::ostringstream server_address;
      server_address << server_host << ':' << port_;
      ServerBuilder builder;
      builder.AddListeningPort(server_address.str(),
                               InsecureServerCredentials());
      builder.RegisterService(&service_);
      server_ = builder.BuildAndStart();
      gpr_log(GPR_INFO, 'server startup complete');
    }
    
    static int cmp_arg(const grpc_arg* a, const grpc_arg* b) {
  int c = GPR_ICMP(a->type, b->type);
  if (c != 0) return c;
  c = strcmp(a->key, b->key);
  if (c != 0) return c;
  switch (a->type) {
    case GRPC_ARG_STRING:
      return strcmp(a->value.string, b->value.string);
    case GRPC_ARG_INTEGER:
      return GPR_ICMP(a->value.integer, b->value.integer);
    case GRPC_ARG_POINTER:
      c = GPR_ICMP(a->value.pointer.p, b->value.pointer.p);
      if (c != 0) {
        c = GPR_ICMP(a->value.pointer.vtable, b->value.pointer.vtable);
        if (c == 0) {
          c = a->value.pointer.vtable->cmp(a->value.pointer.p,
                                           b->value.pointer.p);
        }
      }
      return c;
  }
  GPR_UNREACHABLE_CODE(return 0);
}
    
    
    {
    {                grpc_compression_algorithm_to_message_compression_algorithm(
                    reader->buffer_in->data.raw.compression),
                &reader->buffer_in->data.raw.slice_buffer,
                &decompressed_slices_buffer) == 0) {
          gpr_log(GPR_ERROR,
                  'Unexpected error decompressing data for algorithm with enum '
                  'value '%d'.',
                  reader->buffer_in->data.raw.compression);
          memset(reader, 0, sizeof(*reader));
          return 0;
        } else { /* all fine */
          reader->buffer_out =
              grpc_raw_byte_buffer_create(decompressed_slices_buffer.slices,
                                          decompressed_slices_buffer.count);
        }
        grpc_slice_buffer_destroy_internal(&decompressed_slices_buffer);
      } else { /* not compressed, use the input buffer as output */
        reader->buffer_out = reader->buffer_in;
      }
      reader->current.index = 0;
      break;
  }
    
    grpc_channel* grpc_channel_create_with_builder(
    grpc_channel_stack_builder* builder,
    grpc_channel_stack_type channel_stack_type) {
  char* target = gpr_strdup(grpc_channel_stack_builder_get_target(builder));
  grpc_channel_args* args = grpc_channel_args_copy(
      grpc_channel_stack_builder_get_channel_arguments(builder));
  grpc_channel* channel;
  if (channel_stack_type == GRPC_SERVER_CHANNEL) {
    GRPC_STATS_INC_SERVER_CHANNELS_CREATED();
  } else {
    GRPC_STATS_INC_CLIENT_CHANNELS_CREATED();
  }
  grpc_error* error = grpc_channel_stack_builder_finish(
      builder, sizeof(grpc_channel), 1, destroy_channel, nullptr,
      (void**)&channel);
  if (error != GRPC_ERROR_NONE) {
    gpr_log(GPR_ERROR, 'channel stack builder failed: %s',
            grpc_error_string(error));
    GRPC_ERROR_UNREF(error);
    gpr_free(target);
    goto done;
  }
    }
    
    static void test_invoke_request_with_send_message_before_initial_metadata(
    grpc_end2end_test_config config) {
  request_with_payload_template(
      config, 'test_invoke_request_with_send_message_before_initial_metadata',
      0, GRPC_COMPRESS_STREAM_GZIP, GRPC_COMPRESS_STREAM_GZIP,
      GRPC_COMPRESS_STREAM_GZIP, GRPC_COMPRESS_STREAM_GZIP, nullptr,
      false, /* ignored */
      GRPC_COMPRESS_LEVEL_NONE, true, false, GRPC_COMPRESS_NONE);
}
    
    extern JSClass  *jsb_cocos2d_Physics3DRigidBody_class;
extern JSObject *jsb_cocos2d_Physics3DRigidBody_prototype;
    
    bool js_cocos2dx_studio_ActionObject_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ActionObject_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ActionObject(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ActionObject_setCurrentTime(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_pause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_setName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_setUnitTime(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_getTotalTime(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_getName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_play(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_getCurrentTime(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_removeActionNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_getLoop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_initWithBinary(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_addActionNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_getUnitTime(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_isPlaying(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_updateToFrameByTime(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_setLoop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_simulationActionUpdate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ActionObject_ActionObject(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    {    CHECK_GL_ERROR_DEBUG();
}
    
    		// Define platform
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-4.0f, 5.0f);
			m_platform = m_world->CreateBody(&bd);
    }
    
    
    {
    {				prevBody = body;
			}
		}
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    // redirect the messages to R's console.
namespace dmlc {
void CustomLogMessage::Log(const std::string& msg) {
  Rprintf('%s\n', msg.c_str());
}
}  // namespace dmlc
    
        for (size_t i = 0; i < page.data.size(); ++i) {
      bst_uint idx = page.data[i].index - min_index_;
      CHECK_LE(idx, static_cast<bst_uint>(std::numeric_limits<StorageIndex>::max()))
          << 'The storage index is chosen to limited to smaller equal than '
          << std::numeric_limits<StorageIndex>::max()
          << 'min_index=' << min_index_;
      index_.data[i] = static_cast<StorageIndex>(idx);
      value_.data[i] = page.data[i].fvalue;
    }
    
    /*! \brief namespace of base64 decoding and encoding table */
namespace base64 {
const char DecodeTable[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  62,  // '+'
  0, 0, 0,
  63,  // '/'
  52, 53, 54, 55, 56, 57, 58, 59, 60, 61,  // '0'-'9'
  0, 0, 0, 0, 0, 0, 0,
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
  13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,  // 'A'-'Z'
  0, 0, 0, 0, 0, 0,
  26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,  // 'a'-'z'
};
static const char EncodeTable[] =
    'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/';
}  // namespace base64
/*! \brief the stream that reads from base64, note we take from file pointers */
class Base64InStream: public dmlc::Stream {
 public:
  explicit Base64InStream(dmlc::Stream *fs) : reader_(256) {
    reader_.set_stream(fs);
    num_prev = 0; tmp_ch = 0;
  }
  /*!
   * \brief initialize the stream position to beginning of next base64 stream
   * call this function before actually start read
   */
  inline void InitPosition(void) {
    // get a character
    do {
      tmp_ch = reader_.GetChar();
    } while (isspace(tmp_ch));
  }
  /*! \brief whether current position is end of a base64 stream */
  inline bool IsEOF(void) const {
    return num_prev == 0 && (tmp_ch == EOF || isspace(tmp_ch));
  }
  virtual size_t Read(void *ptr, size_t size) {
    using base64::DecodeTable;
    if (size == 0) return 0;
    // use tlen to record left size
    size_t tlen = size;
    unsigned char *cptr = static_cast<unsigned char*>(ptr);
    // if anything left, load from previous buffered result
    if (num_prev != 0) {
      if (num_prev == 2) {
        if (tlen >= 2) {
          *cptr++ = buf_prev[0];
          *cptr++ = buf_prev[1];
          tlen -= 2;
          num_prev = 0;
        } else {
          // assert tlen == 1
          *cptr++ = buf_prev[0]; --tlen;
          buf_prev[0] = buf_prev[1];
          num_prev = 1;
        }
      } else {
        // assert num_prev == 1
        *cptr++ = buf_prev[0]; --tlen; num_prev = 0;
      }
    }
    if (tlen == 0) return size;
    int nvalue;
    // note: everything goes with 4 bytes in Base64
    // so we process 4 bytes a unit
    while (tlen && tmp_ch != EOF && !isspace(tmp_ch)) {
      // first byte
      nvalue = DecodeTable[tmp_ch] << 18;
      {
        // second byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        nvalue |= DecodeTable[tmp_ch] << 12;
        *cptr++ = (nvalue >> 16) & 0xFF; --tlen;
        }
      {
        // third byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch)) << 'invalid base64 format';
        // handle termination
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == '=') << 'invalid base64 format';
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch] << 6;
        if (tlen) {
          *cptr++ = (nvalue >> 8) & 0xFF; --tlen;
        } else {
          buf_prev[num_prev++] = (nvalue >> 8) & 0xFF;
        }
      }
      {
        // fourth byte
        tmp_ch = reader_.GetChar();
        CHECK(tmp_ch != EOF && !isspace(tmp_ch))
            << 'invalid base64 format';
        if (tmp_ch == '=') {
          tmp_ch = reader_.GetChar();
          CHECK(tmp_ch == EOF || isspace(tmp_ch))
              << 'invalid base64 format';
          break;
        }
        nvalue |= DecodeTable[tmp_ch];
        if (tlen) {
          *cptr++ = nvalue & 0xFF; --tlen;
        } else {
          buf_prev[num_prev ++] = nvalue & 0xFF;
        }
      }
      // get next char
      tmp_ch = reader_.GetChar();
    }
    if (kStrictCheck) {
      CHECK_EQ(tlen, 0) << 'Base64InStream: read incomplete';
    }
    return size - tlen;
  }
  virtual void Write(const void *ptr, size_t size) {
    LOG(FATAL) << 'Base64InStream do not support write';
  }
    }
    
    namespace xgboost {
namespace common {
/*!
 * \brief Define mt19937 as default type Random Engine.
 */
typedef std::mt19937 RandomEngine;
    }
    }
    
      while (iter->Next()) {
    const RowBatch &batch = iter->Value();
    for (size_t i = 0; i < batch.size; ++i) {
      bst_uint ridx = static_cast<bst_uint>(batch.base_rowid + i);
      if (pkeep == 1.0f || coin_flip(rnd)) {
        buffered_rowset_.push_back(ridx);
        tmp.Push(batch[i]);
      }
      if (tmp.Size() >= max_row_perbatch) {
        std::unique_ptr<SparsePage> page(new SparsePage());
        this->MakeColPage(tmp.GetRowBatch(0), btop, enabled, page.get());
        col_iter_.cpages_.push_back(std::move(page));
        btop = buffered_rowset_.size();
        tmp.Clear();
      }
    }
  }
    
    
    {} // namespace aria2

    
    bool AbstractOptionHandler::hasTag(uint32_t tag) const
{
  return (tags_ & (1 << tag));
}
    
      // Don't allow copying
  AnnounceTier(const AnnounceTier&) = delete;
  AnnounceTier& operator=(const AnnounceTier&) = delete;
    
      TLSVersion getMinTLSVersion() const { return minTLSVer_; }
    
    class AsyncNameResolver;
class DownloadEngine;
class Command;
class Option;
    
    AuthConfig::AuthConfig() {}