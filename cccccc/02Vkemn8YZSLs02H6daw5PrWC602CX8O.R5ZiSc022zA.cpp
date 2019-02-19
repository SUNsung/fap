bool AtLeastOneAnnotationMatchesSubstring(
    const string& file_content,
    const std::vector<const GeneratedCodeInfo::Annotation*>& annotations,
    const string& expected_text) {
  for (std::vector<const GeneratedCodeInfo::Annotation*>::const_iterator
           i = annotations.begin(),
           e = annotations.end();
       i != e; ++i) {
    const GeneratedCodeInfo::Annotation* annotation = *i;
    uint32 begin = annotation->begin();
    uint32 end = annotation->end();
    if (end < begin || end > file_content.size()) {
      return false;
    }
    if (file_content.substr(begin, end - begin) == expected_text) {
      return true;
    }
  }
  return false;
}
    
    // Parses a set of comma-delimited name/value pairs.
void ParseGeneratorParameter(const string& text,
                             std::vector<std::pair<string, string> >* output) {
  std::vector<string> parts = Split(text, ',', true);
    }
    
    // Can't use an anonymous namespace here due to brokenness of Tru64 compiler.
namespace cpp_unittest {
    }
    
    void EnumGenerator::Generate(io::Printer* printer) {
  WriteEnumDocComment(printer, descriptor_);
  printer->Print('$access_level$ enum $name$ {\n',
                 'access_level', class_access_level(),
                 'name', descriptor_->name());
  printer->Indent();
  std::set<string> used_names;
  std::set<int> used_number;
  for (int i = 0; i < descriptor_->value_count(); i++) {
      WriteEnumValueDocComment(printer, descriptor_->value(i));
      string original_name = descriptor_->value(i)->name();
      string name = GetEnumValueName(descriptor_->name(), descriptor_->value(i)->name());
      // Make sure we don't get any duplicate names due to prefix removal.
      while (!used_names.insert(name).second) {
        // It's possible we'll end up giving this warning multiple times, but that's better than not at all.
        GOOGLE_LOG(WARNING) << 'Duplicate enum value ' << name << ' (originally ' << original_name
          << ') in ' << descriptor_->name() << '; adding underscore to distinguish';
        name += '_';
      }
      int number = descriptor_->value(i)->number();
      if (!used_number.insert(number).second) {
          printer->Print('[pbr::OriginalName(\'$original_name$\', PreferredAlias = false)] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      } else {
          printer->Print('[pbr::OriginalName(\'$original_name$\')] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      }
  }
  printer->Outdent();
  printer->Print('}\n');
  printer->Print('\n');
}
    
    #include <memory>
    
      // write children: Messages
  if (file_->message_type_count() > 0) {
    printer->Print('#region Messages\n');
    for (int i = 0; i < file_->message_type_count(); i++) {
      MessageGenerator messageGenerator(file_->message_type(i), this->options());
      messageGenerator.Generate(printer);
    }
    printer->Print('#endregion\n');
    printer->Print('\n');
  }
    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
  SourceLocation location;
  if (descriptor->GetSourceLocation(&location)) {
    WriteDocCommentBodyForLocation(printer, location);
  }
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
      EXPECT_EQ(4, decode_data.num_entries());
    
      // write file header
  io::CodedOutputStream output(raw_output_);
  output.WriteLittleEndian32(0x04034b50);  // magic
  WriteShort(&output, 10);  // version needed to extract
  WriteShort(&output, 0);  // flags
  WriteShort(&output, 0);  // compression method: stored
  WriteShort(&output, 0);  // last modified time
  WriteShort(&output, kDosEpoch);  // last modified date
  output.WriteLittleEndian32(info.crc32);  // crc-32
  output.WriteLittleEndian32(info.size);  // compressed size
  output.WriteLittleEndian32(info.size);  // uncompressed size
  WriteShort(&output, filename_size);  // file name length
  WriteShort(&output, 0);   // extra field length
  output.WriteString(filename);  // file name
  output.WriteString(contents);  // file data
    
    
    {
    {
    {
    {        // Consume the rest of the line so that we don't interpret it as a
        // blank line the next time around the loop.
        ConsumeZeroOrMore<WhitespaceNoNewline>();
        TryConsume('\n');
        break;
      case SLASH_NOT_COMMENT:
        return true;
      case NO_COMMENT:
        if (TryConsume('\n')) {
          // Completely blank line.
          collector.Flush();
          collector.DetachFromPrev();
        } else {
          bool result = Next();
          if (!result ||
              current_.text == '}' ||
              current_.text == ']' ||
              current_.text == ')') {
            // It looks like we're at the end of a scope.  In this case it
            // makes no sense to attach a comment to the following token.
            collector.Flush();
          }
          return result;
        }
        break;
    }
  }
}
    
      // Test invalid integers that will never be tokenized as integers.
  EXPECT_FALSE(Tokenizer::ParseInteger('zxy', kuint64max, &i));
  EXPECT_FALSE(Tokenizer::ParseInteger('1.2', kuint64max, &i));
  EXPECT_FALSE(Tokenizer::ParseInteger('08', kuint64max, &i));
  EXPECT_FALSE(Tokenizer::ParseInteger('0xg', kuint64max, &i));
  EXPECT_FALSE(Tokenizer::ParseInteger('-1', kuint64max, &i));
    
                float32x4_t lane0b = vld1q_f32(laneB + x - cn);
            float32x4_t lane2b = vld1q_f32(laneB + x + cn);
            float32x4_t lane1b = vld1q_f32(laneB + x);
    
            s32 prev_flag = 0;
        for (ptrdiff_t j = 0; j < (ptrdiff_t)size.width; j++)
        {
            #define CANNY_SHIFT 15
            const s32 TG22 = (s32)(0.4142135623730950488016887242097*(1<<CANNY_SHIFT) + 0.5);
    }
    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
                uint16x8_t v_mask0 = vorrq_u16(vceqq_s16(v_src0, v_maxval8), vceqq_s16(v_src0, v_minval8));
            uint16x8_t v_mask1 = vorrq_u16(vceqq_s16(v_src1, v_maxval8), vceqq_s16(v_src1, v_minval8));
    
    template <typename T, int elsize> struct vtail
{
    static inline void inRange(const T *, const T *, const T *,
                               u8 *, size_t &, size_t)
    {
        //do nothing since there couldn't be enough data
    }
};
template <typename T> struct vtail<T, 2>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1(dst + x, internal::vmovn(vd));
            x+=8;
        }
    }
};
template <typename T> struct vtail<T, 1>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<T>::vec64 vec64;
        typedef typename internal::VecTraits<T>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1q(dst + x, vd);
            x+=16;
        }
        if( x + 8 < width)
        {
             vec64  vs = internal::vld1( src + x);
             vec64 vr1 = internal::vld1(rng1 + x);
             vec64 vr2 = internal::vld1(rng2 + x);
            uvec64  vd = internal::vand(internal::vcge(vs, vr1), internal::vcge(vr2, vs));
            internal::vst1(dst + x, vd);
            x+=8;
        }
    }
};
    
            int16x8_t tprev = vmovq_n_s16(0x0);
        int16x8_t tcurr = vmovq_n_s16(0x0);
        int16x8_t tnext = vmovq_n_s16(0x0);
        int16x8_t tc = vmovq_n_s16(0x0);
        int16x8_t t0, t2, tcnext;
        ptrdiff_t x = 0;
        const ptrdiff_t bcols = y + 2 < rows ? cols : (cols - 8);
        for( ; x <= bcols; x += 8 )
        {
            internal::prefetch(v0 + x);
            internal::prefetch(v1 + x);
            internal::prefetch(v2 + x);
    }
    
    /*! \brief options in the registry to set inplace of operator */
enum SimpleOpInplaceOption {
  /*! \brief do not allow inplace in arguments */
  kNoInplace,
  /*! \brief in unary forward, allow inplace in with out */
  kInplaceInOut,
  /*! \brief in unary backward, allow inplace out_grad with in_grad */
  kInplaceOutIn,
  /*! \brief in binary forward, allow inplace left operand with out */
  kInplaceLhsOut,
  /*! \brief in binary backward, allow inplace out_grad with lhs_grad */
  kInplaceOutLhs
};
    
        for (int i = 0; i < param_.num_data; ++i) {
      TShape tshape = (*in_shape)[i];
      if (tshape.ndim() == 0) return false;
      auto blob_ptr = new Blob<float>();
      blob_ptr->Reshape(caffe::TShape2Vector(tshape));
      bot_blobs.push_back(blob_ptr);
    }
    
        std::uniform_real_distribution<float> rand_uniform(0, 1);
    std::bernoulli_distribution coin_flip(0.5);
    mshadow::Tensor<cpu, 3> data = src.data[0].get<cpu, 3, real_t>();
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
            for(int i = 0 ; i < nums.size() ; i ++){
            unordered_map<int,int>::iterator iter = record.find(target - nums[i]);
            if(iter != record.end() && iter->second != i){
                int res[] = {i, iter->second};
                return vector<int>(res, res + 2);
            }
        }
    
    /// Get the total length and remove the nth node
/// Two Pass Algorithm
///
/// Time Complexity: O(n)
/// Space Complexity: O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    }
    }
    
    using namespace std;
    
        deleteLinkedList(head);
    
    // Counting
// Time Complexity: O(n)
// Space Complexity: O(3)
class Solution {
public:
    void sortColors(vector<int> &nums) {
    }
    }
    
    
// Non-Recursive
// Using two stacks, Reverse the Preorder Traversal!
//
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
    }
    
        // output changed array
    std::cout << array << '\n';
    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }