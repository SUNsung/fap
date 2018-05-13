
        
        using namespace swift;
using namespace swift::syntax;
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    namespace index {
    }
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    /// An abstract class for working with results.of applies.
class ResultPlan {
public:
  virtual RValue finish(SILGenFunction &SGF, SILLocation loc, CanType substType,
                        ArrayRef<ManagedValue> &directResults) = 0;
  virtual ~ResultPlan() = default;
    }
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    Base::~Base() {
}
    
    class Base {
 public:
  Base(int id,
       const base::WeakPtr<ObjectManager>& manager,
       const base::DictionaryValue& option,
       const std::string& extension_id);
  virtual ~Base();
    }
    
    namespace content {
class RenderView;
}
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    #endif  // CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_

    
    bool NwMenuModel::HasIcons() const {
  // Always return false, see the comment about |NwMenuModel|.
  return false;
}
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    namespace extensions {
NwAppQuitFunction::NwAppQuitFunction() {
    }
    }
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
    // dims=[5, 4, 3, 2]->[5, 3, 2, 4]
TEST_F(MatrixTest, RotatingTranspose_1_3) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 1, 3, &m);
  m.ResizeNoInit(kInputSize_ / 4, 4);
  // Verify that the result is:
  // output tensor=[[[[0, 6, 12, 18][1, 7, 13, 19]]
  //                 [[2, 8, 14, 20][3, 9, 15, 21]]
  //                 [[4, 10, 16, 22][5, 11, 17, 23]]]
  //                [[[24, 30, 36, 42]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(6, m(0, 1));
  EXPECT_EQ(1, m(1, 0));
  EXPECT_EQ(2, m(2, 0));
  EXPECT_EQ(3, m(3, 0));
  EXPECT_EQ(4, m(4, 0));
  EXPECT_EQ(5, m(5, 0));
  EXPECT_EQ(24, m(6, 0));
  EXPECT_EQ(30, m(6, 1));
}
    
    
// Non-linux version of getaddrinfo()
#if !defined(__linux__)
static int GetAddrInfoNonLinux(const char* hostname, int port,
                               struct addrinfo** addr_info) {
// Get the host data depending on the OS.
  struct sockaddr_in* address;
  *addr_info = new struct addrinfo;
  memset(*addr_info, 0, sizeof(struct addrinfo));
  address = new struct sockaddr_in;
  memset(address, 0, sizeof(struct sockaddr_in));
    }
    
      // Suspends/Enables training by setting the training_ flag. Serialize and
  // DeSerialize only operate on the run-time data if state is false.
  void SetEnableTraining(TrainingState state) override;
    
    #include 'plumbing.h'
    
    
 protected:
  Tesseract*        tesseract_;       ///< The underlying data object.
  Tesseract*        osd_tesseract_;   ///< For orientation & script detection.
  EquationDetect*   equ_detect_;      ///<The equation detector.
  FileReader reader_;                 ///< Reads files from any filesystem.
  ImageThresholder* thresholder_;     ///< Image thresholding module.
  GenericVector<ParagraphModel *>* paragraph_models_;
  BLOCK_LIST*       block_list_;      ///< The page layout.
  PAGE_RES*         page_res_;        ///< The page-level data.
  STRING*           input_file_;      ///< Name used by training code.
  STRING*           output_file_;     ///< Name used by debug code.
  STRING*           datapath_;        ///< Current location of tessdata.
  STRING*           language_;        ///< Last initialized language.
  OcrEngineMode last_oem_requested_;  ///< Last ocr language mode requested.
  bool          recognition_done_;   ///< page_res_ contains recognition data.
  TruthCallback *truth_cb_;           /// fxn for setting truth_* in WERD_RES
    
    
    {  return true;
}
    
    #include <emmintrin.h>
#include <smmintrin.h>
#include <stdint.h>
#include 'dotproductsse.h'
#include 'host.h'
    
    
    {
    {    classify_word_and_language(pass_n, pr_it, word);
    if (tessedit_dump_choices || debug_noise_removal) {
      tprintf('Pass%d: %s [%s]\n', pass_n,
              word->word->best_choice->unichar_string().string(),
              word->word->best_choice->debug_string().string());
    }
    pr_it->forward();
    if (make_next_word_fuzzy && pr_it->word() != nullptr) {
      pr_it->MakeCurrentWordFuzzy();
    }
  }
  return true;
}