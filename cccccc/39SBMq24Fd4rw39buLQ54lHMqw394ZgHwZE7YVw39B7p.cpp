
        
        // dims=[5, 4, 3, 2]->[3, 5, 4, 2]
TEST_F(MatrixTest, RotatingTranspose_2_0) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 2, 0, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][6, 7][12, 13][18, 19]]
  //                 [[24, 25][30, 31][36, 37][42, 43]]
  //                 [[48, 49][54, 55][60, 61][66, 67]]
  //                 [[72, 73][78, 79][84, 85][90, 91]]
  //                 [[96, 97][102, 103][108, 109][114, 115]]]
  //                [[[2,3]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(7, m(1, 1));
  EXPECT_EQ(24, m(4, 0));
  EXPECT_EQ(25, m(4, 1));
  EXPECT_EQ(30, m(5, 0));
  EXPECT_EQ(2, m(20, 0));
}
    
    
    {
    {      datadir = drive;
      datadir += dir;
      datadir += '/tessdata';
    }
#endif /* _WIN32 */
#if defined(TESSDATA_PREFIX)
  } else {
/* Use tessdata prefix which was compiled in. */
#define _STR(a) #a
#define _XSTR(a) _STR(a)
    datadir = _XSTR(TESSDATA_PREFIX) '/tessdata';
#undef _XSTR
#undef _STR
#endif
  }
    
     private:
  NormalizationMode norm_mode_;
  // Character set we are training for.
  UNICHARSET unicharset_;
  // Original feature space. Subspace mapping is contained in feature_map_.
  IntFeatureSpace feature_space_;
  TrainingSampleSet samples_;
  TrainingSampleSet junk_samples_;
  TrainingSampleSet verify_samples_;
  // Master shape table defines what fonts stay together until the leaves.
  ShapeTable master_shapes_;
  // Flat shape table has each unichar/font id pair in a separate shape.
  ShapeTable flat_shapes_;
  // Font metrics gathered from multiple files.
  FontInfoTable fontinfo_table_;
  // Array of xheights indexed by font ids in fontinfo_table_;
  GenericVector<int32_t> xheights_;
    
      // Gets a sample by its index.
  const TrainingSample* GetSample(int index) const;
    
    WIN_EXPORT void YGConfigSetContext(const YGConfigRef config, void *context);
WIN_EXPORT void *YGConfigGetContext(const YGConfigRef config);
    
        Config(void);
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
     public: // Layout inspectors
    
    #include <nbind/nbind.h>
    
      void reset(T* other = NULL) {
    T* old = (T*)pthread_getspecific(m_key);
    if (old != other) {
      FBASSERT(m_cleanup);
      m_cleanup(old);
      pthread_setspecific(m_key, other);
    }
  }
    
            // Register our message handler
        echo_server.set_message_handler(bind(&on_message,&echo_server,::_1,::_2));
    
        websocket::async_echo_server s1{&std::cout, 1};
    s1.set_option(read_message_max{64 * 1024 * 1024});
    s1.set_option(auto_fragment{false});
    s1.set_option(pmd);
    s1.open(endpoint_type{
        address_type::from_string('0.0.0.0'), 3000 }, ec);
    
        // this is a shared upgrade, no need to make it unique
    const char *buf = 'GET /socket.io/?EIO=4&transport=websocket HTTP/1.1\r\n'
                      'Host: server.example.com\r\n'
                      'Upgrade: websocket\r\n'
                      'Connection: Upgrade\r\n'
                      'Sec-WebSocket-Key: x3JJHMbDL1EzLkh9GBhXDw==\r\n'
                      'Sec-WebSocket-Version: 13\r\n\r\n';
    
    int main(int argc, char *argv[])
{
    // Read arguments
    if (argc != 5) {
        cout << 'Usage: throughput numberOfConnections payloadByteSize framesPerSend port' << endl;
        return -1;
    }
    }
    
    
    {            static size_t transform(const char *src, char *dst, size_t length, int transformData) {
                memcpy(dst, src, length);
                return length;
            }
        };
    
    #ifdef _WIN32
#define NOMINMAX
#include <WinSock2.h>
#include <Ws2tcpip.h>
#pragma comment(lib, 'ws2_32.lib')
#define SHUT_WR SD_SEND
#ifdef __MINGW32__
// Windows has always been tied to LE
#define htobe64(x) __builtin_bswap64(x)
#define be64toh(x) __builtin_bswap64(x)
#else
#define __thread __declspec(thread)
#define htobe64(x) htonll(x)
#define be64toh(x) ntohll(x)
#define pthread_t DWORD
#define pthread_self GetCurrentThreadId
#endif
#define WIN32_EXPORT __declspec(dllexport)
    
            // 15 bytes
        unsigned char spill[LONG_MESSAGE_HEADER - 1];
        OpCode opCode[2];
    
        if (dynamicZlibBuffer.length()) {
        dynamicZlibBuffer.append(zlibBuffer, DEFLATE_OUTPUT_CHUNK - compressor->avail_out);
    }
    
    template <bool isServer>
void WebSocket<isServer>::onEnd(uS::Socket *s) {
    WebSocket<isServer> *webSocket = static_cast<WebSocket<isServer> *>(s);
    }
    
    
    {}
    
    #include <napa/v8-helpers.h>
    
    /// <summary> The maximum message length of a single assert call. Anything over will be truncated. </summary>
static constexpr size_t MAX_ASSERT_MESSAGE_SIZE = 512;
    
        /// <summary> Interface for allocator. </summary>
    class Allocator {
    public:
        /// <summary> Allocate memory of given size. </summary>
        /// <param name='size'> Requested size. </summary>
        /// <returns> Allocated memory. May throw if error happens. </returns>
        virtual void* Allocate(size_t size) = 0;
    }
    
            CHECK_ARG(isolate, args.Length() == 0, 'class \'%s\' doesn't accept any arguments in constructor.'', WrapType::exportName);
        JS_ENSURE(isolate, args.IsConstructCall(), 'class \'%s\' allows constructor call only.', WrapType::exportName);
    
    namespace napa {
namespace module {
    }
    }
    
            template <class T>
        static inline T* Unwrap(v8::Local<v8::Object> handle) {
            assert(!handle.IsEmpty());
            assert(handle->InternalFieldCount() > 0);
    }