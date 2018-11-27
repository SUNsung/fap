
        
        
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_message.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
#include <google/protobuf/compiler/csharp/csharp_reflection_class.h>
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
        // #import the headers for anything that a plain dependency of this proto
    // file (that means they were just an include, not a 'public' include).
    std::set<string> public_import_names;
    for (int i = 0; i < file_->public_dependency_count(); i++) {
      public_import_names.insert(file_->public_dependency(i)->name());
    }
    for (int i = 0; i < file_->dependency_count(); i++) {
      const FileDescriptor *dep = file_->dependency(i);
      bool public_import = (public_import_names.count(dep->name()) != 0);
      if (!public_import) {
        import_writer.AddFile(dep, header_extension);
      }
    }
    
      decode_data.AddString(1, 'abcdefghIJ', 'abcdefghIJ');
  decode_data.AddString(3, 'abcdefghIJ', '_AbcdefghIJ');
  decode_data.AddString(2, 'abcdefghIJ', 'Abcd_EfghIJ');
  decode_data.AddString(4, 'abcdefghIJ', 'ABCD__EfghI_j');
  decode_data.AddString(1000,
                        'longFieldNameIsLooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong1000',
                        'long_field_name_is_looooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong_1000');
    
    void OneofGenerator::GenerateCaseEnum(io::Printer* printer) {
  printer->Print(
      variables_,
      'typedef GPB_ENUM($enum_name$) {\n');
  printer->Indent();
  printer->Print(
      variables_,
      '$enum_name$_GPBUnsetOneOfCase = 0,\n');
  string enum_name = variables_['enum_name'];
  for (int j = 0; j < descriptor_->field_count(); j++) {
    const FieldDescriptor* field = descriptor_->field(j);
    string field_name = FieldNameCapitalized(field);
    printer->Print(
        '$enum_name$_$field_name$ = $field_number$,\n',
        'enum_name', enum_name,
        'field_name', field_name,
        'field_number', SimpleItoa(field->number()));
  }
  printer->Outdent();
  printer->Print(
      '};\n'
      '\n');
}
    
      /// @brief Deprecated; use <code>Blob(const vector<int>& shape)</code>.
  explicit Blob(const int num, const int channels, const int height,
      const int width);
  explicit Blob(const vector<int>& shape);
    
    
/// @brief Fills a Blob with constant values @f$ x = 0 @f$.
template <typename Dtype>
class ConstantFiller : public Filler<Dtype> {
 public:
  explicit ConstantFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    const int count = blob->count();
    const Dtype value = this->filler_param_.value();
    CHECK(count);
    for (int i = 0; i < count; ++i) {
      data[i] = value;
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
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
    
    template <typename Dtype>
class Batch {
 public:
  Blob<Dtype> data_, label_;
};
    
    #endif  // CAFFE_BIAS_LAYER_HPP_

    
    #endif  // CAFFE_CONCAT_LAYER_HPP_

    
    #include <vector>
    
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
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {	static bool const value = sizeof(test(get_d())) == sizeof(char) &&
							  !TypesAreSame<B volatile const, void volatile const>::value;
};
    
    #include <LinearMath/btMatrix3x3.h>
#include <LinearMath/btTransform.h>
#include <LinearMath/btVector3.h>
    
    public:
	GodotRayWorldAlgorithm(const btDiscreteDynamicsWorld *world, btPersistentManifold *mf, const btCollisionAlgorithmConstructionInfo &ci, const btCollisionObjectWrapper *body0Wrap, const btCollisionObjectWrapper *body1Wrap, bool isSwapped);
	virtual ~GodotRayWorldAlgorithm();
    
    	const RigidBodyBullet *getRigidBodyA() const;
	const RigidBodyBullet *getRigidBodyB() const;
	const Transform getCalculatedTransformA() const;
	const Transform getCalculatedTransformB() const;
	const Transform getFrameOffsetA() const;
	const Transform getFrameOffsetB() const;
	Transform getFrameOffsetA();
	Transform getFrameOffsetB();
	real_t getLowerLinLimit() const;
	void setLowerLinLimit(real_t lowerLimit);
	real_t getUpperLinLimit() const;
	void setUpperLinLimit(real_t upperLimit);
	real_t getLowerAngLimit() const;
	void setLowerAngLimit(real_t lowerLimit);
	real_t getUpperAngLimit() const;
	void setUpperAngLimit(real_t upperLimit);
    
    	jclass activityThread = env->FindClass('android/app/ActivityThread');
	jmethodID currentActivityThread = env->GetStaticMethodID(activityThread, 'currentActivityThread', '()Landroid/app/ActivityThread;');
	jobject at = env->CallStaticObjectMethod(activityThread, currentActivityThread);
	jmethodID getApplication = env->GetMethodID(activityThread, 'getApplication', '()Landroid/app/Application;');
	jobject context = env->CallObjectMethod(at, getApplication);
    
    
    {	return obj->call(function, p_args, p_argcount, r_error);
}
    
    ZipArchive::ZipArchive() {
    }
    
    	struct File {
    }
    
    
    
    inline TypedValue* APCLocalArray::localCache() const {
  return const_cast<TypedValue*>(
    reinterpret_cast<const TypedValue*>(this + 1)
  );
}
    
      /**
   * Dump detailed information to return string.
   */
  virtual String debuggerDump() {
    return String();
  }
    
    bool ArrayDirectory::isEof() const {
  return m_it.end();
}
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    void record_perf_mem_event(PerfEvent kind, const perf_event_sample* sample);
    
    const double kSqrtHalf = 0.70710678118654752440084436210484903;
    
    void ComputeBlockIDCTDouble(double block[64]) {
  TransformBlock(block, IDCT1d);
}
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    
    {  // odd part
  const int C1 = table[0];
  const int C3 = table[2];
  const int C5 = table[4];
  const int C7 = table[6];
  in[1] = DESCALE(C1 * b0 + C3 * b1 + C5 * b2 + C7 * b3);
  in[3] = DESCALE(C3 * b0 - C7 * b1 - C1 * b2 - C5 * b3);
  in[5] = DESCALE(C5 * b0 - C1 * b1 + C7 * b2 + C3 * b3);
  in[7] = DESCALE(C7 * b0 - C5 * b1 + C3 * b2 - C1 * b3);
}
#undef DESCALE
#undef LOAD_CST
#undef LOAD
#undef MULT
#undef ADD
#undef SUB
#undef LSHIFT
#undef STORE16
#undef CORRECT_LSB
#undef kTan1
#undef kTan2
#undef kTan3m1
#undef k2Sqrt2
#undef BUTTERFLY
#undef COLUMN_DCT8
    
    #include 'guetzli/gamma_correct.h'
    
      void JumpToByteBoundary() {
    while (put_bits <= 56) {
      int c = (put_buffer >> 56) & 0xff;
      EmitByte(c);
      put_buffer <<= 8;
      put_bits += 8;
    }
    if (put_bits < 64) {
      int padmask = 0xff >> (64 - put_bits);
      int c = ((put_buffer >> 56) & ~padmask) | padmask;
      EmitByte(c);
    }
    put_buffer = 0;
    put_bits = 64;
  }
    
    bool JPEGData::Is444() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 1 &&
          max_v_samp_factor == 1 &&
          components[0].h_samp_factor == 1 &&
          components[0].v_samp_factor == 1 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    void AddApp0Data(JPEGData* jpg) {
  const unsigned char kApp0Data[] = {
      0xe0, 0x00, 0x10,              // APP0
      0x4a, 0x46, 0x49, 0x46, 0x00,  // 'JFIF'
      0x01, 0x01,                    // v1.01
      0x00, 0x00, 0x01, 0x00, 0x01,  // aspect ratio = 1:1
      0x00, 0x00                     // thumbnail width/height
  };
  jpg->app_data.push_back(
      std::string(reinterpret_cast<const char*>(kApp0Data),
                                 sizeof(kApp0Data)));
}
    
    
    {  const uint8_t* data_;
  const size_t len_;
  size_t pos_;
  uint64_t val_;
  int bits_left_;
  size_t next_marker_pos_;
};
    
    bool EncodeMetadata(const JPEGData& jpg, bool strip_metadata, JPEGOutput out) {
  if (strip_metadata) {
    const uint8_t kApp0Data[] = {
      0xff, 0xe0, 0x00, 0x10,        // APP0
      0x4a, 0x46, 0x49, 0x46, 0x00,  // 'JFIF'
      0x01, 0x01,                    // v1.01
      0x00, 0x00, 0x01, 0x00, 0x01,  // aspect ratio = 1:1
      0x00, 0x00                     // thumbnail width/height
    };
    return JPEGWrite(out, kApp0Data, sizeof(kApp0Data));
  }
  bool ok = true;
  for (size_t i = 0; i < jpg.app_data.size(); ++i) {
    uint8_t data[1] = { 0xff };
    ok = ok && JPEGWrite(out, data, sizeof(data));
    ok = ok && JPEGWrite(out, jpg.app_data[i]);
  }
  for (size_t i = 0; i < jpg.com_data.size(); ++i) {
    uint8_t data[2] = { 0xff, 0xfe };
    ok = ok && JPEGWrite(out, data, sizeof(data));
    ok = ok && JPEGWrite(out, jpg.com_data[i]);
  }
  return ok;
}