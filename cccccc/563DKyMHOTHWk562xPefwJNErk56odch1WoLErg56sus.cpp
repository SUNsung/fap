
        
        #include 'atom/app/command_line_args.h'
    
    
    {}  // namespace api
    
    scoped_refptr<TracingController::TraceDataEndpoint> GetTraceDataEndpoint(
    const base::FilePath& path,
    const CompletionCallback& callback) {
  base::FilePath result_file_path = path;
  if (result_file_path.empty() && !base::CreateTemporaryFile(&result_file_path))
    LOG(ERROR) << 'Creating temporary file failed';
    }
    
    template <>
struct Converter<file_dialog::DialogSettings> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     file_dialog::DialogSettings* out) {
    mate::Dictionary dict;
    if (!ConvertFromV8(isolate, val, &dict))
      return false;
    dict.Get('window', &(out->parent_window));
    dict.Get('title', &(out->title));
    dict.Get('message', &(out->message));
    dict.Get('buttonLabel', &(out->button_label));
    dict.Get('nameFieldLabel', &(out->name_field_label));
    dict.Get('defaultPath', &(out->default_path));
    dict.Get('filters', &(out->filters));
    dict.Get('properties', &(out->properties));
    dict.Get('showsTagField', &(out->shows_tag_field));
#if defined(MAS_BUILD)
    dict.Get('securityScopedBookmarks', &(out->security_scoped_bookmarks));
#endif
    return true;
  }
};
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary(isolate, exports)
      .Set('DownloadItem',
           atom::api::DownloadItem::GetConstructor(isolate)->GetFunction());
}
    
    
    {}  // namespace
    
    
    {}  // namespace api
    
    
    {  delegate.Get('isCommandIdChecked', &is_checked_);
  delegate.Get('isCommandIdEnabled', &is_enabled_);
  delegate.Get('isCommandIdVisible', &is_visible_);
  delegate.Get('getAcceleratorForCommandId', &get_accelerator_);
  delegate.Get('executeCommand', &execute_command_);
  delegate.Get('menuWillShow', &menu_will_show_);
}
    
    // static
void PowerMonitor::BuildPrototype(v8::Isolate* isolate,
                                  v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'PowerMonitor'));
    }
    
     protected:
  RenderProcessPreferences(
      v8::Isolate* isolate,
      const atom::RenderProcessPreferences::Predicate& predicate);
  ~RenderProcessPreferences() override;
    
    #ifndef ATOM_BROWSER_API_ATOM_API_SCREEN_H_
#define ATOM_BROWSER_API_ATOM_API_SCREEN_H_
    
    class WebRequest : public mate::TrackableObject<WebRequest> {
 public:
  static mate::Handle<WebRequest> Create(v8::Isolate* isolate,
                                         AtomBrowserContext* browser_context);
    }
    
    
    {        auto maskMatrix = GetMatrix();
        size_t rowOffset = offset[0];
        size_t colOffset = offset[1];
        size_t sliceRowLength = (shape[0] != NDShape::InferredDimension) ? shape[0] : (maskMatrix->GetNumRows() - rowOffset);
        size_t sliceColLength = (shape[1] != NDShape::InferredDimension) ? shape[1] : (maskMatrix->GetNumCols() - colOffset);
        if ((rowOffset == 0) && (sliceRowLength == maskMatrix->GetNumRows()))
            maskMatrix->ColumnSlice(colOffset, sliceColLength).SetValue((char)maskKind);
        else
        {
            // Since Matrix does not support strides in the row dimension, we will need to create separate slices for each column
            for (size_t i = colOffset; i < (colOffset + sliceColLength); ++i)
            {
                auto column = maskMatrix->ColumnSlice(i, 1);
                column.Reshape(1, maskMatrix->GetNumRows());
                column.ColumnSlice(rowOffset, sliceRowLength).SetValue((char)maskKind);
            }
        }
    }
    
        ProgressWriter::ProgressWriter(size_t trainingUpdateWriteFrequency, size_t trainingFirstUpdatesToWrite,
                                   size_t testUpdateWriteFrequency, size_t testFirstUpdatesToWrite,
                                   size_t distributedSyncUpdateWriteFrequency, size_t distributedSyncFirstUpdatesToWrite)
        : m_training(std::make_unique<Impl>(trainingUpdateWriteFrequency, trainingFirstUpdatesToWrite)),
        m_test(std::make_unique<Impl>(testUpdateWriteFrequency, testFirstUpdatesToWrite)),
        m_distributedSync(std::make_unique<Impl>(distributedSyncUpdateWriteFrequency, distributedSyncFirstUpdatesToWrite))
    {
    }
    
        ParameterInitializer ConstantInitializer(double value)
    {
        Dictionary initConfig;
        initConfig[InitializerTypeAttributeName] = Microsoft::MSR::CNTK::ConstantInitializerTypeName;
        initConfig[ValueAttributeName] = value;
        return initConfig;
    }
    
    #include <functional>
#include <stdexcept>
    
    template <class ElemType>
class InputValue : public InputValueBase<ElemType>, public IdentityTransformerNode
{
    typedef InputValueBase<ElemType> Base; UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName() { return L'InputValue'; }
    }
    
      Status status;
  if (c == nullptr) {
    // Nothing to do
  } else if (!is_manual && c->IsTrivialMove()) {
    // Move file to next level
    assert(c->num_input_files(0) == 1);
    FileMetaData* f = c->input(0, 0);
    c->edit()->DeleteFile(c->level(), f->number);
    c->edit()->AddFile(c->level() + 1, f->number, f->file_size,
                       f->smallest, f->largest);
    status = versions_->LogAndApply(c->edit(), &mutex_);
    if (!status.ok()) {
      RecordBackgroundError(status);
    }
    VersionSet::LevelSummaryStorage tmp;
    Log(options_.info_log, 'Moved #%lld to level-%d %lld bytes %s: %s\n',
        static_cast<unsigned long long>(f->number),
        c->level() + 1,
        static_cast<unsigned long long>(f->file_size),
        status.ToString().c_str(),
        versions_->LevelSummary(&tmp));
  } else {
    CompactionState* compact = new CompactionState(c);
    status = DoCompactionWork(compact);
    if (!status.ok()) {
      RecordBackgroundError(status);
    }
    CleanupCompaction(compact);
    c->ReleaseInputs();
    DeleteObsoleteFiles();
  }
  delete c;
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    TEST(LogTest, OpenForAppend) {
  Write('hello');
  ReopenForAppend();
  Write('world');
  ASSERT_EQ('hello', Read());
  ASSERT_EQ('world', Read());
  ASSERT_EQ('EOF', Read());
}
    
    #include 'db/memtable.h'
#include 'db/dbformat.h'
#include 'leveldb/comparator.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'util/coding.h'
    
      KeyComparator comparator_;
  int refs_;
  Arena arena_;
  Table table_;
    
    
    {    return stb__out - out;
}

    
        // Main loop
    bool running = true;
    while (running)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplAllegro5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplAllegro5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                ImGui_ImplAllegro5_CreateDeviceObjects();
            }
        }
    }
    
    int main(int argc, char** argv)
{ 
    // Create GLUT window
    glutInit(&argc, argv);
    glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_MULTISAMPLE);
    glutInitWindowSize(1280, 720);
    glutCreateWindow('Dear ImGui FreeGLUT+OpenGL2 Example');
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // Render command lists
    int vtx_offset = 0;
    int idx_offset = 0;
    ImVec2 pos = draw_data->DisplayPos;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                // User callback (registered via ImDrawList::AddCallback)
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                // Apply scissor/clipping rectangle
                const D3D10_RECT r = { (LONG)(pcmd->ClipRect.x - pos.x), (LONG)(pcmd->ClipRect.y - pos.y), (LONG)(pcmd->ClipRect.z - pos.x), (LONG)(pcmd->ClipRect.w - pos.y)};
                ctx->RSSetScissorRects(1, &r);
    }
    }
    }
    
    // Render function.
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data)
{
    // Avoid rendering when minimized
    if (draw_data->DisplaySize.x <= 0.0f || draw_data->DisplaySize.y <= 0.0f)
        return;
    }
    
    
    {    std::ifstream file(filename, std::ios::binary | std::ios::ate);
    state.SetBytesProcessed(state.iterations() * file.tellg());
}
BENCHMARK_CAPTURE(ParseFile, jeopardy,      'data/jeopardy/jeopardy.json');
BENCHMARK_CAPTURE(ParseFile, canada,        'data/nativejson-benchmark/canada.json');
BENCHMARK_CAPTURE(ParseFile, citm_catalog,  'data/nativejson-benchmark/citm_catalog.json');
BENCHMARK_CAPTURE(ParseFile, twitter,       'data/nativejson-benchmark/twitter.json');
BENCHMARK_CAPTURE(ParseFile, floats,        'data/numbers/floats.json');
BENCHMARK_CAPTURE(ParseFile, signed_ints,   'data/numbers/signed_ints.json');
BENCHMARK_CAPTURE(ParseFile, unsigned_ints, 'data/numbers/unsigned_ints.json');
    
    // That gcc wants both of these prototypes seems mysterious. VC, for
// its part, can't decide which to use (another mystery). Matching of
// template overloads: the final frontier.
#ifndef COMPILER_MSVC
template <typename T, size_t N>
char (&ArraySizeHelper(const T (&array)[N]))[N];
#endif
    
      va_end(args_cp);
    
    #include 'benchmark/benchmark.h'
    
      if (result.error_occurred) {
    printer(Out, COLOR_RED, 'ERROR OCCURRED: \'%s\'',
            result.error_message.c_str());
    printer(Out, COLOR_DEFAULT, '\n');
    return;
  }
  // Format bytes per second
  std::string rate;
  if (result.bytes_per_second > 0) {
    rate = StrCat(' ', HumanReadableNumber(result.bytes_per_second), 'B/s');
  }
    
    void Increment(UserCounters *l, UserCounters const& r) {
  // add counters present in both or just in *l
  for (auto &c : *l) {
    auto it = r.find(c.first);
    if (it != r.end()) {
      c.second.value = c.second + it->second;
    }
  }
  // add counters present in r, but not in *l
  for (auto const &tc : r) {
    auto it = l->find(tc.first);
    if (it == l->end()) {
      (*l)[tc.first] = tc.second;
    }
  }
}
    
    #if defined(BENCHMARK_OS_MACOSX)
#include <mach/mach_time.h>
#endif
// For MSVC, we want to use '_asm rdtsc' when possible (since it works
// with even ancient MSVC compilers), and when not possible the
// __rdtsc intrinsic, declared in <intrin.h>.  Unfortunately, in some
// environments, <windows.h> and <intrin.h> have conflicting
// declarations of some other intrinsics, breaking compilation.
// Therefore, we simply declare __rdtsc ourselves. See also
// http://connect.microsoft.com/VisualStudio/feedback/details/262047
#if defined(COMPILER_MSVC) && !defined(_M_IX86)
extern 'C' uint64_t __rdtsc();
#pragma intrinsic(__rdtsc)
#endif
    
      out << indent << '\'caches\': [\n';
  indent = std::string(6, ' ');
  std::string cache_indent(8, ' ');
  for (size_t i = 0; i < info.caches.size(); ++i) {
    auto& CI = info.caches[i];
    out << indent << '{\n';
    out << cache_indent << FormatKV('type', CI.type) << ',\n';
    out << cache_indent << FormatKV('level', static_cast<int64_t>(CI.level))
        << ',\n';
    out << cache_indent
        << FormatKV('size', static_cast<int64_t>(CI.size) * 1000u) << ',\n';
    out << cache_indent
        << FormatKV('num_sharing', static_cast<int64_t>(CI.num_sharing))
        << '\n';
    out << indent << '}';
    if (i != info.caches.size() - 1) out << ',';
    out << '\n';
  }
  indent = std::string(4, ' ');
  out << indent << '],\n';
    
    
    {    return false;
  }