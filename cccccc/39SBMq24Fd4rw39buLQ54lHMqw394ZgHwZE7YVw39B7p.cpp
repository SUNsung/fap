
        
          // content::DevToolsAgentHostClient:
  void AgentHostClosed(content::DevToolsAgentHost* agent_host,
                       bool replaced_with_another_client) override;
  void DispatchProtocolMessage(content::DevToolsAgentHost* agent_host,
                               const std::string& message) override;
    
     private:
  std::unique_ptr<DesktopMediaList> media_list_;
    
    namespace atom {
    }
    
    HttpProtocolHandler::~HttpProtocolHandler() {
}
    
    namespace accelerator_util {
    }
    
    #include 'atom/browser/ui/tray_icon.h'
#include 'ui/views/linux_ui/status_icon_linux.h'
    
    #ifndef ATOM_BROWSER_UI_VIEWS_GLOBAL_MENU_BAR_X11_H_
#define ATOM_BROWSER_UI_VIEWS_GLOBAL_MENU_BAR_X11_H_
    
    #endif  // ATOM_BROWSER_UI_VIEWS_MENU_MODEL_ADAPTER_H_

    
     protected:
  virtual char GetChar(void) {
    return fin.get();
  }
  /*! \brief to be implemented by child, check if end of stream */
  virtual bool IsEnd(void) {
    return fin.eof();
  }
    
        index_.resize((boundary_[nfeature - 1].index_end
                   + (packing_factor_ - 1)) / packing_factor_);
    row_ind_.resize(boundary_[nfeature - 1].row_ind_end);
    
      uint64_t uint64_t2[2] = {1U, 2U};
  EXPECT_EQ(info.group_ptr.size(), 0);
  info.SetInfo('group', uint64_t2, xgboost::kUInt64, 2);
  ASSERT_EQ(info.group_ptr.size(), 3);
  EXPECT_EQ(info.group_ptr[2], 3);
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    CHECK(page.offset.size() != 0 && page.offset[0] == 0);
    CHECK_EQ(page.offset.back(), page.data.size());
    fo->Write(page.offset);
    if (page.data.size() != 0) {
      fo->Write(dmlc::BeginPtr(page.data), page.data.size() * sizeof(SparseBatch::Entry));
    }
  }
    
    void SparsePage::Writer::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    static const uint8_t kRangeLimitLut[4 * 256] = {
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,
  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,
  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,
  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,
  96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
};
    
    namespace guetzli {
    }
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    
    {}  // namespace guetzli

    
    #include 'guetzli/jpeg_data_encoder.h'
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
    #include <stdint.h>
#include <string.h>
#include <vector>
    
      bool any_generator = false;
  bool print_make_rules = false;
  bool raw_binary = false;
  bool schema_binary = false;
  bool grpc_enabled = false;
  std::vector<std::string> filenames;
  std::list<std::string> include_directories_storage;
  std::vector<const char *> include_directories;
  std::vector<const char *> conform_include_directories;
  std::vector<bool> generator_enabled(params_.num_generators, false);
  size_t binary_files_from = std::numeric_limits<size_t>::max();
  std::string conform_to_schema;
    
    #include <grpc++/grpc++.h>
    
    int main(int argc, const char *argv[]) {
  RunServer();
  return 0;
}

    
      server_thread.join();
    
    struct IterationVisitor {
  // These mark the scope of a table or struct.
  virtual void StartSequence() {}
  virtual void EndSequence() {}
  // Called for each field regardless of wether it is present or not.
  // If not present, val == nullptr. set_idx is the index of all set fields.
  virtual void Field(size_t /*field_idx*/, size_t /*set_idx*/,
                     ElementaryType /*type*/, bool /*is_vector*/,
                     const TypeTable * /*type_table*/, const char * /*name*/,
                     const uint8_t * /*val*/) {}
  // Called for a value that is actually present, after a field, or as part
  // of a vector.
  virtual void UType(uint8_t, const char *) {}
  virtual void Bool(bool) {}
  virtual void Char(int8_t, const char *) {}
  virtual void UChar(uint8_t, const char *) {}
  virtual void Short(int16_t, const char *) {}
  virtual void UShort(uint16_t, const char *) {}
  virtual void Int(int32_t, const char *) {}
  virtual void UInt(uint32_t, const char *) {}
  virtual void Long(int64_t) {}
  virtual void ULong(uint64_t) {}
  virtual void Float(float) {}
  virtual void Double(double) {}
  virtual void String(const String *) {}
  virtual void Unknown(const uint8_t *) {}  // From a future version.
  // These mark the scope of a vector.
  virtual void StartVector() {}
  virtual void EndVector() {}
  virtual void Element(size_t /*i*/, ElementaryType /*type*/,
                       const TypeTable * /*type_table*/,
                       const uint8_t * /*val*/) {}
  virtual ~IterationVisitor() {}
};
    
    // Initialize an existing object with other data, to avoid an allocation.
static void InitializeExisting(const StructDef &struct_def,
                               std::string *code_ptr) {
  std::string &code = *code_ptr;
    }