
        
        #if !defined(BOOST_ASIO_HAS_THREADS)
typedef long atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef std::atomic<long> atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef boost::detail::atomic_count atomic_count;
inline void increment(atomic_count& a, long b) { while (b > 0) ++a, --b; }
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
      // Return a pointer to the beginning of the unread data.
  const_buffer data() const
  {
    return boost::asio::buffer(buffer_) + begin_offset_;
  }
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
    #ifndef BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
#define BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
    
        // Update number of buckets and initialise all buckets to empty.
    bucket_type* tmp = new bucket_type[num_buckets_];
    delete[] buckets_;
    buckets_ = tmp;
    for (std::size_t i = 0; i < num_buckets_; ++i)
      buckets_[i].first = buckets_[i].last = end_iter;
    
    namespace boost {
namespace asio {
namespace detail {
namespace descriptor_ops {
    }
    }
    }
    }
    
    			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.angularDamping = 2.0f;
			bd.linearDamping = 0.5f;
    
    
    {
    {			body->CreateFixture(&fd);
		}
	}
    
    
    {			b2EdgeShape shape;
			shape.Set(b2Vec2(-40.0f, 0.0f), b2Vec2(40.0f, 0.0f));
			ground->CreateFixture(&shape, 0.0f);
		}
    
    				b2Vec2 anchor(-15.0f + 1.0f * i, 5.0f);
				jd.Initialize(prevBody, body, anchor);
				m_world->CreateJoint(&jd);
    
    			float32 hs[10] = {0.25f, 1.0f, 4.0f, 0.0f, 0.0f, -1.0f, -2.0f, -2.0f, -1.25f, 0.0f};
    
      std::unique_ptr<AuthConfig> getUserDefinedAuthConfig() const;
    
      void setBtRuntime(const std::shared_ptr<BtRuntime>& btRuntime);
    
    #endif // D_ADAPTIVE_FILE_ALLOCATION_ITERATOR_H

    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
    void configureAsyncNameResolverMan(AsyncNameResolverMan* asyncNameResolverMan,
                                   Option* option);