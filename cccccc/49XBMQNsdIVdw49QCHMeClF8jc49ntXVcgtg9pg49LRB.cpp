
        
        #ifndef BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
#define BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H
    
    #endif // BITCOIN_REVERSELOCK_H

    
    
    {    count = 0;
    for (i = 0; i < len; i++) {
        r[i].infinity = a[i].infinity;
        if (!a[i].infinity) {
            secp256k1_ge_set_gej_zinv(&r[i], &a[i], &azi[count++]);
        }
    }
    free(azi);
}
    
            secp256k1_ecmult_const(&res, &pt, &s);
        secp256k1_ge_set_gej(&pt, &res);
        /* Compute a hash of the point in compressed form
         * Note we cannot use secp256k1_eckey_pubkey_serialize here since it does not
         * expect its output to be secret and has a timing sidechannel. */
        secp256k1_fe_normalize(&pt.x);
        secp256k1_fe_normalize(&pt.y);
        secp256k1_fe_get_b32(x, &pt.x);
        y[0] = 0x02 | secp256k1_fe_is_odd(&pt.y);
    
      // Adds a new point. Takes a copy - the pt doesn't need to stay in scope.
  // Add must be called on points in sequence along the line.
  void Add(const ICOORD& pt);
  // Associates a half-width with the given point if a point overlaps the
  // previous point by more than half the width, and its distance is further
  // than the previous point, then the more distant point is ignored in the
  // distance calculation. Useful for ignoring i dots and other diacritics.
  void Add(const ICOORD& pt, int halfwidth);
    
    class BLOCK;
class FCOORD;
class TBOX;
class UNICHARSET;
    
    STRING ParagraphModel::ToString() const {
  char buffer[200];
  const STRING &alignment = ParagraphJustificationToString(justification_);
  snprintf(buffer, sizeof(buffer),
           'margin: %d, first_indent: %d, body_indent: %d, alignment: %s',
           margin_, first_indent_, body_indent_, alignment.string());
  return STRING(buffer);
}

    
      // A hole in the heap exists at hole_index, and we want to fill it with the
  // given pair. SiftDown sifts the hole downward to the correct position and
  // returns the destination index without actually putting pair there.
  int SiftDown(int hole_index, const Pair& pair) {
    int heap_size = heap_.size();
    int child;
    while ((child = LeftChild(hole_index)) < heap_size) {
      if (child + 1 < heap_size && heap_[child + 1] < heap_[child])
        ++child;
      if (heap_[child] < pair) {
        heap_[hole_index] = heap_[child];
        hole_index = child;
      } else {
        break;
      }
    }
    return hole_index;
  }
    
    
    {	if (!noError && printErrors){
		printf('Found invalid polygon, ');
		switch(error){
			case 0:
				printf('must have between 3 and %d vertices.\n',b2_maxPolygonVertices);
				break;
			case 1:
				printf('must be convex.\n');
				break;
			case 2:
				printf('must be simple (cannot intersect itself).\n');
				break;
			case 3:
				printf('area is too small.\n');
				break;
			case 4:
				printf('sides are too close to parallel.\n');
				break;
			case 5:
				printf('polygon is too thin.\n');
				break;
			case 6:
				printf('core shape generation would move edge past centroid (too thin).\n');
				break;
			default:
				printf('don't know why.\n');
		}
	}
	return noError;
}
    
    			m_pencodingbitsRGB8->differential.dred2 = iDRed2;
			m_pencodingbitsRGB8->differential.dgreen2 = iDGreen2;
			m_pencodingbitsRGB8->differential.dblue2 = iDBlue2;
		}
		else
		{
			m_pencodingbitsRGB8->individual.red1 = (unsigned int)m_frgbaColor1.IntRed(15.0f);
			m_pencodingbitsRGB8->individual.green1 = (unsigned int)m_frgbaColor1.IntGreen(15.0f);
			m_pencodingbitsRGB8->individual.blue1 = (unsigned int)m_frgbaColor1.IntBlue(15.0f);
    
        /* ignored for horizontal metrics */
    FT_UInt          blue_count;
    AF_LatinBlueRec  blues[AF_BLUE_STRINGSET_MAX];
    
    #endif /* FASTLZ_H */

    
    /** Negate a 16-bit value */
#define NEG16(x) (-(x))
/** Negate a 32-bit value */
#define NEG32(x) (-(x))
    
    #define silk_ADD_LSHIFT(a, b, shift)        ((a) + silk_LSHIFT((b), (shift)))               /* shift >= 0 */
#define silk_ADD_LSHIFT32(a, b, shift)      silk_ADD32((a), silk_LSHIFT32((b), (shift)))    /* shift >= 0 */
#define silk_ADD_LSHIFT_uint(a, b, shift)   ((a) + silk_LSHIFT_uint((b), (shift)))          /* shift >= 0 */
#define silk_ADD_RSHIFT(a, b, shift)        ((a) + silk_RSHIFT((b), (shift)))               /* shift >= 0 */
#define silk_ADD_RSHIFT32(a, b, shift)      silk_ADD32((a), silk_RSHIFT32((b), (shift)))    /* shift >= 0 */
#define silk_ADD_RSHIFT_uint(a, b, shift)   ((a) + silk_RSHIFT_uint((b), (shift)))          /* shift >= 0 */
#define silk_SUB_LSHIFT32(a, b, shift)      silk_SUB32((a), silk_LSHIFT32((b), (shift)))    /* shift >= 0 */
#define silk_SUB_RSHIFT32(a, b, shift)      silk_SUB32((a), silk_RSHIFT32((b), (shift)))    /* shift >= 0 */
    
    int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ExtensionManagerHandler> handler(new ExtensionManagerHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ExtensionManagerProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
    }
    
    
    {};
    
    
    {
    {      auto serial = resp.content.find('serial_number');
      if (serial != resp.content.end()) {
        hw_info[serial->second] = resp.content;
      };
    }
  });
    
    /**
 * @brief Intel HECI GUID for the update application.
 *
 * This GUID can be used on every OS over the HECI protocol to inspect the
 * FW version.
 */
const std::vector<uint8_t> kMEIUpdateGUID{
    232, 205, 157, 48, 177, 204, 98, 64, 143, 120, 96, 1, 21, 163, 67, 39,
};
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    // Sanity check integration test for kernel_extensions
// Spec file: specs/darwin/kernel_extensions.table
    
    TEST_F(kernelPanics, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from kernel_panics');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'path', NormalType}
  //      {'time', NormalType}
  //      {'registers', NormalType}
  //      {'frame_backtrace', NormalType}
  //      {'module_backtrace', NormalType}
  //      {'dependencies', NormalType}
  //      {'name', NormalType}
  //      {'os_version', NormalType}
  //      {'kernel_version', NormalType}
  //      {'system_model', NormalType}
  //      {'uptime', IntType}
  //      {'last_loaded', NormalType}
  //      {'last_unloaded', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
    #include <osquery/tests/integration/tables/helper.h>
    
    
    {protected:
    //! Duration in seconds.
    float _duration;
private:
    CC_DISALLOW_COPY_AND_ASSIGN(FiniteTimeAction);
};
    
    NS_CC_END

    
        if (action)
    {
        if (action->initWithDuration(duration, gridSize, position, radius, waves, amplitude))
        {
            action->autorelease();
        }
        else
        {
            CC_SAFE_RELEASE_NULL(action);
        }
    }
    
    /** @class Place
* @brief Places the node in a certain position.
*/
class CC_DLL Place : public ActionInstant
{
public:
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    struct Tile;
/**
@brief ShuffleTiles action.
@details This action make the target node shuffle with many tiles in random order.
        You can create the action by these parameters:
        duration, grid size, the random seed.
*/
class CC_DLL ShuffleTiles : public TiledGrid3DAction
{
public:
    /** 
    * @brief Create the action with grid size, random seed and duration.
    * @param duration Specify the duration of the ShuffleTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the creation success, return a pointer of ShuffleTiles action; otherwise, return nil.
    */
    static ShuffleTiles* create(float duration, const Size& gridSize, unsigned int seed);
    }
    
    #include '2d/CCActionTween.h'
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCAnimation.h'
#include 'renderer/CCTextureCache.h'
#include 'renderer/CCTexture2D.h'
#include 'base/CCDirector.h'