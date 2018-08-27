
        
        
    {  // Moving from a message on the arena should lead to a copy.
  message2 = std::move(*message1_on_arena);
  EXPECT_NE(nested, &message2.optional_nested_message());
  TestUtil::ExpectAllFieldsSet(*message1_on_arena);
  TestUtil::ExpectAllFieldsSet(message2);
}
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/stubs/strutil.h>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_primitive_field.h>
    
      if (filename.empty()) {
    *error = filename_error;
    return false;
  }
  std::unique_ptr<io::ZeroCopyOutputStream> output(
      generator_context->Open(filename));
  io::Printer printer(output.get(), '$');
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_MAP_FIELD_H__
    
    class MessageFieldGenerator : public FieldGeneratorBase {
 public:
  MessageFieldGenerator(const FieldDescriptor* descriptor,
                        int fieldOrdinal,
                        const Options *options);
  ~MessageFieldGenerator();
    }
    
    void PrimitiveFieldGenerator::GenerateSerializationCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'if ($has_property_check$) {\n'
    '  output.WriteRawTag($tag_bytes$);\n'
    '  output.Write$capitalized_type_name$($property_name$);\n'
    '}\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_slow()
{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4127)
#endif
   unsigned count = 0;
   const re_repeat* rep = static_cast<const re_repeat*>(pstate);
   re_syntax_base* psingle = rep->next.p;
   // match compulsary repeats first:
   while(count < rep->min)
   {
      pstate = psingle;
      if(!match_wild())
         return false;
      ++count;
   }
   bool greedy = (rep->greedy) && (!(m_match_flags & regex_constants::match_any) || m_independent);   
   if(greedy)
   {
      // normal repeat:
      while(count < rep->max)
      {
         pstate = psingle;
         if(!match_wild())
            break;
         ++count;
      }
      if((rep->leading) && (count < rep->max))
         restart = position;
      pstate = rep;
      return backtrack_till_match(count - rep->min);
   }
   else
   {
      // non-greedy, keep trying till we get a match:
      BidiIterator save_pos;
      do
      {
         if((rep->leading) && (rep->max == UINT_MAX))
            restart = position;
         pstate = rep->alt.p;
         save_pos = position;
         ++state_count;
         if(match_all_states())
            return true;
         if((count >= rep->max) || !m_can_backtrack)
            return false;
         ++count;
         pstate = psingle;
         position = save_pos;
         if(!match_wild())
            return false;
      }while(true);
   }
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_grep.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_grep implementation.
  */
    
    
namespace boost{
    }
    
    template <class BaseT>
struct default_wrapper : public BaseT
{
   typedef typename BaseT::char_type char_type;
   std::string error_string(::boost::regex_constants::error_type e)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::get_default_error_string(e);
   }
   ::boost::regex_constants::syntax_type syntax_type(char_type c)const
   {
      return ((c & 0x7f) == c) ? get_default_syntax_type(static_cast<char>(c)) : ::boost::regex_constants::syntax_char;
   }
   ::boost::regex_constants::escape_syntax_type escape_syntax_type(char_type c)const
   {
      return ((c & 0x7f) == c) ? get_default_escape_syntax_type(static_cast<char>(c)) : ::boost::regex_constants::escape_type_identity;
   }
   int toi(const char_type*& p1, const char_type* p2, int radix)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_toi(p1, p2, radix, *this);
   }
   char_type translate(char_type c, bool icase)const
   {
      return (icase ? this->translate_nocase(c) : this->translate(c));
   }
   char_type translate(char_type c)const
   {
      return BaseT::translate(c);
   }
   char_type tolower(char_type c)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_lower(c);
   }
   char_type toupper(char_type c)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_upper(c);
   }
};
    
    inline Float8 operator+(Float8 lhs, const Float8& rhs) {
  lhs += rhs;
  return lhs;
}
inline Float8 operator-(Float8 lhs, const Float8& rhs) {
  lhs -= rhs;
  return lhs;
}
inline Float8 operator*(Float8 lhs, const Float8& rhs) {
  lhs *= rhs;
  return lhs;
}
inline Float8 operator/(Float8 lhs, const Float8& rhs) {
  lhs /= rhs;
  return lhs;
}
    
    /*!
 * \brief perform numerically safe logsum
 * \param begin The begining iterator.
 * \param end The end iterator.
 * \return the iterator point to the maximum value.
 * \tparam Iterator The type of the iterator.
 */
template<typename Iterator>
inline float LogSum(Iterator begin, Iterator end) {
  float mx = *begin;
  for (Iterator it = begin; it != end; ++it) {
    mx = std::max(mx, *it);
  }
  float sum = 0.0f;
  for (Iterator it = begin; it != end; ++it) {
    sum += std::exp(*it - mx);
  }
  return mx + std::log(sum);
}
    
    namespace xgboost {
namespace data {
    }
    }
    
    #if DMLC_ENABLE_STD_THREAD
#include <dmlc/concurrency.h>
#include <thread>
#endif
    
    int16_t i16s[] = {
    -(static_cast<int16_t>(1) << 8),
    static_cast<int16_t>(1) << 12,
    -(static_cast<int16_t>(1) << 14),
};
    
    BENCHMARK_RELATIVE(exception_wrapper_create_and_throw_concurrent, iters) {
  std::atomic<bool> go(false);
  std::vector<std::thread> threads;
  BENCHMARK_SUSPEND {
    for (int t = 0; t < FLAGS_num_threads; ++t) {
      threads.emplace_back([&go, iters] {
        while (!go) { }
        std::runtime_error e('payload');
        for (size_t i = 0; i < iters; ++i) {
          auto ew = folly::make_exception_wrapper<std::runtime_error>(e);
          try {
            ew.throw_exception();
          } catch (std::runtime_error&) {
          }
        }
      });
    }
  }
  go.store(true);
  for (auto& t : threads) {
    t.join();
  }
}
    
    TEST(ExecutorTest, KeepAliveCopy) {
  KeepAliveTestExecutor exec;
    }
    
    // this test makes sure that the coroutine is destroyed properly
TEST(Expected, CoroutineCleanedUp) {
  int count_dest = 0;
  auto r = [&]() -> Expected<int, Err> {
    SCOPE_EXIT {
      ++count_dest;
    };
    auto x = co_await Expected<int, Err>(makeUnexpected(Err::badder()));
    ADD_FAILURE() << 'Should not be resuming';
    co_return x;
  }();
  EXPECT_FALSE(r.hasValue());
  EXPECT_EQ(1, count_dest);
}
    
    template <class String> void clause11_21_4_7_9_d(String & test) {
  String s;
  randomString(&s, maxString);
  int tristate = test.compare(s.c_str());
  if (tristate > 0) {
    tristate = 1;
  } else if (tristate < 0) {
    tristate = 2;
  }
  Num2String(test, tristate);
}
    
    
    {  char buf = 'x';
  int p[2];
  expectOK(::pipe(p));
  int flags = ::fcntl(p[0], F_GETFL);
  expectOK(flags);
  expectOK(::fcntl(p[0], F_SETFL, flags | O_NONBLOCK));
  expectWouldBlock(::read(p[0], &buf, 1));
  {
    File f(p[1]);
    EXPECT_EQ(p[1], f.fd());
  }
  // Ensure that moving the file doesn't close it
  {
    File f(p[1]);
    EXPECT_EQ(p[1], f.fd());
    File f1(std::move(f));
    EXPECT_EQ(-1, f.fd());
    EXPECT_EQ(p[1], f1.fd());
  }
  expectWouldBlock(::read(p[0], &buf, 1));  // not closed
  {
    File f(p[1], true);
    EXPECT_EQ(p[1], f.fd());
  }
  ssize_t r = ::read(p[0], &buf, 1);  // eof
  expectOK(r);
  EXPECT_EQ(0, r);
  ::close(p[0]);
}
    
      // writev-like
  ssize_t operator()(int fd, const iovec* iov, int count);
    
    template <bool containerMode, class... Args>
class TestExtendingFormatter
    : public BaseFormatter<TestExtendingFormatter<containerMode, Args...>,
                           containerMode,
                           Args...> {
 private:
  explicit TestExtendingFormatter(StringPiece& str, Args&&... args)
      : BaseFormatter<TestExtendingFormatter<containerMode, Args...>,
                      containerMode,
                      Args...>(str, std::forward<Args>(args)...) {}
    }
    
    #include 'DHTAbstractTask.h'
#include 'a2time.h'
    
    class DHTResponseMessage : public DHTAbstractMessage {
protected:
  virtual std::string toStringOptional() const { return A2STR::NIL; }
    }
    
      Time getSerializedTime() const { return serializedTime_; }
    
    DHTRoutingTableSerializer::DHTRoutingTableSerializer(int family)
    : family_(family)
{
}
    
    class DHTRoutingTableSerializer {
private:
  int family_;
    }
    
        routingTable->setTaskQueue(taskQueue.get());
    routingTable->setTaskFactory(taskFactory.get());
    
    #include <vector>
#include <deque>
#include <memory>
    
    bool DHTUnknownMessage::isReply() const { return false; }
    
    DNSCache::CacheEntry::CacheEntry(const CacheEntry& c) = default;