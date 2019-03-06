
        
        #endif  // ATOM_APP_UV_TASK_RUNNER_H_

    
    void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
    AboutProtocolHandler::AboutProtocolHandler() {}
    
    namespace asar {
    }
    
    
    
    private:
    reverse_lock(reverse_lock const&);
    reverse_lock& operator=(reverse_lock const&);
    
        while (outlen > 0) {
        secp256k1_hmac_sha256_t hmac;
        int now = outlen;
        secp256k1_hmac_sha256_initialize(&hmac, rng->k, 32);
        secp256k1_hmac_sha256_write(&hmac, rng->v, 32);
        secp256k1_hmac_sha256_finalize(&hmac, rng->v);
        if (now > 32) {
            now = 32;
        }
        memcpy(out, rng->v, now);
        out += now;
        outlen -= now;
    }
    
        // create an array from an array_t value
    json::array_t array_value = {'one', 'two', 3, 4.5, false};
    json j_array_t(array_value);
    
        static BOOST_FORCEINLINE void fence_before_store(memory_order order) BOOST_NOEXCEPT
    {
        BOOST_ATOMIC_DETAIL_COMPILER_BARRIER();
    }
    
    #ifndef BOOST_ATOMIC_DETAIL_PAUSE_HPP_INCLUDED_
#define BOOST_ATOMIC_DETAIL_PAUSE_HPP_INCLUDED_
    
    using atomics::atomic_thread_fence;
using atomics::atomic_signal_fence;
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/ANTLRException.hpp#2 $
 */
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/ASTRefCount.hpp#2 $
 */
    
    #include <antlr/config.hpp>
#include <vector>
#include <stdexcept>
    
    #endif //INC_CharStreamException_hpp__

    
    
    {	IOException( ANTLR_USE_NAMESPACE(std)exception& e )
		: ANTLRException(e.what())
	{
	}
	IOException( const ANTLR_USE_NAMESPACE(std)string& mesg )
		: ANTLRException(mesg)
	{
	}
	virtual ~IOException() throw()
	{
	}
};
    
    	/** Consume another token from the input stream.  Can only write sequentially!
	 * If you need 3 tokens ahead, you must consume() 3 times.
	 * <p>
	 * Note that it is possible to overwrite tokens that have not been matched.
	 * For example, calling consume() 3 times when k=2, means that the first token
	 * consumed will be overwritten with the 3rd.
	 */
	virtual inline void consume()
	{
		inputState->getInput().consume();
	}
    
    namespace codegen {
namespace common {
    }
    }
    
    std::string relativeLocalPath(const QString &filepath) {
	auto name = QFile::encodeName(QDir(WorkingPath).relativeFilePath(filepath));
	return name.constData();
}
    
    	bool writeHeader();
	bool writeSource();
    
    		// Working path
		} else if (arg == '-w') {
			if (++i == count) {
				logError(kErrorWorkingPathExpected, 'Command Line') << 'working path expected after -w';
				return Options();
			} else {
				common::logSetWorkingPath(args.at(i));
			}
		} else if (arg.startsWith('-w')) {
			common::logSetWorkingPath(arg.mid(2));
    
    // Parsing failed if inputPath is empty in the result.
Options parseOptions();
    
    // Walks through a file, parses it and generates the output.
class Processor {
public:
	explicit Processor(const Options &options);
	Processor(const Processor &other) = delete;
	Processor &operator=(const Processor &other) = delete;
    }
    
    For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once
    
    
    {};
    
    int sum(vector<int>& v){
    int s=0;
    for(int i=0; i<v.size(); i++){
        s += v[i];
    }
    return s;
}
    
    
int printMatrix(vector< vector<int> > &vv)
{
    for(int i=0; i<vv.size(); i++) {
        cout << '[';
        for(int j=0; j<vv[i].size(); j++) {
            cout << ' ' << vv[i][j];
        }
        cout << ']' << endl;;
    }
}
    
    /********************************************************************************** 
 * Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 *
 * For example:
 * Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 *
 * Follow up:
 * 	Could you do it without any loop/recursion in O(1) runtime?
 *
 **********************************************************************************/
    
    
vector<string> Parse(string& s){
    vector<string> exp;
    for(int i=0; i<s.size(); ){
        char c = s[i];
        string token;
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')' ) {
            exp.push_back(token+c);
            i++;
            continue;
        }
        if ( isdigit(c) ) {
            while( isdigit(s[i]) ) {
                token.push_back(s[i++]);
            }
            exp.push_back(token);
            continue;
        }
        i++;
    }
    return exp;
}
    
    int alternate_format_size() {
  return sizeof(data) / sizeof(data[0]);
}
    
    // A function to convert T* into scoped_ptr<T>
// Doing e.g. make_scoped_ptr(new FooBarBaz<type>(arg)) is a shorter notation
// for scoped_ptr<FooBarBaz<type> >(new FooBarBaz<type>(arg))
template <typename T>
scoped_ptr<T> make_scoped_ptr(T* ptr) {
  return scoped_ptr<T>(ptr);
}
    
    // Note that this implementation is not thread-safe. For a thread-safe
// implementation on non-POSIX platforms, please compile with
// -DI18N_PHONENUMBERS_USE_BOOST.
template <class T>
class Singleton {
 public:
  Singleton() : thread_checker_() {}
    }
    
      // Avoid the cost of BuildLookupTable() for a single-character search.
  if (s.length_ == 1)
    return find_first_not_of(s.ptr_[0], pos);
    
      void CopyToString(std::string* target) const;
  void AppendToString(std::string* target) const;
    
      void Release() const {
    int ret = pthread_mutex_unlock(&mutex_);
    (void) ret;
    DCHECK_EQ(0, ret);
  }
    
    template <class T, class U> struct is_same : public false_type {};
template <class T> struct is_same<T,T> : true_type {};
    
    #if !defined(NDEBUG) && !defined(I18N_PHONENUMBERS_USE_BOOST) && \
    (defined(__linux__) || defined(__apple__))
    
    class EncodingUtils {
 public:
  // Decodes one Unicode code-point value from a UTF-8 array. Returns the number
  // of bytes read from the array. If the array does not contain valid UTF-8,
  // the function stores 0xFFFD in the output variable and returns 1.
  static inline int DecodeUTF8Char(const char* in, char32* out) {
    Rune r;
    int len = chartorune(&r, in);
    *out = r;
    return len;
  }
    }
    
    AreaCodeMap::~AreaCodeMap() {
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(AreaCodeMap);
};
    
    using std::string;
    
    /**
 * Wrapper for file based (read/write) event notifications.
 */
class FileEvent {
public:
  virtual ~FileEvent() {}
    }
    
      /**
   * Init must be called in order to initialize the compressor. Once compressor is initialized, it
   * cannot be initialized again. Init should run before compressing any data.
   * @param level @see CompressionLevel enum
   * @param strategy @see CompressionStrategy enum
   * @param window_bits sets the size of the history buffer. Larger values result in better
   * compression, but will use more memory @see window_bits. (zlib manual)
   * @param memory_level sets how much memory should be allocated for the internal compression, min
   * 1 and max 9. @see memory_level (zlib manual)
   */
  void init(CompressionLevel level, CompressionStrategy strategy, int64_t window_bits,
            uint64_t memory_level);
    
    
    {  // We don't have v1 JSON with unresolved addresses in non-URL form.
  ASSERT(url);
  // Non-TCP scheme (e.g. Unix scheme) is not supported with unresolved address.
  if (!Network::Utility::urlIsTcpScheme(json_address)) {
    throw EnvoyException(fmt::format('unresolved URL must be TCP scheme, got: {}', json_address));
  }
  address.mutable_socket_address()->set_address(Network::Utility::hostFromTcpUrl(json_address));
  address.mutable_socket_address()->set_port_value(Network::Utility::portFromTcpUrl(json_address));
}