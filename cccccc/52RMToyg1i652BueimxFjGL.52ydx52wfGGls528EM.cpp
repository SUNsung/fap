
        
        
    {  if (data_channel->getRank() == 0) {
    auto float_tensor = buildTensor<float>({1, 2, 3}, 4.2);
    data_channel->send(*float_tensor, 1);
  } else if (data_channel->getRank() == 1) {
    auto float_tensor = buildTensor<float>({1, 2, 3}, -1.0);
    data_channel->receive(*float_tensor, 0);
    ASSERT_TENSOR_VALUE(float, *float_tensor, 4.2);
  }
}
    
    #include 'gloo/rendezvous/store.h'
#include 'gloo/transport/device.h'
    
    #define THDPStorage TH_CONCAT_3(THDP,Real,Storage)
#define THDPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THDPStorageClass TH_CONCAT_3(THDP,Real,StorageClass)
#define THDPStorage_(NAME) TH_CONCAT_4(THDP,Real,Storage_,NAME)
    
    
void unregister_fd(int fd) {
  pollfds.erase(
    std::remove_if(pollfds.begin(), pollfds.end(),
        [fd](const struct pollfd &pfd) { return pfd.fd == fd; }),
    pollfds.end());
  client_sessions.erase(fd);
}
    
      constexpr uint64_t sec_to_ns = 1000000000;
    
    struct SSATmp;
struct Type;
    
    void numa_bind_to(void* start, size_t size, int node) {
  if (!use_numa) return;
  numa_tonode_memory(start, size, node);
}
    
    
    {
    {    (void)memset(&utbuf, 0, sizeof(utbuf));
    utbuf.actime = sb->st_atime;
    utbuf.modtime = sb->st_mtime;
    (void) utime(name, &utbuf); /* don't care if loses */
#endif
  }
}
    
    void OfflineCode::disasm(FILE* file,
                         TCA fileStartAddr,
                         TCA codeStartAddr,
                         uint64_t codeLen,
                         const PerfEventsMap<TCA>& perfEvents,
                         BCMappingInfo bcMappingInfo,
                         bool printAddr,
                         bool printBinary) {
    }
    
    template<> inline
dnnError_t dnnLayoutCreateFromPrimitive<double>(
    dnnLayout_t* pLayout,
    const dnnPrimitive_t primitive,
    dnnResourceType_t type)
{
    return dnnLayoutCreateFromPrimitive_F64(pLayout, primitive, type);
}
    
        /*virtual*/ NDArrayViewPtr Value::Data() const
    {
        if (!m_data)
        {
            RuntimeError('This Value object is invalid and can no longer be accessed. This usually happens when a temporary Value object returned by the CNTK library'
                          ' is not cloned and accessed later after it has been erased by the library. The Value objects created inside and returned by the library from APIs '
                          'like Forward, Backward etc. are temporary and are only guaranteed to be valid until the next Forward/Backward call. If you want to access the Values '
                          'later, you must explicitly clone them.');
        }
    }
    
        mAsparse.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSR, true);
    Matrix<float>::ScaleAndAdd(alpha, mAsparse, Bd1);
    
        // ProcessNDLScript - Process the NDL script
    // netNdl - netNDL structure
    // ndlPassUntil - complete processing through this pass, all passes if ndlPassAll
    // fullValidate - validate as a complete network? (false if this might be a snippet of a full network)
    void ProcessNDLScript(NetNdl<ElemType>* netNdl, NDLPass ndlPassUntil = ndlPassAll, bool fullValidate = false)
    {
        ProcessNDLScript(netNdl->ndl, ndlPassUntil, netNdl->lastNode, fullValidate);
    }
    
    #include 'Basics.h'
#include 'ScriptableObjects.h'
#include 'BrainScriptParser.h'
    
    // ---------------------------------------------------------------------------
// ConfigException -- all errors from processing the config files are reported as ConfigException
// ---------------------------------------------------------------------------
    
    // TODO: make this proper C++ functions with variadic templates and a name that reflects their difference to fprintf(stderr) which already implies printing to log
// Print out a log message.  If the Tracing flag is set, prepend with a timestamp
#define LOGPRINTF(stream, ...) \
    do \
    { \
        PREPENDTS(stream); \
        fprintf(stream, __VA_ARGS__); \
    } while(0)
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }