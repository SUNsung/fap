
        
          const ServiceDescriptor* service_descriptor =
      reinterpret_cast<PyDescriptorPool*>(self)->pool->FindServiceByName(
          string(name, name_size));
  if (service_descriptor == NULL) {
    return SetErrorFromCollector(
        reinterpret_cast<PyDescriptorPool*>(self)->error_collector, name,
        'service');
  }
    
      // The preferred MessageFactory to be used by descriptors.
  // TODO(amauryfa): Don't create the Factory from the DescriptorPool, but
  // use the one passed while creating message classes. And remove this member.
  PyMessageFactory* py_message_factory;
    
      // Restore SIGPIPE handling.
  signal(SIGPIPE, old_pipe_handler);
    
    template<typename T>
bool MathUtil::WithinFractionOrMargin(const T x, const T y,
                                      const T fraction, const T margin) {
  // Not just '0 <= fraction' to fool the compiler for unsigned types.
  GOOGLE_DCHECK((T(0) < fraction || T(0) == fraction) &&
         fraction < T(1) &&
         margin >= T(0));
    }
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    void MapLiteTestUtil::ExpectArenaMapFieldsSet(
    const unittest::TestArenaMapLite& message) {
  MapTestUtilImpl::ExpectArenaMapFieldsSet<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_BAZ_LITE>(
      message);
}
    
    
    {
    {  // No default clause, clang will abort if a code is missing from
  // above switch.
  return 'UNKNOWN';
}
}  // namespace error.
    
    #include <google/protobuf/stubs/common.h>
#include <gtest/gtest.h>
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    class LLSQ {
 public:
  LLSQ() {  // constructor
    clear();  // set to zeros
  }
  void clear();  // initialize
    }
    
    // Computes the histogram for the given image rectangle, and the given
// single channel. Each channel is always one byte per pixel.
// Histogram is always a kHistogramSize(256) element array to count
// occurrences of each pixel value.
void HistogramRect(Pix* src_pix, int channel,
                   int left, int top, int width, int height,
                   int* histogram);
    
        char display_char() {
      if (perm_rejected ())
        return MAP_REJECT_PERM;
      else if (accept_if_good_quality ())
        return MAP_REJECT_POTENTIAL;
      else if (rejected ())
        return MAP_REJECT_TEMP;
      else
        return MAP_ACCEPT;
    }
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(nullptr) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != nullptr) {
      other_end_->other_end_ = this;
      src.other_end_ = nullptr;
    }
  }
    }
    
      // Simple accessors.
  bool empty() const {
    return heap_.empty();
  }
  int size() const {
    return heap_.size();
  }
  int size_reserved() const {
    return heap_.size_reserved();
  }
  void clear() {
    // Clear truncates to 0 to keep the number reserved in tact.
    heap_.truncate(0);
  }
  // Provides access to the underlying vector.
  // Caution! any changes that modify the keys will invalidate the heap!
  GenericVector<Pair>* heap() {
    return &heap_;
  }
  // Provides read-only access to an element of the underlying vector.
  const Pair& get(int index) const {
    return heap_[index];
  }
    
    #ifndef TESSERACT_CCUTIL_UNICHARMAP_H_
#define TESSERACT_CCUTIL_UNICHARMAP_H_
    
    // Provides access to the ShapeTable that this classifier works with.
const ShapeTable* TessClassifier::GetShapeTable() const {
  return classify_->shape_table();
}
// Provides access to the UNICHARSET that this classifier works with.
// Only needs to be overridden if GetShapeTable() can return nullptr.
const UNICHARSET& TessClassifier::GetUnicharset() const {
  return classify_->unicharset;
}
    
      // Disable SSLv2 and enable all workarounds for buggy servers
  SSL_CTX_set_options(sslCtx_, SSL_OP_ALL | SSL_OP_NO_SSLv2 | ver_opts
#ifdef SSL_OP_SINGLE_ECDH_USE
                                   | SSL_OP_SINGLE_ECDH_USE
#endif // SSL_OP_SINGLE_ECDH_USE
#ifdef SSL_OP_NO_COMPRESSION
                                   | SSL_OP_NO_COMPRESSION
#endif // SSL_OP_NO_COMPRESSION
  );
  SSL_CTX_set_mode(sslCtx_, SSL_MODE_AUTO_RETRY);
  SSL_CTX_set_mode(sslCtx_, SSL_MODE_ENABLE_PARTIAL_WRITE);
#ifdef SSL_MODE_RELEASE_BUFFERS
  /* keep memory usage low */
  SSL_CTX_set_mode(sslCtx_, SSL_MODE_RELEASE_BUFFERS);
#endif
  if (SSL_CTX_set_cipher_list(sslCtx_, 'HIGH:!aNULL:!eNULL') == 0) {
    good_ = false;
    A2_LOG_ERROR(fmt('SSL_CTX_set_cipher_list() failed. Cause: %s',
                     ERR_error_string(ERR_get_error(), nullptr)));
  }
    
    ssize_t OpenSSLTLSSession::writeData(const void* data, size_t len)
{
  ERR_clear_error();
  rv_ = SSL_write(ssl_, data, len);
  if (rv_ <= 0) {
    if (wouldblock(ssl_, rv_)) {
      return TLS_ERR_WOULDBLOCK;
    }
    else {
      return TLS_ERR_ERROR;
    }
  }
  else {
    ssize_t ret = rv_;
    rv_ = 1;
    return ret;
  }
}
    
    PrefPtr i2p(size_t id) { return getPrefFactory()->i2p(id); }
    
    
    {} // namespace aria2
    
    void setGlobalSignalHandler(int sig, sigset_t* mask, signal_handler_t handler,
                            int flags)
{
#if _WIN32
  if (sig == SIGINT || sig == SIGTERM) {
    // Handler will be called on a new/different thread.
    LockGuard lg(win_signal_lock);
    }
    }
    
    
    {  static void setInitialized6(bool f) { data6_.initialized = f; }
};
    
      virtual ~DHTResponseMessage();
    
      bool addNode(const std::shared_ptr<DHTNode>& node);
    
    #include 'common.h'