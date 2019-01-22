
        
        
    {
    {        // Register the memory buffer.
        SML->registerMemoryBuffer(info.name, std::move(bitstream));
        foundModules.push_back(info.name);
      }
    } else {
      llvm::dbgs() << 'Unable to load module';
      if (!info.name.empty())
        llvm::dbgs() << ' '' << info.name << '\'';
      llvm::dbgs() << '.\n';
    }
    
        // Try adding an 'e' and look for that as a verb.
    if (possibleVerb.back() != 'e') {
      SmallString<16> possibleVerbWithE;
      possibleVerbWithE += possibleVerb;
      possibleVerbWithE += 'e';
      if (getPartOfSpeech(possibleVerbWithE) == PartOfSpeech::Verb)
        return PartOfSpeech::Gerund;
    }
    
    namespace {
  // Quasi-lexicographic order: string length first, then string data.
  // Since we don't care about the actual length, we can use this, which
  // lets us ignore the string data a larger proportion of the time.
  struct SortByLengthComparator {
    bool operator()(StringRef lhs, StringRef rhs) const {
      return (lhs.size() < rhs.size() ||
              (lhs.size() == rhs.size() && lhs < rhs));
    }
  };
} // end anonymous namespace
    
      // If this is a getter/setter, the other accessor
  const clang::FunctionDecl *pairedAccessor = nullptr;
    
    char Mangle::getStandardTypeSubst(StringRef TypeName) {
#define STANDARD_TYPE(KIND, MANGLING, TYPENAME)      \
  if (TypeName == #TYPENAME) {                       \
    return #MANGLING[0];                             \
  }
    }
    
    #ifndef UINT32_MAX
    #define UINT32_MAX (4294967295U)
#endif
    
    void combineYUYV(const Size2D &size,
                 const u8 * srcyBase, ptrdiff_t srcyStride,
                 const u8 * srcuBase, ptrdiff_t srcuStride,
                 const u8 * srcvBase, ptrdiff_t srcvStride,
                 u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
                vec128 v_src00 = internal::vld1q(src0 + x), v_src01 = internal::vld1q(src0 + x + 16 / sizeof(type));
            vec128 v_src10 = internal::vld1q(src1 + x), v_src11 = internal::vld1q(src1 + x + 16 / sizeof(type));
            uvec128 v_dst0;
            uvec128 v_dst1;
    
             int16x4_t vline1_s16 = vqmovn_s32(vline1_s32);
         int16x4_t vline2_s16 = vqmovn_s32(vline2_s32);
    
        lshiftConstFunc funcs[16] =
    {
        lshiftConst<0>,
        lshiftConst<1>,
        lshiftConst<2>,
        lshiftConst<3>,
        lshiftConst<4>,
        lshiftConst<5>,
        lshiftConst<6>,
        lshiftConst<7>,
        lshiftConst<8>,
        lshiftConst<9>,
        lshiftConst<10>,
        lshiftConst<11>,
        lshiftConst<12>,
        lshiftConst<13>,
        lshiftConst<14>,
        lshiftConst<15>
    }, func = funcs[shift];
    
    
    {
    {
    {                    for( k = 0; k < N; k++ )
                    {
                        s32 x = ptr[pixel[k]];
                        if(x > vt)
                        {
                            if( ++count > K )
                            {
                                cornerpos[ncorners++] = j;
                                if(nonmax_suppression)
                                    curr[j] = cornerScore(ptr, pixel);
                                break;
                            }
                        }
                        else
                            count = 0;
                    }
                }
            }
        }
    
        Size2D size(_size);
    if (srcStride == dstStride &&
        srcStride == rng1Stride &&
        srcStride == rng2Stride &&
        srcStride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    const size_t width = size.width & ~( 32/sizeof(T) - 1 );
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
      // Reads all the pages in the given lstmf filename to the cache. The reader
  // is used to read the file.
  bool LoadDocument(const char* filename, int start_page, int64_t max_memory,
                    FileReader reader);
  // Sets up the document, without actually loading it.
  void SetDocument(const char* filename, int64_t max_memory, FileReader reader);
  // Writes all the pages to the given filename. Returns false on error.
  bool SaveDocument(const char* filename, FileWriter writer);
  bool SaveToBuffer(GenericVector<char>* buffer);
    
    #include <cstdint>      // for int32_t
#include 'points.h'     // for FCOORD
    
      // Choose a location for the test database if none given with --db=<path>
  if (FLAGS_db == nullptr) {
      leveldb::g_env->GetTestDirectory(&default_db_path);
      default_db_path += '/dbbench';
      FLAGS_db = default_db_path.c_str();
  }
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string TableFileName(const std::string& dbname, uint64_t number);
    
    #ifndef STORAGE_LEVELDB_DB_LOG_FORMAT_H_
#define STORAGE_LEVELDB_DB_LOG_FORMAT_H_
    
      // Offset of the last record returned by ReadRecord.
  uint64_t last_record_offset_;
  // Offset of the first location past the end of buffer_.
  uint64_t end_of_buffer_offset_;
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
      // Increase reference count.
  void Ref() { ++refs_; }
    
    #define MXCAFFEBLOB(__object$, __type$) \
  (static_cast<mxnet::op::caffe::CaffeBlobFriend<__type$> *>(__object$))
    
      ExtensionManager_options_pargs args;
  args.write(oprot_);
    
    class ExtensionManagerHandler : virtual public ExtensionManagerIf {
 public:
  ExtensionManagerHandler() {
    // Your initialization goes here
  }
    }
    
    uint32_t InternalExtensionInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin('InternalExtensionInfo');
    }
    
    namespace osquery {
    }
    
    namespace impl {
    }
    
    PosixError toPosixSystemError(int from_errno);
    
    #include <string>
    
    class MockMessageManager
    : public MessageManager<::apollo::canbus::ChassisDetail> {
 public:
  MockMessageManager() {
    AddRecvProtocolData<MockProtocolData, true>();
    AddSendProtocolData<MockProtocolData, true>();
  }
};
    
    
    {  int ret = x;
  return ret;
}
    
    
    {  int ret = x;
  return ret;
}
    
    BackupTrajectoryGenerator::BackupTrajectoryGenerator(
    const State& init_s, const State& init_d,
    const double init_relative_time,
    const std::shared_ptr<CollisionChecker>& ptr_collision_checker,
    const Trajectory1dGenerator* trajectory1d_generator)
    : init_relative_time_(init_relative_time),
      ptr_collision_checker_(ptr_collision_checker),
      ptr_trajectory1d_generator_(trajectory1d_generator) {
  GenerateTrajectory1dPairs(init_s, init_d);
}
    
      MatrixXd offset_golden = MatrixXd::Zero(10, 1);
  offset_golden(0, 0) = -10000.0;
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
    
    {  EXPECT_EQ(0, exec.refCount);
}
    
    // error result
Expected<int, Err> f4(int, double, Err err) {
  return makeUnexpected(err);
}
    
    
    {} // namespace folly
    
     public:
  // Default generator type.
#if FOLLY_HAVE_EXTRANDOM_SFMT19937
  typedef __gnu_cxx::sfmt19937 DefaultGenerator;
#else
  typedef std::mt19937 DefaultGenerator;
#endif
    
      tv = to<struct timeval>(duration<uint32_t, std::nano>{3123});
  EXPECT_EQ(0, tv.tv_sec);
  EXPECT_EQ(3, tv.tv_usec);
  tv = to<struct timeval>(duration<int32_t, std::nano>{-3123});
  EXPECT_EQ(-1, tv.tv_sec);
  EXPECT_EQ(999997, tv.tv_usec);