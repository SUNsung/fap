
        
        
    {}  // namespace atom
    
    
    {}  // namespace auto_updater

    
      PROCESS_BASIC_INFORMATION pbi;
  LONG status =
      NtQueryInformationProcess(handle, ProcessBasicInformation, &pbi,
                                sizeof(PROCESS_BASIC_INFORMATION), NULL);
  if (!NT_SUCCESS(status)) {
    LOG(ERROR) << 'NtQueryInformationProcess failed';
    return NULL;
  }
    
    #include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
    
        string filename = file->name();
    string basename = StripProto(filename);
    
    #include 'rect.h'    // for TBOX
#include 'strngs.h'  // for STRING
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    #endif

    
    #include <cstdio>
    
        REJ(  //classwise copy
        const REJ &source) {
      flags1 = source.flags1;
      flags2 = source.flags2;
    }
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    // A useful base class to facilitate the common operation of sorting a vector
// of owned pointer data using a separate key. This class owns its data pointer,
// deleting it when it has finished with it, and providing copy constructor and
// operator= that have move semantics so that the data does not get copied and
// only a single instance of KDPtrPair holds a specific data pointer.
template <typename Key, typename Data>
class KDPtrPair {
 public:
  KDPtrPair() : data_(nullptr) {}
  KDPtrPair(Key k, Data* d) : data_(d), key_(k) {}
  // Copy constructor steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  KDPtrPair(KDPtrPair& src) : data_(src.data_), key_(src.key_) {
    src.data_ = nullptr;
  }
  // Destructor deletes data, assuming it is the sole owner.
  ~KDPtrPair() {
    delete this->data_;
    this->data_ = nullptr;
  }
  // Operator= steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  void operator=(KDPtrPair& src) {
    delete this->data_;
    this->data_ = src.data_;
    src.data_ = nullptr;
    this->key_ = src.key_;
  }
    }