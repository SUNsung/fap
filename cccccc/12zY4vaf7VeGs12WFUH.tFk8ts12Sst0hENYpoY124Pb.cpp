
        
        class App {
 public:
  static void Call(const std::string& method,
                   const base::ListValue& arguments);
    }
    
    namespace content {
class RenderFrameHost;
}
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethod')));
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
    
    {}  // namespace nwapi
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    #include 'base/logging.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
    
    void MenuItem::SetIconIsTemplate(bool isTemplate) {
}
    
    class NwAppClearCacheFunction : public NWSyncExtensionFunction, public content::BrowsingDataRemover::Observer {
 public:
  NwAppClearCacheFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
  void OnBrowsingDataRemoverDone() override;
    }
    
        bool ReadHTML(ClipboardData& data) {
      DCHECK(data.type == TYPE_HTML);
      base::string16 text;
      std::string src_url;
      uint32_t fragment_start, fragment_end;
      clipboard_->ReadHTML(ui::CLIPBOARD_TYPE_COPY_PASTE, &text, &src_url, &fragment_start, &fragment_end);
      data.data.reset(new std::string(base::UTF16ToUTF8(text)));
      return true;
    }
    
     protected:
  ~NwObjAllocateIdFunction() override;
    
    struct OSResults {
  OSResults() : unicharset(nullptr) {
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < kMaxNumberOfScripts; ++j)
        scripts_na[i][j] = 0;
      orientations[i] = 0;
    }
  }
  void update_best_orientation();
  // Set the estimate of the orientation to the given id.
  void set_best_orientation(int orientation_id);
  // Update/Compute the best estimate of the script assuming the given
  // orientation id.
  void update_best_script(int orientation_id);
  // Return the index of the script with the highest score for this orientation.
  TESS_API int get_best_script(int orientation_id) const;
  // Accumulate scores with given OSResults instance and update the best script.
  void accumulate(const OSResults& osr);
    }
    
    #endif  // TESSERACT_CCMAIN_PAGEITERATOR_H_

    
    namespace tesseract {
    }
    
    // The parameters editor enables the user to edit all the parameters used within
// tesseract. It can be invoked on its own, but is supposed to be invoked by
// the program editor.
class ParamsEditor : public SVEventHandler {
 public:
  // Integrate the parameters editor as popupmenu into the existing scrollview
  // window (usually the pg editor). If sv == null, create a new empty
  // empty window and attach the parameter editor to that window (ugly).
  explicit ParamsEditor(tesseract::Tesseract*, ScrollView* sv = nullptr);
    }
    
    // Parses the given box file string into a page_number, utf8_str, and
// bounding_box. Returns true on a successful parse.
bool ParseBoxFileStr(const char* boxfile_str, int* page_number,
                     STRING* utf8_str, TBOX* bounding_box);
    
      BoxWord& operator=(const BoxWord& src);
    
    
    { private:
  // The collection of images to put in the PDF.
  Pixa* pixa_;
  // The fonts used to draw text captions.
  L_Bmf* fonts_;
};
    
     private:
  // Saves the given Pix as a PNG-encoded string and destroys it.
  static void SetPixInternal(Pix* pix, GenericVector<char>* image_data);
  // Returns the Pix image for the image_data. Must be pixDestroyed after use.
  static Pix* GetPixInternal(const GenericVector<char>& image_data);
  // Parses the text string as a box file and adds any discovered boxes that
  // match the page number. Returns false on error.
  bool AddBoxes(const char* box_text);
    
    	// C-style inteface to the encoder
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth,
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uimaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight,
				int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    		m_pblockParent = a_pblockParent;
    
    		typedef struct
		{
			unsigned red1b : 2;
			unsigned detect2 : 1;
			unsigned red1a : 2;
			unsigned detect1 : 3;
			//
			unsigned blue1 : 4;
			unsigned green1 : 4;
			//
			unsigned green2 : 4;
			unsigned red2 : 4;
			//
			unsigned db : 1;
			unsigned diff : 1;
			unsigned da : 2;
			unsigned blue2 : 4;
			//
			unsigned int selectors;
		} T;
    
    #define MIN(a,b) ((a)<(b) ? (a):(b))
#define MAX(a,b) ((a)>(b) ? (a):(b))
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    /* (opus_val32)(opus_val16) gives TI compiler a hint that it's 16x16->32 multiply */
/** 16x16 multiplication where the result fits in 32 bits */
#define MULT16_16(a,b)     (((opus_val32)(opus_val16)(a))*((opus_val32)(opus_val16)(b)))
    
    #define silk_DIV32_16(a32, b16)             ((opus_int32)((a32) / (b16)))
#define silk_DIV32(a32, b32)                ((opus_int32)((a32) / (b32)))
    
    /*!
 * \brief Shape inference function to get the correct shape given source shapes.
 * \param lhs The shape of left operand.
 * \param rhs The shape of right operand.
 * \param env The Environment arguments.
 * \return The inferred result shape.
 */
typedef TShape (*BinaryShapeFunction)(const TShape& lhs,
                                      const TShape& rhs,
                                      const EnvArguments& env);
/*!
 * \brief Gradient function that takes only output gradient and computes gradient wrt to input.
 *  We support total gradient as a whole to make it easy to combine a few ops.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param lhs_grad The container to store result of lhs gradient.
 * \param rhs_grad The container to store result of lhs gradient.
 * \param req_lhs_grad The requirement to store the lhs_grad
 * \param req_rhs_grad The requirement to store the rhs_grad
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryGradFunctionT0)(const OutputGrad& out_grad,
                                     const EnvArguments& env,
                                     TBlob* lhs_grad,
                                     TBlob* rhs_grad,
                                     OpReqType req_lhs_grad,
                                     OpReqType req_rhs_grad,
                                     RunContext ctx);
/*!
 * \brief Gradient function that takes inputs of function anod computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param lhs The left operand to the function.
 * \param rhs The right operand to the function.
 * \param env The Environment arguments.
 * \param lhs_grad The container to store result of lhs gradient.
 * \param rhs_grad The container to store result of lhs gradient.
 * \param req_lhs_grad The requirement to store the lhs_grad
 * \param req_rhs_grad The requirement to store the rhs_grad
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryGradFunctionT1)(const OutputGrad& out_grad,
                                     const Input0& lhs,
                                     const Input1& rhs,
                                     const EnvArguments& env,
                                     TBlob* lhs_grad,
                                     TBlob* rhs_grad,
                                     OpReqType req_lhs_grad,
                                     OpReqType req_rhs_grad,
                                     RunContext ctx);
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_blob.cc
 * \brief Implementations of SetDataGradToBlob given various device/dimension
 * \author Haoran Wang
*/
#include 'caffe_blob.h'
namespace mxnet {
namespace op {
namespace caffe {
    }
    }
    }
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
    
    {
    {
    {
    {
    {          // Special code for overflow handling
          if (bc == BranchConditions::Overflow ||
              bc == BranchConditions::NoOverflow) {
            a.xor(reg::r0, reg::r0, reg::r0,false);
            a.mtspr(Assembler::SpecialReg::XER, reg::r0);
          }
          a.bc (bp.bo(), bp.bi(), diff);
          return;
        }
      }
    }
  }
  // fallback: use CTR to perform absolute branch up to 64 bits
  branchFar(a, bc, lr, ImmType::TocOnly, addrMayChange);
}
    
    void Config::ParseIniFile(const std::string &filename, IniSettingMap &ini,
                          const bool constants_only /* = false */,
                          const bool is_system /* = true */ ) {
    std::ifstream ifs(filename);
    std::string str((std::istreambuf_iterator<char>(ifs)),
                    std::istreambuf_iterator<char>());
    std::string with_includes;
    Config::ReplaceIncludesWithIni(filename, str, with_includes);
    Config::SetParsedIni(ini, with_includes, filename, constants_only,
                         is_system);
}
    
    Variant PlainDirectory::read() {
  struct dirent entry;
  struct dirent *result;
  int ret = readdir_r(m_dir, &entry, &result);
  if (ret != 0 || !result) {
    return false;
  }
  return String(entry.d_name, CopyString);
}
    
      // only accept paths with the glob:// prefix
  if (strncmp(path_str, prefix, strlen(prefix)) != 0) {
    return nullptr;
  }
    
    #include <mutex>
    
    #include <osquery/ev2/subscription.h>
    
    class TestEvent {
 public:
  using Id = uint64_t;
  using Time = std::chrono::system_clock::time_point;
    }
    
    /// Inverse of serializeQueryDataJSON, convert a JSON string to QueryData.
Status deserializeQueryDataJSON(const std::string& json, QueryData& qd);
    
    /**
 * @brief Serialize a Row object into a JSON string.
 *
 * @param r the Row to serialize.
 * @param json [output] the output JSON string.
 *
 * @return Status indicating the success or failure of the operation.
 */
Status serializeRowJSON(const Row& r, std::string& json);
    
    class ExtensionIf {
 public:
  virtual ~ExtensionIf() {}
  virtual void ping(ExtensionStatus& _return) = 0;
  virtual void call(ExtensionResponse& _return, const std::string& registry, const std::string& item, const ExtensionPluginRequest& request) = 0;
  virtual void shutdown() = 0;
};
    
      if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, 'ExtensionManager.extensions', bytes);
  }
    
      bool operator == (const ExtensionManager_extensions_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ExtensionManager_extensions_args &rhs) const {
    return !(*this == rhs);
  }
    
    int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ExtensionManagerHandler> handler(new ExtensionManagerHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ExtensionManagerProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
    }