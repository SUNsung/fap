
        
        OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    #endif // CAFFE2_OPERATORS_JSD_OP_H_

    
    
    {      dword(ds_formater.instruction);
   }
    
    #endif

    
    CONTAINER_CONFIG_BODY(std::vector<uint32_t>, UInt32Vector)
CONTAINER_CONFIG_BODY(std::vector<std::string>, StrVector)
namespace { using simap = std::unordered_map<std::string, int>; }
CONTAINER_CONFIG_BODY(simap, IntMap)
CONTAINER_CONFIG_BODY(ConfigMap, Map)
CONTAINER_CONFIG_BODY(ConfigMapC, MapC)
CONTAINER_CONFIG_BODY(ConfigSet, Set)
CONTAINER_CONFIG_BODY(ConfigSetC, SetC)
CONTAINER_CONFIG_BODY(ConfigFlatSet, FlatSet)
CONTAINER_CONFIG_BODY(ConfigIMap, IMap)
    
    ///////////////////////////////////////////////////////////////////////////////
    
      bool valid() const { return !isClosed(); }
    
        UBool      test(UScriptCode script, UErrorCode &status) const;
    ScriptSet &Union(const ScriptSet &other);
    ScriptSet &set(UScriptCode script, UErrorCode &status);
    ScriptSet &reset(UScriptCode script, UErrorCode &status);
    ScriptSet &intersect(const ScriptSet &other);
    ScriptSet &intersect(UScriptCode script, UErrorCode &status);
    UBool      intersects(const ScriptSet &other) const;  // Sets contain at least one script in commmon.
    UBool      contains(const ScriptSet &other) const;    // All set bits in other are also set in this.
    
    U_NAMESPACE_END
    
    #ifndef __SIGNIFICANTDIGITINTERVAL_H__
#define __SIGNIFICANTDIGITINTERVAL_H__
    
    #endif  // __SMALLINTFORMATTER_H__

    
                // fall through to gotNumber check
            U_FALLTHROUGH;
        case UDAT_YEAR_FIELD:
        case UDAT_YEAR_WOY_FIELD:
        case UDAT_FRACTIONAL_SECOND_FIELD:
            // these must be a number
            if (! gotNumber) {
                return -start;
            }
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
        // Handle a cursor preceding the output
    if (hasCursor && cursor < 0) {
        while (cursor++ < 0) {
            ICU_Utility::appendToRule(rule, (UChar)0x0040 /*@*/, TRUE, escapeUnprintable, quoteBuf);
        }
        // Fall through and append '|' below
    }
    
            ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
    
    using namespace std;
    
    using namespace std;
    
    using namespace std;
    
    private:
    void __inorderTraversal(TreeNode* node, vector<int> &res){
    }
    
    
    {            res[level].push_back(node->val);
            if(node->left)
                q.push(make_pair(node->left, level + 1 ));
            if(node->right)
                q.push(make_pair(node->right, level + 1 ));
        }
    
    using namespace std;
    
    
    {    return 0;
}

    
    
    {
    {
    {            if(command.s == 'print')
                res.push_back(command.node->val);
            else{
                assert(command.s == 'go');
                stack.push(Command('print', command.node));
                if(command.node->right)
                    stack.push(Command('go',command.node->right));
                if(command.node->left)
                    stack.push(Command('go',command.node->left));
            }
        }
        return res;
    }
};
    
    
    
    struct IDirect3DDevice9;
    
        // Rendering
    ImGui::Render();
    ImGuiIO& io = ImGui::GetIO();
    glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
    void Speed::startWithTarget(Node* target)
{
    if (target && _innerAction)
    {
        Action::startWithTarget(target);
        _innerAction->startWithTarget(target);
    }
    else
        log('Speed::startWithTarget error: target(%p) or _innerAction(%p) is nullptr!', target, _innerAction);
}
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPAGETURN3D_ACTION_H__
#define __ACTION_CCPAGETURN3D_ACTION_H__
    
    /**
 * @addtogroup actions
 * @{
 */
    }