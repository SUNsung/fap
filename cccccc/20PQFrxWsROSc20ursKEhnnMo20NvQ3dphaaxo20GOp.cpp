
        
        int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPTSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);
    }
    
    #ifndef BASEEVENT_INTERFACE_BASEEVENT_H_
#define BASEEVENT_INTERFACE_BASEEVENT_H_
    
    #ifdef ANDROID
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {  protected:
    std::string   m_servicename;
    TServicesMap m_dependservices;
};
    
    //
//  testspy.h
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    int TSpy::__TestFun1(int i)
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->__TestFun1(i);
}
    
    #include 'comm/debugger/spy.inl'