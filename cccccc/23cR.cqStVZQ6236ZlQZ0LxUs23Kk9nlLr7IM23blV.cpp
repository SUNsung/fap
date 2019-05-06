
        
        
    {        auto maskMatrix = GetMatrix();
        size_t rowOffset = offset[0];
        size_t colOffset = offset[1];
        size_t sliceRowLength = (shape[0] != NDShape::InferredDimension) ? shape[0] : (maskMatrix->GetNumRows() - rowOffset);
        size_t sliceColLength = (shape[1] != NDShape::InferredDimension) ? shape[1] : (maskMatrix->GetNumCols() - colOffset);
        if ((rowOffset == 0) && (sliceRowLength == maskMatrix->GetNumRows()))
            maskMatrix->ColumnSlice(colOffset, sliceColLength).SetValue((char)maskKind);
        else
        {
            // Since Matrix does not support strides in the row dimension, we will need to create separate slices for each column
            for (size_t i = colOffset; i < (colOffset + sliceColLength); ++i)
            {
                auto column = maskMatrix->ColumnSlice(i, 1);
                column.Reshape(1, maskMatrix->GetNumRows());
                column.ColumnSlice(rowOffset, sliceRowLength).SetValue((char)maskKind);
            }
        }
    }
    
            Dictionary aggregatedState;
        for (const auto& w : communicator->Workers())
        {
            aggregatedState[std::to_wstring(w.m_globalRank)] = *remoteState[w.m_globalRank];
        }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Sequences.h'
#include 'TensorView.h'
#include 'Utils.h'
    
                if (m_varKind == VariableKind::Input)
            {
                for (auto dim : m_shape.Dimensions())
                {
                    if (dim == 0)
                        InvalidArgument('Variable '%S' has invalid shape '%S'.', AsString().c_str(), m_shape.AsString().c_str());
                }
            }
    
            if (::WaitForSingleObject(m_handle, wait ? INFINITE : 0) != WAIT_OBJECT_0)
        {
            // failed to acquire
            int rc = ::CloseHandle(m_handle);
            if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
            {
                RuntimeError('Acquire: Handler close failure with error code %d', ::GetLastError());
            }
            m_handle = NULL;
            return false;
        }
    
    template <class ElemType>
TensorView<ElemType> EpochAccumulatorNode<ElemType>::EnsureAccumlator()
{
    if (m_accumulator->HasNoElements())
    {
        // Accumulator has not been resized yet, allocate with necessary size.
        const size_t sampleSize = GetSampleLayout().GetNumElements();
        m_accumulator->Resize(sampleSize, 1);
        Reset();
    }
    size_t rank = DetermineElementwiseTensorRank();
    return DataTensorFor(m_accumulator, rank, FrameRange());
}
    
    /**
@brief FlipX3D action.
@details This action is used for flipping the target node on the x axis.
*/
class CC_DLL FlipX3D : public Grid3DAction
{
public:
    /**
    @brief Create the action with duration.
    @param duration Specify the duration of the FilpX3D action. It's a value in seconds.
    @return If the creation success, return a pointer of FilpX3D action; otherwise, return nil.
    */
    static FlipX3D* create(float duration);
    }
    
    /** @class ActionManager
 @brief ActionManager is a singleton that manages all the actions.
 Normally you won't need to use this singleton directly. 99% of the cases you will use the Node interface,
 which uses this singleton.
 But there are some cases where you might need to use this singleton.
 Examples:
    - When you want to run an action where the target is different from a Node. 
    - When you want to pause / resume the actions.
 
 @since v0.8
 */
class CC_DLL ActionManager : public Ref
{
public:
    /**
     * @js ctor
     */
    ActionManager();
    }
    
    GridBase* PageTurn3D::getGrid()
{
    auto result = Grid3D::create(_gridSize, _gridNodeTarget->getGridRect());
    if (result)
    {
        result->setNeedDepthTestForBlit(true);
    }
    
    return result;
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
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CC_ANIMATION_CACHE_H__
#define __CC_ANIMATION_CACHE_H__