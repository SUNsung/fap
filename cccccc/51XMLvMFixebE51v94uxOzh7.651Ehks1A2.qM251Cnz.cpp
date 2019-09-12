
        
        GlobalMenuBarRegistrarX11::~GlobalMenuBarRegistrarX11() {
  if (registrar_proxy_) {
    g_signal_handlers_disconnect_by_func(
        registrar_proxy_, reinterpret_cast<void*>(OnNameOwnerChangedThunk),
        this);
    g_object_unref(registrar_proxy_);
  }
}
    
    bool CheckCommandLineArguments(int argc, base::CommandLine::CharType** argv) {
  const base::CommandLine::StringType dashdash(2, '-');
  bool block_args = false;
  for (int i = 0; i < argc; ++i) {
    if (argv[i] == dashdash)
      break;
    if (block_args) {
      return false;
    } else if (IsUrlArg(argv[i])) {
      block_args = true;
    }
  }
  return true;
}
    
    #include 'base/command_line.h'
    
    namespace api {
    }
    
    #ifndef SHELL_BROWSER_API_ATOM_API_WEB_CONTENTS_VIEW_H_
#define SHELL_BROWSER_API_ATOM_API_WEB_CONTENTS_VIEW_H_
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('addGuest', &AddGuest);
  dict.SetMethod('removeGuest', &RemoveGuest);
}
    
      /// Create a parameter list with the specified parameters, with no location
  /// info for the parens.
  static ParameterList *create(const ASTContext &C,
                               ArrayRef<ParamDecl*> params) {
    return create(C, SourceLoc(), params, SourceLoc());
  }
 
  /// Create an empty parameter list.
  static ParameterList *createEmpty(const ASTContext &C,
                                    SourceLoc LParenLoc = SourceLoc(),
                                    SourceLoc RParenLoc = SourceLoc()) {
    return create(C, LParenLoc, {}, RParenLoc);
  }
  
  /// Create a parameter list for a single parameter lacking location info.
  static ParameterList *createWithoutLoc(ParamDecl *decl) {
    return create(decl->getASTContext(), decl);
  }
    
    using namespace swift;
    
    #if __ANDROID_API__ < 21 // Introduced in Android API 21 - L
static inline long double swift_strtold_l(const char *nptr, char **endptr,
                                          locale_t) {
  return strtod(nptr, endptr);
}
#define strtold_l swift_strtold_l
#endif
    
      bool hasMangledMetadataSource() const {
    return MangledMetadataSource;
  }
    
    
    {  /// This class provides a non-trivial .cxx_destruct method, but
  /// its .cxx_construct is trivial.  For backwards compatibility,
  /// when setting this flag, HasCXXStructors must be set as well.
  HasCXXDestructorOnly = 0x00100
};
inline ObjCClassFlags &operator|=(ObjCClassFlags &lhs, ObjCClassFlags rhs) {
  lhs = ObjCClassFlags(uint32_t(lhs) | uint32_t(rhs));
  return lhs;
}
inline ObjCClassFlags operator|(ObjCClassFlags lhs, ObjCClassFlags rhs) {
  return (lhs |= rhs);
}
    
    namespace nwapi {
    }
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    
    {protected:
  BaseEvent(){}
  virtual ~BaseEvent(){}
};
    
    
    {  helper->DeleteAppCaches(url::Origin::Create(manifest_url));
  return true;
}
    
    #include <vector>
    
    class MutableIterator;
    
      // Fits a line to the points, returning the fitted line as a pair of
  // points, and the upper quartile error.
  double Fit(ICOORD* pt1, ICOORD* pt2) {
    return Fit(0, 0, pt1, pt2);
  }
  // Fits a line to the points, ignoring the skip_first initial points and the
  // skip_last final points, returning the fitted line as a pair of points,
  // and the upper quartile error.
  double Fit(int skip_first, int skip_last, ICOORD* pt1, ICOORD* pt2);
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                             int32_t n, int32_t sig_x, int64_t sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
      // Sets up the DENORM to execute a non-linear transformation based on
  // preserving an even distribution of stroke edges. The transformation
  // operates only within the given box, scaling input coords within the box
  // non-linearly to a box of target_width by target_height, with all other
  // coords being clipped to the box edge. As with SetupNormalization above,
  // final_xshift and final_yshift are applied after scaling, and the bottom-
  // left of box is used as a pre-scaling origin.
  // x_coords is a collection of the x-coords of vertical edges for each
  // y-coord starting at box.bottom().
  // y_coords is a collection of the y-coords of horizontal edges for each
  // x-coord starting at box.left().
  // Eg x_coords[0] is a collection of the x-coords of edges at y=bottom.
  // Eg x_coords[1] is a collection of the x-coords of edges at y=bottom + 1.
  // The second-level vectors must all be sorted in ascending order.
  void SetupNonLinear(const DENORM* predecessor, const TBOX& box,
                      float target_width, float target_height,
                      float final_xshift, float final_yshift,
                      const GenericVector<GenericVector<int> >& x_coords,
                      const GenericVector<GenericVector<int> >& y_coords);
    
    #endif  // TESSERACT_CCUTIL_KDPAIR_H_

    
    namespace tesseract {
    }
    
      static constexpr ptrdiff_t tableOff() {
    return offsetof(FixedStringMap, m_table);
  }
  static constexpr ptrdiff_t sizeOff() {
    return offsetof(FixedStringMap, m_extra);
  }
  static constexpr size_t sizeSize() {
    return sizeof(m_extra);
  }
private:
  struct Elm {
    LowStringPtr sd;
    V data;
  };
    
    
RangeState::RangeState(uintptr_t lowAddr, uintptr_t highAddr, Reserved)
  : low_use(lowAddr)
  , low_map(lowAddr)
  , high_use(highAddr)
  , high_map(highAddr)
  , low_internal(reinterpret_cast<char*>(lowAddr))
  , high_internal(reinterpret_cast<char*>(highAddr)) {
  constexpr size_t size2m = 2u << 20;
  always_assert((lowAddr <= highAddr) &&
                !(lowAddr % size2m) && !(highAddr % size2m));
}
    
      virtual ~RangeMapper() = default;
    
      // proxygen will send onTimeout if we don't receive data in this much time
  long maxWait = RuntimeOption::ConnectionTimeoutSeconds;
  if (maxWait <= 0) {
    maxWait = 50; // this was the default read timeout in LibEventServer
  }
  Lock lock(this);
  while (m_bodyData.empty() && !m_clientComplete) {
    VLOG(4) << 'waiting for POST data for maxWait=' << maxWait;
    wait(maxWait);
  }
  auto oldLength = m_bodyData.chainLength();
    
    //////////////////////////////////////////////////////////////////////
    
    const Func* lookupMethodCtx(const Class* cls,
                            const StringData* methodName,
                            const Class* pctx,
                            CallType lookupType,
                            bool raise = false);
    
    
    {  inited.store(true, std::memory_order_release);
}