
        
          // True when a ScopedPyObjectPtr and a raw pointer refer to the same object.
  // Comparison operators are non reflexive.
  bool operator==(const PyObjectStruct* p) const { return ptr_ == p; }
  bool operator!=(const PyObjectStruct* p) const { return ptr_ != p; }
    
    namespace {
// Whether two fields have conflicting accessors (assuming name1 and name2
// are different). name1 and name2 are field1 and field2's camel-case name
// respectively.
bool IsConflicting(const FieldDescriptor* field1, const string& name1,
                   const FieldDescriptor* field2, const string& name2,
                   string* info) {
  if (field1->is_repeated()) {
    if (field2->is_repeated()) {
      // Both fields are repeated.
      return false;
    } else {
      // field1 is repeated, and field2 is not.
      if (name1 + 'Count' == name2) {
        *info = 'both repeated field \'' + field1->name() + '\' and singular ' +
                'field \'' + field2->name() + '\' generate the method \'' +
                'get' + name1 + 'Count()\'';
        return true;
      }
      if (name1 + 'List' == name2) {
        *info = 'both repeated field \'' + field1->name() + '\' and singular ' +
                'field \'' + field2->name() + '\' generate the method \'' +
                'get' + name1 + 'List()\'';
        return true;
      }
      // Well, there are obviously many more conflicting cases, but it probably
      // doesn't worth the effort to exhaust all of them because they rarely
      // happen and as we are continuing adding new methods/changing existing
      // methods the number of different conflicting cases will keep growing.
      // We can just add more cases here when they are found in the real world.
      return false;
    }
  } else {
    if (field2->is_repeated()) {
      return IsConflicting(field2, name2, field1, name1, info);
    } else {
      // None of the two fields are repeated.
      return false;
    }
  }
}
}  // namespace
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_doc_comment.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_name_resolver.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
      // Limit the number of bytes per line.
  static const int kBytesPerLine = 40;
  // Limit the number of lines per string part.
  static const int kLinesPerPart = 400;
  // Every block of bytes, start a new string literal, in order to avoid the
  // 64k length limit. Note that this value needs to be <64k.
  static const int kBytesPerPart = kBytesPerLine * kLinesPerPart;
  for (int i = 0; i < file_data.size(); i += kBytesPerLine) {
    if (i > 0) {
      if (i % kBytesPerPart == 0) {
        printer->Print(',\n');
      } else {
        printer->Print(' +\n');
      }
    }
    printer->Print('\'$data$\'',
      'data', CEscape(file_data.substr(i, kBytesPerLine)));
  }
    
    void Action::startWithTarget(Node *aTarget)
{
    _originalTarget = _target = aTarget;
}
    
    EaseBezierAction* EaseBezierAction::reverse() const
{
    EaseBezierAction* reverseAction = EaseBezierAction::create(_inner->reverse());
    reverseAction->setBezierParamer(_p3,_p2,_p1,_p0);
    return reverseAction;
}
    
    FlipX * FlipX::clone() const
{
    // no copy constructor
    return FlipX::create(_flipX);
}
//
// FlipY
//
    
    class CC_DLL __CCCallFuncO : public CallFunc
{
public:
    /** Creates the action with the callback.
        typedef void (Ref::*SEL_CallFuncO)(Ref*);
     *
     * @param target    A certain target.
     * @param selector  The callback need to be executed.
     * @param object    An object as the callback's first argument.
     * @return An autoreleased __CCCallFuncO object.
     */
    CC_DEPRECATED_ATTRIBUTE static __CCCallFuncO * create(Ref* target, SEL_CallFuncO selector, Ref* object);
    //
    // Overrides
    //
    virtual __CCCallFuncO* clone() const override;
    virtual void execute() override;
    
    Ref* getObject() const;
    void setObject(Ref* obj);
    
CC_CONSTRUCTOR_ACCESS:
    __CCCallFuncO();
    virtual ~__CCCallFuncO();
    /** initializes the action with the callback
    }
    
    void ScaleTo::startWithTarget(Node *target)
{
    ActionInterval::startWithTarget(target);
    _startScaleX = target->getScaleX();
    _startScaleY = target->getScaleY();
    _startScaleZ = target->getScaleZ();
    _deltaX = _endScaleX - _startScaleX;
    _deltaY = _endScaleY - _startScaleY;
    _deltaZ = _endScaleZ - _startScaleZ;
}
    
    #endif // __ACTION_CCACTION_MANAGER_H__

    
    
    {        return true;
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
    /**
@brief FadeOutDownTiles action.
@details Fades out the target node with many tiles from top to bottom.
 */
class CC_DLL FadeOutDownTiles : public FadeOutUpTiles
{
public:
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the FadeOutDownTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @return If the creation success, return a pointer of FadeOutDownTiles action; otherwise, return nil.
    */
    static FadeOutDownTiles* create(float duration, const Size& gridSize);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CCACTIONTWEEN_H__
#define __CCACTIONTWEEN_H__
    
        /** @deprecated Use getInstance() instead. */
    CC_DEPRECATED_ATTRIBUTE static AnimationCache* sharedAnimationCache() { return AnimationCache::getInstance(); }
    
        static BOOST_FORCEINLINE storage_type exchange(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
#if defined(__clang__)
        // Clang cannot allocate eax:edx register pairs but it has sync intrinsics
        storage_type old_val = storage;
        while (true)
        {
            storage_type val = __sync_val_compare_and_swap(&storage, old_val, v);
            if (val == old_val)
                return val;
            old_val = val;
        }
#elif !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
#if defined(__PIC__)
        uint32_t scratch;
        __asm__ __volatile__
        (
            'movl %%ebx, %[scratch]\n\t'
            'movl %%eax, %%ebx\n\t'
            'movl %%edx, %%ecx\n\t'
            'movl %[dest], %%eax\n\t'
            'movl 4+%[dest], %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b %[dest]\n\t'
            'jne 1b\n\t'
            'movl %[scratch], %%ebx\n\t'
            : '+A' (v), [scratch] '=m' (scratch), [dest] '+o' (storage)
            :
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'ecx', 'memory'
        );
        return v;
#else // defined(__PIC__)
        __asm__ __volatile__
        (
            'movl %[dest], %%eax\n\t'
            'movl 4+%[dest], %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b %[dest]\n\t'
            'jne 1b\n\t'
            : '=A' (v), [dest] '+o' (storage)
            : 'b' ((uint32_t)v), 'c' ((uint32_t)(v >> 32))
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return v;
#endif // defined(__PIC__)
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
#if defined(__PIC__)
        uint32_t scratch;
        __asm__ __volatile__
        (
            'movl %%ebx, %[scratch]\n\t'
            'movl %%eax, %%ebx\n\t'
            'movl %%edx, %%ecx\n\t'
            'movl 0(%[dest]), %%eax\n\t'
            'movl 4(%[dest]), %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b 0(%[dest])\n\t'
            'jne 1b\n\t'
            'movl %[scratch], %%ebx\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '+A,A' (v), [scratch] '=m,m' (scratch)
            : [dest] 'D,S' (&storage)
#else
            : '+A' (v), [scratch] '=m' (scratch)
            : [dest] 'D' (&storage)
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'ecx', 'memory'
        );
        return v;
#else // defined(__PIC__)
        __asm__ __volatile__
        (
            'movl 0(%[dest]), %%eax\n\t'
            'movl 4(%[dest]), %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b 0(%[dest])\n\t'
            'jne 1b\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '=A,A' (v)
            : 'b,b' ((uint32_t)v), 'c,c' ((uint32_t)(v >> 32)), [dest] 'D,S' (&storage)
#else
            : '=A' (v)
            : 'b' ((uint32_t)v), 'c' ((uint32_t)(v >> 32)), [dest] 'D' (&storage)
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return v;
#endif // defined(__PIC__)
#endif
    }
    
    template< >
struct make_storage_type< 1u, false >
{
    typedef mars_boost::uint8_t type;
    }