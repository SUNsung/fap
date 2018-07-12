
        
          // Clear all entries from the DeviceStatus cache.
  void FlushStatusCache();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // (X - E[X]) / Sqrt[Var[X] + epsilon].
  auto normalized = add_binary(operand_shape, HloOpcode::kMultiply,
                               operand_minus_mean, rsqrt_var_add_epsilon);
    
    
    {  auto* mutable_dims = output_array.mutable_shape()->mutable_dims();
  mutable_dims->resize(multiples.size());
  for (int i = 0; i < mutable_dims->size(); ++i) {
    (*mutable_dims)[i] = input_shape.dims(i) * multiples[i];
  }
}
    
    
    {  const auto& input_name = node.input(0);
  const auto& bias_name = node.input(1);
  CHECK_EQ(GetDataTypeAttr(node, 'T'), DT_FLOAT);
  auto* biasadd = new AddOperator;
  biasadd->inputs.push_back(input_name);
  biasadd->inputs.push_back(bias_name);
  biasadd->outputs.push_back(node.name());
  model->operators.emplace_back(biasadd);
  return tensorflow::Status::OK();
}
    
    TEST_F(OperatorTest, BuiltinArgMin) {
  ArgMinOperator op;
  auto output_toco_op = SerializeAndDeserialize(
      GetOperator('ARG_MIN', OperatorType::kArgMin), op);
  EXPECT_EQ(op.output_data_type, output_toco_op->output_data_type);
}
    
    void PartialRunMgr::ExecutorDone(int step_id, const Status& executor_status) {
  StatusCallback done;
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    // If we found the partial_run, we call the final callback, if it
    // exists.
    // It is guaranteed that run_it->second->final_callback is left empty
    // after the std::move call.
    done = std::move(run_it->second->final_callback);
    if (!executor_status.ok()) {
      run_it->second->final_status = executor_status;
    }
    callback_status = run_it->second->final_status;
    run_it->second->executor_done = true;
  }
  if (done != nullptr) {
    done(callback_status);
    mutex_lock l(mu_);
    step_id_to_partial_run_.erase(step_id);
  }
}
    
    
    {
    {}  // namespace functor
}  // namespace tensorflow
    
    // Prefetching support
//
// Defined behavior on some of the uarchs:
// PREFETCH_HINT_T0:
//   prefetch to all levels of the hierarchy (except on p4: prefetch to L2)
// PREFETCH_HINT_NTA:
//   p4: fetch to L2, but limit to 1 way (out of the 8 ways)
//   core: skip L2, go directly to L1
//   k8 rev E and later: skip L2, can go to either of the 2-ways in L1
enum PrefetchHint {
  PREFETCH_HINT_T0 = 3,  // More temporal locality
  PREFETCH_HINT_T1 = 2,
  PREFETCH_HINT_T2 = 1,  // Less temporal locality
  PREFETCH_HINT_NTA = 0  // No temporal locality
};
template <PrefetchHint hint>
void prefetch(const void* x);
    
      Status OnWorkStartedLocked() override {
    line_number_ = 0;
    TF_RETURN_IF_ERROR(env_->NewRandomAccessFile(current_work(), &file_));
    }
    
    
    {}  // namespace atom
    
    #ifndef ATOM_BROWSER_WINDOW_LIST_OBSERVER_H_
#define ATOM_BROWSER_WINDOW_LIST_OBSERVER_H_
    
    #include 'ui/gfx/geometry/rect.h'
    
    
    {  DISALLOW_COPY_AND_ASSIGN(PreferencesManager);
};
    
      // Sent when a URL has been added or modified. This is used by the in-memory
  // URL database and the InMemoryURLIndex (both used by autocomplete) to track
  // changes to the main history system.
  //
  // The source is the profile owning the history service that changed, and
  // the details is history::URLsModifiedDetails that lists the modified or
  // added URLs.
  NOTIFICATION_HISTORY_URLS_MODIFIED,
    
    // Platform-neutral implementation of a class that keeps track of observers and
// monitors keystrokes. It relays messages to the appropriate observer when a
// global shortcut has been struck by the user.
class GlobalShortcutListener {
 public:
  class Observer {
   public:
    // Called when your global shortcut (|accelerator|) is struck.
    virtual void OnKeyPressed(const ui::Accelerator& accelerator) = 0;
  };
    }
    
    
    {
    {}  // namespace
}  // namespace tesseract

    
      // Helper to return an offset index feature. In this context an offset
  // feature with a dir of +/-1 is a feature of a similar direction,
  // but shifted perpendicular to the direction of the feature. An offset
  // feature with a dir of +/-2 is feature at the same position, but rotated
  // by +/- one [compact] quantum. Returns the index of the generated offset
  // feature, or -1 if it doesn't exist. Dir should be in
  // [-kNumOffsetMaps, kNumOffsetMaps] to indicate the relative direction.
  // A dir of 0 is an identity transformation.
  // Both input and output are from the index(sparse) feature space, not
  // the mapped/compact feature space, but the offset feature is the minimum
  // distance moved from the input to guarantee that it maps to the next
  // available quantum in the mapped/compact space.
  int OffsetFeature(int index_feature, int dir) const;
    
    class DawgCache {
 public:
  Dawg *GetSquishedDawg(const STRING &lang, TessdataType tessdata_dawg_type,
                        int debug_level, TessdataManager *data_file);
    }
    
     private:
  // Constructor is private as the instance only holds information specific to
  // the current labels, outputs etc, and is built by the static function.
  CTC(const GenericVector<int>& labels, int null_char,
      const GENERIC_2D_ARRAY<float>& outputs);
    
        // Start packing
    ImVector<stbrp_node> pack_nodes;
    pack_nodes.resize(total_rects);
    stbrp_context context;
    stbrp_init_target(&context, atlas->TexWidth, atlas->TexHeight, pack_nodes.Data, total_rects);
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
    
    {    switch (ev->type)
    {
    case ALLEGRO_EVENT_MOUSE_AXES:
        io.MouseWheel += ev->mouse.dz;
        io.MouseWheelH += ev->mouse.dw;
        return true;
    case ALLEGRO_EVENT_KEY_CHAR:
        if (ev->keyboard.display == g_Display)
            if (ev->keyboard.unichar > 0 && ev->keyboard.unichar < 0x10000)
                io.AddInputCharacter((unsigned short)ev->keyboard.unichar);
        return true;
    case ALLEGRO_EVENT_KEY_DOWN:
    case ALLEGRO_EVENT_KEY_UP:
        if (ev->keyboard.display == g_Display)
            io.KeysDown[ev->keyboard.keycode] = (ev->type == ALLEGRO_EVENT_KEY_DOWN);
        return true;
    }
    return false;
}
    
        // Create and grow vertex/index buffers if needed
    if (!g_pVB || g_VertexBufferSize < draw_data->TotalVtxCount)
    {
        if (g_pVB) { g_pVB->Release(); g_pVB = NULL; }
        g_VertexBufferSize = draw_data->TotalVtxCount + 5000;
        D3D10_BUFFER_DESC desc;
        memset(&desc, 0, sizeof(D3D10_BUFFER_DESC));
        desc.Usage = D3D10_USAGE_DYNAMIC;
        desc.ByteWidth = g_VertexBufferSize * sizeof(ImDrawVert);
        desc.BindFlags = D3D10_BIND_VERTEX_BUFFER;
        desc.CPUAccessFlags = D3D10_CPU_ACCESS_WRITE;
        desc.MiscFlags = 0;
        if (ctx->CreateBuffer(&desc, NULL, &g_pVB) < 0)
            return;
    }
    
    
    {    ImGui_ImplSDL2_UpdateMousePosAndButtons();
    ImGui_ImplSDL2_UpdateMouseCursor();
}
