
        
          if (!status) {                  // If not set then
    return FALSE;                // ignore other checks
  }
    
    #include          <string.h>
#include          <ctype.h>
#include          'params.h'
#include          'float2int.h'
#include          'tesseractclass.h'
    
     private:
  // Simple struct to hold an ICOORD point and a halfwidth representing half
  // the 'width' (supposedly approximately parallel to the direction of the
  // line) of each point, such that distant points can be discarded when they
  // overlap nearer points. (Think i dot and other diacritics or noise.)
  struct PointWidth {
    PointWidth() : pt(ICOORD(0, 0)), halfwidth(0) {}
    PointWidth(const ICOORD& pt0, int halfwidth0)
      : pt(pt0), halfwidth(halfwidth0) {}
    }
    
    
    
    // Tolerance in pixels used for baseline and xheight on non-upper/lower scripts.
const int kSloppyTolerance = 4;
// Final tolerance in pixels added to the computed xheight range.
const float kFinalPixelTolerance = 0.125f;
    
    #include 'mars/comm/xlogger/xlogger.h'
#include 'mars/comm/jni/util/scoped_jstring.h'
#include 'mars/comm/jni/util/var_cache.h'
#include 'mars/comm/jni/util/scope_jenv.h'
#include 'mars/comm/jni/util/comm_function.h'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    template <class T>
inline void SimplePack(const void* _data, size_t _datalen, AutoBuffer& _outbuf) {
    _outbuf.Write(hton(SimplePackLength<T>(_datalen)));
    _outbuf.Write(_data, _datalen);
}
    
    
    {        for (it = m_strmap.begin(); it != m_strmap.end(); ++it) {
            if (it->second->This() == _this) {
                m_strmap.erase(it);
                break;
            }
        }
    }
    
    #include 'comm/debugger/testspy.h'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.