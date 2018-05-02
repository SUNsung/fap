
        
        
    {}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {    _data.Write((const char*)_rawbuf + st.head_length + st.url_length, st.total_length - (st.head_length + st.url_length));
    return LONGLINKPACK_OK;
}
    
    
    {    void throw_exception( std::exception const & e ) {
        xfatal2(TSF'boost exception:%_', e.what());
        
#ifdef ANDROID
        char stack[4096] = {0};
        android_callstack(stack, sizeof(stack));
        xfatal2(TSF'%_', stack);
#endif
    }
}

    
    #include 'comm/debugger/test_spy_sample.h'
#include 'comm/xlogger/xlogger.h'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    jvalue JNU_CallMethodByMethodInfo(JNIEnv* _env, jobject _obj, JniMethodInfo _method_info, ...);
    
      // There must be a goodMallocSize between 100 and 1024...
  EXPECT_LT(1u, queue.front()->countChainElements());
  const IOBuf* buf = queue.front();
  do {
    EXPECT_LE(100u, buf->capacity());
    buf = buf->next();
  } while (buf != queue.front());
    
    template <typename C>
struct compare_less : detail::cmp_pred<C, ordering::lt, 0> {
  using detail::cmp_pred<C, ordering::lt, 0>::cmp_pred;
};
    
    TEST(Futex, basic_live) {
  run_basic_tests<std::atomic>();
  run_wait_until_tests<std::atomic>();
}
    
    
    {
    {} // namespace detail
} // namespace folly

    
    /**
 * DynamicParser provides a tiny DSL for easily, correctly, and losslessly
 * parsing a folly::dynamic into any other representation.
 *
 * To make this concrete, this lets you take a JSON config that potentially
 * contains user errors, and parse __all__ of its valid parts, while
 * automatically and __reversibly__ recording any parts that cause errors:
 *
 *   {'my values': {
 *     'an int': 'THIS WILL BE RECORDED AS AN ERROR, BUT WE'LL PARSE THE REST',
 *     'a double': 3.1415,
 *     'keys & values': {
 *       'the sky is blue': true,
 *       'THIS WILL ALSO BE RECORDED AS AN ERROR': 'cheese',
 *       '2+2=5': false,
 *     }
 *   }}
 *
 * To parse this JSON, you need no exception handling, it is as easy as:
 *
 *   folly::dynamic d = ...;  // Input
 *   int64_t integer;  // Three outputs
 *   double real;
 *   std::map<std::string, bool> enabled_widgets;
 *   DynamicParser p(DynamicParser::OnError::RECORD, &d);
 *   p.required('my values', [&]() {
 *     p.optional('an int', [&](int64_t v) { integer = v; });
 *     p.required('a double', [&](double v) { real = v; });
 *     p.optional('keys & values', [&]() {
 *       p.objectItems([&](std::string widget, bool enabled) {
 *         enabled_widgets.emplace(widget, enabled);
 *       });
 *     });
 *   });
 *
 * Your code in the lambdas can throw, and this will be reported just like
 * missing key and type conversion errors, with precise context on what part
 * of the folly::dynamic caused the error.  No need to throw:
 *   std::runtime_error('Value X at key Y caused a flux capacitor overload')
 * This will do:
 *   std::runtime_error('Flux capacitor overload')
 *
 * == Keys and values are auto-converted to match your callback ==
 *
 * DynamicParser's optional(), required(), objectItems(), and
 * arrayItems() automatically convert the current key and value to match the
 * signature of the provided callback.  parser.key() and parser.value() can
 * be used to access the same data without conversion.
 *
 * The following types are supported -- you should generally take arguments
 * by-value, or by-const-reference for dynamics & strings you do not copy.
 *
 *   Key: folly::dynamic (no conversion), std::string, int64_t
 *   Value: folly::dynamic (no conversion), int64_t, bool, double, std::string
 *
 * There are 21 supported callback signatures, of three kinds:
 *
 *   1: No arguments -- useful if you will just call more parser methods.
 *
 *   5: The value alone -- the common case for optional() and required().
 *        [&](whatever_t value) {}
 *
 *   15: Both the key and the value converted according to the rules above:
 *        [&](whatever_t key, whatever_t) {}
 *
 * NB: The key alone should be rarely needed, but these callback styles
 *     provide it with no conversion overhead, and only minimal verbosity:
 *       [&](const std::string& k, const folly::dynamic&) {}
 *       [&]() { auto k = p.key().asString(); }
 *
 * == How `releaseErrors()` can make your parse lossless ==
 *
 * If you write parsing code by hand, you usually end up with error-handling
 * resembling that of OnError::THROW -- the first error you hit aborts the
 * whole parse, and you report it.
 *
 * OnError::RECORD offers a more user-friendly alternative for 'parse,
 * serialize, re-parse' pipelines, akin to what web-forms do.  All
 * exception-causing parts are losslessly recorded in a parallel
 * folly::dynamic, available via releaseErrors() at the end of the parse.
 *
 * Suppose we fail to look up 'key1' at the root, and hit a value error in
 * 'key2': {'subkey2': ...}.  The error report will have the form:
 *
 *   {'nested': {
 *     'key_errors': {'key1': 'explanatory message'},
 *     'value': <whole input>,
 *     'nested': { 'key2': { 'nested': {
 *       'subkey2': {'value': <original value>, 'error': 'message'}
 *     } } }
 *   }}
 *
 * Errors in array items are handled just the same, but using integer keys.
 *
 * The advantage of this approach is that your parsing can throw wherever,
 * and DynamicParser isolates it, allowing the good parts to parse.
 *
 * Put another way, this makes it easy to implement a transformation that
 * splits a `folly::dynamic` into a 'parsed' part (which might be your
 * struct meant for runtime use), and a matching 'errors' part.  As long as
 * your successful parses are lossless, you can always reconstruct the
 * original input from the parse output and the recorded 'errors'.
 *
 * == Limitations ==
 *
 *  - The input dynamic should be an object or array. wrapError() could be
 *    exposed to allow parsing single scalars, but this would not be a
 *    significant usability improvement over try-catch.
 *
 *  - Do NOT try to parse the same part of the input dynamic twice. You
 *    might report multiple value errors, which is currently unsupported.
 *
 *  - optional() does not support defaulting. This is unavoidable, since
 *    DynamicParser does not dictate how you record parsed data.  If your
 *    parse writes into an output struct, then it ought to be initialized at
 *    construction time.  If your output is initialized to default values,
 *    then you need no 'default' feature.  If it is not initialized, you are
 *    in trouble anyway.  Suppose your optional() parse hits an error.  What
 *    does your output contain?
 *      - Uninitialized data :(
 *      - You rely on an optional() feature to fall back to parsing some
 *        default dynamic.  Sadly, the default hits a parse error.  Now what?
 *    Since there is no good way to default, DynamicParser leaves it out.
 *
 * == Future: un-parsed items ==
 *
 * DynamicParser could support erroring on un-parsed items -- the parts of
 * the folly::dynamic, which were never asked for.  Here is an ok design:
 *
 * (i) At the start of parsing any value, the user may call:
 *   parser.recursivelyForbidUnparsed();
 *   parser.recursivelyAllowUnparsed();
 *   parser.locallyForbidUnparsed();
 *   parser.locallyAllowUnparsed();
 *
 * (ii) At the end of the parse, any unparsed items are dumped to 'errors'.
 * For example, failing to parse index 1 out of ['v1', 'v2', 'v3'] yields:
 *   'nested': {1: {'unparsed': 'v2'}}
 * or perhaps more verbosely:
 *   'nested': {1: {'error': 'unparsed value', 'value': 'v2'}}
 *
 * By default, unparsed items are allowed. Calling a 'forbid' function after
 * some keys have already been parsed is allowed to fail (this permits a
 * lazy implementation, which has minimal overhead when 'forbid' is not
 * requested).
 *
 * == Future: multiple value errors ==
 *
 * The present contract is that exactly one value error is reported per
 * location in the input (multiple key lookup errors are, of course,
 * supported).  If the need arises, multiple value errors could easily be
 * supported by replacing the 'error' string with an 'errors' array.
 */