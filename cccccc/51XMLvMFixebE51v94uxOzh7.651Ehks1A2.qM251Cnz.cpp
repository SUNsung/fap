
        
        #include <google/protobuf/pyext/unknown_fields.h>
    
    class EnumGenerator {
 public:
  // See generator.cc for the meaning of dllexport_decl.
  EnumGenerator(const EnumDescriptor* descriptor,
                const std::map<std::string, std::string>& vars,
                const Options& options);
  ~EnumGenerator();
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    #include 'src/proto/grpc/testing/echo.grpc.pb.h'
    
    class ShutdownTest : public ::testing::TestWithParam<string> {
 public:
  ShutdownTest() : shutdown_(false), service_(&ev_) { gpr_event_init(&ev_); }
    }
    
    #include <grpc/support/port_platform.h>
    
    static void test_parse_bool_value(void) {
  LOG_TEST_NAME('test_parse_bool_value');
    }
    
      gpr_setenv(int32_var_name, '123456789');
  EXPECT_EQ(123456789, GPR_GLOBAL_CONFIG_GET(int32_var));
    
    TEST(GlobalConfigTest, BoolTest) {
  EXPECT_FALSE(GPR_GLOBAL_CONFIG_GET(bool_var));
  GPR_GLOBAL_CONFIG_SET(bool_var, true);
  EXPECT_TRUE(GPR_GLOBAL_CONFIG_GET(bool_var));
}
    
    #include 'src/proto/grpc/testing/duplicate/echo_duplicate.grpc.pb.h'
#include 'src/proto/grpc/testing/echo.grpc.pb.h'
#include 'test/core/util/port.h'
#include 'test/core/util/test_config.h'
#include 'test/cpp/util/subprocess.h'
    
        const protobuf::FileDescriptor* file_desc = service_desc->file();
    if (known_files_.find(file_desc->package() + '/' + file_desc->name()) !=
        known_files_.end()) {
      EXPECT_EQ(file_desc->DebugString(),
                ref_service_desc->file()->DebugString());
      known_files_.insert(file_desc->package() + '/' + file_desc->name());
    }
    
    struct Monitor {
 private:
  struct Statistics {
    Timer timer;
    size_t count{0};
    uint64_t nvtx_id;
  };
  std::string label = '';
  std::map<std::string, Statistics> statistics_map;
  Timer self_timer;
    }
    
    RegTree ConstructTree() {
  RegTree tree;
  tree.ExpandNode(
      /*nid=*/0, /*split_index=*/0, /*split_value=*/0.0f,
      /*default_left=*/true,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  auto left = tree[0].LeftChild();
  auto right = tree[0].RightChild();
  tree.ExpandNode(
      /*nid=*/left, /*split_index=*/1, /*split_value=*/1.0f,
      /*default_left=*/false,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  tree.ExpandNode(
      /*nid=*/right, /*split_index=*/2, /*split_value=*/2.0f,
      /*default_left=*/false,
      0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  return tree;
}
    
    SEXP XGDMatrixCreateFromMat_R(SEXP mat,
                              SEXP missing) {
  SEXP ret;
  R_API_BEGIN();
  SEXP dim = getAttrib(mat, R_DimSymbol);
  size_t nrow = static_cast<size_t>(INTEGER(dim)[0]);
  size_t ncol = static_cast<size_t>(INTEGER(dim)[1]);
  const bool is_int = TYPEOF(mat) == INTSXP;
  double *din;
  int *iin;
  if (is_int) {
    iin = INTEGER(mat);
  } else {
    din = REAL(mat);
  }
  std::vector<float> data(nrow * ncol);
  #pragma omp parallel for schedule(static)
  for (omp_ulong i = 0; i < nrow; ++i) {
    for (size_t j = 0; j < ncol; ++j) {
      data[i * ncol +j] = is_int ? static_cast<float>(iin[i + nrow * j]) : din[i + nrow * j];
    }
  }
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromMat(BeginPtr(data), nrow, ncol, asReal(missing), &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
    { private:
  /*! \brief number of allocated pages */
  size_t num_free_buffer_;
  /*! \brief clock_pointer */
  size_t clock_ptr_;
  /*! \brief writer threads */
  std::vector<std::unique_ptr<std::thread> > workers_;
  /*! \brief recycler queue */
  dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > qrecycle_;
  /*! \brief worker threads */
  std::vector<dmlc::ConcurrentBlockingQueue<std::shared_ptr<SparsePage> > > qworkers_;
};
#endif  // DMLC_ENABLE_STD_THREAD
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '(3.0,2,1)';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost
