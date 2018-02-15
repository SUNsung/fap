
        
                    template<typename T>
            static __device__ __forceinline__ T atomicAdd(T* address, T val)
            {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 120)
                T count;
                unsigned int tag = threadIdx.x << ( (sizeof(unsigned int) << 3) - 5U);
                do
                {
                    count = *address & TAG_MASK;
                    count = tag | (count + val);
                    *address = count;
                } while (*address != count);
    }
    
    namespace cv
{
CV_EXPORTS_W void add(InputArray src1, Scalar src2, OutputArray dst, InputArray mask=noArray(), int dtype=-1);
    }
    
        static void CODEGEN_FUNCPTR Switch_CompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
    {
        CompressedTexImage3D = (PFNCOMPRESSEDTEXIMAGE3DPROC)IntGetProcAddress('glCompressedTexImage3D');
        CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
    }
    
    #ifndef GL_VERSION_1_5
    // GL types for handling large vertex buffer objects
    typedef ptrdiff_t GLintptr;
    typedef ptrdiff_t GLsizeiptr;
#endif
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdBlas.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
    #include <memory>
    
    /// Credentials for an unencrypted, unauthenticated channel
std::shared_ptr<ChannelCredentials> InsecureChannelCredentials();
    
    /**
 * Disables or enables auto flush. By default, data is flushed after
 * every bidirectional_stream_write(). If the auto flush is disabled,
 * the client should explicitly call bidirectional_stream_flush to flush
 * the data.
 */
GRPC_SUPPORT_EXPORT void bidirectional_stream_disable_auto_flush(
    bidirectional_stream* stream,
    bool disable_auto_flush);
    
      // For now, we do not support copying.
  InlinedVector(const InlinedVector&) = delete;
  InlinedVector& operator=(const InlinedVector&) = delete;
    
    namespace grpc {
namespace testing {
    }
    }
    
    
    {  return 0;
}

    
    
    {    // Act upon its status.
    if (status.ok()) {
      return reply.message();
    } else {
      std::cout << status.error_code() << ': ' << status.error_message()
                << std::endl;
      return 'RPC failed';
    }
  }
    
      // Record metadata for testing initial offset functionality
  static size_t initial_offset_record_sizes_[];
  static uint64_t initial_offset_last_record_offsets_[];
  static int num_initial_offset_records_;
    
    
    {}  // namespace leveldb
    
    TEST(FindFileTest, OverlappingFiles) {
  Add('150', '600');
  Add('400', '500');
  disjoint_sorted_files_ = false;
  ASSERT_TRUE(! Overlaps('100', '149'));
  ASSERT_TRUE(! Overlaps('601', '700'));
  ASSERT_TRUE(Overlaps('100', '150'));
  ASSERT_TRUE(Overlaps('100', '200'));
  ASSERT_TRUE(Overlaps('100', '300'));
  ASSERT_TRUE(Overlaps('100', '400'));
  ASSERT_TRUE(Overlaps('100', '500'));
  ASSERT_TRUE(Overlaps('375', '400'));
  ASSERT_TRUE(Overlaps('450', '450'));
  ASSERT_TRUE(Overlaps('450', '500'));
  ASSERT_TRUE(Overlaps('450', '700'));
  ASSERT_TRUE(Overlaps('600', '700'));
}
    
        sqlite3_stmt *replace_stmt, *begin_trans_stmt, *end_trans_stmt;
    std::string replace_str = 'REPLACE INTO test (key, value) VALUES (?, ?)';
    std::string begin_trans_str = 'BEGIN TRANSACTION;';
    std::string end_trans_str = 'END TRANSACTION;';
    
    #if defined(__linux)
    time_t now = time(NULL);
    fprintf(stderr, 'Date:           %s', ctime(&now));  // ctime() adds newline
    
      // The following fields are not protected by any mutex. They are only mutable
  // while the file is being written, and concurrent access is not allowed
  // to writable files.
  std::vector<char*> blocks_;
  uint64_t size_;
    
      // create first key range
  leveldb::WriteBatch batch;
  for (size_t i = 0; i < kNumKeys; i++) {
    batch.Put(Key1(i), 'value for range 1 key');
  }
  ASSERT_OK(db->Write(leveldb::WriteOptions(), &batch));
    
    void Mutex::Lock() { PthreadCall('lock', pthread_mutex_lock(&mu_)); }
    
      virtual void CreateFilter(const Slice* keys, int n, std::string* dst) const {
    for (int i = 0; i < n; i++) {
      uint32_t h = Hash(keys[i].data(), keys[i].size(), 1);
      PutFixed32(dst, h);
    }
  }
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
extern Iterator* NewMergingIterator(
    const Comparator* comparator, Iterator** children, int n);
    
    	const char* pubkey = NULL;
	ScopedJstring jstr_pubkey(env, _pubkey);
	if (NULL != _pubkey) {
		pubkey = jstr_pubkey.GetChar();
	}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        void RemoveSpy(void* _this) {
        m_thismap.erase(_this);
    }
    
    #define DEFINE_HAS_MEMBER(member_name) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <int> struct tester;\
        template <typename U> static yes_type test(tester<sizeof(&U::member_name)>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}