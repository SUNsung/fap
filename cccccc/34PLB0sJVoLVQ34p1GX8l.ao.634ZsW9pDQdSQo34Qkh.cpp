
        
        bool SubProcess::Wait() {
  int status;
  return WaitInternal(&status);
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class TextLineReader : public ReaderBase {
 public:
  TextLineReader(const string& node_name, int skip_header_lines, Env* env)
      : ReaderBase(strings::StrCat('TextLineReader '', node_name, ''')),
        skip_header_lines_(skip_header_lines),
        env_(env),
        line_number_(0) {}
    }
    
    bool HloReachabilityMap::SetReachabilityToUnion(
    tensorflow::gtl::ArraySlice<const HloInstruction*> inputs,
    const HloInstruction* instruction) {
  BitVector& bit_vector = GetBitVector(instruction);
  tmp_bit_vector_ = bit_vector;
    }
    
        // pass address (value interface)
    iterator find(const K& key)                     { return m.find(&key); }
    const_iterator find(const K& key) const         { return m.find(&key); }
    iterator lower_bound(const K& key)              { return m.lower_bound(&key); }
    const_iterator lower_bound(const K& key) const  { return m.lower_bound(&key); }
    size_type erase(const K& key)                   { return m.erase(&key); }
    size_type count(const K& key) const             { return m.count(&key); }
    
        TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
extern Status BuildTable(const std::string& dbname,
                         Env* env,
                         const Options& options,
                         TableCache* table_cache,
                         Iterator* iter,
                         FileMetaData* meta);
    
    bool GuessType(const std::string& fname, FileType* type) {
  size_t pos = fname.rfind('/');
  std::string basename;
  if (pos == std::string::npos) {
    basename = fname;
  } else {
    basename = std::string(fname.data() + pos + 1, fname.size() - pos - 1);
  }
  uint64_t ignored;
  return ParseFileName(basename, &ignored, type);
}
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
    
    {}  // namespace leveldb
    
    CvRect cvGetValidDisparityROI( CvRect roi1, CvRect roi2, int minDisparity,
                              int numberOfDisparities, int SADWindowSize )
{
    return (CvRect)cv::getValidDisparityROI( roi1, roi2, minDisparity,
                                            numberOfDisparities, SADWindowSize );
}
    
      R = sqrt(R2);
  double inv_R = 1. / R;
    
        Mat black_comp, white_comp;
    for(int i = 0; i < ncorners; i++)
    {
        int channels = 0;
        Rect roi(cvRound(corners[i].x - region_size.width), cvRound(corners[i].y - region_size.height),
            region_size.width*2 + 1, region_size.height*2 + 1);
        Mat img_roi = img(roi);
        calcHist(&img_roi, 1, &channels, Mat(), hist, 1, &nbins, &_ranges);
    }
    
            struct glob
        {
            static __device__ __forceinline__ int atomicAdd(int* address, int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ unsigned int atomicAdd(unsigned int* address, unsigned int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ float atomicAdd(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 200
                return ::atomicAdd(address, val);
            #else
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(val + __int_as_float(assumed)));
                } while (assumed != old);
                return __int_as_float(old);
            #endif
            }
            static __device__ __forceinline__ double atomicAdd(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(val + __longlong_as_double(assumed)));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
    }
    
    MatAllocator* cv::cuda::HostMem::getAllocator(AllocType alloc_type)
{
#ifndef HAVE_CUDA
    (void) alloc_type;
    throw_no_cuda();
    return NULL;
#else
    static std::map<unsigned int, Ptr<MatAllocator> > allocators;
    }
    
        static void CODEGEN_FUNCPTR Switch_VertexAttribI4usv(GLuint index, const GLushort *v)
    {
        VertexAttribI4usv = (PFNVERTEXATTRIBI4USVPROC)IntGetProcAddress('glVertexAttribI4usv');
        VertexAttribI4usv(index, v);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
    
    
      {2,0,32,  &_residue_44_mid,
   &_huff_book__16c1_s_long,&_huff_book__16c1_s_long,
   &_resbook_16s_1,&_resbook_16s_1}
};
static const vorbis_residue_template _res_16s_2[]={
  {2,0,32,  &_residue_44_high,
   &_huff_book__16c2_s_short,&_huff_book__16c2_s_short,
   &_resbook_16s_2,&_resbook_16s_2},
    
    static const static_bookblock _resbook_44s_n1={
  {
    {0},{0,0,&_44cn1_s_p1_0},{0,0,&_44cn1_s_p2_0},
    {0,0,&_44cn1_s_p3_0},{0,0,&_44cn1_s_p4_0},{0,0,&_44cn1_s_p5_0},
    {&_44cn1_s_p6_0,&_44cn1_s_p6_1},{&_44cn1_s_p7_0,&_44cn1_s_p7_1},
    {&_44cn1_s_p8_0,&_44cn1_s_p8_1,&_44cn1_s_p8_2}
   }
};
static const static_bookblock _resbook_44sm_n1={
  {
    {0},{0,0,&_44cn1_sm_p1_0},{0,0,&_44cn1_sm_p2_0},
    {0,0,&_44cn1_sm_p3_0},{0,0,&_44cn1_sm_p4_0},{0,0,&_44cn1_sm_p5_0},
    {&_44cn1_sm_p6_0,&_44cn1_sm_p6_1},{&_44cn1_sm_p7_0,&_44cn1_sm_p7_1},
    {&_44cn1_sm_p8_0,&_44cn1_sm_p8_1,&_44cn1_sm_p8_2}
   }
};
    
    static const static_bookblock _resbook_44u_n1={
  {
    {0},
    {0,0,&_44un1__p1_0},
    {0,0,&_44un1__p2_0},
    {0,0,&_44un1__p3_0},
    {0,0,&_44un1__p4_0},
    {0,0,&_44un1__p5_0},
    {&_44un1__p6_0,&_44un1__p6_1},
    {&_44un1__p7_0,&_44un1__p7_1,&_44un1__p7_2}
   }
};
static const static_bookblock _resbook_44u_0={
  {
    {0},
    {0,0,&_44u0__p1_0},
    {0,0,&_44u0__p2_0},
    {0,0,&_44u0__p3_0},
    {0,0,&_44u0__p4_0},
    {0,0,&_44u0__p5_0},
    {&_44u0__p6_0,&_44u0__p6_1},
    {&_44u0__p7_0,&_44u0__p7_1,&_44u0__p7_2}
   }
};
static const static_bookblock _resbook_44u_1={
  {
    {0},
    {0,0,&_44u1__p1_0},
    {0,0,&_44u1__p2_0},
    {0,0,&_44u1__p3_0},
    {0,0,&_44u1__p4_0},
    {0,0,&_44u1__p5_0},
    {&_44u1__p6_0,&_44u1__p6_1},
    {&_44u1__p7_0,&_44u1__p7_1,&_44u1__p7_2}
   }
};
static const static_bookblock _resbook_44u_2={
  {
    {0},
    {0,0,&_44u2__p1_0},
    {0,0,&_44u2__p2_0},
    {0,0,&_44u2__p3_0},
    {0,0,&_44u2__p4_0},
    {0,0,&_44u2__p5_0},
    {&_44u2__p6_0,&_44u2__p6_1},
    {&_44u2__p7_0,&_44u2__p7_1,&_44u2__p7_2}
   }
};
static const static_bookblock _resbook_44u_3={
  {
    {0},
    {0,0,&_44u3__p1_0},
    {0,0,&_44u3__p2_0},
    {0,0,&_44u3__p3_0},
    {0,0,&_44u3__p4_0},
    {0,0,&_44u3__p5_0},
    {&_44u3__p6_0,&_44u3__p6_1},
    {&_44u3__p7_0,&_44u3__p7_1,&_44u3__p7_2}
   }
};
static const static_bookblock _resbook_44u_4={
  {
    {0},
    {0,0,&_44u4__p1_0},
    {0,0,&_44u4__p2_0},
    {0,0,&_44u4__p3_0},
    {0,0,&_44u4__p4_0},
    {0,0,&_44u4__p5_0},
    {&_44u4__p6_0,&_44u4__p6_1},
    {&_44u4__p7_0,&_44u4__p7_1,&_44u4__p7_2}
   }
};
static const static_bookblock _resbook_44u_5={
  {
    {0},
    {0,0,&_44u5__p1_0},
    {0,0,&_44u5__p2_0},
    {0,0,&_44u5__p3_0},
    {0,0,&_44u5__p4_0},
    {0,0,&_44u5__p5_0},
    {0,0,&_44u5__p6_0},
    {&_44u5__p7_0,&_44u5__p7_1},
    {&_44u5__p8_0,&_44u5__p8_1},
    {&_44u5__p9_0,&_44u5__p9_1,&_44u5__p9_2}
   }
};
static const static_bookblock _resbook_44u_6={
  {
    {0},
    {0,0,&_44u6__p1_0},
    {0,0,&_44u6__p2_0},
    {0,0,&_44u6__p3_0},
    {0,0,&_44u6__p4_0},
    {0,0,&_44u6__p5_0},
    {0,0,&_44u6__p6_0},
    {&_44u6__p7_0,&_44u6__p7_1},
    {&_44u6__p8_0,&_44u6__p8_1},
    {&_44u6__p9_0,&_44u6__p9_1,&_44u6__p9_2}
   }
};
static const static_bookblock _resbook_44u_7={
  {
    {0},
    {0,0,&_44u7__p1_0},
    {0,0,&_44u7__p2_0},
    {0,0,&_44u7__p3_0},
    {0,0,&_44u7__p4_0},
    {0,0,&_44u7__p5_0},
    {0,0,&_44u7__p6_0},
    {&_44u7__p7_0,&_44u7__p7_1},
    {&_44u7__p8_0,&_44u7__p8_1},
    {&_44u7__p9_0,&_44u7__p9_1,&_44u7__p9_2}
   }
};
static const static_bookblock _resbook_44u_8={
  {
    {0},
    {0,0,&_44u8_p1_0},
    {0,0,&_44u8_p2_0},
    {0,0,&_44u8_p3_0},
    {0,0,&_44u8_p4_0},
    {&_44u8_p5_0,&_44u8_p5_1},
    {&_44u8_p6_0,&_44u8_p6_1},
    {&_44u8_p7_0,&_44u8_p7_1},
    {&_44u8_p8_0,&_44u8_p8_1},
    {&_44u8_p9_0,&_44u8_p9_1,&_44u8_p9_2}
   }
};
static const static_bookblock _resbook_44u_9={
  {
    {0},
    {0,0,&_44u9_p1_0},
    {0,0,&_44u9_p2_0},
    {0,0,&_44u9_p3_0},
    {0,0,&_44u9_p4_0},
    {&_44u9_p5_0,&_44u9_p5_1},
    {&_44u9_p6_0,&_44u9_p6_1},
    {&_44u9_p7_0,&_44u9_p7_1},
    {&_44u9_p8_0,&_44u9_p8_1},
    {&_44u9_p9_0,&_44u9_p9_1,&_44u9_p9_2}
   }
};
    
    #  define BF_ENC(LL,R,S,P) ( \
        LL^=P, \
        LL^= (((*(BF_LONG *)((unsigned char *)&(S[  0])+((R>>BF_0)&BF_M))+ \
                *(BF_LONG *)((unsigned char *)&(S[256])+((R>>BF_1)&BF_M)))^ \
                *(BF_LONG *)((unsigned char *)&(S[512])+((R>>BF_2)&BF_M)))+ \
                *(BF_LONG *)((unsigned char *)&(S[768])+((R<<BF_3)&BF_M))) \
        )
# else
    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
    #include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
    
        // Write the result to the database
    db_->Put(put_option_, key, it.WriteResult());
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
    #ifndef JAVA_ROCKSJNI_STATISTICSJNI_H_
#define JAVA_ROCKSJNI_STATISTICSJNI_H_
    
      unique_ptr<WritableFile> writable_file;
  fname = test::TmpDir() + '/FailWhenSameKeyInserted';
  ASSERT_OK(env_->NewWritableFile(fname, &writable_file, env_options_));
  unique_ptr<WritableFileWriter> file_writer(
      new WritableFileWriter(std::move(writable_file), EnvOptions()));
  CuckooTableBuilder builder(file_writer.get(), kHashTableRatio, num_hash_fun,
                             100, BytewiseComparator(), 1, false, false,
                             GetSliceHash, 0 /* column_family_id */,
                             kDefaultColumnFamilyName);
  ASSERT_OK(builder.status());
    
      bool enableMmap_;
  unsigned char* mapaddr_;
  int64_t maplen_;
    
    protected:
  DownloadEngine* getDownloadEngine() { return e_; }
  // Called after content body is completely sent.
  virtual void afterSend(const std::shared_ptr<HttpServer>& httpServer,
                         DownloadEngine* e) = 0;
    
    void AbstractOptionHandler::setInitialOption(bool f)
{
  updateFlags(FLAG_INITIAL_OPTION, f);
}
    
    
    {} // namespace aria2

    
      bool allTiersFailed() const;
    
    
    {} // namespace aria2
    
    private:
  void startAsyncFamily(const std::string& hostname, int family,
                        DownloadEngine* e, Command* command);
  void setNameResolverCheck(size_t resolverIndex, DownloadEngine* e,
                            Command* command);
  void disableNameResolverCheck(size_t index, DownloadEngine* e,
                                Command* command);