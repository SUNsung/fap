
        
        v8::Local<v8::Object> CreateJSEvent(
    v8::Isolate* isolate,
    v8::Local<v8::Object> object,
    content::WebContents* sender,
    IPC::Message* message) {
  v8::Local<v8::Object> event;
  bool use_native_event = sender && message;
    }
    
    namespace content {
class WebContents;
}
    
    namespace base {
class TaskRunner;
}
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    // Relaunches the application using the helper application associated with the
// currently running instance of Chrome in the parent browser process as the
// executable for the relauncher process. |args| is an argv-style vector of
// command line arguments of the form normally passed to execv. args[0] is
// also the path to the relaunched process. Because the relauncher process
// will ultimately launch the relaunched process via Launch Services, args[0]
// may be either a pathname to an executable file or a pathname to an .app
// bundle directory. The caller should exit soon after RelaunchApp returns
// successfully. Returns true on success, although some failures can occur
// after this function returns true if, for example, they occur within the
// relauncher process. Returns false when the relaunch definitely failed.
bool RelaunchApp(const StringVector& argv);
    
    #include <memory>
#include <unordered_map>
    
    typedef struct { int position; atom::AtomMenuModel* model; } MenuItem;
typedef std::map<ui::Accelerator, MenuItem> AcceleratorTable;
    
    namespace base {
class FilePath;
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(GlobalMenuBarX11);
};
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    #include <dmlc/logging.h>
#include <sstream>
#include './base.h'
    
     protected:
  /*!
   * \brief to be implemented by subclass,
   * get next token, return EOF if end of file
   */
  virtual char GetChar(void) = 0;
  /*! \brief to be implemented by child, check if end of stream */
  virtual bool IsEnd(void) = 0;
    
    TEST(Param, VectorIOStream) {
  std::vector<int> vals = {3, 2, 1};
  std::stringstream ss;
  std::vector<int> vals_in;
  
  ss << vals;
  EXPECT_EQ(ss.str(), '(3,2,1)');
    }