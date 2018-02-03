
        
        class StmtBuilder {
  REPLContext &C;
  TypeChecker &TC;
  ASTContext &Context;
  DeclContext *DC;
  SmallVector<ASTNode, 8> Body;
    }
    
    static inline void _swift_dispatch_group_notify(
    dispatch_group_t group,
    dispatch_queue_t queue,
    __swift_shims_dispatch_block_t block) {
  dispatch_group_notify(group, queue, block);
}
    
    #ifndef SWIFT_INDEX_INDEXRECORD_H
#define SWIFT_INDEX_INDEXRECORD_H
    
      size_t NumChildren;
    
    
    {  /// Return a hash code of any components from these options that should
  /// contribute to a Swift Bridging PCH hash.
  llvm::hash_code getPCHHashComponents() const {
    // Nothing here that contributes anything significant when emitting the PCH.
    return llvm::hash_value(0);
  }
};
    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {    SANITY_CHECK(rvec, 1e-6);
    SANITY_CHECK(tvec, 1e-6);
}

    
        H.at<double>(2,0) = cv::Mat(cv::Mat(f3coeff).rowRange(1,21).t()*cv::Mat(20, 1, CV_64F, &Hs1)).at<double>(0,0);
    H.at<double>(2,1) = cv::Mat(cv::Mat(f3coeff).rowRange(1,21).t()*cv::Mat(20, 1, CV_64F, &Hs2)).at<double>(0,0);
    H.at<double>(2,2) = cv::Mat(cv::Mat(f3coeff).rowRange(1,21).t()*cv::Mat(20, 1, CV_64F, &Hs3)).at<double>(0,0);
    
    /// Reference : Eric W. Weisstein. 'Quartic Equation.' From MathWorld--A Wolfram Web Resource.
/// http://mathworld.wolfram.com/QuarticEquation.html
/// \return Number of real roots found.
int solve_deg4(double a, double b, double c, double d, double e,
               double & x0, double & x1, double & x2, double & x3)
{
  if (a == 0) {
    x3 = 0;
    return solve_deg3(b, c, d, e, x0, x1, x2);
  }
    }
    
            cv::Affine3<T>::Vec3 vo;
        //s = (double)cv::getTickCount();
        cv::Rodrigues(R, vo);
        //std::cout << 'O:' <<(cv::getTickCount() - s)*1000/cv::getTickFrequency() << std::endl;
    
    
    {    void run_func()
    {
        if (cpp)
            findChessboardCorners(img, pattern_size, corners, flags);
        else
            if (!drawCorners)
                cvFindChessboardCorners( &arr, pattern_size, out_corners, out_corner_count, flags );
            else
                cvDrawChessboardCorners( &drawCorImg, pattern_size,
                    (CvPoint2D32f*)(corners.empty() ? 0 : &corners[0]),
                    (int)corners.size(), was_found);
    }
};
    
    #include 'test_precomp.hpp'
    
    static int populate_ifaddrs(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* bytes,
		     size_t len) {
	if (set_ifname(ifaddr, msg->ifa_index) != 0) {
		return -1;
	}
	if (set_flags(ifaddr) != 0) {
		return -1;
	}
	if (set_addresses(ifaddr, msg, bytes, len) != 0) {
		return -1;
	}
	if (make_prefixes(ifaddr, msg->ifa_family, msg->ifa_prefixlen) != 0) {
		return -1;
	}
	return 0;
}
    
    # ifdef __GNUC_PREREQ
#  if __GNUC_PREREQ(3,4)
#   include <limits.h>
/*Note the casts to (int) below: this prevents OC_CLZ{32|64}_OFFS from
   'upgrading' the type of an entire expression to an (unsigned) size_t.*/
#   if INT_MAX>=2147483647
#    define OC_CLZ32_OFFS ((int)sizeof(unsigned)*CHAR_BIT)
#    define OC_CLZ32(_x) (__builtin_clz(_x))
#   elif LONG_MAX>=2147483647L
#    define OC_CLZ32_OFFS ((int)sizeof(unsigned long)*CHAR_BIT)
#    define OC_CLZ32(_x) (__builtin_clzl(_x))
#   endif
#   if INT_MAX>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clz(_x))
#   elif LONG_MAX>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned long)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clzl(_x))
#   elif LLONG_MAX>=9223372036854775807LL|| \
     __LONG_LONG_MAX__>=9223372036854775807LL
#    define OC_CLZ64_OFFS ((int)sizeof(unsigned long long)*CHAR_BIT)
#    define OC_CLZ64(_x) (__builtin_clzll(_x))
#   endif
#  endif
# endif
    
     ********************************************************************/
    
    /* mapping conventions:
   only one submap (this would change for efficient 5.1 support for example)*/
/* Four psychoacoustic profiles are used, one for each blocktype */
static const vorbis_info_mapping0 _map_nominal_u[2]={
  {1, {0,0,0,0,0,0}, {0}, {0}, 0,{0},{0}},
  {1, {0,0,0,0,0,0}, {1}, {1}, 0,{0},{0}}
};
    
    	for (j=0; j<6; j++)
		{
		for (i=0; i<1000; i++) /**/
			{
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(s1);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(e1);
			GetTSC(s2);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			des_encrypt3(&data[0],key1,key2,key3);
			GetTSC(e2);
			des_encrypt3(&data[0],key1,key2,key3);
			}
    }
    
    	for (j=0; j<6; j++)
		{
		for (i=0; i<1000; i++) /**/
			{
			des_encrypt1(&data[0],key,1);
			GetTSC(s1);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			GetTSC(e1);
			GetTSC(s2);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			des_encrypt1(&data[0],key,1);
			GetTSC(e2);
			des_encrypt1(&data[0],key,1);
			}
    }
    
      // Sets the coordinates of the current macro-block for the purpose of
  // CompareBlock() calls.
  virtual void SwitchBlock(int block_x, int block_y,
                           int factor_x, int factor_y) = 0;
    
    std::vector<float> LinearlyAveragedLuma(const std::vector<float>& rgb) {
  assert(rgb.size() % 3 == 0);
  std::vector<float> y(rgb.size() / 3);
  for (size_t i = 0, p = 0; p < rgb.size(); ++i, p += 3) {
    y[i] = LinearToGamma(RGBToY(GammaToLinear(rgb[p + 0]),
                                GammaToLinear(rgb[p + 1]),
                                GammaToLinear(rgb[p + 2])));
  }
  return y;
}
    
    static const int kCrToGreenTable[256] = {
  5990656,  5943854,  5897052,  5850250,  5803448,  5756646,  5709844,  5663042,
  5616240,  5569438,  5522636,  5475834,  5429032,  5382230,  5335428,  5288626,
  5241824,  5195022,  5148220,  5101418,  5054616,  5007814,  4961012,  4914210,
  4867408,  4820606,  4773804,  4727002,  4680200,  4633398,  4586596,  4539794,
  4492992,  4446190,  4399388,  4352586,  4305784,  4258982,  4212180,  4165378,
  4118576,  4071774,  4024972,  3978170,  3931368,  3884566,  3837764,  3790962,
  3744160,  3697358,  3650556,  3603754,  3556952,  3510150,  3463348,  3416546,
  3369744,  3322942,  3276140,  3229338,  3182536,  3135734,  3088932,  3042130,
  2995328,  2948526,  2901724,  2854922,  2808120,  2761318,  2714516,  2667714,
  2620912,  2574110,  2527308,  2480506,  2433704,  2386902,  2340100,  2293298,
  2246496,  2199694,  2152892,  2106090,  2059288,  2012486,  1965684,  1918882,
  1872080,  1825278,  1778476,  1731674,  1684872,  1638070,  1591268,  1544466,
  1497664,  1450862,  1404060,  1357258,  1310456,  1263654,  1216852,  1170050,
  1123248,  1076446,  1029644,   982842,   936040,   889238,   842436,   795634,
   748832,   702030,   655228,   608426,   561624,   514822,   468020,   421218,
   374416,   327614,   280812,   234010,   187208,   140406,    93604,    46802,
        0,   -46802,   -93604,  -140406,  -187208,  -234010,  -280812,  -327614,
  -374416,  -421218,  -468020,  -514822,  -561624,  -608426,  -655228,  -702030,
  -748832,  -795634,  -842436,  -889238,  -936040,  -982842, -1029644, -1076446,
 -1123248, -1170050, -1216852, -1263654, -1310456, -1357258, -1404060, -1450862,
 -1497664, -1544466, -1591268, -1638070, -1684872, -1731674, -1778476, -1825278,
 -1872080, -1918882, -1965684, -2012486, -2059288, -2106090, -2152892, -2199694,
 -2246496, -2293298, -2340100, -2386902, -2433704, -2480506, -2527308, -2574110,
 -2620912, -2667714, -2714516, -2761318, -2808120, -2854922, -2901724, -2948526,
 -2995328, -3042130, -3088932, -3135734, -3182536, -3229338, -3276140, -3322942,
 -3369744, -3416546, -3463348, -3510150, -3556952, -3603754, -3650556, -3697358,
 -3744160, -3790962, -3837764, -3884566, -3931368, -3978170, -4024972, -4071774,
 -4118576, -4165378, -4212180, -4258982, -4305784, -4352586, -4399388, -4446190,
 -4492992, -4539794, -4586596, -4633398, -4680200, -4727002, -4773804, -4820606,
 -4867408, -4914210, -4961012, -5007814, -5054616, -5101418, -5148220, -5195022,
 -5241824, -5288626, -5335428, -5382230, -5429032, -5475834, -5522636, -5569438,
 -5616240, -5663042, -5709844, -5756646, -5803448, -5850250, -5897052, -5943854,
};
    
    // kIDCTMatrix[8*x+u] = alpha(u)*cos((2*x+1)*u*M_PI/16)*sqrt(2), with fixed 13
// bit precision, where alpha(0) = 1/sqrt(2) and alpha(u) = 1 for u > 0.
// Some coefficients are off by +-1 to mimick libjpeg's behaviour.
static const int kIDCTMatrix[kDCTBlockSize] = {
  8192,  11363,  10703,   9633,   8192,   6437,   4433,   2260,
  8192,   9633,   4433,  -2259,  -8192, -11362, -10704,  -6436,
  8192,   6437,  -4433, -11362,  -8192,   2261,  10704,   9633,
  8192,   2260, -10703,  -6436,   8192,   9633,  -4433, -11363,
  8192,  -2260, -10703,   6436,   8192,  -9633,  -4433,  11363,
  8192,  -6437,  -4433,  11362,  -8192,  -2261,  10704,  -9633,
  8192,  -9633,   4433,   2259,  -8192,  11362, -10704,   6436,
  8192, -11363,  10703,  -9633,   8192,  -6437,   4433,  -2260,
};
    
    size_t HistogramEntropyCost(const JpegHistogram& histo,
                            const uint8_t depths[256]);
size_t HistogramHeaderCost(const JpegHistogram& histo);
    
      virtual Status scan(const std::string& domain,
                      std::vector<std::string>& results,
                      const std::string& prefix,
                      size_t max) const;
    
      /// The set of shared osquery services.
  std::vector<InternalRunnableRef> services_;
    
    /**
 * @brief Get a node key from the osquery RocksDB cache or perform node
 * enrollment.
 *
 * Enrollment allows a new node to announce to an enrollment endpoint via an
 * enroll plugin. While the details of authentication/authorization are up to
 * the plugin implementation, the endpoint may return a 'node secret'.
 *
 * If a node_key is requested from an enroll plugin because no current key
 * exists in the backing store, the result will be cached.
 *
 * @param enroll_plugin Name of the enroll plugin to use if no node_key set.
 * @return A unique, often private, node secret key.
 */
std::string getNodeKey(const std::string& enroll_plugin);
    
      /**
   * @brief Attempt to drop privileges to that of the parent of a given path.
   *
   * This will return false if privileges could not be dropped or there was
   * an previous, and still active, request for dropped privileges.
   *
   * @return success if privileges were dropped, otherwise false.
   */
  bool dropToParent(const boost::filesystem::path& path);
    
      /**
   * @brief A constructor which can be used to concisely express the status of
   * an operation.
   *
   * @param c a status code. The idiom is that a zero status code indicates a
   * successful operation and a non-zero status code indicates a failed
   * operation.
   * @param m a message indicating some extra detail regarding the operation.
   * If all operations were successful, this message should be 'OK'.
   * Otherwise, it doesn't matter what the string is, as long as both the
   * setter and caller agree.
   */
  Status(int c, std::string m) : code_(c), message_(std::move(m)) {}
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    #include <vector>
    
    #include <sstream>
#include <vector>
    
    /**
 * @brief Convert a std::shared_ptr to a boost::shared_ptr
 */
template <typename T>
typename boost::shared_ptr<T> std_to_boost_shared_ptr(
    typename std::shared_ptr<T> const& p) {
  return boost::shared_ptr<T>(p.get(), boost::bind(&do_release_std<T>, p, _1));
}
    
    #include 'singleton.h'
    
    #include 'android_native_app_glue.h'
#include 'animal_generated.h' // Includes 'flatbuffers/flatbuffers.h'.
    
    // Return the source of the generated service file.
grpc::string GenerateServiceSource(grpc_generator::File *file,
                                   const grpc_generator::Service *service,
                                   grpc_go_generator::Parameters *parameters);
    
    inline CharacterUnion::CharacterUnion(const CharacterUnion &u) FLATBUFFERS_NOEXCEPT : type(u.type), value(nullptr) {
  switch (type) {
    case Character_MuLan: {
      value = new AttackerT(*reinterpret_cast<AttackerT *>(u.value));
      break;
    }
    case Character_Rapunzel: {
      value = new Rapunzel(*reinterpret_cast<Rapunzel *>(u.value));
      break;
    }
    case Character_Belle: {
      value = new BookReader(*reinterpret_cast<BookReader *>(u.value));
      break;
    }
    case Character_BookFan: {
      value = new BookReader(*reinterpret_cast<BookReader *>(u.value));
      break;
    }
    case Character_Other: {
      value = new std::string(*reinterpret_cast<std::string *>(u.value));
      break;
    }
    case Character_Unused: {
      value = new std::string(*reinterpret_cast<std::string *>(u.value));
      break;
    }
    default:
      break;
  }
}
    
    // TODO(mmukhi): Add client-stream and completion-queue headers.
grpc::string GetMockIncludes(grpc_generator::File *file,
                             const Parameters &params) {
  grpc::string output;
  {
    // Scope the output stream so it closes and finalizes output to the string.
    auto printer = file->CreatePrinter(&output);
    std::map<grpc::string, grpc::string> vars;
    }
    }
    
    // NOTE: the FLATBUFFERS_DELETE_FUNC macro may change the access mode to
// private, so be sure to put it at the end or reset access mode explicitly.
#if (!defined(_MSC_VER) || _MSC_FULL_VER >= 180020827) && \
    (!defined(__GNUC__) || (__GNUC__ * 100 + __GNUC_MINOR__ >= 404))
  #define FLATBUFFERS_DELETE_FUNC(func) func = delete;
#else
  #define FLATBUFFERS_DELETE_FUNC(func) private: func;
#endif
    
    // Template specialization for As().
template<> inline bool Reference::As<bool>() { return AsBool(); }
    
    // Changes the contents of a string inside a FlatBuffer. FlatBuffer must
// live inside a std::vector so we can resize the buffer if needed.
// 'str' must live inside 'flatbuf' and may be invalidated after this call.
// If your FlatBuffer's root table is not the schema's root table, you should
// pass in your root_table type as well.
void SetString(const reflection::Schema &schema, const std::string &val,
               const String *str, std::vector<uint8_t> *flatbuf,
               const reflection::Object *root_table = nullptr);
    
    // Convenience class to easily parse or generate text for arbitrary FlatBuffers.
// Simply pre-populate it with all schema filenames that may be in use, and
// This class will look them up using the file_identifier declared in the
// schema.
class Registry {
 public:
  // Call this for all schemas that may be in use. The identifier has
  // a function in the generated code, e.g. MonsterIdentifier().
  void Register(const char *file_identifier, const char *schema_path) {
    Schema schema;
    schema.path_ = schema_path;
    schemas_[file_identifier] = schema;
  }
    }
    
      // Get and test some scalar types from the FlatBuffer.
  assert(monster->hp() == 80);
  assert(monster->mana() == 150);  // default
  assert(monster->name()->str() == 'MyMonster');
    
      // to ensure it is correct, we now generate text back from the binary,
  // and compare the two:
  std::string jsongen;
  if (!GenerateText(parser, parser.builder_.GetBufferPointer(), &jsongen)) {
    printf('Couldn't serialize parsed data to JSON!\n');
    return 1;
  }