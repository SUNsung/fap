
        
        #include <grpc/support/log.h>
    
    #include 'src/compiler/config.h'
#include 'src/compiler/schema_interface.h'
    
    namespace grpc {
namespace testing {
    }
    }
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
}
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
      switch (file_fsmagic(ms, inname, &sb, stream)) {
  case -1:    /* error */
    goto done;
  case 0:      /* nothing found */
    break;
  default:    /* matched it and printed type */
    rv = 0;
    goto done;
  }
    
      /*
   * allocRaw
   * alloc
   *
   * Simple bump allocator, supporting power-of-two alignment. alloc<T>() is a
   * simple typed wrapper around allocRaw().
   */
  void* allocRaw(size_t sz, size_t align = 16) {
    // Round frontier up to a multiple of align
    align = folly::nextPowTwo(align) - 1;
    auto const nf = (uint8_t*)(((uintptr_t)m_frontier + align) & ~align);
    assertCanEmit(nf - m_frontier + sz);
    setFrontier(nf);
    auto data = m_frontier;
    m_frontier += sz;
    assertx(m_frontier <= m_base + m_size);
    return data;
  }
    
    template<typename Op>
LocalId key_local(ISS& env, Op op) {
  switch (op.mkey.mcode) {
    case MEC: case MPC:
      return topStkLocal(env, op.mkey.idx);
    case MEL: case MPL:
      return op.mkey.local;
    case MW:
    case MEI:
    case MET: case MPT: case MQT:
      return NoLocalId;
  }
  not_reached();
}
    
    //////////////////////////////////////////////////////////////////////
    
    
    {  // find heap->heap pointers
  for (size_t i = 0, n = g.nodes.size(); i < n; i++) {
    if (g.nodes[i].is_root) continue;
    auto h = g.nodes[i].h;
    scanHeapObject(h, scanner);
    auto from = blocks.index(h);
    assertx(from == i);
    scanner.finish(
      [&](const void* p, std::size_t size) {
        conservativeScan(p, size, [&](const void** addr, const void* ptr) {
          if (auto r = blocks.region(ptr)) {
            auto to = blocks.index(r);
            auto offset = uintptr_t(addr) - uintptr_t(h);
            addPtr(g, from, to, HeapGraph::Ambiguous, offset);
          }
        });
      },
      [&](const void** addr) {
        if (auto r = blocks.region(*addr)) {
          auto to = blocks.index(r);
          auto offset = uintptr_t(addr) - uintptr_t(h);
          addPtr(g, from, to, HeapGraph::Counted, offset);
        }
      },
      [&](const void* p) {
        auto weak = static_cast<const WeakRefDataHandle*>(p);
        auto addr = &(weak->wr_data->pointee.m_data.pobj);
        if (auto r = blocks.region(*addr)) {
          auto to = blocks.index(r);
          addPtr(g, from, to, HeapGraph::Weak, 0);
        }
      }
    );
  }
  g.nodes.shrink_to_fit();
  g.ptrs.shrink_to_fit();
  g.root_ptrs.shrink_to_fit();
  g.root_nodes.shrink_to_fit();
  return g;
}
    
      Array       m_stream_context_options;
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP

    
    #define BOOST_ASIO_COMPLETION_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void()) asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::zero_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), 0)) == 1, \
      'CompletionHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()(), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
    #include <boost/asio/detail/push_options.hpp>
    
    
    
    
    
    
    
        CC_INCREMENT_GL_DRAWN_BATCHES_AND_VERTICES(1,vertexCount);
    
    	b2BodyDef bd;
	bd.type = b2_dynamicBody;
	bd.position = position;
	bd.bullet = true;
	m_bomb = m_world->CreateBody(&bd);
	m_bomb->SetLinearVelocity(velocity);
	
	b2CircleShape circle;
	circle.m_radius = 0.3f;
    
    			b2PolygonShape shape;
			shape.SetAsBox(0.5f, 4.0f, b2Vec2(4.0f, 0.0f), 0.5f * b2_pi);
    
    		// Breakable dynamic body
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 40.0f);
			bd.angle = 0.25f * b2_pi;
			m_body1 = m_world->CreateBody(&bd);
    }
    
    	enum
	{
		e_count = 8
	};
    
    namespace folly {
    }
    
    template <typename T>
bool SingletonHolder<T>::creationStarted() {
  // If alive, then creation was of course started.
  // This is flipped after creating_thread_ was set, and before it was reset.
  if (state_.load(std::memory_order_acquire) == SingletonHolderState::Living) {
    return true;
  }
    }
    
      bool remove(const T& v) {
    auto prev = &head_;
    locate_lower_bound(v, prev);
    auto curr = prev->load(std::memory_order_relaxed);
    if (!curr || curr->elem_ != v) {
      return false;
    }
    Node* curr_next = curr->next_.load();
    // Patch up the actual list...
    prev->store(curr_next, std::memory_order_release);
    // ...and only then null out the removed node.
    curr->next_.store(nullptr, std::memory_order_release);
    curr->retire();
    return true;
  }
    
      Atom<Node*> node_;
    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.readIfNotEmpty(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
      BlockingQueueAddResult add(T item) override {
    queue_.enqueue(std::move(item));
    return sem_.post();
  }
    
      EXPECT_EQ(5050, estimates.sum);
  EXPECT_EQ(100, estimates.count);