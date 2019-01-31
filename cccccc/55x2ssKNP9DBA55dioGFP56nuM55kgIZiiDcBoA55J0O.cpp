
        
          // Convert input tensor values;
  std::vector<Tensor> input_tensor_values(input_constant_tensor_values.size());
  std::vector<const Tensor*> input_tensors;
  for (int i = 0; i < input_constant_tensor_values.size(); ++i) {
    auto* py_val = input_constant_tensor_values[i];
    if (py_val == Py_None) {
      input_tensors.push_back(nullptr);
    } else {
      TF_RETURN_IF_ERROR(
          ConvertNdarrayToTensor(py_val, &input_tensor_values[i]));
      input_tensors.push_back(&input_tensor_values[i]);
    }
  }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    PyArray_Descr NPyBfloat16_Descr = {
    PyObject_HEAD_INIT(nullptr) & PyBfloat16_Type,  // typeobj
    // We must register bfloat16 with a kind other than 'f', because numpy
    // considers two types with the same kind and size to be equal, but
    // float16 != bfloat16.
    'V',  // kind
    // TODO(phawkins): there doesn't seem to be a way of guaranteeing a type
    // character is unique.
    'E',                                                  // type
    '=',                                                  // byteorder
    NPY_NEEDS_PYAPI | NPY_USE_GETITEM | NPY_USE_SETITEM,  // hasobject
    0,                                                    // type_num
    sizeof(bfloat16),                                     // elsize
    alignof(bfloat16),                                    // alignment
    nullptr,                                              // subarray
    nullptr,                                              // fields
    nullptr,                                              // names
    &NPyBfloat16_ArrFuncs,                                // f
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    struct PyDecrefDeleter {
  void operator()(PyObject* p) const { Py_DECREF(p); }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    port::StatusOr<StreamExecutor*> ExecutorCache::GetOrCreate(
    const StreamExecutorConfig& config,
    const std::function<ExecutorFactory>& factory) {
  // In the fast path case, the cache already has an entry and we can just
  // return after Get() which only takes a shared lock and not a unique lock.
  // If we need to create, we take a unique lock on cache_.
  auto fast_result = Get(config);
  if (fast_result.ok()) {
    return fast_result;
  }
    }
    
    void GeneratorContext::GetCompilerVersion(Version* version) const {
  version->set_major(GOOGLE_PROTOBUF_VERSION / 1000000);
  version->set_minor(GOOGLE_PROTOBUF_VERSION / 1000 % 1000);
  version->set_patch(GOOGLE_PROTOBUF_VERSION % 1000);
  version->set_suffix(GOOGLE_PROTOBUF_VERSION_SUFFIX);
}
    
    
    {  // Moving messages on two different arenas should lead to a copy.
  *message2_on_arena = std::move(*message1_on_arena);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(*message1_on_arena);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
    void EnumGenerator::Generate(io::Printer* printer) {
  WriteEnumDocComment(printer, descriptor_);
  printer->Print('$access_level$ enum $name$ {\n',
                 'access_level', class_access_level(),
                 'name', descriptor_->name());
  printer->Indent();
  std::set<string> used_names;
  std::set<int> used_number;
  for (int i = 0; i < descriptor_->value_count(); i++) {
      WriteEnumValueDocComment(printer, descriptor_->value(i));
      string original_name = descriptor_->value(i)->name();
      string name = GetEnumValueName(descriptor_->name(), descriptor_->value(i)->name());
      // Make sure we don't get any duplicate names due to prefix removal.
      while (!used_names.insert(name).second) {
        // It's possible we'll end up giving this warning multiple times, but that's better than not at all.
        GOOGLE_LOG(WARNING) << 'Duplicate enum value ' << name << ' (originally ' << original_name
          << ') in ' << descriptor_->name() << '; adding underscore to distinguish';
        name += '_';
      }
      int number = descriptor_->value(i)->number();
      if (!used_number.insert(number).second) {
          printer->Print('[pbr::OriginalName(\'$original_name$\', PreferredAlias = false)] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      } else {
          printer->Print('[pbr::OriginalName(\'$original_name$\')] $name$ = $number$,\n',
             'original_name', original_name,
             'name', name,
             'number', SimpleItoa(number));
      }
  }
  printer->Outdent();
  printer->Print('}\n');
  printer->Print('\n');
}
    
    namespace {
    }
    
    
    {  EXPECT_EQ(expected, decode_data.Data());
}
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    static bool ImGui_ImplDX9_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height, bytes_per_pixel;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height, &bytes_per_pixel);
    }
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        ImGui_ImplDX10_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
    
        // Create the blending setup
    {
        D3D11_BLEND_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.AlphaToCoverageEnable = false;
        desc.RenderTarget[0].BlendEnable = true;
        desc.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
        desc.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
        desc.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
        desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
        desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_ZERO;
        desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
        desc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
        g_pd3dDevice->CreateBlendState(&desc, &g_pBlendState);
    }
    
        // Create the root signature
    {
        D3D12_DESCRIPTOR_RANGE descRange = {};
        descRange.RangeType = D3D12_DESCRIPTOR_RANGE_TYPE_SRV;
        descRange.NumDescriptors = 1;
        descRange.BaseShaderRegister = 0;
        descRange.RegisterSpace = 0;
        descRange.OffsetInDescriptorsFromTableStart = 0;
    }
    
    static void ImGui_ImplFreeGLUT_UpdateKeyboardMods()
{
    ImGuiIO& io = ImGui::GetIO();
    int mods = glutGetModifiers();
    io.KeyCtrl = (mods & GLUT_ACTIVE_CTRL) != 0;
    io.KeyShift = (mods & GLUT_ACTIVE_SHIFT) != 0;
    io.KeyAlt = (mods & GLUT_ACTIVE_ALT) != 0;
}
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad support. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    
    {    auto ka2 = std::move(ka);
    EXPECT_FALSE(ka);
    EXPECT_TRUE(ka2);
    EXPECT_EQ(&exec, ka2.get());
    EXPECT_EQ(1, exec.refCount);
  }
    
    /**
 * This helper reads the .note.stapsdt section of the currently running binary,
 * checks if the tracepoints listed there are properly formatted, and return the
 * arguments layout description string for the expected provider and probe
 * combination if it exists.
 */
static bool getTracepointArguments(
    const std::string& expectedProvider,
    const std::string& expectedProbe,
    const uintptr_t expectedSemaphore,
    std::string& arguments) {
  // Read the note and check if it's non-empty.
  std::string exe = getExe();
  auto note = readNote(exe);
  auto len = note.size();
  CHECK_GT(len, 0);
  // The loop to read tracepoints one by one.
  size_t pos = 0;
  while (pos < len) {
    // Check size information of the tracepoint.
    CHECK_LE(pos + 12, len);
    }
    }
    
    using UTF8StringPiece = UTF8Range<const char*>;
    
     public:
  explicit VirtualExecutor(KeepAlive<> executor)
      : executor_(std::move(executor)) {
    assert(!isKeepAliveDummy(executor_));
  }
    
        EXPECT_THROW(
        to<struct timespec>(sec_u64(9223372036854775808ULL)), std::range_error);
    
    /// Wrapper around the makeCompressionCounterHandler() extension point.
class CompressionCounter {
 public:
  CompressionCounter() {}
  CompressionCounter(
      folly::io::CodecType codecType,
      folly::StringPiece codecName,
      folly::Optional<int> level,
      CompressionCounterKey key,
      CompressionCounterType counterType) {
    initialize_ = [=]() {
      return makeCompressionCounterHandler(
          codecType, codecName, level, key, counterType);
    };
    DCHECK(!initialize_.hasAllocatedMemory());
  }
    }