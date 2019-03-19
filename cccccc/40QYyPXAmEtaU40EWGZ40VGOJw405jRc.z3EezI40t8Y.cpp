
        
        const AuthProperty AuthPropertyIterator::operator*() {
  return std::pair<grpc::string_ref, grpc::string_ref>(
      property_->name,
      grpc::string_ref(property_->value, property_->value_length));
}
    
      // Add the full names of registered services
  void SetServiceList(const std::vector<grpc::string>* services);
    
    #include 'src/cpp/server/load_reporter/get_cpu_stats.h'
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
                    char c = stack.top();
                stack.pop();
    
        vector<int> nums1 = {1, 1, 2};
    cout << Solution().removeDuplicates(nums1) << endl;
    
    int main() {
    }
    
    
    {
    {        return res;
    }
};
    
    // Another Classic Non-Recursive algorithm for preorder traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
    
    {    return 0;
}

    
    int main() {
    }
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    public:
    vector<int> postorderTraversal(TreeNode* root) {
    }
    
    
// Non-Recursive
// Using a tag to record whether the node has been visited
//
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
            while(!output.empty()){
            res.push_back((output.top())->val);
            output.pop();
        }
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    //---- Avoid multiple STB libraries implementations, or redefine path/filenames to prioritize another version
// By default the embedded implementations are declared static and not available outside of imgui cpp files.
//#define IMGUI_STB_TRUETYPE_FILENAME   'my_folder/stb_truetype.h'
//#define IMGUI_STB_RECT_PACK_FILENAME  'my_folder/stb_rect_pack.h'
//#define IMGUI_DISABLE_STB_TRUETYPE_IMPLEMENTATION
//#define IMGUI_DISABLE_STB_RECT_PACK_IMPLEMENTATION
    
            ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
        ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
        ImGui::Checkbox('Another Window', &show_another_window);
    
    
    {    vkDestroyDevice(g_Device, g_Allocator);
    vkDestroyInstance(g_Instance, g_Allocator);
}
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
    // The data is first compressed with stb_compress() to reduce source code size,
// then encoded in Base85 to fit in a string so we can fit roughly 4 bytes of compressed data into 5 bytes of source code (suggested by @mmalex)
// (If we used 32-bits constants it would require take 11 bytes of source code to encode 4 bytes, and be endianness dependent)
// Note that even with compression, the output array is likely to be bigger than the binary file..
// Load compressed TTF fonts with ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF()
    
    void    ImGui_ImplOpenGL2_NewFrame()
{
    if (!g_FontTexture)
        ImGui_ImplOpenGL2_CreateDeviceObjects();
}
    
    void ImGui_ImplVulkanH_CreateWindowDataCommandBuffers(VkPhysicalDevice physical_device, VkDevice device, uint32_t queue_family, ImGui_ImplVulkanH_WindowData* wd, const VkAllocationCallbacks* allocator)
{
    IM_ASSERT(physical_device != VK_NULL_HANDLE && device != VK_NULL_HANDLE);
    (void)physical_device;
    (void)allocator;
    }
    
    /// Inverse of serializeQueryData, convert JSON to QueryDataSet.
Status deserializeQueryData(const rapidjson::Value& arr, QueryDataSet& qd);
    
    TEST_F(QueryTests, test_query_name_updated) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('will_update_query', query);
  EXPECT_TRUE(cf.isNewQuery());
  EXPECT_TRUE(cf.isNewQuery());
    }
    
    Status TLSEnrollTests::testReadRequests(JSON& response_tree) {
  Request<TLSTransport, JSONSerializer> request_(test_read_uri_);
  request_.setOption('hostname', Flag::getValue('tls_hostname'));
  auto status = request_.call(JSON());
  if (status.ok()) {
    status = request_.getResponse(response_tree);
  } else {
    LOG(ERROR) << status.getMessage();
  }
  return status;
}
    
    Status getQueryColumns(const std::string& q, TableColumns& columns) {
  PluginResponse response;
  auto status = Registry::call(
      'sql', 'sql', {{'action', 'columns'}, {'query', q}}, response);
    }
    
    
    {inline std::string castVariant(
    const boost::variant<long long, double, std::string>& var) {
  static const CastVisitor visitor;
  return boost::apply_visitor(visitor, var);
}
} // namespace osquery

    
      // Write a second snapshot item, and make sure there is a newline between
  // the two log lines.
  EXPECT_TRUE(logSnapshotQuery(item));
  std::string content;
  EXPECT_TRUE(readFile(snapshot_path.string(), content));