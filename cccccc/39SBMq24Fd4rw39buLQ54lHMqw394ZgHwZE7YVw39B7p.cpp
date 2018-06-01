
        
        
    {
    {}  // namespace
}  // namespace tesseract

    
    class IntSimdMatrixTest : public ::testing::Test {
 protected:
  // Makes a random weights matrix of the given size.
  GENERIC_2D_ARRAY<int8_t> InitRandom(int no, int ni) {
    GENERIC_2D_ARRAY<int8_t> a(no, ni, 0);
    for (int i = 0; i < no; ++i) {
      for (int j = 0; j < ni; ++j) {
        a(i, j) = static_cast<int8_t>(random_.SignedRand(INT8_MAX));
      }
    }
    return a;
  }
  // Makes a random input vector of the given size, with rounding up.
  std::vector<int8_t> RandomVector(int size, const IntSimdMatrix& matrix) {
    int rounded_size = matrix.RoundInputs(size);
    std::vector<int8_t> v(rounded_size, 0);
    for (int i = 0; i < size; ++i) {
      v[i] = static_cast<int8_t>(random_.SignedRand(INT8_MAX));
    }
    return v;
  }
  // Makes a random scales vector of the given size.
  GenericVector<double> RandomScales(int size) {
    GenericVector<double> v(size, 0.0);
    for (int i = 0; i < size; ++i) {
      v[i] = 1.0 + random_.SignedRand(1.0);
    }
    return v;
  }
  // Tests a range of sizes and compares the results against the base_ version.
  void ExpectEqualResults(IntSimdMatrix* matrix) {
    for (int num_out = 1; num_out < 130; ++num_out) {
      for (int num_in = 1; num_in < 130; ++num_in) {
        GENERIC_2D_ARRAY<int8_t> w = InitRandom(num_out, num_in + 1);
        matrix->Init(w);
        std::vector<int8_t> u = RandomVector(num_in, *matrix);
        GenericVector<double> scales = RandomScales(num_out);
        std::vector<double> base_result(num_out);
        base_.MatrixDotVector(w, scales, u.data(), base_result.data());
        std::vector<double> test_result(num_out);
        matrix->MatrixDotVector(w, scales, u.data(), test_result.data());
        for (int i = 0; i < num_out; ++i)
          EXPECT_FLOAT_EQ(base_result[i], test_result[i]) << 'i=' << i;
      }
    }
  }
    }
    
     private:
  // Resizes forward data to cope with an input image of the given width.
  void ResizeForward(const NetworkIO& input);
    
     private:
  // Saves the given Pix as a PNG-encoded string and destroys it.
  static void SetPixInternal(Pix* pix, GenericVector<char>* image_data);
  // Returns the Pix image for the image_data. Must be pixDestroyed after use.
  static Pix* GetPixInternal(const GenericVector<char>& image_data);
  // Parses the text string as a box file and adds any discovered boxes that
  // match the page number. Returns false on error.
  bool AddBoxes(const char* box_text);
    
      // Returns the average sum of squared perpendicular error from a line
  // through mean_point() in the direction dir.
  double rms_orth(const FCOORD &dir) const;
    
    /* Cancels the stream. Can be called at any time after
 * bidirectional_stream_start(). The on_canceled() method of
 * bidirectional_stream_callback will be invoked when cancelation
 * is complete and no further callback methods will be invoked. If the
 * stream has completed or has not started, calling
 * bidirectional_stream_cancel() has no effect and on_canceled() will not
 * be invoked. At most one callback method may be invoked after
 * bidirectional_stream_cancel() has completed.
 */
GRPC_SUPPORT_EXPORT
void bidirectional_stream_cancel(bidirectional_stream* stream);
    
    #endif  // GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H

    
    #include <grpc/grpc_security.h>
    
    class CodegenTestMinimal : public ::testing::Test {};
    
      static double Now();
    
      // Initialize the internal timer and reset the query count to 0
  void Reset();
    
    namespace grpc {
namespace testing {
    }
    }
    
    
    {  EXPECT_FALSE(buf->isShared());
}
    
      static_assert(
      !std::is_reference<Value>::value,
      'Expected may not be used with reference types');
  static_assert(
      !std::is_abstract<Value>::value,
      'Expected may not be used with abstract types');
    
      auto p = promises(block);
  uint32_t i = 0;
  try {
    for (i = 0; i < size_; ++i) {
      new (p + i) BoolPromise();
    }
  } catch (...) {
    for (; i != 0; --i) {
      p[i - 1].~BoolPromise();
    }
    throw;
  }
    
      // Log a bunch of messages to the writer
  size_t numMessages = 100;
  {
    AsyncFileWriter writer{folly::File{fds[1], true}};
    for (size_t n = 0; n < numMessages; ++n) {
      writer.writeMessage(folly::to<std::string>('message ', n, '\n'));
      sched_yield();
    }
  }
    
    
    
      virtual const char* Name() const override;
    
      typedef std::shared_ptr<DB> (* OpenFuncPtr)(char);
    
     public: // Delete / Remove / Pop / Trim
  /// Trim (list: key) so that it will only contain the indices from start..stop
  /// Returns true on success
  /// May throw RedisListException
  bool Trim(const std::string& key, int32_t start, int32_t stop);
    
    // @lint-ignore TXT4 T25377293 Grandfathered in
#endif  // JAVA_ROCKSJNI_STATISTICSJNI_H_
    
      // Returns the sequence number that is guaranteed to be smaller than or equal
  // to the sequence number of any key that could be inserted into this
  // memtable. It can then be assumed that any write with a larger(or equal)
  // sequence number will be present in this memtable or a later memtable.
  //
  // If the earliest sequence number could not be determined,
  // kMaxSequenceNumber will be returned.
  SequenceNumber GetEarliestSequenceNumber() {
    return earliest_seqno_.load(std::memory_order_relaxed);
  }