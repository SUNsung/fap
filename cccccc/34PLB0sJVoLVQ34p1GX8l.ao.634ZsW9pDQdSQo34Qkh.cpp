
        
          // Convert output shapes.
  output_tensor_shape_protos->resize(c.num_outputs());
  CppShapeInferenceResult out;
  for (int i = 0; i < c.num_outputs(); ++i) {
    out.Clear();
    ProtoFromShapeHandle(c.output(i), &c, out.mutable_shape());
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // From constructor arguments
  const OpDef& op_def_;
  const ApiDef& api_def_;
  const string function_name_;
  const int num_outs_;
    
    Status ModelAnalyzer::GenerateReport(bool debug, bool assume_valid_feeds,
                                     std::ostream& os) {
  GraphProperties properties(item_);
  TF_RETURN_IF_ERROR(properties.InferStatically(assume_valid_feeds));
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/lib/core/status.h'
    
     private:
  PyRecordReader();
    
      ~ScopedActivateExecutorContext();
    
      // Logs information about the kernel driver version and userspace driver
  // library version.
  static void LogDriverVersionInformation();
    
      // Returns the maximum number of blocks (per multiprocessor) occupied by the
  // specified kernel/CUfunction when launched with the specified parameters.
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__OCCUPANCY.html#group__CUDA__OCCUPANCY_1gcc6e1094d05cba2cee17fe33ddd04a98
  static port::StatusOr<int> GetMaxOccupiedBlocksPerCore(
      CudaContext* context, CUfunction kernel, int threads_per_block,
      size_t dynamic_shared_memory_bytes);
    
      /// Profile the substitution map storage, for use with LLVM's FoldingSet.
  void Profile(llvm::FoldingSetNodeID &id) const {
    Profile(id, getGenericSignature(), getReplacementTypes(),
            getConformances());
  }
    
      // An AST section consists of one or more AST modules, optionally with
  // headers. Iterate over all AST modules.
  while (!buf.empty()) {
    auto info = serialization::validateSerializedAST(buf);
    }
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  return new DefaultCache(CBs);
}
    
      Begin -= needed;
    
    static const StringRef SupportedConditionalCompilationRuntimes[] = {
  '_ObjC',
  '_Native',
};
    
    /// Split the base name after the last preposition, if there is one.
static bool splitBaseNameAfterLastPreposition(
    StringRef &baseName,
    StringRef &argName,
    const OmissionTypeName &paramType) {
  // Scan backwards for a preposition.
  auto nameWords = camel_case::getWords(baseName);
  auto nameWordRevIterBegin = nameWords.rbegin(),
    nameWordRevIterEnd = nameWords.rend();
    }
    
    uint64_t swift::unicode::getUTF16Length(StringRef Str) {
  uint64_t Length;
  // Transcode the string to UTF-16 to get its length.
  SmallVector<llvm::UTF16, 128> buffer(Str.size() + 1); // +1 for ending nulls.
  const llvm::UTF8 *fromPtr = (const llvm::UTF8 *) Str.data();
  llvm::UTF16 *toPtr = &buffer[0];
  llvm::ConversionResult Result =
    ConvertUTF8toUTF16(&fromPtr, fromPtr + Str.size(),
                       &toPtr, toPtr + Str.size(),
                       llvm::strictConversion);
  assert(Result == llvm::conversionOK &&
         'UTF-8 encoded string cannot be converted into UTF-16 encoding');
  (void)Result;
    }
    
    template <typename T>
struct GetTypeInfo<const T *, typename EnableIf<TypeInherits<Object, T>::value>::type> {
	static const Variant::Type VARIANT_TYPE = Variant::OBJECT;
	static inline PropertyInfo get_class_info() {
		return PropertyInfo(StringName(T::get_class_static()));
	}
};
    
    #include 'collision_object_bullet.h'
#include 'space_bullet.h'
    
    #include 'bullet_utilities.h'
#include 'rid_bullet.h'
    
    #include 'joint_bullet.h'
    
    	jclass activityThread = env->FindClass('android/app/ActivityThread');
	jmethodID currentActivityThread = env->GetStaticMethodID(activityThread, 'currentActivityThread', '()Landroid/app/ActivityThread;');
	jobject at = env->CallStaticObjectMethod(activityThread, currentActivityThread);
	jmethodID getApplication = env->GetMethodID(activityThread, 'getApplication', '()Landroid/app/Application;');
	jobject context = env->CallObjectMethod(at, getApplication);
    
    
    {	ClassDB::bind_method(D_METHOD('set_instance', 'instance'), &FuncRef::set_instance);
	ClassDB::bind_method(D_METHOD('set_function', 'name'), &FuncRef::set_function);
}
    
    Error FileAccessZip::_open(const String &p_path, int p_mode_flags) {
    }
    
        // Setup viewport, orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right). DisplayMin is typically (0,0) for single viewport apps.
    glViewport(0, 0, (GLsizei)fb_width, (GLsizei)fb_height);
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(draw_data->DisplayPos.x, draw_data->DisplayPos.x + draw_data->DisplaySize.x, draw_data->DisplayPos.y + draw_data->DisplaySize.y, draw_data->DisplayPos.y, -1.0f, +1.0f);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    
    // Helper to scale the ClipRect field of each ImDrawCmd. Use if your final output buffer is at a different scale than ImGui expects, or if there is a difference between your window resolution and framebuffer resolution.
void ImDrawData::ScaleClipRects(const ImVec2& scale)
{
    for (int i = 0; i < CmdListsCount; i++)
    {
        ImDrawList* cmd_list = CmdLists[i];
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            ImDrawCmd* cmd = &cmd_list->CmdBuffer[cmd_i];
            cmd->ClipRect = ImVec4(cmd->ClipRect.x * scale.x, cmd->ClipRect.y * scale.y, cmd->ClipRect.z * scale.x, cmd->ClipRect.w * scale.y);
        }
    }
}
    
    
    {        VkImageMemoryBarrier use_barrier[1] = {};
        use_barrier[0].sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        use_barrier[0].srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        use_barrier[0].dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
        use_barrier[0].oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        use_barrier[0].newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        use_barrier[0].srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        use_barrier[0].dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        use_barrier[0].image = g_FontImage;
        use_barrier[0].subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        use_barrier[0].subresourceRange.levelCount = 1;
        use_barrier[0].subresourceRange.layerCount = 1;
        vkCmdPipelineBarrier(command_buffer, VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0, 0, NULL, 0, NULL, 1, use_barrier);
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();
