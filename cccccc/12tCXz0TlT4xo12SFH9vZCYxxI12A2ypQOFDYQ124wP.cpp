
        
        #include <memory>
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include <google/protobuf/descriptor.pb.h>
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    {  WriteFieldDocComment(printer, descriptor_);
  if (descriptor_->is_repeated()) {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newRepeatedGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $packed$,\n'
        '      $singular_type$.class);\n');
  } else {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newSingularGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $default$,\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $singular_type$.class);\n');
  }
  printer->Annotate('name', descriptor_);
}
    
    ImmutableGeneratorFactory::ImmutableGeneratorFactory(
    Context* context) : context_(context) {
}
ImmutableGeneratorFactory::~ImmutableGeneratorFactory() {}
    
    int GzipInputStream::Inflate(int flush) {
  if ((zerror_ == Z_OK) && (zcontext_.avail_out == 0)) {
    // previous inflate filled output buffer. don't change input params yet.
  } else if (zcontext_.avail_in == 0) {
    const void* in;
    int in_size;
    bool first = zcontext_.next_in == NULL;
    bool ok = sub_stream_->Next(&in, &in_size);
    if (!ok) {
      zcontext_.next_out = NULL;
      zcontext_.avail_out = 0;
      return Z_STREAM_END;
    }
    zcontext_.next_in = static_cast<Bytef*>(const_cast<void*>(in));
    zcontext_.avail_in = in_size;
    if (first) {
      int error = internalInflateInit2(&zcontext_, format_);
      if (error != Z_OK) {
        return error;
      }
    }
  }
  zcontext_.next_out = static_cast<Bytef*>(output_buffer_);
  zcontext_.avail_out = output_buffer_length_;
  output_position_ = output_buffer_;
  int error = inflate(&zcontext_, flush);
  return error;
}
    
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
    
    	}
	Block4x4::~Block4x4()
	{
		m_pimageSource = nullptr;
		if (m_pencoding)
		{
			delete m_pencoding;
			m_pencoding = nullptr;
		}
	}
	// ----------------------------------------------------------------------------------------------------
	// initialization prior to encoding from a source image
	// [a_uiSourceH,a_uiSourceV] is the location of the block in a_pimageSource
	// a_paucEncodingBits is the place to store the final encoding
	// a_errormetric is used for finding the best encoding
	//
	void Block4x4::InitFromSource(Image *a_pimageSource, 
									unsigned int a_uiSourceH, unsigned int a_uiSourceV,
									unsigned char *a_paucEncodingBits,
									ErrorMetric a_errormetric)
	{
    
    
    
    		virtual void SetEncodingBits(void) = 0;
    
    //  16384 * sqrt(2) * sin(kPi/9) * 2 / 3
static const tran_high_t sinpi_1_9 = 5283;
static const tran_high_t sinpi_2_9 = 9929;
static const tran_high_t sinpi_3_9 = 13377;
static const tran_high_t sinpi_4_9 = 15212;
    
        operator double() const
    {
      const double shift64 = 18446744073709551616.0; //2^64
      if (hi < 0)
      {
        if (lo == 0) return (double)hi * shift64;
        else return -(double)(~lo + ~hi * shift64);
      }
      else
        return (double)(lo + hi * shift64);
    }
    
    void CleanPolygon(const Path& in_poly, Path& out_poly, double distance = 1.415);
void CleanPolygon(Path& poly, double distance = 1.415);
void CleanPolygons(const Paths& in_polys, Paths& out_polys, double distance = 1.415);
void CleanPolygons(Paths& polys, double distance = 1.415);
    
      Copyright (C) 2007 Ariya Hidayat (ariya@kde.org)
  Copyright (C) 2006 Ariya Hidayat (ariya@kde.org)
  Copyright (C) 2005 Ariya Hidayat (ariya@kde.org)
    
    #if defined(OPUS_ARM_INLINE_EDSP)
#include 'arm/kiss_fft_armv5e.h'
#endif
#if defined(MIPSr1_ASM)
#include 'mips/kiss_fft_mipsr1.h'
#endif
    
      const char* data = filename.data();
  int data_len = filename.length();
  bool base64 = false;
  if (strncmp(data, 'data:', sizeof('data:') - 1)) {
    return nullptr;
  }
  data += sizeof('data:') - 1;
  data_len -= sizeof('data:') - 1;
    
    struct Directory;
    
    #include 'hphp/runtime/base/file-util.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
#include 'hphp/runtime/base/unit-cache.h'
#include 'hphp/runtime/ext/std/ext_std_file.h'
#include 'hphp/util/logger.h'
    
    template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, F fillCols);
template<typename F>
void logLowPriPerfWarning(folly::StringPiece event, int64_t rate, F fillCols);
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    
    {    inline size_t Size() const {
      return end - begin;
    }
  };
  /* \brief specifies how to split a rowset into two */
  struct Split {
    std::vector<size_t> left;
    std::vector<size_t> right;
  };
    
      // Computes the score (negative loss) resulting from performing this split
  virtual bst_float ComputeSplitScore(bst_uint nodeid,
                                      bst_uint featureid,
                                      const GradStats& left_stats,
                                      const GradStats& right_stats,
                                      bst_float left_weight,
                                      bst_float right_weight) const = 0;
    
     private:
  struct ColumnBoundary {
    // indicate where each column's index and row_ind is stored.
    // index_begin and index_end are logical offsets, so they should be converted to
    // actual offsets by scaling with packing_factor_
    size_t index_begin;
    size_t index_end;
    size_t row_ind_begin;
    size_t row_ind_end;
  };
    
        ASSERT_EQ(last.size(), 4);
    ASSERT_EQ(last.data(), s.data() + 12);
    
    
    {    auto ka2 = ka.copy();
    EXPECT_TRUE(ka);
    EXPECT_TRUE(ka2);
    EXPECT_EQ(&exec, ka2.get());
    EXPECT_EQ(2, exec.refCount);
  }
    
    TEST(FunctionRef, Traits) {
  static_assert(std::is_literal_type<FunctionRef<int(int)>>::value, '');
// Some earlier versions of libstdc++ lack these traits. Frustrating that
// the value of __GLIBCXX__ doesn't increase with version, but rather reflects
// release date, so some larger values of __GLIBCXX__ lack the traits while
// some smaller values have them. Can't figure out how to reliably test for the
// presence or absence of the traits. :-(
#if !defined(__GLIBCXX__) || __GNUC__ >= 5
  static_assert(
      std::is_trivially_copy_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_move_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_constructible<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
  static_assert(
      std::is_trivially_copy_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_move_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_trivially_assignable<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
#endif
  static_assert(
      std::is_nothrow_copy_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_move_constructible<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_constructible<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
  static_assert(
      std::is_nothrow_copy_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_move_assignable<FunctionRef<int(int)>>::value, '');
  static_assert(
      std::is_nothrow_assignable<
          FunctionRef<int(int)>,
          FunctionRef<int(int)>&>::value,
      '');
}
    
        // Test the upper boundary of conversion to uint32_t hours
    using hours_u32 = std::chrono::duration<uint32_t, std::ratio<3600>>;
    ts.tv_sec = 15461882262000LL;
    ts.tv_nsec = 0;
    EXPECT_EQ(std::numeric_limits<uint32_t>::max(), to<hours_u32>(ts).count());
    ts.tv_sec = 15461882265599LL;
    EXPECT_EQ(std::numeric_limits<uint32_t>::max(), to<hours_u32>(ts).count());
    ts.tv_sec = 15461882265600LL;
    EXPECT_THROW(to<hours_u32>(ts), std::range_error);
    
    #if FOLLY_HAVE_LIBZ
    
    template <
    template <typename> class Atom = std::atomic,
    typename T,
    typename... Args>
counted_ptr<T, Atom> make_counted(Args&&... args) {
  char* mem = (char*)malloc(sizeof(T) + sizeof(intrusive_shared_count<Atom>));
  if (!mem) {
    throw std::bad_alloc();
  }
  new (mem) intrusive_shared_count<Atom>();
  T* ptr = (T*)(mem + sizeof(intrusive_shared_count<Atom>));
  new (ptr) T(std::forward<Args>(args)...);
  return counted_ptr<T, Atom>(counted_shared_tag(), ptr);
}