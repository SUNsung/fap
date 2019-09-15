
        
        
    {  char* a_base = static_cast<char*>(
      params.buffer_allocations->GetDeviceAddress(a_buffer_).opaque());
  int* info_base = static_cast<int*>(
      params.buffer_allocations->GetDeviceAddress(info_buffer_).opaque());
  se::DeviceMemoryBase workspace_data =
      params.buffer_allocations->GetDeviceAddress(workspace_buffer_);
  for (int64 i = 0; i < batch_size_; ++i) {
    se::DeviceMemoryBase a_data =
        se::DeviceMemoryBase(a_base + i * a_batch_stride_, a_batch_stride_);
    se::DeviceMemory<int> info_data(
        se::DeviceMemoryBase(info_base + i, sizeof(int)));
    switch (type_) {
      case F32: {
        TF_RETURN_IF_ERROR(
            context->Potrf(uplo_, n_, se::DeviceMemory<float>(a_data), n_,
                           info_data, se::DeviceMemory<float>(workspace_data)));
        break;
      }
      case F64: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<double>(a_data), n_, info_data,
            se::DeviceMemory<double>(workspace_data)));
        break;
      }
      case C64: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<std::complex<float>>(a_data), n_,
            info_data, se::DeviceMemory<std::complex<float>>(workspace_data)));
        break;
      }
      case C128: {
        TF_RETURN_IF_ERROR(context->Potrf(
            uplo_, n_, se::DeviceMemory<std::complex<double>>(a_data), n_,
            info_data, se::DeviceMemory<std::complex<double>>(workspace_data)));
        break;
      }
      default:
        return InvalidArgument('Invalid type for cholesky %s',
                               PrimitiveType_Name(type_));
    }
  }
  return Status::OK();
}
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_COPY_THUNK_H_

    
              const int64 tuple_element_count = ShapeUtil::TupleElementCount(shape);
          index.push_back(0);
          std::vector<void*> inner_tuple_element_addresses;
          for (int64 i = 0; i < tuple_element_count; ++i) {
            index.back() = i;
            copy_tuple_contents(&inner_tuple_element_addresses);
          }
          index.pop_back();
    
    Status AbsGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      {{'sign'}, 'Sign', {'x'}, {}, {'dy'}},
      {{'dx'}, 'Mul', {'dy', 'sign'}},
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Abs', AbsGrad);
    
    REGISTER_XLA_OP(Name('SoftmaxCrossEntropyWithLogits'), SoftmaxXentWithLogitsOp);
    
      // Empty inputs.
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    #define guarantee_xerr(cond, err, msg, ...) do {                                \
        int guarantee_xerr_errsv = (err);                                       \
        if (UNLIKELY(!(cond))) {                                                \
            if (guarantee_xerr_errsv == 0) {                                    \
                crash_or_trap(format_assert_message('Guarantee', cond) msg, ##__VA_ARGS__); \
            } else {                                                            \
                char guarantee_xerr_buf[250];                                   \
                const char *errstr = errno_string_maybe_using_buffer(guarantee_xerr_errsv, guarantee_xerr_buf, sizeof(guarantee_xerr_buf));   \
                crash_or_trap(format_assert_message('Guarantee', cond) ' (errno %d - %s) ' msg, guarantee_xerr_errsv, errstr, ##__VA_ARGS__); \
            }                                                                   \
        }                                                                       \
    } while (0)
#define guarantee_err(cond, ...) guarantee_xerr(cond, get_errno(), ##__VA_ARGS__)
    
    #define EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter::INTERCEPT_ALL_THREADS, \
          &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // A helper class that aborts a death test when it's deleted.
  class ReturnSentinel {
   public:
    explicit ReturnSentinel(DeathTest* test) : test_(test) { }
    ~ReturnSentinel() { test_->Abort(TEST_ENCOUNTERED_RETURN_STATEMENT); }
   private:
    DeathTest* const test_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(ReturnSentinel);
  } GTEST_ATTRIBUTE_UNUSED_;
    
     private:
  // Replaces multiple consecutive separators with a single separator.
  // For example, 'bar///foo' becomes 'bar/foo'. Does not eliminate other
  // redundancies that might be in a pathname involving '.' or '..'.
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing '/'. Then elsewhere that
  // pathname may have another '/' and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like 'foo//bar'
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example 'bar\\/\\foo' becomes
  // 'bar\\foo'.
    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_

    
    // The following family of struct and struct templates are used to
// represent type lists.  In particular, TypesN<T1, T2, ..., TN>
// represents a type list with N types (T1, T2, ..., and TN) in it.
// Except for Types0, every struct in the family has two member types:
// Head for the first type in the list, and Tail for the rest of the
// list.
    
    struct AlignImpl {
  static DECLARE_ALIGN_TABLE(s_table);
    }
    
      auto const& definition = env.defs[r];
  if (!definition.base.isValid()) return;
    
      /*
   * For when we a have a memory operand and the operand size is
   * 64-bits, only a 32-bit (sign-extended) immediate is supported.
   */
#define IMM64_STORE_OP(name, instr)             \
  void name##q(Immed i, MemoryRef m) {          \
    return instrIM(instr, i, m);                \
  }
    
    int64_t File::write(const String& data, int64_t length /* = 0 */) {
  if (seekable()) {
    int64_t offset = m_data->m_readpos - m_data->m_writepos;
    // Writing shouldn't change the EOF status, but because we have a
    // transparent buffer, we need to do read operations on the backing
    // store, which can.
    //
    // EOF state isn't just a matter of position on all subclasses;
    // even seek(0, SEEK_CUR) can change it.
    auto eof = m_data->m_eof;
    m_data->m_readpos = m_data->m_writepos = 0; // invalidating read buffer
    seek(offset, SEEK_CUR);
    m_data->m_eof = eof;
  }
    }
    
    bool OutputFile::closeImpl() {
  *s_pcloseRet = 0;
  if (!isClosed()) {
    setIsClosed(true);
    return true;
  }
  return false;
}
    
    #include 'hphp/runtime/base/php-stream-wrapper.h'
#include 'hphp/runtime/base/runtime-error.h'
#include 'hphp/runtime/base/plain-file.h'
#include 'hphp/runtime/base/temp-file.h'
#include 'hphp/runtime/base/mem-file.h'
#include 'hphp/runtime/base/output-file.h'
#include 'hphp/runtime/server/cli-server.h'
#include 'hphp/runtime/server/http-protocol.h'
#include 'hphp/runtime/ext/stream/ext_stream.h'
#include <memory>
    
      void threadInit() override {
    threadInitMisc();
  }
    
      Array arr1 = make_varray('test');
  EXPECT_TRUE(arr1.toBoolean() == true);
  EXPECT_TRUE(arr1.toByte() == 1);
  EXPECT_TRUE(arr1.toInt16() == 1);
  EXPECT_TRUE(arr1.toInt32() == 1);
  EXPECT_TRUE(arr1.toInt64() == 1);
  EXPECT_TRUE(arr1.toDouble() == 1.0);
  EXPECT_TRUE(arr1.toString() == s_Array);
    
    #include <memory>
    
    bool Scanner::tryParseFuncTypeList(TokenStore::iterator& pos) {
  for (int parsed = 0;;parsed++) {
    /* For cases such as function(...):void */
    if (pos->t == T_ELLIPSIS) {
      nextLookahead(pos);
      return true;
    }
    if (pos->t == T_INOUT) {
      nextLookahead(pos);
    }
    auto cpPos = pos;
    if (!tryParseNSType(cpPos)) {
      if (parsed > 0) {
        pos = cpPos;
        return true;
      } else {
        return false;
      }
    }
    pos = cpPos;
    /* For cases such as function(int...):void */
    if (pos->t == T_ELLIPSIS) {
      nextLookahead(pos);
      return true;
    }
    if (pos->t != ',') return true;
    nextLookahead(pos);
  }
}
    
    
    {
    {} }
    
    using CompileStringFn = Unit* (*)(const char*, int, const SHA1&, const char*,
                                  const Native::FuncTable&, Unit**, bool,
                                  const RepoOptions&);
    
        const auto FACE_NUMBER_PARTS = 70u;
    #define FACE_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  4,5,  5,6,  6,7,  7,8,  8,9,  9,10,  10,11,  11,12,  12,13,  13,14,  14,15,  15,16,  17,18,  18,19,  19,20, \
        20,21,  22,23,  23,24,  24,25,  25,26,  27,28,  28,29,  29,30,  31,32,  32,33,  33,34,  34,35,  36,37,  37,38,  38,39,  39,40,  40,41, \
        41,36,  42,43,  43,44,  44,45,  45,46,  46,47,  47,42,  48,49,  49,50,  50,51,  51,52,  52,53,  53,54,  54,55,  55,56,  56,57,  57,58, \
        58,59,  59,48,  60,61,  61,62,  62,63,  63,64,  64,65,  65,66,  66,67,  67,60
    #define FACE_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> FACE_PAIRS_RENDER {FACE_PAIRS_RENDER_GPU};
    #define FACE_COLORS_RENDER_GPU 255.f,    255.f,    255.f
    const std::vector<float> FACE_COLORS_RENDER{FACE_COLORS_RENDER_GPU};
    const std::vector<float> FACE_SCALES_RENDER{FACE_SCALES_RENDER_GPU};
    
        template<typename T>
    Point<T>& Point<T>::operator-=(const Point<T>& point)
    {
        try
        {
            x -= point.x;
            y -= point.y;
            // Return
            return *this;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return *this;
        }
    }