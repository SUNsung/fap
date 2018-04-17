
        
          int called = 0;
  partial_run_mgr.PartialRunDone(
      step_id, [&called](Status status) { called++; }, Status::OK());
  partial_run_mgr.ExecutorDone(step_id, Status::OK());
    
    class RecordWriter {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  RecordWriter(WritableFile* dest,
               const RecordWriterOptions& options = RecordWriterOptions());
    }
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    
    {    io::RecordReaderOptions options =
        io::RecordReaderOptions::CreateRecordReaderOptions(compression_type_);
    reader_.reset(new io::RecordReader(file_.get(), options));
    return Status::OK();
  }
    
    bool HloReachabilityMap::IsReachable(const HloInstruction* a,
                                     const HloInstruction* b) const {
  return GetBitVector(b).Get(GetIndex(a));
}
    
    
    {  std::vector<string> workers;
  cc->ListWorkers(&workers);
  std::sort(workers.begin(), workers.end());
  EXPECT_EQ(std::vector<string>({'/job:mnist/replica:0/task:0',
                                 '/job:mnist/replica:0/task:3',
                                 '/job:mnist/replica:0/task:4'}),
            workers);
}
    
        NodeDef* add_node2 = graph_def.add_node();
    add_node2->set_name('add_node2');
    add_node2->set_op('Add');
    add_node2->add_input('const_node1');
    add_node2->add_input('const_node2');
    add_node2->set_device('//device:GPU:1');
    
    void MPIUtils::InitMPI() {
  // Initialize the MPI environment if that hasn't been done
  int flag = 0;
  MPI_CHECK(MPI_Initialized(&flag));
  if (!flag) {
    int proc_id = 0, number_of_procs = 1, len = -1;
    char my_host_name[max_worker_name_length];
    // MPI_CHECK(MPI_Init_thread(0, 0, MPI_THREAD_MULTIPLE, &flag));
    MPI_CHECK(MPI_Init(0, 0));
    MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
    MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    MPI_CHECK(MPI_Get_processor_name(my_host_name, &len));
    fprintf(stderr,
            'MPI Environment initialized. Process id: %d Total processes: %d '
            '|| Hostname: %s \n',
            proc_id, number_of_procs, my_host_name);
  }
}
    
        // Ignore first non-switch arg if it's not a standalone package.
    bool ignore_arg = !package->self_extract();
    for (unsigned i = 1; i < argv.size(); ++i) {
      if (ignore_arg && argv[i] == args[0]) {
        ignore_arg = false;
        continue;
      }
    }
    
    using content::RenderView;
using content::RenderThread;
using content::V8ValueConverter;
using blink::WebFrame;
using blink::WebLocalFrame;
using blink::WebView;
    
    // Call method of an object in browser.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args);
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
      if (menu_item->submenu_)
    menu_model_->InsertSubMenuAt(pos, menu_item->id(), menu_item->label_,
                                 menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->InsertItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->InsertCheckItemAt(pos, menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->InsertSeparatorAt(pos, ui::NORMAL_SEPARATOR);
    
        int menu_id;
    if (option.GetInteger('submenu', &menu_id))
      SetSubmenu(dispatcher_host()->GetApiObject<Menu>(menu_id));
    std::string key;
    if (option.GetString('key',&key)){
      enable_shortcut = true;
      std::string modifiers = '';
      option.GetString('modifiers',&modifiers);
      modifiers_mask = GdkModifierType(0);
      if (modifiers.size() != 0){
        if (modifiers.find('ctrl') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_CONTROL_MASK);
        }
        if (modifiers.find('alt') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_MOD1_MASK);
        }
        if (modifiers.find('super') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SUPER_MASK);
        }
        if (modifiers.find('meta') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_META_MASK);
        }
        
        if (modifiers.find('shift') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SHIFT_MASK);
        }
    }
    }
    
    
    {} // namespace
    
    void Value::swap(Value& other) {
  swapPayload(other);
  std::swap(comments_, other.comments_);
  std::swap(start_, other.start_);
  std::swap(limit_, other.limit_);
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_ENUM_H__
    
      void Generate(io::Printer* printer);
    
    void RepeatedEnumFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    
    {}
    
    #include <gtest/gtest.h>
    
    MessageGenerator* ImmutableGeneratorFactory::NewMessageGenerator(
    const Descriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor, context_->EnforceLite())) {
    return new ImmutableMessageGenerator(descriptor, context_);
  } else {
    return new ImmutableMessageLiteGenerator(descriptor, context_);
  }
}
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
    
    {
    {    if (debug) {
      if (is_italic) {
        tprintf(' Rejecting: superscript is italic.\n');
      }
      if (is_punc) {
        tprintf(' Rejecting: punctuation present.\n');
      }
      const char *char_str = wc.unicharset()->id_to_unichar(unichar_id);
      if (bad_certainty) {
        tprintf(' Rejecting: don't believe character %s with certainty %.2f '
                'which is less than threshold %.2f\n', char_str,
                char_certainty, certainty_threshold);
      }
      if (bad_height) {
        tprintf(' Rejecting: character %s seems too small @ %.2f versus '
                'expected %.2f\n', char_str, char_height, normal_height);
      }
    }
    if (bad_certainty || bad_height || is_punc || is_italic) {
      if (ok_run_count == i) {
        initial_ok_run_count = ok_run_count;
      }
      ok_run_count = 0;
    } else {
      ok_run_count++;
    }
    if (char_certainty < worst_certainty) {
      worst_certainty = char_certainty;
    }
  }
  bool all_ok = ok_run_count == wc.length();
  if (all_ok && debug) {
    tprintf(' Accept: worst revised certainty is %.2f\n', worst_certainty);
  }
  if (!all_ok) {
    if (left_ok) *left_ok = initial_ok_run_count;
    if (right_ok) *right_ok = ok_run_count;
  }
  return all_ok;
}
    
    // Computes the absolute error distances of the points from the line,
// and returns the squared upper-quartile error distance.
double DetLineFit::ComputeUpperQuartileError() {
  int num_errors = distances_.size();
  if (num_errors == 0) return 0.0;
  // Get the absolute values of the errors.
  for (int i = 0; i < num_errors; ++i) {
    if (distances_[i].key < 0) distances_[i].key = -distances_[i].key;
  }
  // Now get the upper quartile distance.
  int index = distances_.choose_nth_item(3 * num_errors / 4);
  double dist = distances_[index].key;
  // The true distance is the square root of the dist squared / square_length.
  // Don't bother with the square root. Just return the square distance.
  return square_length_ > 0.0 ? dist * dist / square_length_ : 0.0;
}
    
      // Arguments:
  // block: if not NULL, then this is the first transformation, and
  //        block->re_rotation() needs to be used after the Denorm
  //        transformation to get back to the image coords.
  // rotation: if not NULL, apply this rotation after translation to the
  //           origin and scaling. (Usually a classify rotation.)
  // predecessor: if not NULL, then predecessor has been applied to the
  //              input space and needs to be undone to complete the inverse.
  // The above pointers are not owned by this DENORM and are assumed to live
  // longer than this denorm, except rotation, which is deep copied on input.
  //
  // x_origin: The x origin which will be mapped to final_xshift in the result.
  // y_origin: The y origin which will be mapped to final_yshift in the result.
  //           Added to result of row->baseline(x) if not NULL.
  //
  // x_scale: scale factor for the x-coordinate.
  // y_scale: scale factor for the y-coordinate. Ignored if segs is given.
  // Note that these scale factors apply to the same x and y system as the
  // x-origin and y-origin apply, ie after any block rotation, but before
  // the rotation argument is applied.
  //
  // final_xshift: The x component of the final translation.
  // final_yshift: The y component of the final translation.
  //
  // In theory, any of the commonly used normalizations can be setup here:
  // * Traditional baseline normalization on a word:
  // SetupNormalization(block, NULL, NULL,
  //                    box.x_middle(), baseline,
  //                    kBlnXHeight / x_height, kBlnXHeight / x_height,
  //                    0, kBlnBaselineOffset);
  // * 'Numeric mode' baseline normalization on a word, in which the blobs
  //   are positioned with the bottom as the baseline is achieved by making
  //   a separate DENORM for each blob.
  // SetupNormalization(block, NULL, NULL,
  //                    box.x_middle(), box.bottom(),
  //                    kBlnXHeight / x_height, kBlnXHeight / x_height,
  //                    0, kBlnBaselineOffset);
  // * Anisotropic character normalization used by IntFx.
  // SetupNormalization(NULL, NULL, denorm,
  //                    centroid_x, centroid_y,
  //                    51.2 / ry, 51.2 / rx, 128, 128);
  // * Normalize blob height to x-height (current OSD):
  // SetupNormalization(NULL, &rotation, NULL,
  //                    box.rotational_x_middle(rotation),
  //                    box.rotational_y_middle(rotation),
  //                    kBlnXHeight / box.rotational_height(rotation),
  //                    kBlnXHeight / box.rotational_height(rotation),
  //                    0, kBlnBaselineOffset);
  // * Secondary normalization for classification rotation (current):
  // FCOORD rotation = block->classify_rotation();
  // float target_height = kBlnXHeight / CCStruct::kXHeightCapRatio;
  // SetupNormalization(NULL, &rotation, denorm,
  //                    box.rotational_x_middle(rotation),
  //                    box.rotational_y_middle(rotation),
  //                    target_height / box.rotational_height(rotation),
  //                    target_height / box.rotational_height(rotation),
  //                    0, kBlnBaselineOffset);
  // * Proposed new normalizations for CJK: Between them there is then
  // no need for further normalization at all, and the character fills the cell.
  // ** Replacement for baseline normalization on a word:
  // Scales height and width independently so that modal height and pitch
  // fill the cell respectively.
  // float cap_height = x_height / CCStruct::kXHeightCapRatio;
  // SetupNormalization(block, NULL, NULL,
  //                    box.x_middle(), cap_height / 2.0f,
  //                    kBlnCellHeight / fixed_pitch,
  //                    kBlnCellHeight / cap_height,
  //                    0, 0);
  // ** Secondary normalization for classification (with rotation) (proposed):
  // Requires a simple translation to the center of the appropriate character
  // cell, no further scaling and a simple rotation (or nothing) about the
  // cell center.
  // FCOORD rotation = block->classify_rotation();
  // SetupNormalization(NULL, &rotation, denorm,
  //                    fixed_pitch_cell_center,
  //                    0.0f,
  //                    1.0f,
  //                    1.0f,
  //                    0, 0);
  void SetupNormalization(const BLOCK* block,
                          const FCOORD* rotation,
                          const DENORM* predecessor,
                          float x_origin, float y_origin,
                          float x_scale, float y_scale,
                          float final_xshift, float final_yshift);
    
    #ifndef TESSERACT_CCUTIL_DOUBLEPTR_H_
#define TESSERACT_CCUTIL_DOUBLEPTR_H_
    
    /*---------------------------------------------------------------------------
          Macros
----------------------------------------------------------------------------*/
/* macros for controlling the display of recognized characters */
#define EnableCharDisplay()   (DisplayCharacters = TRUE)
#define DisableCharDisplay()    (DisplayCharacters = FALSE)
    
    // Sets the report string to a combined human and machine-readable report
// string of the error rates.
// Returns false if there is no data, leaving report unchanged, unless
// even_if_empty is true.
bool ErrorCounter::ReportString(bool even_if_empty, const Counts& counts,
                                STRING* report) {
  // Compute the error rates.
  double rates[CT_SIZE];
  if (!ComputeRates(counts, rates) && !even_if_empty)
    return false;
  // Using %.4g%%, the length of the output string should exactly match the
  // length of the format string, but in case of overflow, allow for +eddd
  // on each number.
  const int kMaxExtraLength = 5;  // Length of +eddd.
  // Keep this format string and the snprintf in sync with the CountTypes enum.
  const char* format_str = 'Unichar=%.4g%%[1], %.4g%%[2], %.4g%%[n], %.4g%%[T] '
                           'Mult=%.4g%%, Jn=%.4g%%, Brk=%.4g%%, Rej=%.4g%%, '
                           'FontAttr=%.4g%%, Multi=%.4g%%, '
                           'Answers=%.3g, Rank=%.3g, '
                           'OKjunk=%.4g%%, Badjunk=%.4g%%';
  int max_str_len = strlen(format_str) + kMaxExtraLength * (CT_SIZE - 1) + 1;
  char* formatted_str = new char[max_str_len];
  snprintf(formatted_str, max_str_len, format_str,
           rates[CT_UNICHAR_TOP1_ERR] * 100.0,
           rates[CT_UNICHAR_TOP2_ERR] * 100.0,
           rates[CT_UNICHAR_TOPN_ERR] * 100.0,
           rates[CT_UNICHAR_TOPTOP_ERR] * 100.0,
           rates[CT_OK_MULTI_UNICHAR] * 100.0,
           rates[CT_OK_JOINED] * 100.0,
           rates[CT_OK_BROKEN] * 100.0,
           rates[CT_REJECT] * 100.0,
           rates[CT_FONT_ATTR_ERR] * 100.0,
           rates[CT_OK_MULTI_FONT] * 100.0,
           rates[CT_NUM_RESULTS],
           rates[CT_RANK],
           100.0 * rates[CT_REJECTED_JUNK],
           100.0 * rates[CT_ACCEPTED_JUNK]);
  *report = formatted_str;
  delete [] formatted_str;
  // Now append each field of counts with a tab in front so the result can
  // be loaded into a spreadsheet.
  for (int ct = 0; ct < CT_SIZE; ++ct)
    report->add_str_int('\t', counts.n[ct]);
  return true;
}
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'host.h'
#include <stdio.h>
#include <math.h>
    
    IntFeatureDist::~IntFeatureDist() {
  Clear();
}
    
    SampleIterator::SampleIterator()
  : charset_map_(NULL),
    shape_table_(NULL),
    sample_set_(NULL),
    randomize_(false),
    owned_shape_table_(NULL) {
  num_shapes_ = 0;
  Begin();
}
    
    bool js_cocos2dx_studio_AlphaFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_AlphaFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_AlphaFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_AlphaFrame_getAlpha(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_AlphaFrame_setAlpha(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_AlphaFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_AlphaFrame_AlphaFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
        tolua_beginmodule(tolua_S,'SimpleAudioEngine');
        tolua_function(tolua_S,'preloadMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadBackgroundMusic);
        tolua_function(tolua_S,'stopMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopBackgroundMusic);
        tolua_function(tolua_S,'stopAllEffects',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopAllEffects);
        tolua_function(tolua_S,'getMusicVolume',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getBackgroundMusicVolume);
        tolua_function(tolua_S,'resumeMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeBackgroundMusic);
        tolua_function(tolua_S,'setMusicVolume',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setBackgroundMusicVolume);
        tolua_function(tolua_S,'preloadEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadEffect);
        tolua_function(tolua_S,'isMusicPlaying',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_isBackgroundMusicPlaying);
        tolua_function(tolua_S,'getEffectsVolume',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getEffectsVolume);
        tolua_function(tolua_S,'willPlayMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_willPlayBackgroundMusic);
        tolua_function(tolua_S,'pauseEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseEffect);
        tolua_function(tolua_S,'playEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect);
        tolua_function(tolua_S,'rewindMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_rewindBackgroundMusic);
        tolua_function(tolua_S,'playMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic);
        tolua_function(tolua_S,'resumeAllEffects',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeAllEffects);
        tolua_function(tolua_S,'setEffectsVolume',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setEffectsVolume);
        tolua_function(tolua_S,'stopEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopEffect);
        tolua_function(tolua_S,'pauseMusic',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseBackgroundMusic);
        tolua_function(tolua_S,'pauseAllEffects',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseAllEffects);
        tolua_function(tolua_S,'unloadEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_unloadEffect);
        tolua_function(tolua_S,'resumeEffect',lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeEffect);
        tolua_function(tolua_S,'destroyInstance', lua_cocos2dx_cocosdenshion_SimpleAudioEngine_end);
        tolua_function(tolua_S,'getInstance', lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(CocosDenshion::SimpleAudioEngine).name();
    g_luaType[typeName] = 'cc.SimpleAudioEngine';
    g_typeCast['SimpleAudioEngine'] = 'cc.SimpleAudioEngine';
    return 1;
}
TOLUA_API int register_all_cocos2dx_cocosdenshion(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,'cc',0);
	tolua_beginmodule(tolua_S,'cc');
    
    			b2Transform xf2;
			xf2.q.Set(-0.3524f * b2_pi);
			xf2.p = -xf2.q.GetXAxis();
    
    #ifndef BULLET_TEST_H
#define BULLET_TEST_H
    
    				if (i > 0)
				{
					b2Vec2 anchor(5.0f + 1.0f * i, 10.0f);
					jd.Initialize(prevBody, body, anchor);
					m_world->CreateJoint(&jd);
				}