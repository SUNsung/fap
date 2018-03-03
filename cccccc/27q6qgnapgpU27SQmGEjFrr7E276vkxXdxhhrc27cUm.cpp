
        
          // Constructs a Message from a C-string.
  explicit Message(const char* str) : ss_(new ::std::stringstream) {
    *ss_ << str;
  }
    
    namespace internal {
    }
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2;
}
    
      // Returns true if pathname describes an absolute path.
  bool IsAbsolutePath() const;
    
      const string test_case_name_;
  TestInfoContainer tests_;
  InstantiationContainer instantiations_;
    
    
    {# endif  // GTEST_HAS_RTTI
}
    
    #include          <string.h>
#include          <ctype.h>
#include          'params.h'
#include          'float2int.h'
#include          'tesseractclass.h'
    
    namespace tesseract {
void Tesseract::tess_segment_pass_n(int pass_n, WERD_RES *word) {
  int saved_enable_assoc = 0;
  int saved_chop_enable = 0;
    }
    }
    
    namespace tesseract {
    }
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(inT64 cost, inT32 steps, const DPPoint* prev,
                             inT32 n, inT32 sig_x, inT64 sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
      // Calculate the scale factor we'll use to get to image y-pixels
  double midx = (bbox.left() + bbox.right()) / 2.0;
  double ydiff = (bbox.top() - bbox.bottom()) + 2.0;
  FCOORD mid_bot(midx, bbox.bottom()), tmid_bot;
  FCOORD mid_high(midx, bbox.bottom() + ydiff), tmid_high;
  DenormTransform(NULL, mid_bot, &tmid_bot);
  DenormTransform(NULL, mid_high, &tmid_high);
    
    #include          <stdio.h>
#include          <math.h>
#include          'elst.h'
    
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
    
    # define OC_STATIC_ILOG0(_v) (!!(_v))
# define OC_STATIC_ILOG1(_v) (((_v)&0x2)?2:OC_STATIC_ILOG0(_v))
# define OC_STATIC_ILOG2(_v) \
 (((_v)&0xC)?2+OC_STATIC_ILOG1((_v)>>2):OC_STATIC_ILOG1(_v))
# define OC_STATIC_ILOG3(_v) \
 (((_v)&0xF0)?4+OC_STATIC_ILOG2((_v)>>4):OC_STATIC_ILOG2(_v))
# define OC_STATIC_ILOG4(_v) \
 (((_v)&0xFF00)?8+OC_STATIC_ILOG3((_v)>>8):OC_STATIC_ILOG3(_v))
# define OC_STATIC_ILOG5(_v) \
 (((_v)&0xFFFF0000)?16+OC_STATIC_ILOG4((_v)>>16):OC_STATIC_ILOG4(_v))
# define OC_STATIC_ILOG6(_v) \
 (((_v)&0xFFFFFFFF00000000ULL)?32+OC_STATIC_ILOG5((_v)>>32):OC_STATIC_ILOG5(_v))
/**
 * OC_STATIC_ILOG_32 - The integer logarithm of an (unsigned, 32-bit) constant.
 * @_v: A non-negative 32-bit constant.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * This macro is suitable for evaluation at compile time, but it should not be
 *  used on values that can change at runtime, as it operates via exhaustive
 *  search.
 */
# define OC_STATIC_ILOG_32(_v) (OC_STATIC_ILOG5((ogg_uint32_t)(_v)))
/**
 * OC_STATIC_ILOG_64 - The integer logarithm of an (unsigned, 64-bit) constant.
 * @_v: A non-negative 64-bit constant.
 * Returns floor(log2(_v))+1, or 0 if _v==0.
 * This is the number of bits that would be required to represent _v in two's
 *  complement notation with all of the leading zeros stripped.
 * This macro is suitable for evaluation at compile time, but it should not be
 *  used on values that can change at runtime, as it operates via exhaustive
 *  search.
 */
# define OC_STATIC_ILOG_64(_v) (OC_STATIC_ILOG6((ogg_int64_t)(_v)))
    
    static const static_codebook*const _floor_128x4_books[]={
  &_huff_book_line_128x4_class0,
  &_huff_book_line_128x4_0sub0,
  &_huff_book_line_128x4_0sub1,
  &_huff_book_line_128x4_0sub2,
  &_huff_book_line_128x4_0sub3,
};
static const static_codebook*const _floor_256x4_books[]={
  &_huff_book_line_256x4_class0,
  &_huff_book_line_256x4_0sub0,
  &_huff_book_line_256x4_0sub1,
  &_huff_book_line_256x4_0sub2,
  &_huff_book_line_256x4_0sub3,
};
static const static_codebook*const _floor_128x7_books[]={
  &_huff_book_line_128x7_class0,
  &_huff_book_line_128x7_class1,
    }
    
        {&_44p3_p3_0,&_44p3_p3_1,0},
    {&_44p3_p4_0,&_44p3_p4_1,0},
    {&_44p3_p5_0,&_44p3_p5_1,0},
    
    #define opus_fft_free_arch(_st, arch) \
   ((void)(arch), opus_fft_free_arm_neon(_st))
    
      /// Cancel all asynchronous operations associated with the acceptor.
  /**
   * This function causes all outstanding asynchronous connect, send and receive
   * operations to finish immediately, and the handlers for cancelled operations
   * will be passed the boost::asio::error::operation_aborted error.
   *
   * @param ec Set to indicate what error occurred, if any.
   */
  boost::system::error_code cancel(boost::system::error_code& ec)
  {
    return this->get_service().cancel(this->get_implementation(), ec);
  }
    
        // Push the key/value pair on to the stack.
    context(Key* k, Value& v)
      : key_(k),
        value_(&v),
        next_(call_stack<Key, Value>::top_)
    {
      call_stack<Key, Value>::top_ = this;
    }
    
        BOOST_ASIO_HANDLER_COMPLETION((o));
    
        // Check if we need to run the operation again.
    if (ec == boost::asio::error::would_block
        || ec == boost::asio::error::try_again)
      return false;
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Put the result back to the database
  db_->Put(put_option_, key, it.WriteResult());
    
     private: // Private Functions
  /// Calls InsertBefore or InsertAfter
  int Insert(const std::string& key, const std::string& pivot,
             const std::string& value, bool insert_after);
 private:
  std::string db_name_;       // The actual database name/path
  WriteOptions put_option_;
  ReadOptions get_option_;
    
    /**
 * @brief get file modification time
 * @details [long description]
 *
 * @param fname [description]
 * @param file_mtime [description]
 *
 * @return [description]
 */
Status EnvLibrados::GetFileModificationTime(const std::string& fname,
    uint64_t* file_mtime)
{
  LOG_DEBUG('[IN]%s\n', fname.c_str());
  std::string fid, dir, file;
  split(fname, &dir, &file);
  time_t mtime;
  uint64_t file_size;
  Status s = Status::OK();
  do {
    std::string fpath = dir + '/' + file;
    s = _GetFid(dir + '/' + file, fid);
    }
    }
    
      virtual void SeekToFirst() override {
    ClearHeaps();
    for (auto& child : children_) {
      child.SeekToFirst();
      if (child.Valid()) {
        minHeap_.push(&child);
      }
    }
    direction_ = kForward;
    current_ = CurrentForward();
  }
    
    #endif  // GRPC_INTERNAL_COMPILER_GO_GENERATOR_H

    
    namespace grpc_java_generator {
struct Parameters {
  //        //Defines the custom parameter types for methods
  //        //eg: flatbuffers uses flatbuffers.Builder as input for the client
  //        and output for the server grpc::string custom_method_io_type;
    }
    }
    
    // An abstract interface representing a method.
struct Method : public CommentHolder {
  virtual ~Method() {}
    }
    
    
    {  return 0;
}

    
      std::string GetNameSpace(const Definition &def) const;
    
     private:
  void ParseFile(flatbuffers::Parser &parser, const std::string &filename,
                 const std::string &contents,
                 std::vector<const char *> &include_directories) const;
    
    // Raw helper functions used below: get any value in memory as a 64bit int, a
// double or a string.
// All scalars get static_cast to an int64_t, strings use strtoull, every other
// data type returns 0.
int64_t GetAnyValueI(reflection::BaseType type, const uint8_t *data);
// All scalars static cast to double, strings use strtod, every other data
// type is 0.0.
double GetAnyValueF(reflection::BaseType type, const uint8_t *data);
// All scalars converted using stringstream, strings as-is, and all other
// data types provide some level of debug-pretty-printing.
std::string GetAnyValueS(reflection::BaseType type, const uint8_t *data,
                         const reflection::Schema *schema, int type_index);
    
    void AbstractBtMessage::setBtMessageDispatcher(BtMessageDispatcher* dispatcher)
{
  dispatcher_ = dispatcher;
}
    
      void setBtMessageFactory(BtMessageFactory* factory);
    
      virtual bool getChangeOption() const CXX11_OVERRIDE;
    
      void setPeerStorage(const std::shared_ptr<PeerStorage>& peerStorage);