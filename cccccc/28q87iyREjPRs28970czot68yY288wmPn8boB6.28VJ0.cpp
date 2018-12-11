
        
        #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
    
    #pragma once
    
    
    {            // ExecuteForwardBackward updates m_prevMinibatchNumSamples to the local value.
            ExecuteForwardBackward(arguments, outputsToFetch, computeDevice, parameterGradients);
            for (const auto& parameter : m_learnerParameters)
                gradients[parameter] = parameterGradients[parameter]->Data();
            trainingLoss = m_prevMinibatchAggregateTrainingLossValue->Data();
            evalCriterion = m_prevMinibatchAggregateEvalCriterionValue->Data();
        }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
    template <class ElemType>
class PerDimMeanVarNormalizationNode : public ComputationNode<ElemType>, public NumInputs<3>
{
    typedef ComputationNode<ElemType> Base;
    UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName()
    {
        return L'PerDimMeanVarNormalization';
    }
    }
    
    CC_CONSTRUCTOR_ACCESS:
    Action();
    virtual ~Action();
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
        GridBase *targetGrid = _gridNodeTarget->getGrid();
    
        if (action && action->initWithDuration(duration, gridSize))
    {
        action->autorelease();
        return action;
    }
    
    NS_CC_BEGIN
    
    const BlendFunc& AtlasNode::getBlendFunc() const
{
    return _blendFunc;
}
    
    /**
 * PolygonInfo is an object holding the required data to display Sprites.
 * It can be a simple as a triangle, or as complex as a whole 3D mesh
 */
class CC_DLL PolygonInfo
{
public:
    /// @name Creators
    /// @{
    /**
     * Creates an empty Polygon info
     * @memberof PolygonInfo
     * @return PolygonInfo object
     */
    PolygonInfo();
    }
    }
    
    Benchmark* Benchmark::ThreadRange(int min_threads, int max_threads) {
  CHECK_GT(min_threads, 0);
  CHECK_GE(max_threads, min_threads);
    }
    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
    
    {  fflush(stdout);
  // Restores the text color.
  SetConsoleTextAttribute(stdout_handle, old_color_attrs);
#else
  const char* color_code = GetPlatformColorCode(color);
  if (color_code) out << FormatString('\033[0;3%sm', color_code);
  out << FormatString(fmt, args) << '\033[m';
#endif
}
    
      // Populate the accumulators.
  for (const Run& run : reports) {
    CHECK_GT(run.complexity_n, 0) << 'Did you forget to call SetComplexityN?';
    n.push_back(run.complexity_n);
    real_time.push_back(run.real_accumulated_time / run.iterations);
    cpu_time.push_back(run.cpu_accumulated_time / run.iterations);
  }
    
    // Return a vector containing the bigO and RMS information for the specified
// list of reports. If 'reports.size() < 2' an empty vector is returned.
std::vector<BenchmarkReporter::Run> ComputeBigO(
    const std::vector<BenchmarkReporter::Run>& reports);
    
    bool JSONReporter::ReportContext(const Context& context) {
  std::ostream& out = GetOutputStream();
    }
    
    #define RETURN_CAPABILITY(x) THREAD_ANNOTATION_ATTRIBUTE__(lock_returned(x))