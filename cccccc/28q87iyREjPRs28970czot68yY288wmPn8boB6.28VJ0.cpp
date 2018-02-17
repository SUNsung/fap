
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // 1) FYI from m3b@ about fork():
// A danger of calling fork() (as opposed to clone() or vfork()) is that if
// many people have used pthread_atfork() to acquire locks, fork() can deadlock,
// because it's unlikely that the locking order will be correct in a large
// program where different layers are unaware of one another and using
// pthread_atfork() independently.
//
// The danger of not calling fork() is that if libc managed to use
// pthread_atfork() correctly (for example, to lock the environment), you'd
// miss out on that protection.  (But as far as I can see most libc's don't get
// that right; certainly glibc doesn't seem to.)
//
// clone() or vfork() are also frustrating because clone() exists only on Linux,
// and both clone(...CLONE_VM...) and vfork() have interesting issues around
// signals being delivered after the fork and before the exec.  It may be
// possible to work around the latter by blocking all signals before the fork
// and unblocking them afterwards.
//
// Fortunately, most people haven't heard of pthread_atfork().
//
//
// 2) FYI from m3b@ about execv():
// The execv() call implicitly uses the libc global variable environ, which was
// copied by fork(), and that copy could have raced with a setenv() call in
// another thread, since libc implementations are usually not very careful about
// this. (glibc isn't careful, for example.)
//
// If this were inside libc, we could use locks or memory barriers to avoid the
// race, but as it is, I see nothing you can do.  Even if you tried to copy the
// environment before the fork(), the copying could race with other threads
// calling setenv().  The good news is that few people call setenv().
//
// Amusingly, the standard says of fork(): '...to avoid errors, the child
// process may only execute async-signal-safe operations until such time as one
// of the exec functions is called.'  Notice that execve() is listed as
// async-signal-safe, but execv() is not, and the difference is just the
// handling of the environment.
    
    // Enumeration to list the supported types of plugins / support libraries.
enum class PluginKind {
  kInvalid,
  kBlas,
  kDnn,
  kFft,
  kRng,
};
    
      ExpectSuccess(Builder(), {}, {}, R'proto(
      op: 'AttrDefault'
      attr { key: 'a' value { s: 'banana' } } )proto');
    
    #include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/core/stringpiece.h'
#if !defined(IS_SLIM_BUILD)
#include 'tensorflow/core/lib/io/zlib_compression_options.h'
#include 'tensorflow/core/lib/io/zlib_outputbuffer.h'
#endif  // IS_SLIM_BUILD
#include 'tensorflow/core/platform/macros.h'
#include 'tensorflow/core/platform/types.h'
    
    /** scalar_tanh_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a tanh
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::tanh_fast_derivative()
  */
template <typename T>
struct scalar_tanh_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_tanh_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return one - (y * y);
  }
    }
    
    #endif  // TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_

    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include 'tensorflow/compiler/xla/service/hlo_reachability.h'
    
    #endif

    
        // If this result is not from the current module, try to get a popularity
    // score for it.
    if (nameToPopularity) {
      builder.setPopularityFactor(
          nameToPopularity->lookup(builder.getOriginalName()));
    }
    
      ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart,
                     TargetStart + 1, llvm::lenientConversion);
  if (TargetStart == &C) {
    // The source string contains an ill-formed subsequence at the end.
    return false;
  }
    
    #define MARKUP_AST_NODE(Id, Parent) \
  virtual void visit##Id(const Id *Node) {}
#define ABSTRACT_MARKUP_AST_NODE(Id, Parent)
#define MARKUP_AST_NODE_RANGE(Id, FirstId, LastId)
#include 'swift/Markup/ASTNodes.def'
    
    // FIXME: Soon this will change.
using SubstitutionList = ArrayRef<Substitution>;
    
    
    {    return Data.get<SpecializedDeclRef *>()->getDecl();
  }
    
    #include 'SourceKit/Core/LangSupport.h'
#include 'swift/AST/DiagnosticConsumer.h'
#include 'llvm/ADT/DenseMap.h'
    
    // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    
    {
    {}  // namespace python
}  // namespace protobuf
    
    #include <memory>
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MapFieldGenerator);
};
    
     private:
  const FileDescriptor* file_;
    
    void RepeatedEnumFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);
    
    static const static_bookblock _resbook_16s_0={
  {
    {0},
    {0,0,&_16c0_s_p1_0},
    {0},
    {0,0,&_16c0_s_p3_0},
    {0,0,&_16c0_s_p4_0},
    {0,0,&_16c0_s_p5_0},
    {0,0,&_16c0_s_p6_0},
    {&_16c0_s_p7_0,&_16c0_s_p7_1},
    {&_16c0_s_p8_0,&_16c0_s_p8_1},
    {&_16c0_s_p9_0,&_16c0_s_p9_1,&_16c0_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_1={
  {
    {0},
    {0,0,&_16c1_s_p1_0},
    {0},
    {0,0,&_16c1_s_p3_0},
    {0,0,&_16c1_s_p4_0},
    {0,0,&_16c1_s_p5_0},
    {0,0,&_16c1_s_p6_0},
    {&_16c1_s_p7_0,&_16c1_s_p7_1},
    {&_16c1_s_p8_0,&_16c1_s_p8_1},
    {&_16c1_s_p9_0,&_16c1_s_p9_1,&_16c1_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_2={
  {
    {0},
    {0,0,&_16c2_s_p1_0},
    {0,0,&_16c2_s_p2_0},
    {0,0,&_16c2_s_p3_0},
    {0,0,&_16c2_s_p4_0},
    {&_16c2_s_p5_0,&_16c2_s_p5_1},
    {&_16c2_s_p6_0,&_16c2_s_p6_1},
    {&_16c2_s_p7_0,&_16c2_s_p7_1},
    {&_16c2_s_p8_0,&_16c2_s_p8_1},
    {&_16c2_s_p9_0,&_16c2_s_p9_1,&_16c2_s_p9_2}
   }
};
    
    #endif
    
    #ifndef CPU_SUPPORT_H
#define CPU_SUPPORT_H
    
    #else
#define varDefine
#define silk_SaveCount()
    
    #endif  // STORAGE_LEVELDB_DB_SNAPSHOT_H_

    
    void TableCache::Evict(uint64_t file_number) {
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  cache_->Erase(Slice(buf, sizeof(buf)));
}
    
    class Env;
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
    TEST(FindFileTest, OverlappingFiles) {
  Add('150', '600');
  Add('400', '500');
  disjoint_sorted_files_ = false;
  ASSERT_TRUE(! Overlaps('100', '149'));
  ASSERT_TRUE(! Overlaps('601', '700'));
  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
  ASSERT_TRUE(Overlaps('450', '700'));
  ASSERT_TRUE(Overlaps('600', '700'));
}
    
    
    {}  // namespace leveldb
    
    int main(int argc, char** argv) {
  std::string default_db_path;
  for (int i = 1; i < argc; i++) {
    double d;
    int n;
    char junk;
    if (leveldb::Slice(argv[i]).starts_with('--benchmarks=')) {
      FLAGS_benchmarks = argv[i] + strlen('--benchmarks=');
    } else if (sscanf(argv[i], '--compression_ratio=%lf%c', &d, &junk) == 1) {
      FLAGS_compression_ratio = d;
    } else if (sscanf(argv[i], '--histogram=%d%c', &n, &junk) == 1 &&
               (n == 0 || n == 1)) {
      FLAGS_histogram = n;
    } else if (sscanf(argv[i], '--num=%d%c', &n, &junk) == 1) {
      FLAGS_num = n;
    } else if (sscanf(argv[i], '--reads=%d%c', &n, &junk) == 1) {
      FLAGS_reads = n;
    } else if (sscanf(argv[i], '--value_size=%d%c', &n, &junk) == 1) {
      FLAGS_value_size = n;
    } else if (sscanf(argv[i], '--cache_size=%d%c', &n, &junk) == 1) {
      FLAGS_cache_size = n;
    } else if (sscanf(argv[i], '--page_size=%d%c', &n, &junk) == 1) {
      FLAGS_page_size = n;
    } else if (sscanf(argv[i], '--compression=%d%c', &n, &junk) == 1 &&
               (n == 0 || n == 1)) {
      FLAGS_compression = (n == 1) ? true : false;
    } else if (strncmp(argv[i], '--db=', 5) == 0) {
      FLAGS_db = argv[i] + 5;
    } else {
      fprintf(stderr, 'Invalid flag '%s'\n', argv[i]);
      exit(1);
    }
  }
    }
    
      virtual Status NewWritableFile(const std::string& fname,
                                 WritableFile** result) {
    MutexLock lock(&mutex_);
    if (file_map_.find(fname) != file_map_.end()) {
      DeleteFileInternal(fname);
    }
    }
    
      ReadOptions read_options;
  Iterator *iter = db->NewIterator(read_options);
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
      virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const {
    for (int i = 0; i < n; i++) {
      uint32_t h = Hash(keys[i].data(), keys[i].size(), 1);
      PutFixed32(dst, h);
    }
  }
    
    void BuildSequentialHuffmanCodes(
    const JPEGData& jpg,
    std::vector<HuffmanCodeTable>* dc_huffman_code_tables,
    std::vector<HuffmanCodeTable>* ac_huffman_code_tables) {
  JPEGOutput out(NullOut, nullptr);
  BuildAndEncodeHuffmanCodes(jpg, out, dc_huffman_code_tables,
                             ac_huffman_code_tables);
}
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    #endif  // GUETZLI_FAST_LOG_H_

    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    #include 'guetzli/jpeg_data_decoder.h'
    
    
    {  return total_size;
}
    
    #ifndef GUETZLI_PREPROCESS_DOWNSAMPLE_H_
#define GUETZLI_PREPROCESS_DOWNSAMPLE_H_
    
    namespace guetzli {
    }