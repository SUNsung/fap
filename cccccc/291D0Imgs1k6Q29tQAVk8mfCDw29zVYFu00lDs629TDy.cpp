
        
        namespace leveldb {
    }
    
    #include <stdio.h>
#include 'leveldb/dumpfile.h'
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
      // Record metadata for testing initial offset functionality
  static size_t initial_offset_record_sizes_[];
  static uint64_t initial_offset_last_record_offsets_[];
  static int num_initial_offset_records_;
    
    
void printVec(const vector<int>& vec){
    for(int e: vec)
        cout << e << ' ';
    cout << endl;
}
    
            ListNode* p = dummyHead;
        ListNode* q = dummyHead;
        for(int i = 0 ; i < n + 1 ; i ++){
            assert(q);
            q = q->next;
        }
    
    
    {    return 0;
}

    
    #include <iostream>
#include <vector>
    
        TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> res = Solution().preorderTraversal(root);
    print_vec(res);
    
            stack<Command> stack;
        stack.push(Command('go', root) );
        while(!stack.empty()){
            Command command = stack.top();
            stack.pop();
    }
    
    
    {    return 0;
}
    
            TreeNode* p = root;
        while(p != NULL || !stack.empty()){
            if(p != NULL){
                stack.push(p);
                output.push(p);
                p = p->right;
            }
            else{
                p = stack.top();
                stack.pop();
                p = p->left;
            }
        }
    
        // 5. Start packing
    // Pack our extra data rectangles first, so it will be on the upper-left corner of our texture (UV will have small values).
    const int TEX_HEIGHT_MAX = 1024 * 32;
    const int num_nodes_for_packing_algorithm = atlas->TexWidth - atlas->TexGlyphPadding;
    ImVector<stbrp_node> pack_nodes;
    pack_nodes.resize(num_nodes_for_packing_algorithm);
    stbrp_context pack_context;
    stbrp_init_target(&pack_context, atlas->TexWidth, TEX_HEIGHT_MAX, pack_nodes.Data, pack_nodes.Size);
    ImFontAtlasBuildPackCustomRects(atlas, &pack_context);
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    #define STB__TRY(t,p)  /* avoid retrying a match we already tried */ \
    if (p ? dist != q-t : 1)                             \
    if ((m = stb_matchlen(t, q, match_max)) > best)     \
    if (stb__nc(m,q-(t)))                                \
    best = m, dist = q - (t)
    
    // About Desktop OpenGL function loaders:
//  Modern desktop OpenGL doesn't have a standard portable header file to load OpenGL function pointers.
//  Helper libraries are often used for this purpose! Here we are supporting a few common ones (gl3w, glew, glad).
//  You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
    // Main code
int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    ::RegisterClassEx(&wc);
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
        ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        for (int n = 0; n < 20; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
    
    {
    {}} // namespace
    
      void __set_min_sdk_version(const std::string& val);
    
    static inline std::ostream& operator<<(
    std::ostream& stream, const std::vector<hardwareDriver>& devs) {
  for (const auto& dev : devs) {
    stream << ' ' << dev.driver;
  }
    }
    
    // Sanity check integration test for iokit_devicetree
// Spec file: specs/darwin/iokit_devicetree.table
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    TEST_F(KernelInfo, test_sanity) {
  QueryData data = execute_query('select * from kernel_info');
  ValidatatioMap row_map = {{'version', NonEmptyString},
                            {'arguments', NormalType},
                            {'path', NormalType},
                            {'device', NonEmptyString}};
  validate_rows(data, row_map);
}
    
    // Sanity check integration test for keychain_acls
// Spec file: specs/darwin/keychain_acls.table