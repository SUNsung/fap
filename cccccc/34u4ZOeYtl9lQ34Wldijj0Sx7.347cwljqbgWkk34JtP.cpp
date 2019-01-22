#include <sstream>
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google
    
      // Parsing halted on a '.'.  Perhaps we're in a different locale?  Let's
  // try to replace the '.' with a locale-specific radix character and
  // try again.
  string localized = LocalizeRadix(text, temp_endptr);
  const char* localized_cstr = localized.c_str();
  char* localized_endptr;
  result = strtod(localized_cstr, &localized_endptr);
  if ((localized_endptr - localized_cstr) >
      (temp_endptr - text)) {
    // This attempt got further, so replacing the decimal must have helped.
    // Update original_endptr to point at the right location.
    if (original_endptr != NULL) {
      // size_diff is non-zero if the localized radix has multiple bytes.
      int size_diff = localized.size() - strlen(text);
      // const_cast is necessary to match the strtod() interface.
      *original_endptr = const_cast<char*>(
        text + (localized_endptr - localized_cstr - size_diff));
    }
  }
    
    namespace google {
namespace protobuf {
namespace io {
namespace {
    }
    }
    }
    }
    
    
    {                            '',
                            {
                          ' detached comment\n'
                            },
                              ' leading comment\n'
                            },
    
    
    {}  // namespace guetzli
    
    namespace guetzli {
    }
    
    // Note about the CORRECT_LSB macro:
// using 16bit fixed-point constants, we often compute products like:
// p = (A*x + B*y + 32768) >> 16 by adding two sub-terms q = (A*x) >> 16
// and r = (B*y) >> 16 together. Statistically, we have p = q + r + 1
// in 3/4 of the cases. This can be easily seen from the relation:
//   (a + b + 1) >> 1 = (a >> 1) + (b >> 1) + ((a|b)&1)
// The approximation we are doing is replacing ((a|b)&1) by 1.
// In practice, this is a slightly more involved because the constants A and B
// have also been rounded compared to their exact floating point value.
// However, all in all the correction is quite small, and CORRECT_LSB can
// be defined empty if needed.
    
    constexpr int kDefaultMemlimitMB = 6000; // in MB
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    #endif  // GUETZLI_JPEG_DATA_ENCODER_H_

    
    // Writes DHT and SOS marker segments to out and fills in DC/AC Huffman tables
// for each component of the image.
bool BuildAndEncodeHuffmanCodes(const JPEGData& jpg, JPEGOutput out,
                                std::vector<HuffmanCodeTable>* dc_huff_tables,
                                std::vector<HuffmanCodeTable>* ac_huff_tables) {
  const int ncomps = jpg.components.size();
  dc_huff_tables->resize(ncomps);
  ac_huff_tables->resize(ncomps);
    }
    
                int complement = target - nums[i];
            if(record.find(complement) != record.end()){
                int res[] = {i, record[complement]};
                return vector<int>(res, res + 2);
            }
    
        vector<int> nums1 = {1, 1, 2};
    cout << Solution().removeDuplicates(nums1) << endl;
    
    // Three Way Quick Sort
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    void sortColors(vector<int> &nums) {
    }
    }
    
    using namespace std;
    
    private:
    void __inorderTraversal(TreeNode* node, vector<int> &res){
    }
    
    /// BFS
/// Time Complexity: O(n), where n is the number of nodes in the tree
/// Space Complexity: O(n)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    }
    }