
        
            // OpenCV 3.x methods (not a part of standard C++ library)
    inline void release() { std::shared_ptr<T>::reset(); }
    inline operator T* () const { return std::shared_ptr<T>::get(); }
    inline bool empty() const { return std::shared_ptr<T>::get() == nullptr; }
    
    
    {                    v_dst.val[0] = v_c0.val[1];
                    v_dst.val[1] = v_c1.val[1];
                    v_dst.val[2] = v_c2.val[1];
                    vst3q_u8(dst0_row + dj + 48, v_dst);
                    vst3q_u8(dst1_row + dj + 48, v_dst);
                }
#endif
    
    
    {        void init(int n) {
            static const float r[] = { 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.000000f, 0.003602f, 0.017852f, 0.032110f, 0.046205f, 0.058378f, 0.068968f, 0.078624f, 0.087465f, 0.095645f, 0.103401f, 0.110658f, 0.117612f, 0.124291f, 0.130669f, 0.136830f, 0.142852f, 0.148638f, 0.154261f, 0.159733f, 0.165113f, 0.170362f, 0.175490f, 0.180503f, 0.185453f, 0.190303f, 0.195057f, 0.199764f, 0.204385f, 0.208926f, 0.213431f, 0.217863f, 0.222264f, 0.226598f, 0.230871f, 0.235120f, 0.239312f, 0.243485f, 0.247605f, 0.251675f, 0.255731f, 0.259740f, 0.263738f, 0.267693f, 0.271639f, 0.275513f, 0.279411f, 0.283240f, 0.287065f, 0.290884f, 0.294669f, 0.298421f, 0.302169f, 0.305886f, 0.309601f, 0.313287f, 0.316941f, 0.320595f, 0.324250f, 0.327875f, 0.331474f, 0.335073f, 0.338673f, 0.342246f, 0.345793f, 0.349341f, 0.352892f, 0.356418f, 0.359916f, 0.363446f, 0.366923f, 0.370430f, 0.373884f, 0.377371f, 0.380830f, 0.384268f, 0.387705f, 0.391151f, 0.394568f, 0.397991f, 0.401418f, 0.404820f, 0.408226f, 0.411607f, 0.414992f, 0.418383f, 0.421748f, 0.425120f, 0.428462f, 0.431817f, 0.435168f, 0.438504f, 0.441810f, 0.445148f, 0.448447f, 0.451759f, 0.455072f, 0.458366f, 0.461616f, 0.464947f, 0.468254f, 0.471501f, 0.474812f, 0.478186f, 0.481622f, 0.485141f, 0.488697f, 0.492278f, 0.495913f, 0.499552f, 0.503185f, 0.506866f, 0.510540f, 0.514226f, 0.517920f, 0.521643f, 0.525348f, 0.529086f, 0.532829f, 0.536553f, 0.540307f, 0.544069f, 0.547840f, 0.551612f, 0.555393f, 0.559181f, 0.562972f, 0.566802f, 0.570607f, 0.574417f, 0.578236f, 0.582087f, 0.585916f, 0.589753f, 0.593622f, 0.597469f, 0.601354f, 0.605211f, 0.609105f, 0.612977f, 0.616852f, 0.620765f, 0.624654f, 0.628576f, 0.632506f, 0.636412f, 0.640352f, 0.644270f, 0.648222f, 0.652178f, 0.656114f, 0.660082f, 0.664055f, 0.668008f, 0.671991f, 0.675981f, 0.679979f, 0.683950f, 0.687957f, 0.691971f, 0.695985f, 0.700008f, 0.704037f, 0.708067f, 0.712105f, 0.716177f, 0.720222f, 0.724274f, 0.728334f, 0.732422f, 0.736488f, 0.740589f, 0.744664f, 0.748772f, 0.752886f, 0.756975f, 0.761096f, 0.765223f, 0.769353f, 0.773486f, 0.777651f, 0.781795f, 0.785965f, 0.790116f, 0.794298f, 0.798480f, 0.802667f, 0.806859f, 0.811054f, 0.815274f, 0.819499f, 0.823729f, 0.827959f, 0.832192f, 0.836429f, 0.840693f, 0.844957f, 0.849223f, 0.853515f, 0.857809f, 0.862105f, 0.866421f, 0.870717f, 0.875057f, 0.879378f, 0.883720f, 0.888081f, 0.892440f, 0.896818f, 0.901195f, 0.905589f, 0.910000f, 0.914407f, 0.918828f, 0.923279f, 0.927724f, 0.932180f, 0.936660f, 0.941147f, 0.945654f, 0.950178f, 0.954725f, 0.959284f, 0.963872f, 0.968469f, 0.973114f, 0.977780f, 0.982497f, 0.987293f, 0.992218f, 0.994847f, 0.995249f, 0.995503f, 0.995737f };
            static const float g[] = { 0.135112f, 0.138068f, 0.141013f, 0.143951f, 0.146877f, 0.149791f, 0.152673f, 0.155377f, 0.157932f, 0.160495f, 0.163058f, 0.165621f, 0.168204f, 0.170800f, 0.173420f, 0.176082f, 0.178802f, 0.181610f, 0.184550f, 0.186915f, 0.188769f, 0.190950f, 0.193366f, 0.195911f, 0.198528f, 0.201199f, 0.203903f, 0.206629f, 0.209372f, 0.212122f, 0.214879f, 0.217643f, 0.220406f, 0.223170f, 0.225935f, 0.228697f, 0.231458f, 0.234216f, 0.236972f, 0.239724f, 0.242475f, 0.245221f, 0.247965f, 0.250707f, 0.253444f, 0.256180f, 0.258914f, 0.261644f, 0.264372f, 0.267099f, 0.269823f, 0.272546f, 0.275266f, 0.277985f, 0.280702f, 0.283419f, 0.286134f, 0.288848f, 0.291562f, 0.294274f, 0.296986f, 0.299698f, 0.302409f, 0.305120f, 0.307831f, 0.310542f, 0.313253f, 0.315965f, 0.318677f, 0.321390f, 0.324103f, 0.326816f, 0.329531f, 0.332247f, 0.334963f, 0.337681f, 0.340399f, 0.343120f, 0.345842f, 0.348565f, 0.351289f, 0.354016f, 0.356744f, 0.359474f, 0.362206f, 0.364939f, 0.367676f, 0.370414f, 0.373153f, 0.375896f, 0.378641f, 0.381388f, 0.384139f, 0.386890f, 0.389646f, 0.392404f, 0.395164f, 0.397928f, 0.400694f, 0.403464f, 0.406236f, 0.409011f, 0.411790f, 0.414572f, 0.417357f, 0.420145f, 0.422937f, 0.425733f, 0.428531f, 0.431334f, 0.434140f, 0.436950f, 0.439763f, 0.442580f, 0.445402f, 0.448226f, 0.451053f, 0.453887f, 0.456718f, 0.459552f, 0.462405f, 0.465241f, 0.468083f, 0.470960f, 0.473832f, 0.476699f, 0.479573f, 0.482451f, 0.485318f, 0.488198f, 0.491076f, 0.493960f, 0.496851f, 0.499743f, 0.502643f, 0.505546f, 0.508454f, 0.511367f, 0.514285f, 0.517207f, 0.520135f, 0.523067f, 0.526005f, 0.528948f, 0.531895f, 0.534849f, 0.537807f, 0.540771f, 0.543741f, 0.546715f, 0.549695f, 0.552682f, 0.555673f, 0.558670f, 0.561674f, 0.564682f, 0.567697f, 0.570718f, 0.573743f, 0.576777f, 0.579816f, 0.582861f, 0.585913f, 0.588970f, 0.592034f, 0.595104f, 0.598180f, 0.601264f, 0.604354f, 0.607450f, 0.610553f, 0.613664f, 0.616780f, 0.619904f, 0.623034f, 0.626171f, 0.629316f, 0.632468f, 0.635626f, 0.638793f, 0.641966f, 0.645145f, 0.648334f, 0.651529f, 0.654731f, 0.657942f, 0.661160f, 0.664384f, 0.667618f, 0.670859f, 0.674107f, 0.677364f, 0.680629f, 0.683900f, 0.687181f, 0.690470f, 0.693766f, 0.697071f, 0.700384f, 0.703705f, 0.707035f, 0.710373f, 0.713719f, 0.717074f, 0.720438f, 0.723810f, 0.727190f, 0.730580f, 0.733978f, 0.737385f, 0.740801f, 0.744226f, 0.747659f, 0.751101f, 0.754553f, 0.758014f, 0.761483f, 0.764962f, 0.768450f, 0.771947f, 0.775454f, 0.778969f, 0.782494f, 0.786028f, 0.789572f, 0.793125f, 0.796687f, 0.800258f, 0.803839f, 0.807430f, 0.811030f, 0.814639f, 0.818257f, 0.821885f, 0.825522f, 0.829168f, 0.832822f, 0.836486f, 0.840159f, 0.843841f, 0.847530f, 0.851228f, 0.854933f, 0.858646f, 0.862365f, 0.866089f, 0.869819f, 0.873550f, 0.877281f, 0.881008f, 0.884718f, 0.888385f, 0.892954f, 0.898384f, 0.903866f, 0.909344f };
            static const float b[] = { 0.304751f, 0.311105f, 0.317579f, 0.323982f, 0.330479f, 0.337065f, 0.343704f, 0.350500f, 0.357521f, 0.364534f, 0.371608f, 0.378769f, 0.385902f, 0.393100f, 0.400353f, 0.407577f, 0.414764f, 0.421859f, 0.428802f, 0.435532f, 0.439563f, 0.441085f, 0.441561f, 0.441564f, 0.441248f, 0.440785f, 0.440196f, 0.439531f, 0.438863f, 0.438105f, 0.437342f, 0.436593f, 0.435790f, 0.435067f, 0.434308f, 0.433547f, 0.432840f, 0.432148f, 0.431404f, 0.430752f, 0.430120f, 0.429528f, 0.428908f, 0.428325f, 0.427790f, 0.427299f, 0.426788f, 0.426329f, 0.425924f, 0.425497f, 0.425126f, 0.424809f, 0.424480f, 0.424206f, 0.423914f, 0.423678f, 0.423498f, 0.423304f, 0.423167f, 0.423014f, 0.422917f, 0.422873f, 0.422814f, 0.422810f, 0.422789f, 0.422821f, 0.422837f, 0.422979f, 0.423031f, 0.423211f, 0.423373f, 0.423517f, 0.423716f, 0.423973f, 0.424213f, 0.424512f, 0.424790f, 0.425120f, 0.425512f, 0.425889f, 0.426250f, 0.426670f, 0.427144f, 0.427605f, 0.428053f, 0.428559f, 0.429127f, 0.429685f, 0.430226f, 0.430823f, 0.431501f, 0.432075f, 0.432796f, 0.433428f, 0.434209f, 0.434890f, 0.435653f, 0.436475f, 0.437305f, 0.438096f, 0.438986f, 0.439848f, 0.440708f, 0.441642f, 0.442570f, 0.443577f, 0.444578f, 0.445560f, 0.446640f, 0.447692f, 0.448864f, 0.449982f, 0.451134f, 0.452341f, 0.453659f, 0.454885f, 0.456264f, 0.457582f, 0.458976f, 0.460457f, 0.461969f, 0.463395f, 0.464908f, 0.466357f, 0.467681f, 0.468845f, 0.469767f, 0.470384f, 0.471008f, 0.471453f, 0.471751f, 0.472032f, 0.472305f, 0.472432f, 0.472550f, 0.472640f, 0.472707f, 0.472639f, 0.472660f, 0.472543f, 0.472401f, 0.472352f, 0.472163f, 0.471947f, 0.471704f, 0.471439f, 0.471147f, 0.470829f, 0.470488f, 0.469988f, 0.469593f, 0.469172f, 0.468724f, 0.468118f, 0.467618f, 0.467090f, 0.466401f, 0.465821f, 0.465074f, 0.464441f, 0.463638f, 0.462950f, 0.462237f, 0.461351f, 0.460583f, 0.459641f, 0.458668f, 0.457818f, 0.456791f, 0.455886f, 0.454801f, 0.453689f, 0.452702f, 0.451534f, 0.450338f, 0.449270f, 0.448018f, 0.446736f, 0.445424f, 0.444251f, 0.442886f, 0.441491f, 0.440072f, 0.438624f, 0.437147f, 0.435647f, 0.434117f, 0.432386f, 0.430805f, 0.429194f, 0.427554f, 0.425717f, 0.424028f, 0.422131f, 0.420393f, 0.418448f, 0.416472f, 0.414659f, 0.412638f, 0.410587f, 0.408516f, 0.406422f, 0.404112f, 0.401966f, 0.399613f, 0.397423f, 0.395016f, 0.392597f, 0.390153f, 0.387684f, 0.385198f, 0.382504f, 0.379785f, 0.377043f, 0.374292f, 0.371529f, 0.368747f, 0.365746f, 0.362741f, 0.359729f, 0.356500f, 0.353259f, 0.350011f, 0.346571f, 0.343333f, 0.339685f, 0.336241f, 0.332599f, 0.328770f, 0.324968f, 0.320982f, 0.317021f, 0.312889f, 0.308594f, 0.304348f, 0.299960f, 0.295244f, 0.290611f, 0.285880f, 0.280876f, 0.275815f, 0.270532f, 0.265085f, 0.259365f, 0.253563f, 0.247445f, 0.241310f, 0.234677f, 0.227954f, 0.220878f, 0.213336f, 0.205468f, 0.203445f, 0.207561f, 0.212370f, 0.217772f };
            Mat X = linspace(0, 1, 256);
            this->_lut = ColorMap::linear_colormap(X,
                Mat(256, 1, CV_32FC1, (void*)r).clone(), // red
                Mat(256, 1, CV_32FC1, (void*)g).clone(), // green
                Mat(256, 1, CV_32FC1, (void*)b).clone(), // blue
                n);  // number of sample points
        }
    };
    
    
    {        template<typename U> static U  wrap_in (const U &u) { return  u;  }
        template<typename U> static U* wrap_out(U &u)       { return &u;  }
    };
    template<typename T> struct WrapValue<T, typename std::enable_if<has_custom_wrap<T>::value>::type>
    {
        static auto wrap(const T& t) -> decltype(GTypeTraits<T>::wrap_value(t))
        {
            return GTypeTraits<T>::wrap_value(t);
        }
        template<typename U> static auto wrap_in (const U &u) -> typename GTypeTraits<T>::strip_type
        {
            return GTypeTraits<T>::wrap_in(u);
        }
        template<typename U> static auto wrap_out(U &u) -> typename GTypeTraits<T>::strip_type
        {
            return GTypeTraits<T>::wrap_out(u);
        }
    };
    
    static void onMouse(int event, int x, int y, int flags, void*)
{
    if (event == EVENT_RBUTTONDOWN)
    {
        prevX = x;
        prevY = y;
    }
    if (event == EVENT_RBUTTONUP)
    {
        prevX = -1;
        prevY = -1;
    }
    if (prevX != -1)
    {
        tx += float((x - prevX) / 100.0);
        ty -= float((y - prevY) / 100.0);
        prevX = x;
        prevY = y;
    }
    if (event == EVENT_LBUTTONDOWN)
    {
        prevTheta = x;
        prevPhi = y;
    }
    if (event == EVENT_LBUTTONUP)
    {
        prevTheta = -1000;
        prevPhi = -1000;
    }
    if (prevTheta != -1000)
    {
        if (x - prevTheta<0)
        {
            thetaObs += 0.02f;
        }
        else if (x - prevTheta>0)
        {
            thetaObs -= 0.02f;
        }
        if (y - prevPhi<0)
        {
            phiObs -= 0.02f;
        }
        else if (y - prevPhi>0)
        {
            phiObs += 0.02f;
        }
        prevTheta = x;
        prevPhi = y;
    }
    if (event==EVENT_MOUSEWHEEL)
    {
        if (getMouseWheelDelta(flags)>0)
            rObs += 0.1f;
        else
            rObs -= 0.1f;
    }
    float pi = static_cast<float>(CV_PI);
    if (thetaObs>pi)
    {
        thetaObs = -2 * pi + thetaObs;
    }
    if (thetaObs<-pi)
    {
        thetaObs = 2 * pi + thetaObs;
    }
    if (phiObs>pi / 2)
    {
        phiObs = pi / 2 - 0.0001f;
    }
    if (phiObs<-pi / 2)
    {
        phiObs = -pi / 2 + 0.00001f;
    }
    if (rObs<0)
    {
        rObs = 0;
    }
    }
    
    
    {    ASSERT_TRUE(cv::imwrite(filenameOutput, img));
    const Mat img2 = cv::imread(filenameOutput, IMREAD_UNCHANGED);
    ASSERT_EQ(img2.type(), img.type());
    ASSERT_EQ(img2.size(), img.size());
    EXPECT_LE(cvtest::norm(img, img2, NORM_INF | NORM_RELATIVE), 1e-3);
    EXPECT_EQ(0, remove(filenameOutput.c_str()));
}
    
    
    {  EXPECT_EQ(
      'moved: repeated_int32[1] -> repeated_int32[3] : 502\n'
      'moved: repeated_int32[3] -> repeated_int32[0] : 500\n'
      'added: repeated_int32[1]: 509\n'
      'added: repeated_int32[4]: 504\n'
      'deleted: repeated_int32[0]: 501\n'
      'deleted: repeated_int32[4]: 500\n',
      Run());
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    void MapLiteTestUtil::SetArenaMapFields(unittest::TestArenaMapLite* message) {
  MapTestUtilImpl::SetArenaMapFields<unittest::MapEnumLite,
                                     unittest::MAP_ENUM_BAR_LITE,
                                     unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
    
    {
    {  // No default clause, clang will abort if a code is missing from
  // above switch.
  return 'UNKNOWN';
}
}  // namespace error.
    
    TEST(StatusOr, TestPointerAssignmentStatusOk) {
  const int kI = 0;
  StatusOr<const int*> source(&kI);
  StatusOr<const int*> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(source.ValueOrDie(), target.ValueOrDie());
}
    
    TEST(TemplateUtilTest, TestIdentity) {
  EXPECT_TRUE(
      (type_equals_<GOOGLE_NAMESPACE::identity_<int>::type, int>::value));
  EXPECT_TRUE(
      (type_equals_<GOOGLE_NAMESPACE::identity_<void>::type, void>::value));
}
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    namespace tesseract {
    }
    
    #include <cmath>
    
    // If filename is a leveldb file, store the type of the file in *type.
// The number encoded in the filename is stored in *number.  If the
// filename was successfully parsed, returns true.  Else return false.
bool ParseFileName(const std::string& filename, uint64_t* number,
                   FileType* type);
    
    
    {  // Errors
  static const char* errors[] = {'',
                                 'foo',
                                 'foo-dx-100.log',
                                 '.log',
                                 '',
                                 'manifest',
                                 'CURREN',
                                 'CURRENTX',
                                 'MANIFES',
                                 'MANIFEST',
                                 'MANIFEST-',
                                 'XMANIFEST-3',
                                 'MANIFEST-3x',
                                 'LOC',
                                 'LOCKx',
                                 'LO',
                                 'LOGx',
                                 '18446744073709551616.log',
                                 '184467440737095516150.log',
                                 '100',
                                 '100.',
                                 '100.lop'};
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
      size_t DeleteLogFiles() {
    // Linux allows unlinking open files, but Windows does not.
    // Closing the db allows for file deletion.
    Close();
    std::vector<uint64_t> logs = GetFiles(kLogFile);
    for (size_t i = 0; i < logs.size(); i++) {
      ASSERT_OK(env_->DeleteFile(LogName(logs[i]))) << LogName(logs[i]);
    }
    return logs.size();
  }
    
      // Forward iteration test
  for (int i = 0; i < R; i++) {
    SkipList<Key, Comparator>::Iterator iter(&list);
    iter.Seek(i);
    }
    
    TEST(VersionEditTest, EncodeDecode) {
  static const uint64_t kBig = 1ull << 50;
    }
    
    TEST(WriteBatchTest, Append) {
  WriteBatch b1, b2;
  WriteBatchInternal::SetSequence(&b1, 200);
  WriteBatchInternal::SetSequence(&b2, 300);
  b1.Append(b2);
  ASSERT_EQ('', PrintContents(&b1));
  b2.Put('a', 'va');
  b1.Append(b2);
  ASSERT_EQ('Put(a, va)@200', PrintContents(&b1));
  b2.Clear();
  b2.Put('b', 'vb');
  b1.Append(b2);
  ASSERT_EQ(
      'Put(a, va)@200'
      'Put(b, vb)@201',
      PrintContents(&b1));
  b2.Delete('foo');
  b1.Append(b2);
  ASSERT_EQ(
      'Put(a, va)@200'
      'Put(b, vb)@202'
      'Put(b, vb)@201'
      'Delete(foo)@203',
      PrintContents(&b1));
}
    
    
    {  // 'filter' contains the data appended by a preceding call to
  // CreateFilter() on this class.  This method must return true if
  // the key was in the list of keys passed to CreateFilter().
  // This method may return true or false if the key was not on the
  // list, but it should aim to return false with a high probability.
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const = 0;
};
    
    
    {}  // namespace leveldb
    
      WriteOptions write_options;
  ASSERT_OK(db->Put(write_options, '1', 'b'));
  ASSERT_OK(db->Put(write_options, '2', 'c'));
  ASSERT_OK(db->Put(write_options, '3', 'd'));
  ASSERT_OK(db->Put(write_options, '4', 'e'));
  ASSERT_OK(db->Put(write_options, '5', 'f'));
    
      bool Valid() const override { return false; }
  void Seek(const Slice& target) override {}
  void SeekToFirst() override {}
  void SeekToLast() override {}
  void Next() override { assert(false); }
  void Prev() override { assert(false); }
  Slice key() const override {
    assert(false);
    return Slice();
  }
  Slice value() const override {
    assert(false);
    return Slice();
  }
  Status status() const override { return status_; }
    
            /*virtual*/ void OnEpochEnd(const std::list<ComputationNodeBasePtr>& learnableNodes,
            std::list<MatrixBasePtr>& smoothedGradients,
            size_t samplesSinceLastSync) override
        {
            if (!m_someWorkerHasFinished)
            {
                // Let's update the other guys that we have finished.
                m_someWorkerHasFinished = true;
    }
    }
    
        // move to CPU since element-wise operation is expensive and can go wrong in GPU
    int curDevId = globalStdDev.GetDeviceId();
    globalStdDev.TransferFromDeviceToDevice(curDevId, CPUDEVICE, true, false, false);
    for (int i2 = 0; i2 < globalStdDev.GetNumRows(); i2++)
        globalStdDev(i2, 0) = (ElemType) 1.0 / (const ElemType) globalStdDev(i2, 0);
    globalStdDev.TransferFromDeviceToDevice(CPUDEVICE, curDevId, true, false, false);
    
    
    {        return mat;
    }
    
    
    {    optimizer->InitMPI(MPIWrapper::GetInstance());
    optimizer->Train(net, deviceId, dataReader.get(), cvDataReader.get(), startEpoch, loadNetworkFromCheckpoint);
}
    
    
    {            // for quote delimited string remove quotes
            if (stringParse[tokenStart] == ''')
            {
                tokenStart++;
                substrSize -= 2; // take out the quotes
            }
            //else if (substrSize == 0)
            //{
            //    InvalidArgument('ParseValue: No value given for '%s'.', key.c_str());
            //    //return npos;
            //}
            // Not a quoted string: It's an empty section. Nothing wrong with that, is it?
        }
        else if (substrSize == 0)
        {
            InvalidArgument('ParseValue: No value given for '%s'.', key.c_str());
        }
    
        // and a version that does it for only one root 'this'
    std::list<ComputationNodeBasePtr> EnumerateNodes() /*const*/
    {
        return EnumerateNodes(std::vector<ComputationNodeBasePtr>{shared_from_this()});
    }
    
        public:
        BasicModelAveragingSGD(const MPIWrapperPtr& pMPI, size_t reportFreq, DEVICEID_TYPE devID)
            : Base(pMPI, reportFreq, devID)
        {
            fprintf(stderr, 'Parallel training (%d workers) using ModelAveraging\n',(int)m_pMPI->NumNodesInUse());
        }
    
            std::vector<Matrix<ElemType>*> newGradients;
        size_t numGradMatrices = gradients.size();
        for (size_t i = 0; i < numGradMatrices; i++)
        {
            Matrix<ElemType>* bufferedGradientMatrix = m_bufferedGradients[gradients[i]].get();
            if ((bufferedGradientMatrix == nullptr) ||
                (bufferedGradientMatrix->GetNumCols() != gradients[i]->GetNumCols()) ||
                (bufferedGradientMatrix->GetNumRows() != gradients[i]->GetNumRows()) ||
                (bufferedGradientMatrix->GetDeviceId() != gradients[i]->GetDeviceId()))
            {
                LogicError('No buffered gradient matrix found corresponding to a gradient matrix to be aggregated!');
            }
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK { namespace Test {
    }
    }
    }
    }
    
    class TransactionDBMutexImpl : public TransactionDBMutex {
 public:
  TransactionDBMutexImpl() {}
  ~TransactionDBMutexImpl() override {}
    }
    
      CreateAndReopenWithCF({'pikachu'}, options);
  int key_index = 0;
  Random rnd(301);
  for (int num = 0; num < 8; num++) {
    Put('foo', 'bar');
    GenerateNewFile(&rnd, &key_index);
    dbfull()->TEST_WaitForCompact();
  }
  dbfull()->TEST_WaitForCompact();
    
    #if !defined(ROCKSDB_LITE) && !defined(OS_WIN)
    
      // close db
  for (auto handle : handles) {
    delete handle;
  }
  delete db;
    
    #include 'rocksdb/db.h'
#include 'rocksdb/status.h'
    
    #pragma once
// lua headers
extern 'C' {
#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>
}