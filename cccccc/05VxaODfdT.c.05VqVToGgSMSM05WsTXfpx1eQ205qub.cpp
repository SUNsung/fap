
        
          Byte t1(bytes + 3);
  uint32_t t = t0.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    using apollo::common::PathPoint;
using State = std::array<double, 3>;
    
      MatrixXd mat_golden(20, 10);
  // clang-format off
  mat_golden <<
   -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0, -1,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  1,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0, -1,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  1,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0, -1,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  1,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0, -1,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
    Eigen::MatrixXd SplineSegKernel::ThirdOrderDerivativeKernel(
    const uint32_t num_params, const double accumulated_x) {
  if (num_params > reserved_order_ + 1) {
    CalculateThirdOrderDerivative(num_params);
  }
  Eigen::MatrixXd term_matrix;
  IntegratedTermMatrix(num_params, accumulated_x, 'third_order', &term_matrix);
  return (kernel_third_order_derivative_.block(0, 0, num_params, num_params))
      .cwiseProduct(term_matrix);
}
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;