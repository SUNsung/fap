
        
         private:
  using PendingRequestMap = std::map<int, SendCommandCallback>;
    
    namespace atom {
    }
    
      // Who/where/what asked for the authentication.
  scoped_refptr<net::AuthChallengeInfo> auth_info_;
    
    #ifndef ATOM_BROWSER_UI_DRAG_UTIL_H_
#define ATOM_BROWSER_UI_DRAG_UTIL_H_
    
    bool MenuModelAdapter::GetAccelerator(int id,
                                      ui::Accelerator* accelerator) const {
  ui::MenuModel* model = menu_model_;
  int index = 0;
  if (ui::MenuModel::GetModelAndIndexForCommandId(id, &model, &index)) {
    return static_cast<AtomMenuModel*>(model)->
      GetAcceleratorAtWithParams(index, true, accelerator);
  }
  return false;
}
    
      /// Allocate an Objective-C object.
  llvm::Value *emitObjCAllocObjectCall(IRGenFunction &IGF,
                                       llvm::Value *classPtr,
                                       SILType resultType);
    
    namespace swift {
namespace syntax {
    }
    }
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    class Env;
    
    
    {
    {  virtual void Put(const Slice& key, const Slice& value) {
    mem_->Add(sequence_, kTypeValue, key, value);
    sequence_++;
  }
  virtual void Delete(const Slice& key) {
    mem_->Add(sequence_, kTypeDeletion, key, Slice());
    sequence_++;
  }
};
}  // namespace
    
      // If *start < limit, changes *start to a short string in [start,limit).
  // Simple comparator implementations may return with *start unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const = 0;
    
    
    {  // 'filter' contains the data appended by a preceding call to
  // CreateFilter() on this class.  This method must return true if
  // the key was in the list of keys passed to CreateFilter().
  // This method may return true or false if the key was not on the
  // list, but it should aim to return false with a high probability.
  virtual bool KeyMayMatch(const Slice& key, const Slice& filter) const = 0;
};
    
    
    {  if (flags & XhpTrace) {
    s_profiler_factory->start(ProfilerKind::Trace, flags);
  } else if (flags & Memo) {
    flags = 0;  /* flags are not used by MemoProfiler::MemoProfiler */
    s_profiler_factory->start(ProfilerKind::Memo, flags);
  } else if (flags & External) {
    for (ArrayIter iter(args); iter; ++iter) {
      if (iter.first().toInt32() == 0) {
         flags = iter.second().toInt32();
      }
    }
    s_profiler_factory->start(ProfilerKind::External, flags);
  } else {
    s_profiler_factory->start(ProfilerKind::Hierarchical, flags);
  }
}
    
      static void GetRealtimeTime(timespec &sp);
  static void GetMonotonicTime(timespec &sp);
  static int64_t GetCurrentTimeMicros();
  static int64_t GetRusageMicros(Type t, Who who);
  static int64_t GetThreadCPUTimeNanos();
  const char *getName() const;
  int64_t getMicroSeconds() const;
  void report() const;
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}}

    
    int next_numa_node(std::atomic_int& curr_node) {
  if (!use_numa) return 0;
  int node;
  do {
    node = curr_node.fetch_add(1, std::memory_order_relaxed);
    node &= numa_node_mask;
  } while (!((numa_node_set >> node) & 1));
  return node;
}
    
    public const char *
magic_stream(struct magic_set *ms, php_stream *stream)
{
  if (ms == NULL)
    return NULL;
  return file_or_stream(ms, NULL, stream);
}
    
    NormalizedInstruction::NormalizedInstruction(SrcKey sk, const Unit* u)
  : source(sk)
  , funcd(nullptr)
  , m_unit(u)
  , immVec()
  , endsRegion(false)
  , preppedByRef(false)
  , ignoreInnerType(false)
  , interp(false)
  , forceSurpriseCheck(false)
{
  memset(imm, 0, sizeof(imm));
  populateImmediates(*this);
}
    
      Currently we don't ever relocate anything from frozen (or prof). We also
  don't relocate the cold portion of translations; but we still need to know
  where those are in order to relocate back-references to the code that was
  relocated.
*/
void liveRelocate(int time);
    
    std::string read_embedded_data(const embedded_data& desc) {
  std::ifstream ifs(desc.m_filename);
  if (!ifs.good()) return '';
  ifs.seekg(desc.m_start, std::ios::beg);
  std::unique_ptr<char[]> data(new char[desc.m_len]);
  ifs.read(data.get(), desc.m_len);
  return std::string(data.get(), desc.m_len);
}
    
    namespace routeguide {
class Feature;
    }
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
        return 0;
}
int lua_cocos2dx_physics_PhysicsBody_getRotation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::PhysicsBody* cobj = nullptr;
    bool ok  = true;
    
    
    
    	static Test* Create()
	{
		return new Bridge;
	}
    
    		if (b2_gjkCalls > 0)
		{
			m_debugDraw.DrawString(5, m_textLine, 'gjk calls = %d, ave gjk iters = %3.1f, max gjk iters = %d',
				b2_gjkCalls, b2_gjkIters / float32(b2_gjkCalls), b2_gjkMaxIters);
			m_textLine += DRAW_STRING_NEW_LINE;
		}
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    
    {    int nindex = index_.num_chunk();
    int nvalue = value_.num_chunk();
    int ntotal = nindex + nvalue;
    #pragma omp parallel for schedule(dynamic, 1) num_threads(nthread_)
    for (int i = 0; i < ntotal; ++i) {
      if (i < nindex) {
        index_.Decompress(i);
      } else {
        value_.Decompress(i - nindex);
      }
    }
  }
    
    /*! \brief a column storage, to be used with ApplySplit. Note that each
    bin id is stored as index[i] + index_base. */
template<typename T>
class Column {
 public:
  ColumnType type;
  const T* index;
  uint32_t index_base;
  const size_t* row_ind;
  size_t len;
};
    
    
    {template<typename IndexType>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    
    {
    {void SparsePage::Writer::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(out_page->get() == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost