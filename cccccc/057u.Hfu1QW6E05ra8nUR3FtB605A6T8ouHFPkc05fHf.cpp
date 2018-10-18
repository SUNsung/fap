
        
        namespace atom {
    }
    
    #include 'atom/browser/api/atom_api_global_shortcut.h'
    
      // Current blocker type used by |power_save_blocker_|
  device::mojom::WakeLockType current_blocker_type_;
    
    
void print_init_message(const char *message) {
  size_t unused;
  unused = write(1, message, strlen(message));
  unused = write(1, '\n', 1);
}
    
        const auto* data_ptr = data.template data<T>();
    std::unordered_map<T, int64_t> dict;
    std::vector<int64_t> dupIndices;
    // i is the index of unique elements, j is the index of all elements
    for (int64_t i = 0, j = 0; j < data.dims()[0]; ++i, ++j) {
      bool retVal = dict.insert({data_ptr[j], i}).second;
      if (!retVal) {
        --i;
        dupIndices.push_back(j);
      }
    }
    
    
    {  bool RunOnDevice() override {
    for (Blob* output : OperatorBase::Outputs()) {
      output->Reset();
    }
    return true;
  }
};
    
    
    {
    {
    {
    {          std::transform(
            begin(inputs) + start, begin(inputs) + stop,
            retMem + start,
            func
          );
        }
      } catch (const std::runtime_error& e) {
        std::fprintf(stderr,
          'worker thread exited with exception: %s\n', e.what());
        failed = true;
      }
    }));
  }
    
    
    {  // Regular patch for branch by offset type
  if (!di.setNearBranchTarget(dest))
    assert(false && 'Can't patch a branch with such a big offset');
}
    
      Object createObject() const;
    
    
    {  auto entry = m_it.second();
  assertx(entry.isString());
  return HHVM_FN(dirname)(entry.toString());
}
    
          if (pos_period != std::string::npos &&
          pos_equals != std::string::npos &&
          pos_period < pos_equals) {
        section = line.substr(0, pos_period);
      }
    
    inline TypedValue ExecutionContext::invokeFunc(
  const CallCtx& ctx,
  const Variant& args_,
  VarEnv* varEnv
) {
  return invokeFunc(ctx.func, args_, ctx.this_, ctx.cls, varEnv,
                    ctx.invName, InvokeNormal, ctx.dynamic);
}
    
    //////////////////////////////////////////////////////////////////////
    
    #include 'leveldb/db.h'
#include 'db/db_impl.h'
#include 'leveldb/cache.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
    std::string DescriptorFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  char buf[100];
  snprintf(buf, sizeof(buf), '/MANIFEST-%06llu',
           static_cast<unsigned long long>(number));
  return dbname + buf;
}
    
    #include 'db/filename.h'
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
    bool MemTable::Get(const LookupKey& key, std::string* value, Status* s) {
  Slice memkey = key.memtable_key();
  Table::Iterator iter(&table_);
  iter.Seek(memkey.data());
  if (iter.Valid()) {
    // entry format is:
    //    klength  varint32
    //    userkey  char[klength]
    //    tag      uint64
    //    vlength  varint32
    //    value    char[vlength]
    // Check that it belongs to same user key.  We do not check the
    // sequence number since the Seek() call above should have skipped
    // all entries with overly large sequence numbers.
    const char* entry = iter.key();
    uint32_t key_length;
    const char* key_ptr = GetVarint32Ptr(entry, entry+5, &key_length);
    if (comparator_.comparator.user_comparator()->Compare(
            Slice(key_ptr, key_length - 8),
            key.user_key()) == 0) {
      // Correct user key
      const uint64_t tag = DecodeFixed64(key_ptr + key_length - 8);
      switch (static_cast<ValueType>(tag & 0xff)) {
        case kTypeValue: {
          Slice v = GetLengthPrefixedSlice(key_ptr + key_length);
          value->assign(v.data(), v.size());
          return true;
        }
        case kTypeDeletion:
          *s = Status::NotFound(Slice());
          return true;
      }
    }
  }
  return false;
}
    
        for (size_t i = 0; i < tables_.size(); i++) {
      // TODO(opt): separate out into multiple levels
      const TableInfo& t = tables_[i];
      edit_.AddFile(0, t.meta.number, t.meta.file_size,
                    t.meta.smallest, t.meta.largest);
    }
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    void PointArray::reverseInline()
{
    const size_t l = _controlPoints.size();
    Vec2 *p1 = nullptr;
    Vec2 *p2 = nullptr;
    float x, y;
    for (size_t i = 0; i < l/2; ++i)
    {
        p1 = &_controlPoints.at(i);
        p2 = &_controlPoints.at(l-i-1);
        
        x = p1->x;
        y = p1->y;
        
        p1->x = p2->x;
        p1->y = p2->y;
        
        p2->x = x;
        p2->y = y;
    }
}
    
        /** Initializes a Catmull Rom config with a capacity hint.
     *
     * @js NA
     * @param capacity The size of the array.
     * @return True.
     */
    bool initWithCapacity(ssize_t capacity);
    
    NS_CC_BEGIN
    
    bool ProgressFromTo::initWithDuration(float duration, float fromPercentage, float toPercentage)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _to = toPercentage;
        _from = fromPercentage;
    }
    }
    
    void ShuffleTiles::startWithTarget(Node *target)
{
    TiledGrid3DAction::startWithTarget(target);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    AnimationFrame* AnimationFrame::clone() const
{
    // no copy constructor
    auto frame = new (std::nothrow) AnimationFrame();
    frame->initWithSpriteFrame(_spriteFrame->clone(),
                               _delayUnits,
                               _userInfo);
    }
    
        /** @deprecated Use getInstance() instead. */
    CC_DEPRECATED_ATTRIBUTE static AnimationCache* sharedAnimationCache() { return AnimationCache::getInstance(); }
    
    #include <folly/Benchmark.h>
#include <folly/FileUtil.h>
#include <folly/init/Init.h>
#include <folly/json.h>
    
    void Executor::addWithPriority(Func, int8_t /* priority */) {
  throw std::runtime_error(
      'addWithPriority() is not implemented for this Executor');
}
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
    /*
 * Return a good seed for a random number generator.
 * Note that this is a legacy function, as it returns a 32-bit value, which
 * is too small to be useful as a 'real' RNG seed. Use the functions in class
 * Random instead.
 */
inline uint32_t randomNumberSeed() {
  return Random::rand32();
}
    
    
    {     private:
      Executor::KeepAlive<VirtualExecutor> keepAlive_;
      Func f_;
    };
    
    #include <folly/Portability.h>
#include <folly/compression/Compression.h>
    
        static BOOST_FORCEINLINE storage_type load(storage_type const volatile& storage, memory_order) BOOST_NOEXCEPT
    {
        storage_type value;
    }
    
        struct aligned
    {
        BOOST_ALIGNMENT(16) type value;
    }