
        
        #ifndef DECL_TERNARY
#define DECL_TERNARY(XPU, OP, FUN)                                          \
  template<>                                                                \
  void Eval<XPU, OP>(const TBlob &lhs, const TBlob &mhs,                    \
                     const TBlob &rhs, TBlob *ret, RunContext ctx) {        \
    FUN<XPU, OP>(lhs, mhs, rhs, ret, ctx);                                  \
  }
#endif
    
    namespace mxnet {
namespace op {
    }
    }
    
    template<typename xpu>
void NDArrayOp<xpu>::Forward(const OpContext &ctx,
                   const std::vector<TBlob> &in_data,
                   const std::vector<OpReqType> &req,
                   const std::vector<TBlob> &out_data,
                   const std::vector<TBlob> &aux_args) {
  using namespace mshadow;
  Context ndctx = get_ctx();
  std::vector<void*> ptrs;
  std::vector<Engine::VarHandle> ndvar;
  std::vector<int> tags;
  for (auto& i : req) CHECK_NE(i, kAddTo);
    }