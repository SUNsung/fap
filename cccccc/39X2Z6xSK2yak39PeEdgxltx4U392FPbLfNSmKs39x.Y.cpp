
        
        bool Converter<PersistentDictionary>::FromV8(v8::Isolate* isolate,
                                             v8::Local<v8::Value> val,
                                             PersistentDictionary* out) {
  if (!val->IsObject())
    return false;
  *out = PersistentDictionary(isolate, v8::Local<v8::Object>::Cast(val));
  return true;
}
    
    bool CertificateManagerModel::ImportServerCert(
    const net::ScopedCERTCertificateList& certificates,
    net::NSSCertDatabase::TrustBits trust_bits,
    net::NSSCertDatabase::ImportCertFailureList* not_imported) {
  return cert_db_->ImportServerCert(certificates, trust_bits, not_imported);
}
    
      template <typename T>
  bool GetHolder(T* out) {
    return ConvertFromV8(isolate_, info_->Holder(), out);
  }
    
    template <size_t requested_index, size_t... indices>
struct IndicesGenerator {
  using type = typename IndicesGenerator<requested_index - 1,
                                         requested_index - 1,
                                         indices...>::type;
};
template <size_t... indices>
struct IndicesGenerator<0, indices...> {
  using type = IndicesHolder<indices...>;
};
    
    // Create a symlink. Returns true on success.
bool SymlinkPath(const base::FilePath& target, const base::FilePath& path) {
  if (!base::CreateSymbolicLink(target, path)) {
    // Double check the value in case symlink suceeded but we got an incorrect
    // failure due to NFS packet loss & retry.
    int saved_errno = errno;
    if (ReadLink(path) != target) {
      // If we failed to create the lock, most likely another instance won the
      // startup race.
      errno = saved_errno;
      PLOG(ERROR) << 'Failed to create ' << path.value();
      return false;
    }
  }
  return true;
}
    
    GlobalMenuBarRegistrarX11::~GlobalMenuBarRegistrarX11() {
  if (registrar_proxy_) {
    g_signal_handlers_disconnect_by_func(
        registrar_proxy_, reinterpret_cast<void*>(OnNameOwnerChangedThunk),
        this);
    g_object_unref(registrar_proxy_);
  }
}
    
    
    {  OutLines.append(Lines.begin(), Lines.end());
}

    
    /// Maintain a set of known CF types.
static bool isKnownCFTypeName(StringRef name) {
  return std::binary_search(KnownCFTypes, KnownCFTypes + NumKnownCFTypes,
                            name, SortByLengthComparator());
}
    
      bool isVoid() const {
    assert(isValid());
    return Decl.isNull();
  }
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file iter_prefetcher.h
 * \brief define a prefetcher using threaditer to keep k batch fetched
 */
#ifndef MXNET_IO_ITER_PREFETCHER_H_
#define MXNET_IO_ITER_PREFETCHER_H_
    
    MXNET_REGISTER_OP_PROPERTY(Crop, CropProp)
.describe(R'code(
    
    #ifndef MXNET_OPERATOR_CUDNN_LRN_INL_H_
#define MXNET_OPERATOR_CUDNN_LRN_INL_H_
#include <vector>
#include './lrn-inl.h'
    
    
    {        uint32_t scratch;
        bool success;
        __asm__ __volatile__
        (
            'movl %%ebx, %[scratch]\n\t'
            'movl %[desired_lo], %%ebx\n\t'
            'lock; cmpxchg8b %[dest]\n\t'
            'movl %[scratch], %%ebx\n\t'
            'sete %[success]\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '+A,A,A,A,A,A' (expected), [dest] '+m,m,m,m,m,m' (storage), [scratch] '=m,m,m,m,m,m' (scratch), [success] '=q,m,q,m,q,m' (success)
            : [desired_lo] 'S,S,D,D,m,m' ((uint32_t)desired), 'c,c,c,c,c,c' ((uint32_t)(desired >> 32))
#else
            : '+A' (expected), [dest] '+m' (storage), [scratch] '=m' (scratch), [success] '=q' (success)
            : [desired_lo] 'S' ((uint32_t)desired), 'c' ((uint32_t)(desired >> 32))
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return success;
#else
        bool success;
        __asm__ __volatile__
        (
            'lock; cmpxchg8b %[dest]\n\t'
            'sete %[success]\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '+A,A' (expected), [dest] '+m,m' (storage), [success] '=q,m' (success)
            : 'b,b' ((uint32_t)desired), 'c,c' ((uint32_t)(desired >> 32))
#else
            : '+A' (expected), [dest] '+m' (storage), [success] '=q' (success)
            : 'b' ((uint32_t)desired), 'c' ((uint32_t)(desired >> 32))
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return success;
#endif
    }