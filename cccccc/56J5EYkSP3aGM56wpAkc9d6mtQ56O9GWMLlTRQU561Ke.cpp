
        
        //  16384 * sqrt(2) * sin(kPi/9) * 2 / 3
static const tran_high_t sinpi_1_9 = 5283;
static const tran_high_t sinpi_2_9 = 9929;
static const tran_high_t sinpi_3_9 = 13377;
static const tran_high_t sinpi_4_9 = 15212;
    
    #include <vector>
#include <list>
#include <set>
#include <stdexcept>
#include <cstring>
#include <cstdlib>
#include <ostream>
#include <functional>
#include <queue>
    
    
#   define S_MUL(a,b) MULT16_32_Q15(b, a)
    
    #define opus_fft(_st, _fin, _fout, arch) \
   ((void)(arch), opus_fft_neon(_st, _fin, _fout))
    
    /** 16x32 multiplication, followed by a 16-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q16
static OPUS_INLINE opus_val32 MULT16_32_Q16_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q16\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b),'r'(a<<16)
  );
  return rd_hi;
}
#define MULT16_32_Q16(a, b) (MULT16_32_Q16_armv4(a, b))
    
    static OPUS_INLINE short NEG16(int x)
{
   int res;
   if (!VERIFY_SHORT(x))
   {
      fprintf (stderr, 'NEG16: input is not short: %d\n', (int)x);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = -x;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'NEG16: output is not short: %d\n', (int)res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips++;
   return res;
}
static OPUS_INLINE int NEG32(opus_int64 x)
{
   opus_int64 res;
   if (!VERIFY_INT(x))
   {
      fprintf (stderr, 'NEG16: input is not int: %d\n', (int)x);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = -x;
   if (!VERIFY_INT(res))
   {
      fprintf (stderr, 'NEG16: output is not int: %d\n', (int)res);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips+=2;
   return res;
}
    
    /** 16x32 multiplication, followed by a 16-bit shift right (round-to-nearest). Results fits in 32 bits */
#if OPUS_FAST_INT64
#define MULT16_32_P16(a,b) ((opus_val32)PSHR((opus_int64)((opus_val16)(a))*(b),16))
#else
#define MULT16_32_P16(a,b) ADD32(MULT16_16((a),SHR((b),16)), PSHR(MULT16_16SU((a),((b)&0x0000ffff)),16))
#endif
    
    #include 'imgui_freetype.h'
#include 'imgui_internal.h'     // ImMin,ImMax,ImFontAtlasBuild*,
#include <stdint.h>
#include <ft2build.h>
#include FT_FREETYPE_H          // <freetype/freetype.h>
#include FT_MODULE_H            // <freetype/ftmodapi.h>
#include FT_GLYPH_H             // <freetype/ftglyph.h>
#include FT_SYNTHESIS_H         // <freetype/ftsynth.h>
    
    #include 'imgui.h'
#include 'imgui_impl_glfw.h'
#include 'imgui_impl_opengl3.h'
#include <stdio.h>
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
        // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
    std::string DHTResponseMessage::toString() const
{
  return fmt('dht response %s TransactionID=%s Remote:%s(%u), id=%s, v=%s, %s',
             getMessageType().c_str(), util::toHex(getTransactionID()).c_str(),
             getRemoteNode()->getIPAddress().c_str(),
             getRemoteNode()->getPort(),
             util::toHex(getRemoteNode()->getID(), DHT_ID_LENGTH).c_str(),
             util::torrentPercentEncode(getVersion()).c_str(),
             toStringOptional().c_str());
}
    
    DHTRoutingTable::DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode)
    : localNode_(localNode),
      root_(make_unique<DHTBucketTreeNode>(
          std::make_shared<DHTBucket>(localNode_))),
      numBucket_(1),
      taskQueue_{nullptr},
      taskFactory_{nullptr}
{
}
    
    void DHTRoutingTableSerializer::setNodes(
    const std::vector<std::shared_ptr<DHTNode>>& nodes)
{
  nodes_ = nodes;
}
    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
      ~DHTSetup();
    
      virtual std::shared_ptr<DHTTask>
  createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                 int numRetry = 0) = 0;
    
    #endif // D_DHT_TASK_QUEUE_H

    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
    void DNSCache::put(const std::string& hostname, const std::string& ipaddr,
                   uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.lower_bound(target);
  if (i != entries_.end() && *(*i) == *target) {
    (*i)->add(ipaddr);
  }
  else {
    target->add(ipaddr);
    entries_.insert(i, target);
  }
}
    
    PointArray* PointArray::reverse() const
{
    vector<Vec2> newArray;
    newArray.reserve(_controlPoints.size());
    for (auto iter = _controlPoints.rbegin(), iterRend = _controlPoints.rend(); iter != iterRend; ++iter)
    {
        newArray.push_back(*iter);
    }
    PointArray *config = PointArray::create(0);
    config->setControlPoints(std::move(newArray));
    
    return config;
}
    
        /** Removes an action given an action reference.
     *
     * @param action    A certain target.
     */
    virtual void removeAction(Action *action);
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
    
    {    return false;
}
    
    /**
@brief JumpTiles3D action.
@details Move the tiles of a target node across the Z axis.
*/
class CC_DLL JumpTiles3D : public TiledGrid3DAction
{
public:
    /** 
     * @brief Create the action with the number of jumps, the sin amplitude, the grid size and the duration.
     * @param duration Specify the duration of the JumpTiles3D action. It's a value in seconds.
     * @param gridSize Specify the size of the grid.
     * @param numberOfJumps Specify the jump tiles count.
     * @param amplitude Specify the amplitude of the JumpTiles3D action.
     * @return If the creation success, return a pointer of JumpTiles3D action; otherwise, return nil.
     */
    static JumpTiles3D* create(float duration, const Size& gridSize, unsigned int numberOfJumps, float amplitude);
    }
    
    NS_CC_BEGIN