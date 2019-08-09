
        
        bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    
    {  // Convert from content coordinates to window coordinates.
  // This code copied from chrome_web_contents_view_delegate_views.cc
  aura::Window* target_window = GetActiveNativeView(rfh);
  aura::Window* root_window = target_window->GetRootWindow();
  views::Widget* top_level_widget =
    views::Widget::GetTopLevelWidgetForNativeView(target_window);
  aura::client::ScreenPositionClient* screen_position_client =
        aura::client::GetScreenPositionClient(root_window);
  if (screen_position_client) {
    screen_position_client->ConvertPointToScreen(target_window,
             &screen_point);
  }
  set_delay_destruction(true);
  menu_runner_.reset(new views::MenuRunner(menu_model_.get(), views::MenuRunner::CONTEXT_MENU,
                                           base::Bind(&Menu::OnMenuClosed, base::Unretained(this))));
  menu_runner_->RunMenuAt(top_level_widget,
                       nullptr,
                       gfx::Rect(screen_point, gfx::Size()),
                          views::MenuAnchorPosition::kTopRight,
                       ui::MENU_SOURCE_NONE);
  // It is possible for the same MenuMessageLoopAura to start a nested
  // message-loop while it is already running a nested loop. So make
  // sure the quit-closure gets reset to the outer loop's quit-closure
  // once the innermost loop terminates.
  {
    base::AutoReset<base::Closure> reset_quit_closure(&message_loop_quit_,
                                                      base::Closure());
  
    //base::MessageLoop* loop = base::MessageLoop::current();
    base::MessageLoopCurrent::ScopedNestableTaskAllower allow;
    base::RunLoop run_loop;
    message_loop_quit_ = run_loop.QuitClosure();
  
    run_loop.Run();
  }
  set_delay_destruction(false);
  if (pending_destruction())
    object_manager_->OnDeallocateObject(id_);
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodAsync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodAsyncFunction);
};
    
      void NwDesktopCaptureMonitor::Stop() {
    started_ = false;
    media_list_.clear();
  }
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
      // Computes all the cross product distances of the points from the line,
  // storing the actual (signed) cross products in distances_.
  // Ignores distances of points that are further away than the previous point,
  // and overlaps the previous point by at least half.
  void ComputeDistances(const ICOORD& start, const ICOORD& end);
    
      double m() const;  // get gradient
  double c(double m) const;            // get constant
  double rms(double m, double c) const;            // get error
  double pearson() const;  // get correlation coefficient.
    
    // Possible normalization methods. Use NEGATIVE values as these also
// double up as markers for the last sub-classifier.
enum NormalizationMode {
  NM_BASELINE = -3,         // The original BL normalization mode.
  NM_CHAR_ISOTROPIC = -2,   // Character normalization but isotropic.
  NM_CHAR_ANISOTROPIC = -1  // The original CN normalization mode.
};
    
      // Return whether this model is likely to agree with the other model on most
  // paragraphs they are marked.
  bool Comparable(const ParagraphModel &other) const;
    
    // Computes the Otsu threshold(s) for the given histogram.
// Also returns H = total count in histogram, and
// omega0 = count of histogram below threshold.
int OtsuStats(const int* histogram, int* H_out, int* omega0_out);
    
      // Creates a report of the error rate. The report_level controls the detail
  // that is reported to stderr via tprintf:
  // 0   -> no output.
  // >=1 -> bottom-line error rate.
  // >=3 -> font-level error rate.
  // boosting_mode determines the return value. It selects which (un-weighted)
  // error rate to return.
  // The fontinfo_table from MasterTrainer provides the names of fonts.
  // The it determines the current subset of the training samples.
  // If not nullptr, the top-choice unichar error rate is saved in unichar_error.
  // If not nullptr, the report string is saved in fonts_report.
  // (Ignoring report_level).
  double ReportErrors(int report_level, CountTypes boosting_mode,
                      const FontInfoTable& fontinfo_table,
                      const SampleIterator& it,
                      double* unichar_error,
                      STRING* fonts_report);
    
    // Setup the map for the given indexed_features that have been indexed by
// feature_map.
void IntFeatureDist::Set(const GenericVector<int>& indexed_features,
                          int canonical_count, bool value) {
  total_feature_weight_ = canonical_count;
  for (int i = 0; i < indexed_features.size(); ++i) {
    const int f = indexed_features[i];
    features_[f] = value;
    for (int dir = -kNumOffsetMaps; dir <= kNumOffsetMaps; ++dir) {
      if (dir == 0) continue;
      const int mapped_f = feature_map_->OffsetFeature(f, dir);
      if (mapped_f >= 0) {
        features_delta_one_[mapped_f] = value;
        for (int dir2 = -kNumOffsetMaps; dir2 <= kNumOffsetMaps; ++dir2) {
          if (dir2 == 0) continue;
          const int mapped_f2 = feature_map_->OffsetFeature(mapped_f, dir2);
          if (mapped_f2 >= 0)
            features_delta_two_[mapped_f2] = value;
        }
      }
    }
  }
}
    
    
    {	ImageLoader::get_recognized_extensions(p_extensions);
}
    
    		Ref<StyleBox> grabber;
		if (drag.active)
			grabber = get_stylebox('grabber_pressed');
		else if (highlight == HIGHLIGHT_RANGE)
			grabber = get_stylebox('grabber_highlight');
		else
			grabber = get_stylebox('grabber');
    
    #include 'editor/editor_node.h'
#include 'editor/editor_plugin.h'
#include 'scene/2d/collision_polygon_2d.h'
#include 'scene/2d/particles_2d.h'
#include 'scene/gui/box_container.h'
#include 'scene/gui/file_dialog.h'
    
    
    {		return (uint32_t(Math::fast_ftoi(sRed)) & 0x1FF) | ((uint32_t(Math::fast_ftoi(sGreen)) & 0x1FF) << 9) | ((uint32_t(Math::fast_ftoi(sBlue)) & 0x1FF) << 18) | ((uint32_t(Math::fast_ftoi(exps)) & 0x1F) << 27);
	}
    
    	struct BVHCmpY {
    }
    
    	bool is_ref() const;
	_FORCE_INLINE_ bool is_num() const { return type == INT || type == REAL; };
	_FORCE_INLINE_ bool is_array() const { return type >= ARRAY; };
	bool is_shared() const;
	bool is_zero() const;
	bool is_one() const;
    
    
    {	o->set(property, arr);
}
    
    void ChannelArguments::SetPointer(const grpc::string& key, void* value) {
  static const grpc_arg_pointer_vtable vtable = {
      &PointerVtableMembers::Copy, &PointerVtableMembers::Destroy,
      &PointerVtableMembers::Compare};
  SetPointerWithVtable(key, value, &vtable);
}
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    #include <grpc/support/port_platform.h>
    
    
    { private:
  char* name_;
};
    
      padded = gpr_leftpad('foo', ' ', 1);
  GPR_ASSERT(0 == strcmp('foo', padded));
  gpr_free(padded);
    
    static grpc::internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    #include <grpc/grpc.h>
#include <grpc/support/log.h>
#include <grpc/support/time.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
    
      void CompareService(const grpc::string& service) {
    const protobuf::ServiceDescriptor* service_desc =
        desc_pool_->FindServiceByName(service);
    const protobuf::ServiceDescriptor* ref_service_desc =
        ref_desc_pool_->FindServiceByName(service);
    EXPECT_TRUE(service_desc != nullptr);
    EXPECT_TRUE(ref_service_desc != nullptr);
    EXPECT_EQ(service_desc->DebugString(), ref_service_desc->DebugString());
    }
    
        std::unique_ptr<DHTTokenTracker> tokenTracker;
    
    #endif // D_DHT_ROUTING_TABLE_DESERIALIZER_H

    
    void DHTTaskQueueImpl::addImmediateTask(const std::shared_ptr<DHTTask>& task)
{
  immediateTaskQueue_.addTask(task);
}
    
    #include 'DHTTaskQueue.h'
#include 'DHTTaskExecutor.h'
    
    DHTUnknownMessage::~DHTUnknownMessage() { delete[] data_; }
    
        void* sp = (void*) ((char*) stack_ + stack_size_);
#ifdef USE_VALGRIND
    valgrind_stack_id = VALGRIND_STACK_REGISTER(sp, stack_);
#endif
    ctx_ = make_fcontext(sp, stack_size_, (void (*)(intptr_t))&context_func);
    
            for (int i = 0; i < 100; ++i)
        {
            std::string addr3 = System::gethostbyname('ipv6.sjtu.edu.cn', AF_INET);
            std::string addr4 = System::gethostbyname('ipv6.sjtu.edu.cn', AF_INET6);
    }
    
    namespace swoole { namespace coroutine {
//-------------------------------------------------------------------------------
class Channel
{
public:
    enum opcode
    {
        PRODUCER = 1,
        CONSUMER = 2,
    };
    }
    }
    }
    
    #include 'swoole.h'
#include <string>
    
    
    {    ASSERT_GT(cid, 0);
    ASSERT_EQ(cid, _cid);
}
    
            /**
         * Less or equal comparison operator.
         * @param point Point<T> to be compared.
         * @result Whether the instance satisfies the condition with respect to point.
         */
        inline bool operator<=(const Point<T>& point) const
        {
            return area() <= point.area();
        }
    
        // Constant parameters
    const auto FACE_CCN_DECREASE_FACTOR = 8.f;
    const std::string FACE_PROTOTXT{'face/pose_deploy.prototxt'};
    const std::string FACE_TRAINED_MODEL{'face/pose_iter_116000.caffemodel'};
    
    
    // Constant parameters
    const auto HAND_CCN_DECREASE_FACTOR = 8.f;
    const std::string HAND_PROTOTXT{'hand/pose_deploy.prototxt'};
    const std::string HAND_TRAINED_MODEL{'hand/pose_iter_102000.caffemodel'};
    
      void disconnect() override;
    
    void BulkOperations::Manager::getAffectedKeys() {
  if (!hasOperation()) return;
    }
    
      virtual void getAffectedKeys(std::function<void(QVariant, QString)> callback);
    
    #ifndef RDM_VERSION
#include '../version.h'
#endif
    
    void ValueEditor::EmbeddedFormattersManager::loadFormatters(QJSValue callback) {
  m_python->importModule_sync('formatters');
  m_python->call('formatters.get_formatters_list', QVariantList(), callback);
}
    
     public:
  enum Roles { name = Qt::UserRole + 1, version, description, cmd };
    
      // Dialogs
  void requestBulkOperation(
      QSharedPointer<RedisClient::Connection> connection, int dbIndex,
      BulkOperations::Manager::Operation op, QRegExp keyPattern,
      BulkOperations::AbstractOperation::OperationCallback callback);