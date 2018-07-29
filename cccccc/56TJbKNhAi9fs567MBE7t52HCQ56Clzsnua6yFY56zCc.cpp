
        
          // Return the user key
  Slice user_key() const { return Slice(kstart_, end_ - kstart_ - 8); }
    
    namespace leveldb {
    }
    
    enum FileType {
  kLogFile,
  kDBLockFile,
  kTableFile,
  kDescriptorFile,
  kCurrentFile,
  kTempFile,
  kInfoLogFile  // Either the current one, or an old one
};
    
      for (size_t i = 0; i < compact_pointers_.size(); i++) {
    PutVarint32(dst, kCompactPointer);
    PutVarint32(dst, compact_pointers_[i].first);  // level
    PutLengthPrefixedSlice(dst, compact_pointers_[i].second.Encode());
  }
    
    
    {  std::vector< std::pair<int, InternalKey> > compact_pointers_;
  DeletedFileSet deleted_files_;
  std::vector< std::pair<int, FileMetaData> > new_files_;
};
    
    // Number of key/values to place in database
static int FLAGS_num = 1000000;
    
    namespace leveldb {
    }
    
    class Slice;
    
    // Prints a value using the type inferred by the compiler.  The
// difference between this and UniversalTersePrint() is that for a
// (const) char pointer, this prints both the pointer and the
// NUL-terminated string.
template <typename T>
void UniversalPrint(const T& value, ::std::ostream* os) {
  // A workarond for the bug in VC++ 7.1 that prevents us from instantiating
  // UniversalPrinter with T directly.
  typedef T T1;
  UniversalPrinter<T1>::Print(value, os);
}
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define INSTANTIATE_TYPED_TEST_CASE_P(Prefix, CaseName, Types) \
  bool gtest_##Prefix##_##CaseName GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTestCase<CaseName, \
          GTEST_CASE_NAMESPACE_(CaseName)::gtest_AllTests_, \
          ::testing::internal::TypeList< Types >::type>::Register(\
              #Prefix, #CaseName, GTEST_REGISTERED_TEST_NAMES_(CaseName))
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
    // The following family of struct and struct templates are used to
// represent type lists.  In particular, TypesN<T1, T2, ..., TN>
// represents a type list with N types (T1, T2, ..., and TN) in it.
// Except for Types0, every struct in the family has two member types:
// Head for the first type in the list, and Tail for the rest of the
// list.
    
    #ifndef GTEST_SAMPLES_PRIME_TABLES_H_
#define GTEST_SAMPLES_PRIME_TABLES_H_
    
    Timer::Timer(Type type, const char *name /* = NULL */, ReportType r)
  : m_type(type), m_report(r) {
  if (name) {
    m_name = name;
    PRINT_MSG('%s...', name);
  }
  m_start = measure();
}
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
}
    
    
    {  auto const reg = makeReg();
  constToReg.emplace(vconst, reg);
  regToConst.emplace(reg, vconst);
  return reg;
}
    
    #ifdef HAVE_NUMA
    
    #ifndef  lint
FILE_RCSID('@(#)$File: magic.c,v 1.78 2013/01/07 18:20:19 christos Exp $')
#endif  /* lint */
    
    /**
 * This is PHP's 'stream', base class of plain file, gzipped file, directory
 * and sockets. We are not going to structure directories this way at all,
 * but we will have PlainFile, ZipFile and Socket derive from this base class,
 * so they can share some minimal functionalities.
 */
struct File : SweepableResourceData {
  static String TranslatePath(const String& filename);
  // Same as TranslatePath except doesn't make paths absolute
  static String TranslatePathKeepRelative(const char* fn, uint32_t len);
  static String TranslatePathKeepRelative(const String& filename) {
    return TranslatePathKeepRelative(filename.c_str(), filename.size());
  }
  static String TranslatePathKeepRelative(const std::string& filename) {
    return TranslatePathKeepRelative(filename.c_str(), filename.size());
  }
  // Same as TranslatePath except checks the file cache on miss
  static String TranslatePathWithFileCache(const String& filename);
  static String TranslateCommand(const String& cmd);
  static req::ptr<File> Open(
    const String& filename, const String& mode,
    int options = 0, const req::ptr<StreamContext>& context = nullptr);
    }
    
    void MemoryManager::setMemoryLimit(size_t limit) {
  assertx(limit <= (size_t)std::numeric_limits<int64_t>::max());
  m_usageLimit = limit;
  updateNextGc();
}
    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    namespace guetzli {
    }
    
    bool WriteJpeg(const JPEGData& jpg, bool strip_metadata, JPEGOutput out);
    
    // Builds jpeg-style Huffman lookup table from the given symbols.
// The symbols are in order of increasing bit lengths. The number of symbols
// with bit length n is given in counts[n] for each n >= 1.
// Returns the size of the lookup table.
int BuildJpegHuffmanTable(const int* counts, const int* symbols,
                          HuffmanTableEntry* lut);
    
      // Requires that comp is not downsampled.
  void CopyFromJpegComponent(const JPEGComponent& comp,
                             int factor_x, int factor_y,
                             const int* quant);
    
    static int __ParseStack(FILE* file,  NDK_CRASH_PARSER_STATE& _state, char _strcache[2048], std::string& strout) {
    ASSERT(file);
    }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    
    
    #ifndef CORESERVICEBASE_H_
#define CORESERVICEBASE_H_
    
    //
//  testspy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.