
        
        #define THCPStorage TH_CONCAT_3(THCP,Real,Storage)
#define THCPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THCPStorageClass TH_CONCAT_3(THCP,Real,StorageClass)
#define THCPStorage_(NAME) TH_CONCAT_4(THCP,Real,Storage_,NAME)
    
      masterCommandChannel->sendMessage(
    packMessage(Functions::tensorGeqrf, ra, rtau, a),
    THDState::s_current_worker
  );
    
    SlowTimer::SlowTimer(int64_t msThreshold, const char *location, const char *info)
  : m_timer(Timer::WallTime), m_msThreshold(msThreshold) {
  if (location) m_location = location;
  if (info) m_info = info;
}
    
    #endif // incl_HPHP_PAGELET_SERVER_H_

    
        auto const privPropTy = [&] (const PropState& ps) -> Type {
      if (is_closure(cls)) {
        // For closures use variables will be the first properties of the
        // closure object, in declaration order
        if (uvIt != useVars.end()) return *uvIt++;
        return Type{};
      }
    }
    
    // Output DOT-format graph.  Paste into dot -Txlib or similar.
std::string dot_cfg(const Func& func) {
  std::string ret;
  for (auto& b : rpoSortAddDVs(func)) {
    ret += folly::format(
      'B{} [ label = \'blk:{}\\n\'+{} ]\n',
      b->id, b->id, dot_instructions(func, *b)).str();
    bool outputed = false;
    forEachNormalSuccessor(*b, [&] (BlockId target) {
      ret += folly::format('B{} -> B{};', b->id, target).str();
      outputed = true;
    });
    if (outputed) ret += '\n';
    outputed = false;
    if (!is_single_nop(*b)) {
      for (auto ex : b->throwExits) {
        ret += folly::sformat('B{} -> B{} [color=red];', b->id, ex);
        outputed = true;
      }
      for (auto ex : b->unwindExits) {
        ret += folly::sformat('B{} -> B{} [color=blue];', b->id, ex);
        outputed = true;
      }
    }
    if (outputed) ret += '\n';
  }
  return ret;
}
    
    TEST(Type, ArrEquivalentRepresentations) {
  {
    auto const simple = aval(test_array_packed_value());
    auto const bulky  = sarr_packed({ival(42), ival(23), ival(12)});
    EXPECT_EQ(simple, bulky);
  }
    }
    
      const String& getSandboxId() const;
  void setSandboxId(const String&);
    
    
    {  heap_.iterate(
    [&](HeapObject* h, size_t size) { // onBig
      ptrs_.insert(h, size);
      if (h->kind() == HeaderKind::BigMalloc &&
          !type_scan::isKnownType(static_cast<MallocNode*>(h)->typeIndex())) {
        ++unknown_;
        h->setmarks(mark_version_);
        cwork_.push_back(h);
      }
    },
    [&](HeapObject* h, size_t size) { // onSlab
      slab_map_.set(slab_index(h));
    }
  );
  ptrs_.prepare();
}
    
    #if 0   // merge leftover?
        // This will automatically discard a large fraction of the data, useful if the training data is known to be highly correlated
        if (dataDecimationFactor)
        {
            auto& pMBLayout = net->GetMBLayoutPtrOfNetwork();
    }
    
        // Determine the MB size used for mapping a given learning-rate or momentum parameter to a per-sample value.
    // MB size is the number of samples across all time steps and parallel sequences.
    // This function exists to post-fix a design bug in SGD:
    // In the case of BPTT, the 'minibatchSize' parameter given to the SGD module really means the truncation size,
    // while the MB size to be used is (truncation size * number of parallel sequences).
    // SGD also does not know #parallel sequences upfront.
    size_t FixUpEffectiveMBSize(size_t specifiedMBSize, size_t numParallelSequences) const
    {
        // remedy the bug that truncation size is incorrectly passed as MB size
        if (m_truncated && specifiedMBSize > 1)      // currently only happens in this mode
        {
            if (numParallelSequences == 0)
            {
                RuntimeError('Learning rate and momentum are not supported per minibatch, please specify them per sample.');
            }
    }
    }
    
                    msra::math::float4 m0 = *pusij; // gets i..i+3
                msra::math::float4 m1 = *pusijp1;
                msra::math::float4 m2 = *pusijp2;
                msra::math::float4 m3 = *pusijp3;
    
        static bool GetTimestampingFlag()
    {
        return GetStaticInstance().m_timestampFlag;
        // TODO: timestampFlag or timestampingFlag? (Or timeStampFlag?)
    }
    
    template <class _T>
class array_ref
{
    _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }