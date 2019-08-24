
        
          bool has_leaders;   // does the line contain leader dots (.....)?
  bool has_drop_cap;  // does the line have a drop cap?
  int pix_ldistance;  // distance to the left pblock boundary in pixels
  int pix_rdistance;  // distance to the right pblock boundary in pixels
  float pix_xheight;  // guessed xheight for the line
  int average_interword_space; // average space between words in pixels.
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return nullptr;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : nullptr;
      int64_t new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != nullptr && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
    namespace ImGuiFreeType
{
    // Hinting greatly impacts visuals (and glyph sizes).
    // When disabled, FreeType generates blurrier glyphs, more or less matches the stb's output.
    // The Default hinting mode usually looks good, but may distort glyphs in an unusual way.
    // The Light hinting mode generates fuzzier glyphs but better matches Microsoft's rasterizer.
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // [Win32] Our example includes a copy of glfw3.lib pre-compiled with VS2010 to maximize ease of testing and compatibility with old VS compilers.
// To link with VS2010-era libraries, VS2015+ requires linking with legacy_stdio_definitions.lib, which we do using this pragma.
// Your own project should not be affected, as you are likely to link with a newer binary of GLFW that is adequate for your version of Visual Studio.
#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, 'legacy_stdio_definitions')
#endif
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        void UserPostProcessing::doSomething(cv::Mat& output, const cv::Mat& input)
    {
        try
        {
            // Random operation on data
            cv::bitwise_not(input, output);
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
        }
    }
    
        private:
        const bool mMergeResults;
        const int mLevels;
        const int mPatchSize;
        const bool mTrackVelocity;
        const float mConfidenceThreshold;
        const bool mScaleVarying;
        const float mRescale;
    
    void BulkOperations::AbstractOperation::run(
    QSharedPointer<RedisClient::Connection> targetConnection,
    int targetDbIndex) {
  if (!isMetadataValid()) {
    qWarning() << QString('Invalid metadata for %1').arg(getTypeName());
    return;
  }
    }
    
    
    {          m_combinator->combine(future);
        }
    
      void loadNamespaceItems(
      QSharedPointer<ConnectionsTree::AbstractNamespaceItem> parent,
      const QString& filter, std::function<void(const QString& err)> callback,
      QSet<QByteArray> expandedNs) override;
    
    QVariant BulkOperations::Manager::getTargetConnections() {
  return QVariant(m_model->getConnections());
}
    
      int operationProgress() const;
    
     protected:
  virtual bool isMetadataValid() const { return true; }
    
              auto future = m_connection->cmd(
              rawCmd, this, m_dbIndex,
              [this](const RedisClient::Response&) {
                QMutexLocker l(&m_processedKeysMutex);
                m_progress++;
                emit progress(m_progress);
              },
              [this, rawCmd](const QString& err) {
                QMutexLocker l(&m_errorsMutex);
                m_errors.append(
                    QCoreApplication::translate('RDM',
                                                'Cannot execute command ') +
                    QString('%1: %2')
                        .arg(QString::fromUtf8(rawCmd.join(QByteArray(' '))))
                        .arg(err));
              });
    
      /**
   * Similar to split, but will return the entire queue instead of throwing
   * if n exceeds the number of bytes in the queue.
   */
  std::unique_ptr<folly::IOBuf> splitAtMost(size_t n) {
    return split(n, false);
  }
    
    class UniqueInstance {
 public:
  template <typename... Key, typename... Mapped>
  FOLLY_EXPORT explicit UniqueInstance(
      char const* tmpl,
      tag_t<Key...>,
      tag_t<Mapped...>) noexcept {
    static Ptr const ptrs[] = {&typeid(Key)..., &typeid(Mapped)...};
    auto& global = createGlobal<Value, tag_t<Tag, Key...>>();
    enforce(tmpl, ptrs, sizeof...(Key), sizeof...(Mapped), global);
  }
    }
    
    #include <folly/executors/InlineExecutor.h>
#include <folly/futures/detail/Core.h>
#include <folly/lang/Pretty.h>
    
      /// Move ctor
  ///
  /// Postconditions:
  ///
  /// - `this` will have whatever shared-state was previously held by `other`
  ///   (if any)
  /// - `other.valid()` will be false (`other` will not have any shared state)
  Promise(Promise<T>&& other) noexcept;
    
      bool writeWithPriority(T&& item, size_t priority) {
    size_t queue = std::min(getNumPriorities() - 1, priority);
    CHECK_LT(queue, queues_.size());
    return queues_.at(queue).write(std::move(item));
  }
    
      ScopedEventBaseThread sebt{kThreadName};
  sebt.getEventBase()->runInEventBaseThread([&] {
    createdThreadName = folly::getCurrentThreadName();
    done.post();
  });