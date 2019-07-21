
        
        private:
    Ui::SignVerifyMessageDialog *ui;
    WalletModel *model;
    const PlatformStyle *platformStyle;
    
      // (a) Cause log sync calls to fail
  Options options = CurrentOptions();
  options.env = env_;
  Reopen(&options);
  env_->data_sync_error_.Release_Store(env_);
    
    #include <ctype.h>
#include <stdio.h>
#include 'db/filename.h'
#include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'util/logging.h'
    
      fname = CurrentFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kCurrentFile, type);
    
    INSTANTIATE_TEST_CASE_P(videoio, videoio_bunny,
                          testing::Combine(
                              testing::ValuesIn(bunny_params),
                              testing::ValuesIn(backend_params)));
    
        static CV_ALWAYS_INLINE
    void calculate_integral_for_line(const uchar *srcs,
                                     double *sums, double *sums_above,
                                     double *sqsums, double *sqsums_above,
                                     int num_ops_in_line)
    {
        __m512i sum_accumulator   = _mm512_setzero_si512();  // holds rolling sums for the line
        __m512i sqsum_accumulator = _mm512_setzero_si512();  // holds rolling sqsums for the line
    }
    
    Ptr<IVideoWriter> cv::create_MFX_writer(const std::string &filename, int _fourcc, double fps, const Size &frameSize, bool isColor)
{
    if (codecIdByFourCC(_fourcc) > 0)
    {
        Ptr<VideoWriter_IntelMFX> a = makePtr<VideoWriter_IntelMFX>(filename, _fourcc, fps, frameSize, isColor);
        if (a->isOpened())
            return a;
    }
    return Ptr<VideoWriter_IntelMFX>();
}

    
    #include 'precomp.hpp'
#ifdef HAVE_EIGEN
#include <Eigen/Core>
#include <Eigen/Dense>
#endif
    
        template <typename T> struct logical_not : unary_function<T, bool>
    {
        __device__ __forceinline__ bool operator ()(typename TypeTraits<T>::ParameterType a) const
        {
            return !a;
        }
        __host__ __device__ __forceinline__ logical_not() {}
        __host__ __device__ __forceinline__ logical_not(const logical_not&) {}
    };
    
    
    // Equals the GNU Octave colormap 'jet'.
    class Jet : public ColorMap {
    }
    
        glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // output changed array
    std::cout << array << '\n';
    
        // create (floating point) JSON numbers
    json j_ok(v_ok);
    json j_nan(v_nan);
    json j_infinity(v_infinity);
    json j_float(n_float);
    json j_float_nan(n_float_nan);
    json j_double(n_double);
    
    
    {/**
 * @brief Start a file carve of the given paths
 *
 * @return A status returning if the carves were started successfully
 */
Status carvePaths(const std::set<std::string>& paths);
} // namespace osquery

    
        writeTextFile(files_to_carve_dir_ / 'secrets.txt',
                  'This is a message I'd rather no one saw.');
    writeTextFile(files_to_carve_dir_ / 'evil.exe',
                  'MZP\x00\x02\x00\x00\x00\x04\x00\x0f\x00\xff\xff');
    
    
    {  return Status::success();
}
    
    namespace fs = boost::filesystem;
    
    ExpectedSuccess<DatabaseError> InMemoryDatabase::putString(
    const std::string& domain,
    const std::string& key,
    const std::string& value) {
  return putValue(domain, key, value);
}
    
    
    {} // namespace osquery

    
      // If this is an extension and the flag was not found, forward the request.
  if (Registry::get().external() && !found) {
    PluginResponse resp;
    Registry::call('config', {{'name', name}, {'action', 'option'}}, resp);
    if (resp.size() != 0) {
      auto value = resp[0].find('value');
      if (value != resp[0].end()) {
        return value->second;
      }
    }
  }
    
      /**
   * @brief Attach a table at runtime.
   *
   * The SQL implementation plugin may need to manage how virtual tables are
   * attached at run time. In the case of SQLite where a single DB object is
   * managed, tables are enumerated and attached during initialization.
   */
  virtual Status attach(const std::string& /*name*/) {
    return Status::success();
  }