
        
          // content::WebContentsObserver implementations:
  void WebContentsDestroyed() override;
    
    
    {}  // namespace atom
    
    void AtomBrowserMainParts::HandleSIGCHLD() {
  // We need to accept SIGCHLD, even though our handler is a no-op because
  // otherwise we cannot wait on children. (According to POSIX 2001.)
  struct sigaction action;
  memset(&action, 0, sizeof(action));
  action.sa_handler = SIGCHLDHandler;
  CHECK_EQ(sigaction(SIGCHLD, &action, nullptr), 0);
}
    
    AsarProtocolHandler::AsarProtocolHandler(
    const scoped_refptr<base::TaskRunner>& file_task_runner)
    : file_task_runner_(file_task_runner) {}
    
    HttpProtocolHandler::HttpProtocolHandler(const std::string& scheme)
    : scheme_(scheme) {
}
    
    int LaunchProgram(const StringVector& relauncher_args,
                  const StringVector& argv) {
  // Redirect the stdout of child process to /dev/null, otherwise after
  // relaunch the child process will raise exception when writing to stdout.
  base::ScopedFD devnull(HANDLE_EINTR(open('/dev/null', O_WRONLY)));
  base::FileHandleMappingVector no_stdout;
  no_stdout.push_back(std::make_pair(devnull.get(), STDERR_FILENO));
  no_stdout.push_back(std::make_pair(devnull.get(), STDOUT_FILENO));
    }
    
    
    {}  // namespace relauncher

    
    #include 'base/logging.h'
#include 'base/values.h'
    
    #include 'base/basictypes.h'
#include 'base/compiler_specific.h'
#include 'v8/include/v8.h'
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    
    {    } else {
      enable_shortcut = false;
    }
    
    #include <vector>
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
    static const static_bookblock _resbook_44s_n1={
  {
    {0},{0,0,&_44cn1_s_p1_0},{0,0,&_44cn1_s_p2_0},
    {0,0,&_44cn1_s_p3_0},{0,0,&_44cn1_s_p4_0},{0,0,&_44cn1_s_p5_0},
    {&_44cn1_s_p6_0,&_44cn1_s_p6_1},{&_44cn1_s_p7_0,&_44cn1_s_p7_1},
    {&_44cn1_s_p8_0,&_44cn1_s_p8_1,&_44cn1_s_p8_2}
   }
};
static const static_bookblock _resbook_44sm_n1={
  {
    {0},{0,0,&_44cn1_sm_p1_0},{0,0,&_44cn1_sm_p2_0},
    {0,0,&_44cn1_sm_p3_0},{0,0,&_44cn1_sm_p4_0},{0,0,&_44cn1_sm_p5_0},
    {&_44cn1_sm_p6_0,&_44cn1_sm_p6_1},{&_44cn1_sm_p7_0,&_44cn1_sm_p7_1},
    {&_44cn1_sm_p8_0,&_44cn1_sm_p8_1,&_44cn1_sm_p8_2}
   }
};
    
      {1,2,6,  &_residue_44p_lfe,
   &_huff_book__44p5_lfe,&_huff_book__44p5_lfe,
   &_resbook_44p_l5,&_resbook_44p_l5}
};
static const vorbis_residue_template _res_44p51_6[]={
  {2,0,15,  &_residue_44p_hi,
   &_huff_book__44p6_short,&_huff_book__44p6_short,
   &_resbook_44p_6,&_resbook_44p_6},
    
    #include 'vorbis/codec.h'
#include 'backends.h'
    
    #ifndef M_PI
#  define M_PI (3.1415926536f)
#endif
    
    /* NOTE - c is not incremented as per l2n */
# define l2nn(l1,l2,c,n) { \
                        c+=n; \
                        switch (n) { \
                        case 8: *(--(c))=(unsigned char)(((l2)    )&0xff); \
                        case 7: *(--(c))=(unsigned char)(((l2)>> 8)&0xff); \
                        case 6: *(--(c))=(unsigned char)(((l2)>>16)&0xff); \
                        case 5: *(--(c))=(unsigned char)(((l2)>>24)&0xff); \
                        case 4: *(--(c))=(unsigned char)(((l1)    )&0xff); \
                        case 3: *(--(c))=(unsigned char)(((l1)>> 8)&0xff); \
                        case 2: *(--(c))=(unsigned char)(((l1)>>16)&0xff); \
                        case 1: *(--(c))=(unsigned char)(((l1)>>24)&0xff); \
                                } \
                        }
    
    #endif // BOOST_ASIO_DETAIL_ARRAY_FWD_HPP

    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    } // namespace date_time
namespace posix_time {
    
    template <typename Handler>
inline void* allocate(std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  return ::operator new(s);
#else
  using boost::asio::asio_handler_allocate;
  return asio_handler_allocate(s, boost::asio::detail::addressof(h));
#endif
}
    
    #include <robuffer.h>
#include <windows.storage.streams.h>
#include <wrl/implements.h>
#include <boost/asio/detail/buffer_sequence_adapter.hpp>
    
      // Read some data.
  for (;;)
  {
    // Try to complete the operation without blocking.
    errno = 0;
    signed_size_type bytes = error_wrapper(::readv(
          d, bufs, static_cast<int>(count)), ec);
    }
    
    
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    
    
    
    
    int lua_register_cocos2dx_physics_PhysicsJointGroove(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,'cc.PhysicsJointGroove');
    tolua_cclass(tolua_S,'PhysicsJointGroove','cc.PhysicsJointGroove','cc.PhysicsJoint',nullptr);
    }
    
    
    
    
    {		m_break = false;
		m_broke = false;
	}
    
    
    {
    {}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_RANDOM_H_

    
    /*! \brief pruner that prunes a tree after growing finishs */
template<typename TStats>
class TreeRefresher: public TreeUpdater {
 public:
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param.InitAllowUnknown(args);
  }
  // update the tree, do pruning
  void Update(const std::vector<bst_gpair> &gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    if (trees.size() == 0) return;
    // number of threads
    // thread temporal space
    std::vector<std::vector<TStats> > stemp;
    std::vector<RegTree::FVec> fvec_temp;
    // setup temp space for each thread
    const int nthread = omp_get_max_threads();
    fvec_temp.resize(nthread, RegTree::FVec());
    stemp.resize(nthread, std::vector<TStats>());
    #pragma omp parallel
    {
      int tid = omp_get_thread_num();
      int num_nodes = 0;
      for (size_t i = 0; i < trees.size(); ++i) {
        num_nodes += trees[i]->param.num_nodes;
      }
      stemp[tid].resize(num_nodes, TStats(param));
      std::fill(stemp[tid].begin(), stemp[tid].end(), TStats(param));
      fvec_temp[tid].Init(trees[0]->param.num_feature);
    }
    // if it is C++11, use lazy evaluation for Allreduce,
    // to gain speedup in recovery
#if __cplusplus >= 201103L
    auto lazy_get_stats = [&]()
#endif
    {
      const MetaInfo &info = p_fmat->info();
      // start accumulating statistics
      dmlc::DataIter<RowBatch> *iter = p_fmat->RowIterator();
      iter->BeforeFirst();
      while (iter->Next()) {
        const RowBatch &batch = iter->Value();
        CHECK_LT(batch.size, std::numeric_limits<unsigned>::max());
        const bst_omp_uint nbatch = static_cast<bst_omp_uint>(batch.size);
        #pragma omp parallel for schedule(static)
        for (bst_omp_uint i = 0; i < nbatch; ++i) {
          RowBatch::Inst inst = batch[i];
          const int tid = omp_get_thread_num();
          const bst_uint ridx = static_cast<bst_uint>(batch.base_rowid + i);
          RegTree::FVec &feats = fvec_temp[tid];
          feats.Fill(inst);
          int offset = 0;
          for (size_t j = 0; j < trees.size(); ++j) {
            AddStats(*trees[j], feats, gpair, info, ridx,
                     dmlc::BeginPtr(stemp[tid]) + offset);
            offset += trees[j]->param.num_nodes;
          }
          feats.Drop(inst);
        }
      }
      // aggregate the statistics
      int num_nodes = static_cast<int>(stemp[0].size());
      #pragma omp parallel for schedule(static)
      for (int nid = 0; nid < num_nodes; ++nid) {
        for (int tid = 1; tid < nthread; ++tid) {
          stemp[0][nid].Add(stemp[tid][nid]);
        }
      }
    };
#if __cplusplus >= 201103L
    reducer.Allreduce(dmlc::BeginPtr(stemp[0]), stemp[0].size(), lazy_get_stats);
#else
    reducer.Allreduce(dmlc::BeginPtr(stemp[0]), stemp[0].size());
#endif
    // rescale learning rate according to size of trees
    float lr = param.learning_rate;
    param.learning_rate = lr / trees.size();
    int offset = 0;
    for (size_t i = 0; i < trees.size(); ++i) {
      for (int rid = 0; rid < trees[i]->param.num_roots; ++rid) {
        this->Refresh(dmlc::BeginPtr(stemp[0]) + offset, rid, trees[i]);
      }
      offset += trees[i]->param.num_nodes;
    }
    // set learning rate back
    param.learning_rate = lr;
  }
    }