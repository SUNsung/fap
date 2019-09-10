
        
        
    {  const char* Name() const override { return 'MaxOperator'; }
};
    
    Status WriteBatchBase::SingleDelete(ColumnFamilyHandle* column_family,
                                    const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return SingleDelete(column_family, key_slice);
}
    
    #include 'rocksdb/status.h'
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      Status s = OptimisticTransactionDB::Open(options, kDBPath, &txn_db);
  assert(s.ok());
  db = txn_db->GetBaseDB();
    
    
    {  // close DB
  for (auto* handle : handles) {
    delete handle;
  }
  delete db;
}

    
    // Returns the current memory usage of the specified DB instances.
class MemoryUtil {
 public:
  enum UsageType : int {
    // Memory usage of all the mem-tables.
    kMemTableTotal = 0,
    // Memory usage of those un-flushed mem-tables.
    kMemTableUnFlushed = 1,
    // Memory usage of all the table readers.
    kTableReadersTotal = 2,
    // Memory usage by Cache.
    kCacheTotal = 3,
    kNumUsageTypes = 4
  };
    }
    
    // Options to use when starting an Optimistic Transaction
struct OptimisticTransactionOptions {
  // Setting set_snapshot=true is the same as calling SetSnapshot().
  bool set_snapshot = false;
    }
    
    const Rect Rect::ZERO = Rect(0, 0, 0, 0);
    
    Waves3D* Waves3D::create(float duration, const Size& gridSize, unsigned int waves, float amplitude)
{
    Waves3D *action = new (std::nothrow) Waves3D();
    }
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Waves3D);
};
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        /**
     * get vertex count
     * @return number of vertices
     */
    unsigned int getVertCount() const;
    
    /**
     * get triangles count
     * @return number of triangles
     */
    unsigned int getTrianglesCount() const;
    
    class StencilStateManager;
/**
 *  @addtogroup _2d
 *  @{
 */
/** ClippingNode is a subclass of Node.
 * It draws its content (children) clipped using a stencil.
 * The stencil is an other Node that will not be drawn.
 * The clipping is done using the alpha part of the stencil (adjusted with an alphaThreshold).
 */
class CC_DLL ClippingNode : public Node
{
public:
    /** Creates and initializes a clipping node without a stencil.
     *
     * @return An autorelease ClippingNode.
     */
    static ClippingNode* create();
    
    /** Creates and initializes a clipping node with an other node as its stencil.
     * The stencil node will be retained.
     * @param stencil The stencil node.
     */
    static ClippingNode* create(Node *stencil);
    }
    }
    
    
    {
    {        float scaleX = _scaleX;
        float scaleY = _scaleY;
        Node *parent = this->getParent();
        while (parent) {
            scaleX *= parent->getScaleX();
            scaleY *= parent->getScaleY();
            parent = parent->getParent();
        }
        
        const Point pos = convertToWorldSpace(Point(_clippingRegion.origin.x, _clippingRegion.origin.y));
        GLView* glView = Director::getInstance()->getOpenGLView();
        glView->setScissorInPoints(pos.x,
                                   pos.y,
                                   _clippingRegion.size.width * scaleX,
                                   _clippingRegion.size.height * scaleY);
    }
}
    
    Component::~Component()
{
}
    
    #include <glog/logging.h>
#include <algorithm>
#include <vector>
    
    template <>
inline uint32_t Fingerprint<128>::shlor32(uint32_t v) {
  uint32_t out = (uint32_t)(fp_[0] >> 32);
  fp_[0] = (fp_[0] << 32) | (fp_[1] >> 32);
  fp_[1] = (fp_[1] << 32) | ((uint64_t)v);
  return out;
}
    
      if (!(data->flags & FLAG_IO_THREAD_STARTED)) {
    // Do not start the I/O thread if the constructor has not finished yet
    return;
  }
  if (data->flags & FLAG_DESTROYING) {
    // Do not restart the I/O thread if we were being destroyed.
    // If there are more pending messages that need to be flushed the
    // destructor's stopIoThread() call will handle flushing the messages in
    // this case.
    return;
  }
    
      void writeMessage(folly::StringPiece buffer, uint32_t flags = 0) override;
    
    template <
    class KeyT,
    class ValueT,
    class Allocator = std::allocator<char>,
    class ProbeFcn = AtomicHashArrayLinearProbeFcn>
void testMap() {
  typedef AtomicHashArray<
      KeyT,
      ValueT,
      std::hash<KeyT>,
      std::equal_to<KeyT>,
      Allocator,
      ProbeFcn>
      MyArr;
  auto arr = MyArr::create(150);
  map<KeyT, ValueT> ref;
  for (int i = 0; i < 100; ++i) {
    auto e = createEntry<KeyT, ValueT>(i);
    auto ret = arr->insert(e);
    EXPECT_EQ(!ref.count(e.first), ret.second); // succeed iff not in ref
    ref.insert(e);
    EXPECT_EQ(ref.size(), arr->size());
    if (ret.first == arr->end()) {
      EXPECT_FALSE('AHA should not have run out of space.');
      continue;
    }
    EXPECT_EQ(e.first, ret.first->first);
    EXPECT_EQ(ref.find(e.first)->second, ret.first->second);
  }
    }
    
    class FifoSemaphoreTest : public testing::Test {};
    
      /** Calls a user-defined auxiliary function if any, and releases
   *  permission for the current thread to perform inter-thread
   *  communication. The bool parameter indicates the success of the
   *  shared access (if conditional, true otherwise). */
  static void afterSharedAccess(bool success);
    
      /**
   * Try to combine a task as a combined critical section untill the given time
   *
   * Like the other try_lock() mehtods, this is allowed to fail spuriously,
   * and is not guaranteed to return true even when the mutex is currently
   * unlocked.
   *
   * Note that this does not necessarily have the same performance
   * characteristics as the non-timed version of the combine method.  If
   * performance is critical, use that one instead
   */
  template <
      typename Rep,
      typename Period,
      typename Task,
      typename ReturnType = decltype(std::declval<Task&>()())>
  folly::Optional<ReturnType> try_lock_combine_for(
      const std::chrono::duration<Rep, Period>& duration,
      Task task);
    
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