
        
        // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
    {}  // namespace nwapi
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.erase(begin+pos);
  gtk_container_remove(GTK_CONTAINER(menu_), menu_item->menu_item_);
}
    
        /*
        For each point `p` within `size`, do:
        dst[p] = max(src0[p], src1[p])
    */
    void max(const Size2D &size,
             const u8 *src0Base, ptrdiff_t src0Stride,
             const u8 *src1Base, ptrdiff_t src1Stride,
             u8 *dstBase, ptrdiff_t dstStride);
    
    #ifdef CAROTENE_NEON
    
    
    {            v_src = vld2q_u8(src + sj + 32);
            vst1q_u8(dst + dj + 16, v_src.val[coi]);
        }
#endif
    
    
    {        for (; i < size.width; ++i)
            result += src0[i] * src1[i];
    }
    return result;
#else
    (void)_size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    
                    if( mask[0] == 0 )
                {
                    if (mask[1] != 0)
                    {
                        j -= 8;
                        ptr -= 8;
                    }
                    continue;
                }
    
    
    
    template <class T>
struct pointer_iterator_traits
{
   typedef std::ptrdiff_t difference_type;
   typedef T value_type;
   typedef T* pointer;
   typedef T& reference;
   typedef std::random_access_iterator_tag iterator_category;
};
template <class T>
struct const_pointer_iterator_traits
{
   typedef std::ptrdiff_t difference_type;
   typedef T value_type;
   typedef const T* pointer;
   typedef const T& reference;
   typedef std::random_access_iterator_tag iterator_category;
};
    
    
    {   ~mem_block_cache()
   {
      while(next)
      {
         mem_block_node* old = next;
         next = next->next;
         ::operator delete(old);
      }
   }
   void* get()
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
     if(next)
      {
         mem_block_node* result = next;
         next = next->next;
         --cached_blocks;
         return result;
      }
      return ::operator new(BOOST_REGEX_BLOCKSIZE);
   }
   void put(void* p)
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
      if(cached_blocks >= BOOST_REGEX_MAX_CACHE_BLOCKS)
      {
         ::operator delete(p);
      }
      else
      {
         mem_block_node* old = static_cast<mem_block_node*>(p);
         old->next = next;
         next = old;
         ++cached_blocks;
      }
   }
};
    
    #endif   // BOOST_REGEX_MATCH_HPP
    
    template <class traits, class charT>
inline std::basic_string<charT> regex_merge(const std::basic_string<charT>& s,
                         const basic_regex<charT, traits>& e, 
                         const charT* fmt,
                         match_flag_type flags = match_default)
{
   return regex_replace(s, e, fmt, flags);
}
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1, class Traits2>
inline std::size_t regex_split(OutputIterator out,
                   std::basic_string<charT, Traits1, Alloc1>& s, 
                   const basic_regex<charT, Traits2>& e,
                   match_flag_type flags = match_default)
{
   return regex_split(out, s, e, flags, UINT_MAX);
}
    
      /*
   * @brief a variable to keep track of the temp fs used in carving
   *
   * This variable represents the location in which we store all of our carved
   * files. When a carve has completed all of the desired files, as well
   * as the tar archive should reside in this directory
   */
  boost::filesystem::path carveDir_;
    
    namespace osquery {
    }
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    #include <osquery/config.h>
#include <osquery/database.h>
#include <osquery/registry.h>
    
      size_t pack_count = 0U;
  c.packs(([&pack_count, query_attemts](const Pack& p) {
    pack_count++;
    // There is one pack without a discovery query.
    EXPECT_EQ(p.getStats().total, query_attemts + 1);
    EXPECT_EQ(p.getStats().hits, query_attemts);
    EXPECT_EQ(p.getStats().misses, 1U);
  }));
    
      /// Get row data from the processes table for a given pid.
  virtual QueryData getProcessRow(pid_t pid) const;
    
    
    {
    {    DistributedQueryResult result(
        request, sql.rows(), sql.columns(), sql.getStatus());
    addResult(result);
  }
  return flushCompleted();
}
    
      /// The calling for beginning the thread's run loop.
  Status run() override;
    
    class INotifyTests : public testing::Test {
 protected:
  void SetUp() override {
    // INotify will use data from the config and config parsers.
    Registry::get().registry('config_parser')->setUp();
    }
    }
    
      // Normal subscribers will be enabled.
  auto sub2 = std::make_shared<SubFakeEventSubscriber>();
  EXPECT_FALSE(sub2->disabled);