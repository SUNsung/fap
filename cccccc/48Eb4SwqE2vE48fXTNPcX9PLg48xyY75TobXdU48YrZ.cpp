
        
          // Add info about requested inputs.
  CppShapeInferenceInputsNeeded needed;
  for (int i = 0; i < c.num_inputs(); ++i) {
    if (c.requested_input_tensor(i)) {
      needed.add_input_tensors_needed(i);
    }
    if (c.requested_input_tensor_as_partial_shape(i)) {
      needed.add_input_tensors_as_shapes_needed(i);
    }
  }
  *input_tensors_needed_out = needed.SerializeAsString();
    
    
    { private:
  // Original parameter name.
  string name_;
  // API name for this parameter.
  string rename_to_;
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include <iomanip>
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/tensor_shape.pb.h'
#include 'tensorflow/core/grappler/costs/graph_properties.h'
#include 'tensorflow/core/grappler/grappler_item.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    void PyExceptionRegistry::Init(PyObject* code_to_exc_type_map) {
  DCHECK(singleton_ == nullptr) << 'PyExceptionRegistry::Init() already called';
  singleton_ = new PyExceptionRegistry;
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    ScopedActivateExecutorContext::ScopedActivateExecutorContext(
    CUDAExecutor *cuda_exec):
      driver_scoped_activate_context_(
          new ScopedActivateContext{ExtractCudaContext(cuda_exec)}) { }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Deletes the current owned object, if any.
  // Then takes ownership of a new object without incrementing the reference
  // count.
  // This function must be called with a reference that you own.
  //   this->reset(this->get()) is wrong!
  //   this->reset(this->release()) is OK.
  PyObjectStruct* reset(PyObjectStruct* p = NULL) {
    Py_XDECREF(ptr_);
    ptr_ = p;
    return ptr_;
  }
    
    // Functions to create C# XML documentation comments.
// Currently this only includes documentation comments containing text specified as comments
// in the .proto file; documentation comments generated just from field/message/enum/proto names
// is inlined in the relevant code. If more control is required, that code can be moved here.
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
      // write children: Messages
  if (file_->message_type_count() > 0) {
    printer->Print('#region Messages\n');
    for (int i = 0; i < file_->message_type_count(); i++) {
      MessageGenerator messageGenerator(file_->message_type(i), this->options());
      messageGenerator.Generate(printer);
    }
    printer->Print('#endregion\n');
    printer->Print('\n');
  }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_doc_comment.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_name_resolver.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
    ChannelCredentials::~ChannelCredentials() {}
    
    
    {}  // namespace grpc

    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    namespace grpc {
    }
    
    constexpr uint32_t CensusClientCallData::kMaxTraceContextLen;
constexpr uint32_t CensusClientCallData::kMaxTagsLen;
    
    MeasureDouble RpcClientRoundtripLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientRoundtripLatencyMeasureName,
      'Time between first byte of request sent to last byte of response '
      'received, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    
    {}  // namespace grpc
    
    /**
	@author AndreaCatania
*/
    
    #include 'texture_loader_dds.h'
    
    void register_etc_types() {
    }
    
    #include '2d/CCAction.h'
#include '2d/CCActionInterval.h'
#include '2d/CCNode.h'
#include 'base/CCDirector.h'
#include 'base/ccUTF8.h'
    
    
    {    _radZ = (float)CC_DEGREES_TO_RADIANS(_angleZ);
    _radX = (float)CC_DEGREES_TO_RADIANS(_angleX);
}
    
        // 1st element (which should be 0,0) should be here too
    
        /** Returns the numbers of actions that are running in a certain target. 
     * Composable actions are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @return  The numbers of actions that are running in a certain target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActionsInTarget(const Node *target) const;
    
    /** Returns the numbers of actions that are running in all targets.
     * @return  The numbers of actions that are running in all target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActions() const;
    
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
@brief SplitCols action.
@details Split the target node in many columns.
        Then move out some columns from top, move out the other columns from bottom.
*/
class CC_DLL SplitCols : public TiledGrid3DAction
{
public:
    
    /** 
     * @brief Create the action with the number of columns and the duration.
     * @param duration Specify the duration of the SplitCols action. It's a value in seconds.
     * @param cols Specify the columns count should be split.
     * @return If the creation success, return a pointer of SplitCols action; otherwise, return nil.
     */
    static SplitCols* create(float duration, unsigned int cols);
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    AnimationFrame::~AnimationFrame()
{    
    CCLOGINFO( 'deallocing AnimationFrame: %p', this);
    }
    
        this->calculateMaxItems();