
        
        StringRef swift::unicode::extractFirstExtendedGraphemeCluster(StringRef S) {
  // Extended grapheme cluster segmentation algorithm as described in Unicode
  // Standard Annex #29.
  if (S.empty())
    return StringRef();
    }
    
    @interface LocaleBridgingTester : NSObject
- (NSLocale *)autoupdatingCurrentLocale;
- (BOOL)verifyAutoupdatingLocale:(NSLocale *)locale;
@end
    
      void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                        DiagnosticKind Kind,
                        StringRef FormatString,
                        ArrayRef<DiagnosticArgument> FormatArgs,
                        const DiagnosticInfo &Info) override;
    
    
    {    // passthrough
    bool empty() const              { return m.empty(); }
    size_type size() const          { return m.size(); }
    size_type max_size() const      { return m.max_size(); }
    void clear()                    { m.clear(); }
    iterator begin()                { return m.begin(); }
    iterator end()                  { return m.end(); }
    const_iterator begin() const    { return m.begin(); }
    const_iterator end() const      { return m.end(); }
    const_iterator cbegin() const   { return m.cbegin(); }
    const_iterator cend() const     { return m.cend(); }
};
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG.old';
}
    
    static void UnrefEntry(void* arg1, void* arg2) {
  Cache* cache = reinterpret_cast<Cache*>(arg1);
  Cache::Handle* h = reinterpret_cast<Cache::Handle*>(arg2);
  cache->Release(h);
}
    
    #ifndef STORAGE_LEVELDB_DB_TABLE_CACHE_H_
#define STORAGE_LEVELDB_DB_TABLE_CACHE_H_
    
      void SetComparatorName(const Slice& name) {
    has_comparator_ = true;
    comparator_ = name.ToString();
  }
  void SetLogNumber(uint64_t num) {
    has_log_number_ = true;
    log_number_ = num;
  }
  void SetPrevLogNumber(uint64_t num) {
    has_prev_log_number_ = true;
    prev_log_number_ = num;
  }
  void SetNextFile(uint64_t num) {
    has_next_file_number_ = true;
    next_file_number_ = num;
  }
  void SetLastSequence(SequenceNumber seq) {
    has_last_sequence_ = true;
    last_sequence_ = seq;
  }
  void SetCompactPointer(int level, const InternalKey& key) {
    compact_pointers_.push_back(std::make_pair(level, key));
  }
    
    
    {  bool Overlaps(const char* smallest, const char* largest) {
    InternalKeyComparator cmp(BytewiseComparator());
    Slice s(smallest != NULL ? smallest : '');
    Slice l(largest != NULL ? largest : '');
    return SomeFileOverlapsRange(cmp, disjoint_sorted_files_, files_,
                                 (smallest != NULL ? &s : NULL),
                                 (largest != NULL ? &l : NULL));
  }
};
    
    WriteBatch::Handler::~Handler() { }
    
    static Slice TrimSpace(Slice s) {
  int start = 0;
  while (start < s.size() && isspace(s[start])) {
    start++;
  }
  int limit = s.size();
  while (limit > start && isspace(s[limit-1])) {
    limit--;
  }
  return Slice(s.data() + start, limit - start);
}
    
    
    {  // Usage of std::distance is not portable (does not compile with Sun Studio 12
  // RogueWave STL,
  // which is the one used by default).
  // Using a portable hand-made version for non random iterator instead:
  //   return difference_type( std::distance( current_, other.current_ ) );
  difference_type myDistance = 0;
  for (Value::ObjectValues::iterator it = current_; it != other.current_;
       ++it) {
    ++myDistance;
  }
  return myDistance;
#endif
}
    
      // Find a file by file name.
  bool FindFileByName(const string& filename,
                      FileDescriptorProto* output);
    
    #include <string>
    
    #include <google/protobuf/testing/googletest.h>
#include <gtest/gtest.h>
#include <google/protobuf/testing/file.h>
    
      std::string namespace_;
  std::string reflectionClassname_;
    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
                template<typename T>
            static __device__ __forceinline__ T atomicMin(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count = ::min(*address, val);
                do
                {
                    *address = count;
                } while (*address > count);
    }
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
        // Define int32_t, int64_t, and uint64_t types for UST/MSC
    // (as used in the GL_EXT_timer_query extension)
    #if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
        #include <inttypes.h>
    #elif defined(__sun__) || defined(__digital__)
        #include <inttypes.h>
        #if defined(__STDC__)
            #if defined(__arch64__) || defined(_LP64)
                typedef long int int64_t;
                typedef unsigned long int uint64_t;
            #else
                typedef long long int int64_t;
                typedef unsigned long long int uint64_t;
            #endif // __arch64__
        #endif // __STDC__
    #elif defined( __VMS ) || defined(__sgi)
        #include <inttypes.h>
    #elif defined(__SCO__) || defined(__USLC__)
        #include <stdint.h>
    #elif defined(__UNIXOS2__) || defined(__SOL64__)
        typedef long int int32_t;
        typedef long long int int64_t;
        typedef unsigned long long int uint64_t;
    #elif defined(_WIN32) && defined(__GNUC__)
        #include <stdint.h>
    #elif defined(_WIN32)
        typedef __int32 int32_t;
        typedef __int64 int64_t;
        typedef unsigned __int64 uint64_t;
    #else
        // Fallback if nothing above works
        #include <inttypes.h>
    #endif
#endif
    
        static void* WinGetProcAddress(const char* name)
    {
        static HMODULE opencl_module = NULL;
        if (!opencl_module)
        {
            opencl_module = GetModuleHandleA('clAmdFft.Runtime.dll');
            if (!opencl_module)
            {
                opencl_module = LoadLibraryA('clAmdFft.Runtime.dll');
                if (!opencl_module)
                    return NULL;
            }
        }
        return (void*)GetProcAddress(opencl_module, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) WinGetProcAddress(name)
#endif // _WIN32
    
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
    
      // After deleting some features, finish setting up the mapping, and map
  // all the samples. Returns the size of the compacted feature space.
  int FinalizeMapping(SampleIterator* it);
    
    // Applies Func in-place to inout, of size n.
template <class Func>
inline void FuncInplace(int n, double* inout) {
  Func f;
  for (int i = 0; i < n; ++i) {
    inout[i] = f(inout[i]);
  }
}
// Applies Func to u and multiplies the result by v component-wise,
// putting the product in out, all of size n.
template <class Func>
inline void FuncMultiply(const double* u, const double* v, int n, double* out) {
  Func f;
  for (int i = 0; i < n; ++i) {
    out[i] = f(u[i]) * v[i];
  }
}
// Applies the Softmax function in-place to inout, of size n.
template <typename T>
inline void SoftmaxInPlace(int n, T* inout) {
  if (n <= 0) return;
  // A limit on the negative range input to exp to guarantee non-zero output.
  const T kMaxSoftmaxActivation = 86.0f;
    }
    
    // Sets up the stride for the given array of height, width pairs.
void StrideMap::SetStride(const std::vector<std::pair<int, int>>& h_w_pairs) {
  int max_height = 0;
  int max_width = 0;
  for (const std::pair<int, int>& hw : h_w_pairs) {
    int height = hw.first;
    int width = hw.second;
    heights_.push_back(height);
    widths_.push_back(width);
    if (height > max_height) max_height = height;
    if (width > max_width) max_width = width;
  }
  shape_[FD_BATCH] = heights_.size();
  shape_[FD_HEIGHT] = max_height;
  shape_[FD_WIDTH] = max_width;
  ComputeTIncrements();
}
    
      // Partition creation. Accumulates vertical and horizontal text chains,
  // puts the remaining blobs in as unknowns, and then merges/splits to
  // minimize overlap and smoothes the types with neighbours and the color
  // image if provided. rerotation is used to rotate the coordinate space
  // back to the nontext_map_ image.
  // If find_problems is true, detects possible noise pollution by the amount
  // of partition overlap that is created by the diacritics. If excessive, the
  // noise is separated out into diacritic blobs, and PFR_NOISE is returned.
  // [TODO(rays): if the partition overlap is caused by heavy skew, deskews
  // the components, saves the skew_angle and returns PFR_SKEW.] If the return
  // is not PFR_OK, the job is incomplete, and FindInitialPartitions must be
  // called again after cleaning up the partly done work.
  PartitionFindResult FindInitialPartitions(PageSegMode pageseg_mode,
                                            const FCOORD& rerotation,
                                            bool find_problems, TO_BLOCK* block,
                                            BLOBNBOX_LIST* diacritic_blobs,
                                            ColPartitionGrid* part_grid,
                                            ColPartition_LIST* big_parts,
                                            FCOORD* skew_angle);
  // Detects noise by a significant increase in partition overlap from
  // pre_overlap to now, and removes noise from the union of all the overlapping
  // partitions, placing the blobs in diacritic_blobs. Returns true if any noise
  // was found and removed.
  bool DetectAndRemoveNoise(int pre_overlap, const TBOX& grid_box,
                            TO_BLOCK* block, ColPartitionGrid* part_grid,
                            BLOBNBOX_LIST* diacritic_blobs);
  // Finds vertical chains of text-like blobs and puts them in ColPartitions.
  void FindVerticalTextChains(ColPartitionGrid* part_grid);
  // Finds horizontal chains of text-like blobs and puts them in ColPartitions.
  void FindHorizontalTextChains(ColPartitionGrid* part_grid);
  // Finds diacritics and saves their base character in the blob.
  void TestDiacritics(ColPartitionGrid* part_grid, TO_BLOCK* block);
  // Searches this grid for an appropriately close and sized neighbour of the
  // given [small] blob. If such a blob is found, the diacritic base is saved
  // in the blob and true is returned.
  // The small_grid is a secondary grid that contains the small/noise objects
  // that are not in this grid, but may be useful for determining a connection
  // between blob and its potential base character. (See DiacriticXGapFilled.)
  bool DiacriticBlob(BlobGrid* small_grid, BLOBNBOX* blob);
  // Returns true if there is no gap between the base char and the diacritic
  // bigger than a fraction of the height of the base char:
  // Eg: line end.....'
  // The quote is a long way from the end of the line, yet it needs to be a
  // diacritic. To determine that the quote is not part of an image, or
  // a different text block, we check for other marks in the gap between
  // the base char and the diacritic.
  //                          '<--Diacritic
  // |---------|
  // |         |<-toobig-gap->
  // | Base    |<ok gap>
  // |---------|        x<-----Dot occupying gap
  // The grid is const really.
  bool DiacriticXGapFilled(BlobGrid* grid, const TBOX& diacritic_box,
                           const TBOX& base_box);
  // Merges diacritics with the ColPartition of the base character blob.
  void MergeDiacritics(TO_BLOCK* block, ColPartitionGrid* part_grid);
  // Any blobs on the large_blobs list of block that are still unowned by a
  // ColPartition, are probably drop-cap or vertically touching so the blobs
  // are removed to the big_parts list and treated separately.
  void RemoveLargeUnusedBlobs(TO_BLOCK* block,
                              ColPartitionGrid* part_grid,
                              ColPartition_LIST* big_parts);
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    
    
      bool PrintBetaServicer(const grpc_generator::Service* service,
                         grpc_generator::Printer* out);
  bool PrintBetaServerFactory(
      const grpc::string& package_qualified_service_name,
      const grpc_generator::Service* service, grpc_generator::Printer* out);
  bool PrintBetaStub(const grpc_generator::Service* service,
                     grpc_generator::Printer* out);
  bool PrintBetaStubFactory(const grpc::string& package_qualified_service_name,
                            const grpc_generator::Service* service,
                            grpc_generator::Printer* out);
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
  signal(SIGINT, sigint_handler);
    }
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    double UsageTimer::Now() {
  auto ts = gpr_now(GPR_CLOCK_REALTIME);
  return ts.tv_sec + 1e-9 * ts.tv_nsec;
}
    
    int protoc_main(int argc, char* argv[]) {
  google::protobuf::compiler::CommandLineInterface cli;
  cli.AllowPlugins('protoc-');
    }
    
      const std::string& functionName() const noexcept { return functionName_; }
    
    struct Size
{
    double width;
    double height;
    }
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
    inline local_ref<jobject> autobox(alias_ref<jobject> val) {
  return make_local(val);
}