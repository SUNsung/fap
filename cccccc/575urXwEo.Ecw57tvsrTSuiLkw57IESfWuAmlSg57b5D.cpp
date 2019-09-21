
        
          // infeed_slices_'s shape should be a tuple of shape (buffers, token).
  const auto& infeed_shape = infeed_slices_.shape();
  TF_RET_CHECK(infeed_shape.IsTuple())
      << ShapeUtil::HumanStringWithLayout(infeed_shape);
  TF_RET_CHECK(infeed_shape.tuple_shapes().size() == 2)
      << ShapeUtil::HumanStringWithLayout(infeed_shape);
  TF_RET_CHECK(infeed_shape.tuple_shapes(1).IsToken())
      << ShapeUtil::HumanStringWithLayout(infeed_shape);
  TF_RET_CHECK(
      ShapeUtil::Equal(infeed_buffers.shape(), infeed_shape.tuple_shapes(0)))
      << 'Expected infeed of shape '
      << ShapeUtil::HumanStringWithLayout(infeed_shape.tuple_shapes(0))
      << ' but was '
      << ShapeUtil::HumanStringWithLayout(infeed_buffers.shape());
    
    Status Memset32BitValueThunk::ExecuteOnStream(const ExecuteParams& params) {
  se::DeviceMemoryBase dest_data =
      params.buffer_allocations->GetDeviceAddress(dest_);
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  params.stream->ThenMemset32(&dest_data, value_, dest_data.size());
  return Status::OK();
}
    
    
    {  const int64 replica_count_;
  const int64 element_count_;
  const BufferAllocation::Slice source_buffer_;
  const BufferAllocation::Slice destination_buffer_;
  std::unique_ptr<AuxData> aux_data_;
};
    
      Status block_status = stream.BlockHostUntilDone();
  if (!block_status.ok()) {
    return InternalError('Failed to complete data transfer on stream %p: %s',
                         &stream, block_status.error_message());
  }
    
    #ifndef TENSORFLOW_COMPILER_XLA_SERVICE_GPU_OUTFEED_THUNK_H_
#define TENSORFLOW_COMPILER_XLA_SERVICE_GPU_OUTFEED_THUNK_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        UMat frame1(sz, CV_8U);
    UMat frame2(sz, CV_8U);
    UMat flow;
    
        int             _rleSymbol;        // RLE symbol written by the encoder.
                                       // This could be 65536, so beware
                                       // when you use shorts to hold things.
    
    #ifndef INCLUDED_IMF_FLOAT_ATTRIBUTE_H
#define INCLUDED_IMF_FLOAT_ATTRIBUTE_H
    
    // file handling classes
class OutputFile;
class TiledInputFile;
class ScanLineInputFile;
class InputFile;
class TiledOutputFile;
class DeepScanLineInputFile;
class DeepScanLineOutputFile;
class DeepTiledInputFile;
class DeepTiledOutputFile;
class AcesInputFile;
class AcesOutputFile;
class TiledInputPart;
class TiledInputFile;
class TileOffsets;
    
    //-----------------------------------------------------------------------------
//
//      class Slice
//      class FrameBuffer
//
//-----------------------------------------------------------------------------
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    Rational
guessExactFps (double fps)
{
    return guessExactFps (Rational (fps));
}
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    
    //----------------------------------------------------------------------
    // Preview image:
    //
    // The preview image is a PreviewImageAttribute whose name is 'preview'.
    // This attribute is special -- while an image file is being written,
    // the pixels of the preview image can be changed repeatedly by calling
    // OutputFile::updatePreviewImage().
    //
    // Convenience functions:
    //
    // setPreviewImage(p)
    //     calls insert ('preview', PreviewImageAttribute (p))
    //
    // previewImage()
    //     returns typedAttribute<PreviewImageAttribute>('preview').value()
    //
    // hasPreviewImage()
    //     return findTypedAttribute<PreviewImageAttribute>('preview') != 0
    //
    //----------------------------------------------------------------------
    
    
//-----------------------------------------------------------------------------
//
//	Low-level file input and output for OpenEXR.
//
//-----------------------------------------------------------------------------
    
    
    {
    {        REPLACE_EXC (e, 'Cannot read image file '
                     '\'' << is.fileName() << '\'. ' << e.what());
        throw;
    }
    catch (...)
    {
        if (_data &&  !_data->multiPartBackwardSupport  && _data->_streamData) delete _data->_streamData;
        if (_data)       delete _data;
        _data=NULL;
        throw;
    }
}
    
    
    {    private:
        InputFile* file;
    // for internal use - give OutputFile and TiledOutputFile access to file for copyPixels
    friend void OutputFile::copyPixels(InputPart&);
    friend void TiledOutputFile::copyPixels(InputPart&);
    
};
    
    //
// Used to wrap OPENEXR_IMF_INTERNAL_NAMESPACE::IStream as a Mutex.
//
struct InputStreamMutex : public Mutex
{
    OPENEXR_IMF_INTERNAL_NAMESPACE::IStream* is;
    Int64 currentPosition;
    }
    
    	THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
    
    	const long trackNumber = m_block->GetTrackNumber();
	if (trackNumber == videoTrackNumber)
		frame = videoFrame;
	else if (trackNumber == audioTrackNumber)
		frame = audioFrame;
	else
	{
		//Should not be possible
		assert(trackNumber == videoTrackNumber || trackNumber == audioTrackNumber);
		return false;
	}
    
    static const static_bookblock _resbook_16s_0={
  {
    {0},
    {0,0,&_16c0_s_p1_0},
    {0},
    {0,0,&_16c0_s_p3_0},
    {0,0,&_16c0_s_p4_0},
    {0,0,&_16c0_s_p5_0},
    {0,0,&_16c0_s_p6_0},
    {&_16c0_s_p7_0,&_16c0_s_p7_1},
    {&_16c0_s_p8_0,&_16c0_s_p8_1},
    {&_16c0_s_p9_0,&_16c0_s_p9_1,&_16c0_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_1={
  {
    {0},
    {0,0,&_16c1_s_p1_0},
    {0},
    {0,0,&_16c1_s_p3_0},
    {0,0,&_16c1_s_p4_0},
    {0,0,&_16c1_s_p5_0},
    {0,0,&_16c1_s_p6_0},
    {&_16c1_s_p7_0,&_16c1_s_p7_1},
    {&_16c1_s_p8_0,&_16c1_s_p8_1},
    {&_16c1_s_p9_0,&_16c1_s_p9_1,&_16c1_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_2={
  {
    {0},
    {0,0,&_16c2_s_p1_0},
    {0,0,&_16c2_s_p2_0},
    {0,0,&_16c2_s_p3_0},
    {0,0,&_16c2_s_p4_0},
    {&_16c2_s_p5_0,&_16c2_s_p5_1},
    {&_16c2_s_p6_0,&_16c2_s_p6_1},
    {&_16c2_s_p7_0,&_16c2_s_p7_1},
    {&_16c2_s_p8_0,&_16c2_s_p8_1},
    {&_16c2_s_p9_0,&_16c2_s_p9_1,&_16c2_s_p9_2}
   }
};
    
    static const static_bookblock _resbook_8u_0={
  {
    {0},
    {0,0,&_8u0__p1_0},
    {0,0,&_8u0__p2_0},
    {0,0,&_8u0__p3_0},
    {0,0,&_8u0__p4_0},
    {0,0,&_8u0__p5_0},
    {&_8u0__p6_0,&_8u0__p6_1},
    {&_8u0__p7_0,&_8u0__p7_1,&_8u0__p7_2}
   }
};
static const static_bookblock _resbook_8u_1={
  {
    {0},
    {0,0,&_8u1__p1_0},
    {0,0,&_8u1__p2_0},
    {0,0,&_8u1__p3_0},
    {0,0,&_8u1__p4_0},
    {0,0,&_8u1__p5_0},
    {0,0,&_8u1__p6_0},
    {&_8u1__p7_0,&_8u1__p7_1},
    {&_8u1__p8_0,&_8u1__p8_1},
    {&_8u1__p9_0,&_8u1__p9_1,&_8u1__p9_2}
   }
};
    
    typedef ogg_int16_t vorbis_fpu_control;
    
    #define WRAPLOW(x) ((((int32_t)check_range(x)) << 16) >> 16)
#if CONFIG_VP9_HIGHBITDEPTH
#define HIGHBD_WRAPLOW(x, bd) \
    ((((int32_t)highbd_check_range((x), bd)) << (24 - bd)) >> (24 - bd))
#endif  // CONFIG_VP9_HIGHBITDEPTH
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    namespace xgboost {
namespace common {
    }
    }
    
    /**
 * @brief Get the relative identifier (RID) from a security identifier (SID).
 *
 * @returns the RID represented as an unsigned long integer.
 */
DWORD getRidFromSid(PSID sidPtr);
    
    void processLocalGroups(QueryData& results) {
  unsigned long groupInfoLevel = 1;
  unsigned long numGroupsRead = 0;
  unsigned long totalGroups = 0;
  unsigned long resumeHandle = 0;
  unsigned long ret = 0;
  LOCALGROUP_INFO_1* lginfo = nullptr;
    }
    
      std::vector<char> buffer;
  buffer.reserve(hash_.size() * 32);
  auto add = [&buffer](const std::string& text) {
    for (const auto& c : text) {
      buffer.push_back(c);
    }
  };
  for (const auto& it : hash_) {
    add(it.second);
  }
    
    ExpectedSuccess<DatabaseError> InMemoryDatabase::open() {
  debug_only::verifyTrue(!is_open_, 'database is already open');
  for (const auto& domain : kDomains) {
    storage_[domain] = std::make_unique<InMemoryStorage<DataType>>();
  }
  is_open_ = true;
  return Success();
}
    
    float Rect::getMinY() const
{
    return origin.y;
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    /** @class OrbitCamera
 *
 * @brief OrbitCamera action.
 * Orbits the camera around the center of the screen using spherical coordinates.
 * @ingroup Actions
 */
class CC_DLL OrbitCamera : public ActionCamera
{
public:
    /** Creates a OrbitCamera action with radius, delta-radius,  z, deltaZ, x, deltaX. 
     *
     * @param t Duration in seconds.
     * @param radius The start radius.
     * @param deltaRadius The delta radius.
     * @param angleZ The start angle in Z.
     * @param deltaAngleZ The delta angle in Z.
     * @param angleX The start angle in X.
     * @param deltaAngleX The delta angle in X.
     * @return An OrbitCamera.
     */
    static OrbitCamera* create(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX);
    
    /** Positions the camera according to spherical coordinates. 
     *
     * @param r The spherical radius.
     * @param zenith The spherical zenith.
     * @param azimuth The spherical azimuth.
     */
    void sphericalRadius(float *r, float *zenith, float *azimuth);
    }
    
    Twirl *Twirl::clone() const
{
    // no copy constructor    
    auto a = new (std::nothrow) Twirl();
    a->initWithDuration(_duration, _gridSize, _position, _twirls, _amplitude);
    a->autorelease();
    return a;
}
    
        /** Removes an action given its tag and the target.
     *
     * @param tag       The action's tag.
     * @param target    A certain target.
     */
    virtual void removeActionByTag(int tag, Node *target);
    
    /** Removes all actions given its tag and the target.
     *
     * @param tag       The actions' tag.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeAllActionsByTag(int tag, Node *target);
    
    void ActionTween::update(float dt)
{
    dynamic_cast<ActionTweenDelegate*>(_target)->updateTweenAction(_to  - _delta * (1 - dt), _key);
}
    
    
    {        for(const auto &value : spritesheets) {
            std::string path = FileUtils::getInstance()->fullPathFromRelativeFile(value.asString(),plist);
            SpriteFrameCache::getInstance()->addSpriteFramesWithFile(path);
        }
    }
    
    
    {protected:
    ClippingRectangleNode()
    : _clippingEnabled(true)
    {
    }
    
    void onBeforeVisitScissor();
    void onAfterVisitScissor();
    
    Rect _clippingRegion;
    bool _clippingEnabled;
    
    CustomCommand _beforeVisitCmdScissor;
    CustomCommand _afterVisitCmdScissor;
};
    
        /** the map's size property measured in tiles */
    Size _mapSize;
    /** the tiles's size property measured in pixels */
    Size _tileSize;
    /** map orientation */
    int _mapOrientation;
    /** object groups */
    Vector<TMXObjectGroup*> _objectGroups;
    /** properties */
    ValueMap _properties;
    
    //! tile properties
    ValueMapIntKey _tileProperties;
    
    ]]
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    using ::std::cout;
    
    // Tests that we don't have to define main() when we link to
// gtest_main instead of gtest.