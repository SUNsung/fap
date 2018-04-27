
        
        // dims=[5, 4, 3, 2]->[5, 3, 2, 4]
TEST_F(MatrixTest, RotatingTranspose_1_3) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 1, 3, &m);
  m.ResizeNoInit(kInputSize_ / 4, 4);
  // Verify that the result is:
  // output tensor=[[[[0, 6, 12, 18][1, 7, 13, 19]]
  //                 [[2, 8, 14, 20][3, 9, 15, 21]]
  //                 [[4, 10, 16, 22][5, 11, 17, 23]]]
  //                [[[24, 30, 36, 42]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(6, m(0, 1));
  EXPECT_EQ(1, m(1, 0));
  EXPECT_EQ(2, m(2, 0));
  EXPECT_EQ(3, m(3, 0));
  EXPECT_EQ(4, m(4, 0));
  EXPECT_EQ(5, m(5, 0));
  EXPECT_EQ(24, m(6, 0));
  EXPECT_EQ(30, m(6, 1));
}
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
    class QRSequenceGenerator {
 public:
  // Object is initalized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
    /**
 * Flushes pending writes. This method should not be called before invocation of
 * on_stream_ready() method of the bidirectional_stream_callback.
 * For each previously called bidirectional_stream_write()
 * a corresponding on_write_completed() callback will be invoked when the buffer
 * is sent.
 */
GRPC_SUPPORT_EXPORT
void bidirectional_stream_flush(bidirectional_stream* stream);
    
    int main(int argc, char** argv) {
  grpc::testing::InitTest(&argc, &argv, true);
    }
    
    namespace grpc_node_generator {
    }
    
     private:
  static Result Sample();
    
      // Return the current qps (i.e query count divided by the time since this
  // QpsGauge object created (or Reset() was called))
  long Get();