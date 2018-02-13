
        
                        // sols(:,i) = stmp;
                cv::Mat stmp_mat(3, 1, CV_64F, &stmp);
    
    void compose_motion(InputArray _om1, InputArray _T1, InputArray _om2, InputArray _T2,
                    Mat& om3, Mat& T3, Mat& dom3dom1, Mat& dom3dT1, Mat& dom3dom2,
                    Mat& dom3dT2, Mat& dT3dom1, Mat& dT3dT1, Mat& dT3dom2, Mat& dT3dT2);
    
            static __device__ __forceinline__ int syncthreadsOr(int pred)
        {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 200)
                // just campilation stab
                return 0;
#else
                return __syncthreads_or(pred);
#endif
        }
    
    // Returns the number of misfit blob tops in this word.
int Tesseract::CountMisfitTops(WERD_RES *word_res) {
  int bad_blobs = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
    TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
    UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
    if (unicharset.get_isalpha(class_id) || unicharset.get_isdigit(class_id)) {
      int top = blob->bounding_box().top();
      if (top >= INT_FEAT_RANGE)
        top = INT_FEAT_RANGE - 1;
      int min_bottom, max_bottom, min_top, max_top;
      unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                &min_top, &max_top);
      if (max_top - min_top > kMaxCharTopRange)
        continue;
      bool bad =  top < min_top - x_ht_acceptance_tolerance ||
                  top > max_top + x_ht_acceptance_tolerance;
      if (bad)
        ++bad_blobs;
      if (debug_x_ht_level >= 1) {
        tprintf('Class %s is %s with top %d vs limits of %d->%d, +/-%d\n',
                unicharset.id_to_unichar(class_id),
                bad ? 'Misfit' : 'OK', top, min_top, max_top,
                static_cast<int>(x_ht_acceptance_tolerance));
      }
    }
  }
  return bad_blobs;
}
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
     private:
  void SetBlame(IncorrectResultReason irr, const STRING &msg,
                const WERD_CHOICE *choice, bool debug) {
    incorrect_result_reason_ = irr;
    debug_ = IncorrectReason();
    debug_ += ' to blame: ';
    FillDebugString(msg, choice, &debug_);
    if (debug) tprintf('SetBlame(): %s', debug_.string());
  }
    
    // Computes all the cross product distances of the points from the line,
// storing the actual (signed) cross products in distances.
// Ignores distances of points that are further away than the previous point,
// and overlaps the previous point by at least half.
void DetLineFit::ComputeDistances(const ICOORD& start, const ICOORD& end) {
  distances_.truncate(0);
  ICOORD line_vector = end;
  line_vector -= start;
  square_length_ = line_vector.sqlength();
  int line_length = IntCastRounded(sqrt(square_length_));
  // Compute the distance of each point from the line.
  int prev_abs_dist = 0;
  int prev_dot = 0;
  for (int i = 0; i < pts_.size(); ++i) {
    ICOORD pt_vector = pts_[i].pt;
    pt_vector -= start;
    int dot = line_vector % pt_vector;
    // Compute |line_vector||pt_vector|sin(angle between)
    int dist = line_vector * pt_vector;
    int abs_dist = dist < 0 ? -dist : dist;
    if (abs_dist > prev_abs_dist && i > 0) {
      // Ignore this point if it overlaps the previous one.
      int separation = abs(dot - prev_dot);
      if (separation < line_length * pts_[i].halfwidth ||
          separation < line_length * pts_[i - 1].halfwidth)
        continue;
    }
    distances_.push_back(DistPointPair(dist, pts_[i].pt));
    prev_abs_dist = abs_dist;
    prev_dot = dot;
  }
}
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return NULL;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : NULL;
      inT64 new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != NULL && offset > min_step * 2 &&
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
    
    // Transforms the given coords forward to normalized space using the
// full transformation sequence defined by the block rotation, the
// predecessors, deepest first, and finally this. If first_norm is not NULL,
// then the first and deepest transformation used is first_norm, ending
// with this, and the block rotation will not be applied.
void DENORM::NormTransform(const DENORM* first_norm, const TPOINT& pt,
                           TPOINT* transformed) const {
  FCOORD src_pt(pt.x, pt.y);
  FCOORD float_result;
  NormTransform(first_norm, src_pt, &float_result);
  transformed->x = IntCastRounded(float_result.x());
  transformed->y = IntCastRounded(float_result.y());
}
void DENORM::NormTransform(const DENORM* first_norm, const FCOORD& pt,
                           FCOORD* transformed) const {
  FCOORD src_pt(pt);
  if (first_norm != this) {
    if (predecessor_ != NULL) {
      predecessor_->NormTransform(first_norm, pt, &src_pt);
    } else if (block_ != NULL) {
      FCOORD fwd_rotation(block_->re_rotation().x(),
                          -block_->re_rotation().y());
      src_pt.rotate(fwd_rotation);
    }
  }
  LocalNormTransform(src_pt, transformed);
}
    
    namespace osquery {
namespace tables {
    }
    }
    
    /**
 * @brief Singleton for queuing asynchronous tasks to be executed in parallel
 *
 * Dispatcher is a singleton which can be used to coordinate the parallel
 * execution of asynchronous tasks across an application. Internally,
 * Dispatcher is back by the Apache Thrift thread pool.
 */
class Dispatcher : private boost::noncopyable {
 public:
  /**
   * @brief The primary way to access the Dispatcher factory facility.
   *
   * @code{.cpp} auto dispatch = osquery::Dispatcher::instance(); @endcode
   *
   * @return The osquery::Dispatcher instance.
   */
  static Dispatcher& instance() {
    static Dispatcher instance;
    return instance;
  }
    }
    
    /**
 * @brief Delete the existing node key from the persistent storage
 *
 * @return a Status indicating the success or failure of the operation
 */
Status clearNodeKey();
    
      static Flag& instance() {
    static Flag f;
    return f;
  }
    
      /**
   * @brief Initialize any platform dependent libraries or objects
   *
   * On windows, we require the COM libraries be initialized just once
   */
  static void platformSetup();
    
    Status FilesystemConfigPlugin::genConfig(
    std::map<std::string, std::string>& config) {
  boost::system::error_code ec;
  if (!fs::is_regular_file(FLAGS_config_path, ec) ||
      ec.value() != errc::success) {
    return Status(1, 'config file does not exist: ' + FLAGS_config_path);
  }
    }
    
    /// Config retrieval TLS endpoint (path) using TLS hostname.
CLI_FLAG(string,
         config_tls_endpoint,
         '',
         'TLS/HTTPS endpoint for config retrieval');
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
    #include <stdio.h>          // printf, fprintf
#include <stdlib.h>         // abort
#define GLFW_INCLUDE_NONE
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>