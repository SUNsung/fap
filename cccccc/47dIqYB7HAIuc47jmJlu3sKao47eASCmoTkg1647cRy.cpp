
        
            // Writing a binary file or initializing in RAM from ARPA:
    // Size for vocabulary.
    void *SetupJustVocab(std::size_t memory_size, uint8_t order);
    // Warning: can change the vocaulary base pointer.
    void *GrowForSearch(std::size_t memory_size, std::size_t vocab_pad, void *&vocab_base);
    // Warning: can change vocabulary and search base addresses.
    void WriteVocabWords(const std::string &buffer, void *&vocab_base, void *&search_base);
    // Write the header at the beginning of the file.
    void FinishFile(const Config &config, ModelType model_type, unsigned int search_version, const std::vector<uint64_t> &counts);
    
    
    {
    {
    {      order = current;
      if (!order) return;
    }
  }
}
    
    namespace {
class SizeNotify {
  public:
    explicit SizeNotify(std::size_t &out) : behind_(out) {}
    }
    }
    
    
  // Left rest options.  Only used when the model includes rest costs.
  enum RestFunction {
    REST_MAX,   // Maximum of any score to the left
    REST_LOWER, // Use lower-order files given below.
  };
  RestFunction rest_function;
  // Only used for REST_LOWER.
  std::vector<std::string> rest_lower_files;
    
    vector<vector<int> > fourSum(vector<int> &num, int target) {
    vector< vector<int> > result;
    if (num.size()<4) return result;
    sort( num.begin(), num.end() );
    
    for(int i=0; i<num.size()-3; i++) {
        //skip the duplication
        if (i>0 && num[i-1]==num[i]) continue;
        vector<int> n(num.begin()+i+1, num.end());
        vector<vector<int> > ret = threeSum(n, target-num[i]);
        for(int j=0; j<ret.size(); j++){
            ret[j].insert(ret[j].begin(), num[i]);
            result.push_back(ret[j]);
        }
    }
    }
    
            //regualr way
        int addDigits01(int num) {
            while(num > 9) {
                int sum;
                for(sum=0; num > 0; sum += num%10 , num/=10);
                num = sum;
            }
            return num;
    }
    
    long long calculate_exp(long long x, long long y, char op) {
    switch(op) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return x / y;
    }
    return -1;
}
    
    int Factorial( int number ) {
   return number <= 1 ? number : Factorial( number - 1 ) * number;  // fail
// return number <= 1 ? 1      : Factorial( number - 1 ) * number;  // pass
}
    
    TEST_CASE( '2: Factorial of 0 is 1 (fail)', '[multi-file:2]' ) {
    REQUIRE( Factorial(0) == 1 );
}
    
            REQUIRE( v.size() == 5 );
        REQUIRE( v.capacity() >= 5 );
    
            // IConfig interface
        bool allowThrows() const override;
        std::ostream& stream() const override;
        std::string name() const override;
        bool includeSuccessfulResults() const override;
        bool warnAboutMissingAssertions() const override;
        bool warnAboutNoTests() const override;
        ShowDurations::OrNot showDurations() const override;
        RunTests::InWhatOrder runOrder() const override;
        unsigned int rngSeed() const override;
        int benchmarkResolutionMultiple() const override;
        UseColour::YesOrNo useColour() const override;
        bool shouldDebugBreak() const override;
        int abortAfter() const override;
        bool showInvisibles() const override;
        Verbosity verbosity() const override;
    
            // Use constructed object for RAII guard
        Colour( Code _colourCode );
        Colour( Colour&& other ) noexcept;
        Colour& operator=( Colour&& other ) noexcept;
        ~Colour();
    
    #endif // TWOBLUECUBES_CATCH_CONTEXT_H_INCLUDED

    
        namespace Catch{
        // The standard POSIX way of detecting a debugger is to attempt to
        // ptrace() the process, but this needs to be done from a child and not
        // this process itself to still allow attaching to this process later
        // if wanted, so is rather heavy. Under Linux we have the PID of the
        // 'debugger' (which doesn't need to be gdb, of course, it could also
        // be strace, for example) in /proc/$PID/status, so just get it from
        // there instead.
        bool isDebuggerActive(){
            // Libstdc++ has a bug, where std::ifstream sets errno to 0
            // This way our users can properly assert over errno values
            ErrnoGuard guard;
            std::ifstream in('/proc/self/status');
            for( std::string line; std::getline(in, line); ) {
                static const int PREFIX_LEN = 11;
                if( line.compare(0, PREFIX_LEN, 'TracerPid:\t') == 0 ) {
                    // We're traced if the PID is not 0 and no other PID starts
                    // with 0 digit, so it's enough to check for just a single
                    // character.
                    return line.length() > PREFIX_LEN && line[PREFIX_LEN] != '0';
                }
            }
    }
    }
    
    namespace Envoy {
namespace Config {
    }
    }
    
    /**
 * Callback invoked when a FileEvent is ready for reading or writing.
 */
typedef std::function<void(uint32_t events)> FileReadyCb;
    
    namespace Envoy {
namespace Event {
    }
    }
    
    #include 'envoy/buffer/buffer.h'
#include 'envoy/http/header_map.h'
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
      // Accessors to get the owned object.
  // operator* and operator-> will assert() if there is no current object.
  element_type& operator*() const {
    assert(impl_.get() != NULL);
    return *impl_.get();
  }
  element_type* operator->() const  {
    assert(impl_.get() != NULL);
    return impl_.get();
  }
  element_type* get() const { return impl_.get(); }
    
    class Lock {
 public:
  Lock() {
    const int ret = pthread_mutex_init(&mutex_, NULL);
    (void) ret;
    DCHECK_EQ(0, ret);
  }
    }
    
    // Note that I18N_PHONENUMBERS_NO_THREAD_SAFETY must be defined only to let the
// user of the library know that it can't be used in a thread-safe manner when
// it is not depending on Boost.
#if !defined(__linux__) && !defined(__APPLE__) && \
    !defined(I18N_PHONENUMBERS_NO_THREAD_SAFETY)
#error Building without Boost, please provide \
       -DI18N_PHONENUMBERS_NO_THREAD_SAFETY
#endif
    
      virtual R Run(A1 a1, A2 a2, A3 a3, A4 a4) {
    return (instance_->*method_)(a1, a2, a3, a4);
  }
    
    #include 'phonenumbers/base/basictypes.h'
#include 'phonenumbers/base/logging.h'
#include 'phonenumbers/geocoding/geocoding_data.h'
    
    #include 'phonenumbers/geocoding/mapping_file_provider.h'
    
    
    {
    {}  // namespace phonenumbers
}  // namespace i18n