
        
        
    {}  // namespace tensorflow
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {}  // namespace tensorflow
    
    class RandomAccessFile;
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        //
    // Overrides
    //
    virtual FiniteTimeAction* reverse() const override
    {
        CC_ASSERT(0);
        return nullptr;
    }
    virtual FiniteTimeAction* clone() const override
    {
        CC_ASSERT(0);
        return nullptr;
    }
    
        /** Initializes a Catmull Rom config with a capacity hint.
     *
     * @js NA
     * @param capacity The size of the array.
     * @return True.
     */
    bool initWithCapacity(ssize_t capacity);
    
    // implementation of TiledGrid3DAction
    
        Vec3 v0, v1, v, diff;
    
    bool __CCCallFuncO::initWithTarget(Ref* selectorTarget, SEL_CallFuncO selector, Ref* object)
{
    if (CallFunc::initWithTarget(selectorTarget))
    {
        _object = object;
        CC_SAFE_RETAIN(_object);
        
        _callFuncO = selector;
        return true;
    }
    
    return false;
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    void Animation::addSpriteFrame(SpriteFrame* spriteFrame)
{
    AnimationFrame *animFrame = AnimationFrame::create(spriteFrame, 1.0f, ValueMap());
    _frames.pushBack(animFrame);
    }
    
            if ( frameArray.empty() )
        {
            CCLOG('cocos2d: AnimationCache: Animation '%s' found in dictionary without any frames - cannot add to animation cache.', name.c_str());
            continue;
        }
    
    void BENCHFUN(insertFront)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.insert(v.begin(), obj); }
  });
}
    
        CHECK_LE(pos + headerSize + contentSize, len);
    
    // Some utility routines relating to unicode.
    
      void addWithPriority(Func f, int8_t priority) override {
    executor_->addWithPriority(wrapFunc(std::move(f)), priority);
  }
    
    #pragma once
    
      // Check pointer equality considering wrapped aliased pointers.
  bool owners_eq(PackedPtr& p1, BasePtr* p2) {
    bool aliased1 = p1.extra() & ALIASED_PTR;
    if (aliased1) {
      auto p1a = CountedDetail::template get_shared_ptr_from_counted_base<T>(
          p1.get(), false);
      return CountedDetail::get_counted_base(p1a) == p2;
    }
    return p1.get() == p2;
  }
    
    template <template <typename> class Atom = std::atomic>
struct counted_ptr_base {
 protected:
  static intrusive_shared_count<Atom>* getRef(void* pt) {
    char* p = (char*)pt;
    p -= sizeof(intrusive_shared_count<Atom>);
    return (intrusive_shared_count<Atom>*)p;
  }
};