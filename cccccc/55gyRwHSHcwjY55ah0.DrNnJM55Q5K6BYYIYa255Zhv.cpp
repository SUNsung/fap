
        
        #ifndef BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
#define BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
    
      static bool all_empty(const boost::asio::const_buffers_1& buffer_sequence)
  {
    return boost::asio::buffer_size(buffer_sequence) == 0;
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
        // Make a copy of the handler so that the memory can be deallocated before
    // the upcall is made. Even if we're not about to make an upcall, a
    // sub-object of the handler may be the true owner of the memory associated
    // with the handler. Consequently, a local copy of the handler is required
    // to ensure that any owning sub-object remains valid until after we have
    // deallocated the memory here.
    detail::binder2<Handler, boost::system::error_code, std::size_t>
      handler(o->handler_, o->ec_, o->bytes_transferred_);
    p.h = boost::asio::detail::addressof(handler.handler_);
    p.reset();
    
    #ifndef BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP
#define BOOST_ASIO_DETAIL_GCC_ARM_FENCED_BLOCK_HPP
    
    #endif // BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP

    
    # else // defined(BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT)
    
      STDMETHODIMP get_Length(UINT32 *value)
  {
    *value = length_;
    return S_OK;
  }
    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    #endif  // STORAGE_LEVELDB_DB_LOG_WRITER_H_

    
      bool AddFeature(size_t Idx, uint32_t NewSize, bool Shrink) {
    assert(NewSize);
    Idx = Idx % kFeatureSetSize;
    uint32_t OldSize = GetFeature(Idx);
    if (OldSize == 0 || (Shrink && OldSize > NewSize)) {
      if (OldSize > 0) {
        size_t OldIdx = SmallestElementPerFeature[Idx];
        InputInfo &II = *Inputs[OldIdx];
        assert(II.NumFeatures > 0);
        II.NumFeatures--;
        if (II.NumFeatures == 0)
          DeleteInput(OldIdx);
      }
      if (FeatureDebug)
        Printf('ADD FEATURE %zd sz %d\n', Idx, NewSize);
      SmallestElementPerFeature[Idx] = Inputs.size();
      InputSizesPerFeature[Idx] = NewSize;
      CountingFeatures = true;
      return true;
    }
    return false;
  }
    
      UnitVector InitialCorpus;
  for (auto &Inp : *Inputs) {
    Printf('Loading corpus dir: %s\n', Inp.c_str());
    ReadDirToVectorOfUnits(Inp.c_str(), &InitialCorpus, nullptr,
                           TemporaryMaxLen, /*ExitOnError=*/false);
  }
    
    #ifndef LLVM_FUZZER_EXT_FUNCTIONS_H
#define LLVM_FUZZER_EXT_FUNCTIONS_H
    
    namespace fuzzer {
    }
    
    size_t MutationDispatcher::Mutate_Custom(uint8_t *Data, size_t Size,
                                         size_t MaxSize) {
  return EF->LLVMFuzzerCustomMutator(Data, Size, MaxSize, Rand.Rand());
}
    
      if (Options.Verbosity >= 3)
    Printf('TraceSwitch: %p %zd # %zd; TryShort %d\n', PC, Val, NumCases,
           TryShort);
    
    
    {
    {      (void)sigemptyset(&BlockedSignalsSet);
      (void)sigaddset(&BlockedSignalsSet, SIGCHLD);
      if (sigprocmask(SIG_BLOCK, &BlockedSignalsSet, &OldBlockedSignalsSet) ==
          -1) {
        Printf('Failed to block SIGCHLD\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGQUIT, &OldSigQuitAction, NULL);
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
    }
    ++ActiveThreadCount;
  }