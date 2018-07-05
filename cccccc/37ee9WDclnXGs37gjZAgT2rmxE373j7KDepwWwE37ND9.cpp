
        
        namespace index {
    }
    
      size_t NumChildren;
    
      virtual void handleDiagnostic(SourceManager &SM, SourceLoc Loc,
                                DiagnosticKind Kind,
                                StringRef FormatString,
                                ArrayRef<DiagnosticArgument> FormatArgs,
                                const DiagnosticInfo &Info) override;
    
      /// Returns true if range \c R contains the location \c Loc.  The location
  /// \c Loc should point at the beginning of the token.
  bool rangeContainsTokenLoc(SourceRange R, SourceLoc Loc) const {
    return Loc == R.Start || Loc == R.End ||
           (isBeforeInBuffer(R.Start, Loc) && isBeforeInBuffer(Loc, R.End));
  }
    
    // On OS X and iOS, swift_once_t matches dispatch_once_t.
typedef long swift_once_t;
    
    // On macOS and iOS, swift_once is implemented using GCD.
// The compiler emits an inline check matching the barrier-free inline fast
// path of dispatch_once(). See SwiftTargetInfo.OnceDonePredicateValue.
    
    void indexDeclContext(DeclContext *DC, IndexDataConsumer &consumer);
void indexSourceFile(SourceFile *SF, StringRef hash,
                     IndexDataConsumer &consumer);
void indexModule(ModuleDecl *module, StringRef hash,
                 IndexDataConsumer &consumer);
    
    #include 'Callee.h'
#include 'ManagedValue.h'
#include 'swift/AST/Types.h'
#include 'swift/Basic/LLVM.h'
#include 'swift/SIL/SILLocation.h'
#include <memory>
    
      /// Return true if the RHS have identical projection paths.
  ///
  /// If both LSBase have empty paths, they are treated as having
  /// identical projection path.
  bool hasIdenticalProjectionPath(const LSBase &RHS) const {
    // If both Paths have no value, then the 2 LSBases are
    // different.
    if (!Path.hasValue() && !RHS.Path.hasValue())
      return false;
    // If 1 Path has value while the other does not, then the 2
    // LSBases are different.
    if (Path.hasValue() != RHS.Path.hasValue())
      return false;
    // If both Paths are empty, then the 2 LSBases are the same.
    if (Path.getValue().empty() && RHS.Path.getValue().empty())
      return true;
    // If both Paths have different values, then the 2 LSBases are
    // different.
    if (Path.getValue() != RHS.Path.getValue())
      return false;
    // Otherwise, the 2 LSBases are the same.
    return true;
  }
    
      /// The entire text of the input file.
  const StringRef Text;
    
    
    {    auto I = std::lower_bound(Children.begin(), Children.end(), Idx,
                              [](IndexTrieNode *a, unsigned i) {
                                return a->Index < i;
                              });
    if (I != Children.end() && (*I)->Index == Idx)
      return *I;
    auto *N = new IndexTrieNode(Idx, this);
    Children.insert(I, N);
    return N;
  }
    
    
    {} // end namespace swift
    
    // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    namespace base {
class ListValue;
}
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
     protected:
  ~NwClipboardGetListSyncFunction() override;
    
    /**********************************************************************
 * DIR128::DIR128
 *
 * Quantize the direction of an FCOORD to make a DIR128.
 **********************************************************************/
    
    namespace tesseract {
    }
    
    #ifndef SWIG
template <class T1, class T2, class R, class P1, class P2, class P3, class A1, class A2>
inline typename _ConstTessMemberResultCallback_3_2<true,R,T1,P1,P2,P3,A1,A2>::base*
NewTessCallback(const T1* obj, R (T2::*member)(P1,P2,P3,A1,A2) const, typename Identity<P1>::type p1, typename Identity<P2>::type p2, typename Identity<P3>::type p3) {
  return new _ConstTessMemberResultCallback_3_2<true,R,T1,P1,P2,P3,A1,A2>(obj, member, p1, p2, p3);
}
#endif
    
    
    {  if (debugfp == nullptr && strlen(debug_file.string()) > 0) {
    debugfp = fopen(debug_file.string(), 'wb');
  } else if (debugfp != nullptr && strlen(debug_file.string()) == 0) {
    fclose(debugfp);
    debugfp = nullptr;
  }
  if (debugfp != nullptr)
    fprintf(debugfp, '%s', msg);
  else
    fprintf(stderr, '%s', msg);
  tesseract::tprintfMutex.Unlock();
}

    
    #include 'unicodes.h'
#include 'host.h'  // for nullptr
    
      // Returns the average (in some sense) distance between the two given
  // shapes, which may contain multiple fonts and/or unichars.
  // This function is public to facilitate testing.
  float ShapeDistance(const ShapeTable& shapes, int s1, int s2);
    
      // Returns the number of canonical features of font/class 2 for which
  // neither the feature nor any of its near neighbors occurs in the cloud
  // of font/class 1. Each such feature is a reliable separation between
  // the classes, ASSUMING that the canonical sample is sufficiently
  // representative that every sample has a feature near that particular
  // feature. To check that this is so on the fly would be prohibitively
  // expensive, but it might be possible to pre-qualify the canonical features
  // to include only those for which this assumption is true.
  // ComputeCanonicalFeatures and ComputeCloudFeatures must have been called
  // first, or the results will be nonsense.
  int ReliablySeparable(int font_id1, int class_id1,
                        int font_id2, int class_id2,
                        const IntFeatureMap& feature_map,
                        bool thorough) const;
    
    static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
    
    {	virtual btScalar addSingleResult(btCollisionWorld::LocalConvexResult &convexResult, bool normalInWorldSpace);
};
    
            int rc = m_crr[cr];
        int gc = ((m_crg[cr] + m_cbg[cb]) >> 16);
        int bc = m_cbb[cb];
    
        // Call this method after constructing the object to begin decompression.
    // If JPGD_SUCCESS is returned you may then call decode() on each scanline.
    int begin_decoding();
    
    
# if defined(OC_CLZ32)
/**
 * OC_ILOGNZ_32 - Integer binary logarithm of a non-zero 32-bit value.
 * @_v: A non-zero 32-bit value.
 * Returns floor(log2(_v))+1.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * If _v is zero, the return value is undefined; use OC_ILOG_32() instead.
 */
#  define OC_ILOGNZ_32(_v) (OC_CLZ32_OFFS-OC_CLZ32(_v))
/**
 * OC_ILOG_32 - Integer binary logarithm of a 32-bit value.
 * @_v: A 32-bit value.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 */
#  define OC_ILOG_32(_v)   (OC_ILOGNZ_32(_v)&-!!(_v))
# else
#  define OC_ILOGNZ_32(_v) (oc_ilog32(_v))
#  define OC_ILOG_32(_v)   (oc_ilog32(_v))
# endif
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
    #endif /* OPUS_HAVE_RTCD */
    
    #define _ISOC9X_SOURCE 1
#define _ISOC99_SOURCE 1
    
    #include <folly/Format.h>
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    #include 'hphp/util/disasm.h'
    
    using ClusterArcSet = std::unordered_set<ClusterArc, ClusterArcHash>;
    
      typedef std::function<void(pid_t)> LostChildHandler;
  static void SetLostChildHandler(const LostChildHandler& handler);
    
    #endif // incl_HPHP_SYNCHRONIZABLE_MULTI_H_

    
    namespace HPHP { namespace jit { namespace arm {
    }
    }
    }
    
    bool find_hugetlbfs_path() {
#ifdef __linux__
  auto mounts = fopen('/proc/mounts', 'r');
  if (!mounts) return false;
  // Search the file for lines like the following
  // none /dev/hugepages hugetlbfs seclabel,relatime...
  char line[4096];
  char path[4096];
  char option[4096];
  while (fgets(line, sizeof(line), mounts)) {
    if (sscanf(line, '%*s %s hugetlbfs %s', path, option) == 2) {
      // It matches hugetlbfs, check page size and save results.
      if (set_hugetlbfs_path(path)) {
        fclose(mounts);
        return true;
      }
    }
  }
  fclose(mounts);
#endif
  return false;
}
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
      struct tm result;
  gmtime_r((time_t*)&epoch, &result);
    
     public:
  bool shouldFire(const SCNetworkSubscriptionContextRef& sc,
                  const SCNetworkEventContextRef& ec) const override;
    
    /// Kernel shared buffer size in bytes.
static const size_t kKernelQueueSize = (20 * (1 << 20));
    
    
    {  template <typename EventType>
  KernelEventContextRef createEventContextFrom(osquery_event_t event_type,
                                               CQueue::event *event) const;
};