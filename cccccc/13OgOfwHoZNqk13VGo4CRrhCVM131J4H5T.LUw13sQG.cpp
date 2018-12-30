
        
        struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    
  // Getters and Setters.
  void SetValue(const char* val);
  STRING GetValue() const;
  const char* GetName() const;
  const char* GetDescription() const;
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    template <typename T> class GenericVector;
template <typename T> class GenericVector;
    
      const TBOX& bounding_box() const {
    return bbox_;
  }
  int length() const { return length_; }
  const TBOX& BlobBox(int index) const {
    return boxes_[index];
  }
    
    namespace tesseract {
    }
    
    static internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    namespace grpc {
    }
    
    static std::unique_ptr< ::grpc::ServerBuilderPlugin> CreateProtoReflection() {
  return std::unique_ptr< ::grpc::ServerBuilderPlugin>(
      new ProtoServerReflectionPlugin());
}
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  FILE* fp;
  fp = fopen('/proc/stat', 'r');
  uint64_t user, nice, system, idle;
  fscanf(fp, 'cpu %lu %lu %lu %lu', &user, &nice, &system, &idle);
  fclose(fp);
  busy = user + nice + system;
  total = busy + idle;
  return std::make_pair(busy, total);
}
    
      static void SetParsedIni(IniSettingMap &ini, const std::string confStr,
                           const std::string &filename, bool constants_only,
                           bool is_system);
    
      // @todo: check allow_url_include?
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
        bool isPHP = false;
    const char *p = strrchr(ename, '.');
    if (p) {
      isPHP = (strncmp(p + 1, 'php', 3) == 0);
    } else {
      try {
        std::string line;
        std::ifstream fin(fe.c_str());
        if (std::getline(fin, line)) {
          if (line[0] == '#' && line[1] == '!' &&
              line.find('php') != std::string::npos) {
            isPHP = true;
          }
        }
      } catch (...) {
        Logger::Error('FileUtil::find(): unable to read %s', fe.c_str());
      }
    }
    
      explicit OutputFile(const String& filename);
  virtual ~OutputFile();