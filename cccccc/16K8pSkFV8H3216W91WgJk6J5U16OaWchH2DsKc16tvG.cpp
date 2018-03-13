
        
        
    {
    {      auto h = handle_.AccessTensor(context)->template flat<string>();
      h(0) = cinfo_.container();
      h(1) = cinfo_.name();
      resource_ = resource;
    }
    if (context->expected_output_dtype(0) == DT_RESOURCE) {
      OP_REQUIRES_OK(context, MakeResourceHandleToOutput(
                                  context, 0, cinfo_.container(), cinfo_.name(),
                                  MakeTypeIndex<T>()));
    } else {
      context->set_output_ref(0, &mu_, handle_.AccessTensor(context));
    }
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/gtl/array_slice.h'
#include 'tensorflow/core/platform/types.h'
    
    #include 'tensorflow/core/framework/graph.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/graph/algorithm.h'
#include 'tensorflow/core/graph/graph.h'
#include 'tensorflow/core/graph/graph_constructor.h'
#include 'tensorflow/core/graph/node_builder.h'
#include 'tensorflow/core/graph/tensor_id.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/platform/logging.h'
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    void DBIter::SeekToFirst() {
  direction_ = kForward;
  ClearSavedValue();
  iter_->SeekToFirst();
  if (iter_->Valid()) {
    FindNextUserEntry(false, &saved_key_ /* temporary storage */);
  } else {
    valid_ = false;
  }
}
    
    
    {  Table* table = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
  Iterator* result = table->NewIterator(options);
  result->RegisterCleanup(&UnrefEntry, cache_, handle);
  if (tableptr != NULL) {
    *tableptr = table;
  }
  return result;
}
    
      // Return an iterator for the specified file number (the corresponding
  // file length must be exactly 'file_size' bytes).  If 'tableptr' is
  // non-NULL, also sets '*tableptr' to point to the Table object
  // underlying the returned iterator, or NULL if no Table object underlies
  // the returned iterator.  The returned '*tableptr' object is owned by
  // the cache and should not be deleted, and is valid for as long as the
  // returned iterator is live.
  Iterator* NewIterator(const ReadOptions& options,
                        uint64_t file_number,
                        uint64_t file_size,
                        Table** tableptr = NULL);
    
      void Clear();
    
    Status WriteBatchInternal::InsertInto(const WriteBatch* b,
                                      MemTable* memtable) {
  MemTableInserter inserter;
  inserter.sequence_ = WriteBatchInternal::Sequence(b);
  inserter.mem_ = memtable;
  return b->Iterate(&inserter);
}
    
    
    {}  // namespace leveldb
    
    struct Builder::Impl {
  std::mutex mutex;
  std::unordered_set<
    const RepoAuthType::Array*,
    repo_auth_array_hash,
    repo_auth_array_eq
  > types;
  uint32_t nextId{0};
};
    
    /* this only exists to make compilers happy about types in the below macro */
inline constexpr uint32_t sizeClassParams2PackedArrayCapacity(
  size_t index,
  size_t lg_grp,
  size_t lg_delta,
  size_t ndelta
) {
  static_assert(sizeof(ArrayData) <= kSizeIndex2Size[0],
    'this math only works if ArrayData fits in the smallest size class');
  return index <= PackedArray::MaxSizeIndex
    ? (((size_t{1} << lg_grp) + (ndelta << lg_delta)) - sizeof(ArrayData))
      / sizeof(TypedValue)
    : 0;
}
    
    int next_numa_node(std::atomic_int& curr_node) {
  if (!use_numa) return 0;
  int node;
  do {
    node = curr_node.fetch_add(1, std::memory_order_relaxed);
    node &= numa_node_mask;
  } while (!((numa_node_set >> node) & 1));
  return node;
}
    
      // still enough
  if (avail >= len) {
    if (data) memcpy(data, m_p, len);
    if ((m_p += len) > m_pSafe) m_safe = false;
    return;
  }
    
    
    {
    {    (void)memset(&utbuf, 0, sizeof(utbuf));
    utbuf.actime = sb->st_atime;
    utbuf.modtime = sb->st_mtime;
    (void) utime(name, &utbuf); /* don't care if loses */
#endif
  }
}
    
    
    
    
    {    tolua_beginmodule(tolua_S,'PhysicsShapePolygon');
        tolua_function(tolua_S,'getPointsCount',lua_cocos2dx_physics_PhysicsShapePolygon_getPointsCount);
        tolua_function(tolua_S,'getPoint',lua_cocos2dx_physics_PhysicsShapePolygon_getPoint);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsShapePolygon).name();
    g_luaType[typeName] = 'cc.PhysicsShapePolygon';
    g_typeCast['PhysicsShapePolygon'] = 'cc.PhysicsShapePolygon';
    return 1;
}
    
    
#endif

    
    			b2Vec2 vertices[3];
			vertices[0] = b2Mul(xf1, b2Vec2(-1.0f, 0.0f));
			vertices[1] = b2Mul(xf1, b2Vec2(1.0f, 0.0f));
			vertices[2] = b2Mul(xf1, b2Vec2(0.0f, 0.5f));
			
			b2PolygonShape poly1;
			poly1.Set(vertices, 3);
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-14.5f + 1.0f * i, 5.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 20.0f;
    
    #include 'assert/__assert.h'
    
    //
//  boost_exception.cpp
//  comm
//
//  Created by yanguoyue on 16/5/20.
//
    
    #ifndef CORESERVICEBASE_H_
#define CORESERVICEBASE_H_
    
    #endif
