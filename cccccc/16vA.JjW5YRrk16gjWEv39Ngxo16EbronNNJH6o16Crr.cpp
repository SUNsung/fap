
        
          const_iterator begin() const;
  const_iterator end() const;
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    // Mappings and Sequences of descriptors.
// They implement containers like fields_by_name, EnumDescriptor.values...
// See descriptor_containers.cc for more description.
#include <Python.h>
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    #include <memory>
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* context,
                string* error) const;
    
      void OCRTester(const char* imgname, const char* groundtruth, const char* tessdatadir, const char* lang) {
    //log.info() << tessdatadir << ' for language: ' << lang << std::endl;
    char *outText;
    std::locale loc('C'); // You can also use '' for the default system locale
    std::ifstream file(groundtruth);
    file.imbue(loc); // Use it for file input
    std::string gtText((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();
    ASSERT_FALSE(api->Init(tessdatadir, lang)) << 'Could not initialize tesseract.';
    Pix *image = pixRead(imgname);
    ASSERT_TRUE(image != nullptr) << 'Failed to read test image.';
    api->SetImage(image);
    outText = api->GetUTF8Text();
    EXPECT_EQ(gtText,outText) << 'Phototest.tif OCR does not match ground truth for ' << ::testing::PrintToString(lang);
    api->End();
    delete [] outText;
    pixDestroy(&image);
  }
    
    // Tests that GetEncodingAsString returns the right result for a trivial
// unicharset.
TEST_F(UnicharcompressTest, GetEncodingAsString) {
  LoadUnicharset('trivial.unicharset');
  ExpectCorrect('trivial');
  STRING encoding = compressed_.GetEncodingAsString(unicharset_);
  string encoding_str(&encoding[0], encoding.length());
  std::vector<string> lines =
      strings::Split(encoding_str, '\n', strings::SkipEmpty());
  EXPECT_EQ(5, lines.size());
  // The first line is always space.
  EXPECT_EQ('0\t ', lines[0]);
  // Next we have i.
  EXPECT_EQ('1\ti', lines[1]);
  // Next we have f.
  EXPECT_EQ('2\tf', lines[2]);
  // Next we have the fi ligature: ﬁ. There are no nulls in it, as there are no
  // repeated letter ligatures in this unicharset, unlike por.unicharset above.
  EXPECT_EQ('2,1\tﬁ', lines[3]);
  // Finally the null character.
  EXPECT_EQ('3\t<nul>', lines[4]);
}
    
      // Suspends/Enables training by setting the training_ flag. Serialize and
  // DeSerialize only operate on the run-time data if state is false.
  void SetEnableTraining(TrainingState state) override;
    
      // Runs forward propagation of activations on the input line.
  // See Network for a detailed discussion of the arguments.
  void Forward(bool debug, const NetworkIO& input,
               const TransposedArray* input_transpose, NetworkScratch* scratch,
               NetworkIO* output) override;
    
      /**
   * Provide an image for Tesseract to recognize. Format is as
   * TesseractRect above. Copies the image buffer and converts to Pix.
   * SetImage clears all recognition results, and sets the rectangle to the
   * full image, so it may be followed immediately by a GetUTF8Text, and it
   * will automatically perform recognition.
   */
  void SetImage(const unsigned char* imagedata, int width, int height,
                int bytes_per_pixel, int bytes_per_line);
    
    bool TessPDFRenderer::imageToPDFObj(Pix *pix,
                                    char *filename,
                                    long int objnum,
                                    char **pdf_object,
                                    long int *pdf_object_size) {
  size_t n;
  char b0[kBasicBufSize];
  char b1[kBasicBufSize];
  char b2[kBasicBufSize];
  if (!pdf_object_size || !pdf_object)
    return false;
  *pdf_object = nullptr;
  *pdf_object_size = 0;
  if (!filename)
    return false;
    }
    
    namespace tesseract {
    }
    
        api.SetImage(pixs);
    
    // Helper returns true if all the words are acceptable.
static bool WordsAcceptable(const PointerVector<WERD_RES>& words) {
  for (int w = 0; w < words.size(); ++w) {
    if (words[w]->tess_failed || !words[w]->tess_accepted) return false;
  }
  return true;
}
    
    namespace tesseract {
    }
    
    #include <boost/asio/detail/push_options.hpp>
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    TEST(Issue178, Test) {
  // Get rid of any state from an old run.
  std::string dbpath = leveldb::test::TmpDir() + '/leveldb_cbug_test';
  DestroyDB(dbpath, leveldb::Options());
    }
    
    size_t BlockBuilder::CurrentSizeEstimate() const {
  return (buffer_.size() +                        // Raw data buffer
          restarts_.size() * sizeof(uint32_t) +   // Restart array
          sizeof(uint32_t));                      // Restart array length
}
    
      enum { kNumBuckets = 154 };
  static const double kBucketLimit[kNumBuckets];
  double buckets_[kNumBuckets];
    
    namespace leveldb {
    }
    
    inline bool DBIter::ParseKey(ParsedInternalKey* ikey) {
  Slice k = iter_->key();
  ssize_t n = k.size() + iter_->value().size();
  bytes_counter_ -= n;
  while (bytes_counter_ < 0) {
    bytes_counter_ += RandomPeriod();
    db_->RecordReadSample(k);
  }
  if (!ParseInternalKey(k, ikey)) {
    status_ = Status::Corruption('corrupted internal key in DBIter');
    return false;
  } else {
    return true;
  }
}
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);