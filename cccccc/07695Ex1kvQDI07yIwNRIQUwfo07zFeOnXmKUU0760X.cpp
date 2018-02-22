
        
        /* Map whose keys are pointers, but are compared by their dereferenced values.
 *
 * Differs from a plain std::map<const K*, T, DereferencingComparator<K*> > in
 * that methods that take a key for comparison take a K rather than taking a K*
 * (taking a K* would be confusing, since it's the value rather than the address
 * of the object for comparison that matters due to the dereferencing comparator).
 *
 * Objects pointed to by keys must not be modified in any way that changes the
 * result of DereferencingComparator.
 */
template <class K, class T>
class indirectmap {
private:
    typedef std::map<const K*, T, DereferencingComparator<const K*> > base;
    base m;
public:
    typedef typename base::iterator iterator;
    typedef typename base::const_iterator const_iterator;
    typedef typename base::size_type size_type;
    typedef typename base::value_type value_type;
    }
    
        // Finish and check for builder errors
    if (s.ok()) {
      s = builder->Finish();
      if (s.ok()) {
        meta->file_size = builder->FileSize();
        assert(meta->file_size > 0);
      }
    } else {
      builder->Abandon();
    }
    delete builder;
    
     private:
  // We construct a char array of the form:
  //    klength  varint32               <-- start_
  //    userkey  char[klength]          <-- kstart_
  //    tag      uint64
  //                                    <-- end_
  // The array is a suitable MemTable key.
  // The suffix starting with 'userkey' can be used as an InternalKey.
  const char* start_;
  const char* kstart_;
  const char* end_;
  char space_[200];      // Avoid allocation for short keys
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
extern std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    #endif  // STORAGE_LEVELDB_DB_TABLE_CACHE_H_

    
      for (size_t i = 0; i < compact_pointers_.size(); i++) {
    PutVarint32(dst, kCompactPointer);
    PutVarint32(dst, compact_pointers_[i].first);  // level
    PutLengthPrefixedSlice(dst, compact_pointers_[i].second.Encode());
  }
    
      void EncodeTo(std::string* dst) const;
  Status DecodeFrom(const Slice& src);
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    
    {  printer->Print(
    variables_,
    'private static readonly pbc::MapField<$key_type_name$, $value_type_name$>.Codec _map_$name$_codec\n'
    '    = new pbc::MapField<$key_type_name$, $value_type_name$>.Codec(');
  key_generator->GenerateCodecCode(printer);
  printer->Print(', ');
  value_generator->GenerateCodecCode(printer);
  printer->Print(
    variables_,
    ', $tag$);\n'
    'private readonly pbc::MapField<$key_type_name$, $value_type_name$> $name$_ = new pbc::MapField<$key_type_name$, $value_type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::MapField<$key_type_name$, $value_type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    {}  // namespace guetzli

    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}
    
    
    {}  // namespace guetzli
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg);
    
    
    {  return true;
}
    
    int BuildJpegHuffmanTable(const int* count_in, const int* symbols,
                          HuffmanTableEntry* lut) {
  HuffmanTableEntry code;    // current table entry
  HuffmanTableEntry* table;  // next available space in table
  int len;         // current code length
  int idx;         // symbol index
  int key;         // prefix code
  int reps;        // number of replicate key values in current table
  int low;         // low bits for current root entry
  int table_bits;  // key length of current table
  int table_size;  // size of current table
  int total_size;  // sum of root table size and 2nd level table sizes
    }
    
    // Preprocesses the u (1) or v (2) channel of the given YUV image (range 0-255).
std::vector<std::vector<float>> PreProcessChannel(
    int w, int h, int channel, float sigma, float amount, bool blur,
    bool sharpen, const std::vector<std::vector<float>>& image);
    
    #include 'comm/corepattern/service_base.h'
    
    
class ServiceBase;
typedef std::map<std::string, ServiceBase*> TServicesMap;
    
    class Spy {
  public:
    Spy(void* _this): m_this(_this) {}
    virtual ~Spy() {}
    }
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-14.
//
    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================