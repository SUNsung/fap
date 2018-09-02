
        
        class AutoUpdater : public mate::EventEmitter<AutoUpdater>,
                    public auto_updater::Delegate,
                    public WindowListObserver {
 public:
  static mate::Handle<AutoUpdater> Create(v8::Isolate* isolate);
    }
    
    template <>
struct Converter<atom::AutoResizeFlags> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     atom::AutoResizeFlags* auto_resize_flags) {
    mate::Dictionary params;
    if (!ConvertFromV8(isolate, val, &params)) {
      return false;
    }
    }
    }
    
    
    {  return TracingController::CreateFileEndpoint(
      result_file_path, base::Bind(callback, result_file_path));
}
    
    namespace api {
    }
    
    // static
void LabelButton::BuildPrototype(v8::Isolate* isolate,
                                 v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'LabelButton'));
}
    
    #endif // BITCOIN_QT_MACDOCKICONHANDLER_H

    
    
    {        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, y, sizeof(y));
        secp256k1_sha256_write(&sha, x, sizeof(x));
        secp256k1_sha256_finalize(&sha, result);
        ret = 1;
    }
    
        /* Generate a random key and message. */
    {
        secp256k1_scalar msg, key;
        random_scalar_order_test(&msg);
        random_scalar_order_test(&key);
        secp256k1_scalar_get_b32(privkey, &key);
        secp256k1_scalar_get_b32(message, &msg);
    }
    
    int main (int argc, char *argv[])
{
	initJsonEscape();
	outputEscape();
	return 0;
}
    
    namespace
{
static bool ParsePrechecks(const std::string& str)
{
    if (str.empty()) // No empty string allowed
        return false;
    if (str.size() >= 1 && (json_isspace(str[0]) || json_isspace(str[str.size()-1]))) // No padding allowed
        return false;
    if (str.size() != strlen(str.c_str())) // No embedded NUL characters allowed
        return false;
    return true;
}
    }
    
    /* The types a field can have.  Note that this list is not identical to the
 * types defined in descriptor.proto, which gives INT32 and SINT32 separate
 * types (we distinguish the two with the 'integer encoding' enum below). */
typedef enum {
  /* Types stored in 1 byte. */
  UPB_TYPE_BOOL     = 1,
  /* Types stored in 4 bytes. */
  UPB_TYPE_FLOAT    = 2,
  UPB_TYPE_INT32    = 3,
  UPB_TYPE_UINT32   = 4,
  UPB_TYPE_ENUM     = 5,  /* Enum values are int32. */
  /* Types stored as pointers (probably 4 or 8 bytes). */
  UPB_TYPE_STRING   = 6,
  UPB_TYPE_BYTES    = 7,
  UPB_TYPE_MESSAGE  = 8,
  /* Types stored as 8 bytes. */
  UPB_TYPE_DOUBLE   = 9,
  UPB_TYPE_INT64    = 10,
  UPB_TYPE_UINT64   = 11
} upb_fieldtype_t;
    
    bool ParseAnyTypeUrl(const string& type_url, string* url_prefix,
                     string* full_type_name) {
  size_t pos = type_url.find_last_of('/');
  if (pos == string::npos || pos + 1 == type_url.size()) {
    return false;
  }
  if (url_prefix) {
    *url_prefix = type_url.substr(0, pos + 1);
  }
  *full_type_name = type_url.substr(pos + 1);
  return true;
}
    
    
    {    // Rats: we lose the debug comment here :(
    printer->Print(
      '/// <summary>Field number for the \'$field_name$\' field.</summary>\n'
      'public const int $field_constant_name$ = $index$;\n',
      'field_name', fieldDescriptor->name(),
      'field_constant_name', GetFieldConstantName(fieldDescriptor),
      'index', SimpleItoa(fieldDescriptor->number()));
    std::unique_ptr<FieldGeneratorBase> generator(
        CreateFieldGeneratorInternal(fieldDescriptor));
    generator->GenerateMembers(printer);
    printer->Print('\n');
  }
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_message_field.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(MessageFieldGenerator);
};
    
    // Requires:
//   descriptor != NULL
//
// Returns:
//   The fully-qualified C# class name.
string LIBPROTOC_EXPORT GetClassName(const Descriptor* descriptor);
    
    
    {	static Error parse_value(Token &token, Variant &value, Stream *p_stream, int &line, String &r_err_str, ResourceParser *p_res_parser = NULL);
	static Error get_token(Stream *p_stream, Token &r_token, int &line, String &r_err_str);
	static Error parse(Stream *p_stream, Variant &r_ret, String &r_err_str, int &r_err_line, ResourceParser *p_res_parser = NULL);
};
    
    #endif
#endif

    
    
    {	StreamPeerTCPPosix();
	~StreamPeerTCPPosix();
};
    
    class SyslogLogger : public Logger {
public:
	virtual void logv(const char *p_format, va_list p_list, bool p_err);
	virtual void print_error(const char *p_function, const char *p_file, int p_line, const char *p_code, const char *p_rationale, ErrorType p_type);
    }
    
    public:
	virtual ID get_id() const;
    
    /**
	@author Juan Linietsky <reduz@gmail.com>
*/
    
    private:
  /*
   * A working stream used to reorder and accumulate Concat's as ConcatN's.
   * The stream is reorderable up through the concats-th Concat opcode.
   */
  struct ConcatStream {
    std::vector<std::pair<Bytecode,bool>> stream;
                  // The working stream; contains bytecode, plus whether
                  // or not the bytecode is a rewriteable Concat.
    int stacksz;  // Stack size at the beginning of the stream.
    int concats;  // Number of concats to accumulate.
  };
    
    #include <cstdint>
#include <cassert>
#include <vector>
    
    
    {    assertx(data == comma || data == semi);
    // eat parameters, and figure out if we have ';base64'
    while (semi && (data == semi)) {
      data++;
      meta_len--;
      char* equals = (char*)memchr(data, '=', meta_len);
      semi = (char*)memchr(data, ';', meta_len);
      if (!equals || (semi && semi < data)) {
        // no equals, so either 'base64' or its bad
        if (meta_len != sizeof('base64') - 1 ||
            memcmp(data, 'base64', sizeof('base64')-1)) {
          raise_warning('rfc2396: invalid parameter');
          return nullptr;
        }
        // it's 'base64', we're done
        base64 = true;
        meta_len -= sizeof('base64') - 1;
        data += sizeof('base64') - 1;
        break;
      }
      // there's a parameter
      if (semi) {
        meta_len -= semi - data + 1;
        data = semi;
      } /* else, we're done with meta */
    }
  }
  data = comma + 1;
  data_len -= 1;
  String decoded;
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    /**
 * Make dest directory look identical to src by copying files and directories,
 * without copying identical files (so they keep the same timestamp as before).
 */
void syncdir(const std::string &dest, const std::string &src,
             bool keepSrc = false);
    
    #include <algorithm>
    
    static const int kCbToGreenTable[256] = {
  2919680,  2897126,  2874572,  2852018,  2829464,  2806910,  2784356,  2761802,
  2739248,  2716694,  2694140,  2671586,  2649032,  2626478,  2603924,  2581370,
  2558816,  2536262,  2513708,  2491154,  2468600,  2446046,  2423492,  2400938,
  2378384,  2355830,  2333276,  2310722,  2288168,  2265614,  2243060,  2220506,
  2197952,  2175398,  2152844,  2130290,  2107736,  2085182,  2062628,  2040074,
  2017520,  1994966,  1972412,  1949858,  1927304,  1904750,  1882196,  1859642,
  1837088,  1814534,  1791980,  1769426,  1746872,  1724318,  1701764,  1679210,
  1656656,  1634102,  1611548,  1588994,  1566440,  1543886,  1521332,  1498778,
  1476224,  1453670,  1431116,  1408562,  1386008,  1363454,  1340900,  1318346,
  1295792,  1273238,  1250684,  1228130,  1205576,  1183022,  1160468,  1137914,
  1115360,  1092806,  1070252,  1047698,  1025144,  1002590,   980036,   957482,
   934928,   912374,   889820,   867266,   844712,   822158,   799604,   777050,
   754496,   731942,   709388,   686834,   664280,   641726,   619172,   596618,
   574064,   551510,   528956,   506402,   483848,   461294,   438740,   416186,
   393632,   371078,   348524,   325970,   303416,   280862,   258308,   235754,
   213200,   190646,   168092,   145538,   122984,   100430,    77876,    55322,
    32768,    10214,   -12340,   -34894,   -57448,   -80002,  -102556,  -125110,
  -147664,  -170218,  -192772,  -215326,  -237880,  -260434,  -282988,  -305542,
  -328096,  -350650,  -373204,  -395758,  -418312,  -440866,  -463420,  -485974,
  -508528,  -531082,  -553636,  -576190,  -598744,  -621298,  -643852,  -666406,
  -688960,  -711514,  -734068,  -756622,  -779176,  -801730,  -824284,  -846838,
  -869392,  -891946,  -914500,  -937054,  -959608,  -982162, -1004716, -1027270,
 -1049824, -1072378, -1094932, -1117486, -1140040, -1162594, -1185148, -1207702,
 -1230256, -1252810, -1275364, -1297918, -1320472, -1343026, -1365580, -1388134,
 -1410688, -1433242, -1455796, -1478350, -1500904, -1523458, -1546012, -1568566,
 -1591120, -1613674, -1636228, -1658782, -1681336, -1703890, -1726444, -1748998,
 -1771552, -1794106, -1816660, -1839214, -1861768, -1884322, -1906876, -1929430,
 -1951984, -1974538, -1997092, -2019646, -2042200, -2064754, -2087308, -2109862,
 -2132416, -2154970, -2177524, -2200078, -2222632, -2245186, -2267740, -2290294,
 -2312848, -2335402, -2357956, -2380510, -2403064, -2425618, -2448172, -2470726,
 -2493280, -2515834, -2538388, -2560942, -2583496, -2606050, -2628604, -2651158,
 -2673712, -2696266, -2718820, -2741374, -2763928, -2786482, -2809036, -2831590,
};
    
      // Compares img with the baseline image and saves the resulting distance map
  // inside the object. The provided image must have the same dimensions as the
  // baseline image.
  virtual void Compare(const OutputImage& img) = 0;
    
    bool SetDepth(int p0, HuffmanTree *pool, uint8_t *depth, int max_depth) {
  int stack[17];
  int level = 0;
  int p = p0;
  assert(max_depth <= 16);
  stack[0] = -1;
  while (true) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return false;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = static_cast<uint8_t>(level);
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return true;
    p = stack[level];
    stack[level] = -1;
  }
}
    
    #endif  // GUETZLI_ENTROPY_ENCODE_H_

    
    constexpr int kDefaultMemlimitMB = 6000; // in MB
    
      void WriteBits(int nbits, uint64_t bits) {
    put_bits -= nbits;
    put_buffer |= (bits << put_bits);
    if (put_bits <= 16) {
      // At this point we are ready to emit the most significant 6 bytes of
      // put_buffer_ to the output.
      // The JPEG format requires that after every 0xff byte in the entropy
      // coded section, there is a zero byte, therefore we first check if any of
      // the 6 most significant bytes of put_buffer_ is 0xff.
      if (HasZeroByte(~put_buffer | 0xffff)) {
        // We have a 0xff byte somewhere, examine each byte and append a zero
        // byte if necessary.
        EmitByte((put_buffer >> 56) & 0xff);
        EmitByte((put_buffer >> 48) & 0xff);
        EmitByte((put_buffer >> 40) & 0xff);
        EmitByte((put_buffer >> 32) & 0xff);
        EmitByte((put_buffer >> 24) & 0xff);
        EmitByte((put_buffer >> 16) & 0xff);
      } else if (pos + 6 < len) {
        // We don't have any 0xff bytes, output all 6 bytes without checking.
        data[pos] = (put_buffer >> 56) & 0xff;
        data[pos + 1] = (put_buffer >> 48) & 0xff;
        data[pos + 2] = (put_buffer >> 40) & 0xff;
        data[pos + 3] = (put_buffer >> 32) & 0xff;
        data[pos + 4] = (put_buffer >> 24) & 0xff;
        data[pos + 5] = (put_buffer >> 16) & 0xff;
        pos += 6;
      } else {
        overflow = true;
      }
      put_buffer <<= 48;
      put_bits += 48;
    }
  }
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}