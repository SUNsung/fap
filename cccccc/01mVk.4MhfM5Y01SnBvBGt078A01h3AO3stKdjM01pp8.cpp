class Env;
class Iterator;
class TableCache;
class VersionEdit;
    
      inline void ClearSavedValue() {
    if (saved_value_.capacity() > 1048576) {
      std::string empty;
      swap(empty, saved_value_);
    } else {
      saved_value_.clear();
    }
  }
    
    
    {}  // namespace leveldb
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
    TableCache::~TableCache() {
  delete cache_;
}
    
    class TableCache {
 public:
  TableCache(const std::string& dbname, const Options* options, int entries);
  ~TableCache();
    }
    
    TEST(WriteBatchTest, Corruption) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  WriteBatchInternal::SetSequence(&batch, 200);
  Slice contents = WriteBatchInternal::Contents(&batch);
  WriteBatchInternal::SetContents(&batch,
                                  Slice(contents.data(),contents.size()-1));
  ASSERT_EQ('Put(foo, bar)@200'
            'ParseError()',
            PrintContents(&batch));
}
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
    
    {  // Intentionally copyable
};
    
    HINSTANCE g_hInst = NULL;
D3D_DRIVER_TYPE g_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL g_featureLevel = D3D_FEATURE_LEVEL_11_0;
ID3D11Device* g_pd3dDevice = NULL;
ID3D11DeviceContext* g_pImmediateContext = NULL;
IDXGISwapChain* g_pSwapChain = NULL;
    
    
    {    if(start_x == -1)
    {
        return 0;
    }
    else
    {
        low_thresh = cvRound(max_start_x + 0.25*(max_end_x - max_start_x));
        high_thresh = cvRound(max_start_x + 0.75*(max_end_x - max_start_x));
        return 1;
    }
}
    
    
    {            int tid = threadIdx.x;
            cta_buffer[tid] = predicate ? (1 << (tid & 31)) : 0;
            return warp_reduce(cta_buffer);
#endif
        }
    
    
    {    // Legacy
    extern void (CODEGEN_FUNCPTR *EnableClientState)(GLenum cap);
    extern void (CODEGEN_FUNCPTR *DisableClientState)(GLenum cap);
    extern void (CODEGEN_FUNCPTR *VertexPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid *ptr);
    extern void (CODEGEN_FUNCPTR *NormalPointer)(GLenum type, GLsizei stride, const GLvoid *ptr);
    extern void (CODEGEN_FUNCPTR *ColorPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid *ptr);
    extern void (CODEGEN_FUNCPTR *TexCoordPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid *ptr);
    extern void (CODEGEN_FUNCPTR *TexEnvi)(GLenum target, GLenum pname, GLint param);
    extern void (CODEGEN_FUNCPTR *MatrixMode)(GLenum mode);
    extern void (CODEGEN_FUNCPTR *LoadIdentity)(void);
    extern void (CODEGEN_FUNCPTR *Ortho)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
    extern void (CODEGEN_FUNCPTR *Color3d)(GLdouble red, GLdouble green, GLdouble blue);
}
    
    namespace cv
{
    }