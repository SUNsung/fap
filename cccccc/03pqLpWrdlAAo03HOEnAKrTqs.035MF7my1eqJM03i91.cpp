
        
        
    {}  // namespace stream_executor
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
    // Creates a numpy array with shapes specified by dim_size and dims and content
// in data. The array does not own the memory, and destructor will be called to
// release it. If the status is not ok the caller is responsible for releasing
// the memory.
Status ArrayFromMemory(int dim_size, npy_intp* dims, void* data, DataType dtype,
                       std::function<void()> destructor, PyObject** result);
    
    namespace tensorflow {
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
      // Synchronize with spinlocks.
  static const unsigned kScheduleSpin = 0x02;
  // Synchronize with spinlocks that also call CPU yield instructions.
  static const unsigned kScheduleYield = 0x04;
  // Synchronize with a 'synchronization primitive' (e.g. mutex).
  static const unsigned kScheduleBlockingSync = 0x08;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace nwapi {
    }
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
    #include <map>
    
    
    {  *icon = item->icon_;
  return true;
}
    
      gfx::Point* point = reinterpret_cast<gfx::Point*>(userdata);
  *x = point->x();
  *y = point->y();
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    
    {
  DECLARE_EXTENSION_FUNCTION('nw.App.getArgvSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetArgvSyncFunction);
};
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethod(render_frame_host(), id, type, method, *arguments);
  return RespondNow(NoArguments());
}
    
     protected:
  ~NwObjCreateFunction() override;
    
    private:
    /* The write_semaphore_acq_ is empty for reads.
    For writes it locks the write superblock acquisition semaphore until the
    sb_buf_ is released.
    Note that this is used to throttle writes compared to reads, but not required
    for correctness. */
    new_semaphore_in_line_t write_semaphore_acq_;
    
    #include <map>
#include <set>
#include <string>
#include <vector>
    
    // ValuesIn() function allows generation of tests with parameters coming from
// a container.
//
// Synopsis:
// ValuesIn(const T (&array)[N])
//   - returns a generator producing sequences with elements from
//     a C-style array.
// ValuesIn(const Container& container)
//   - returns a generator producing sequences with elements from
//     an STL-style container.
// ValuesIn(Iterator begin, Iterator end)
//   - returns a generator producing sequences with elements from
//     a range [begin, end) defined by a pair of STL-style iterators. These
//     iterators can also be plain C pointers.
//
// Please note that ValuesIn copies the values from the containers
// passed in and keeps them to generate tests in RUN_ALL_TESTS().
//
// Examples:
//
// This instantiates tests from test case StringTest
// each with C-string values of 'foo', 'bar', and 'baz':
//
// const char* strings[] = {'foo', 'bar', 'baz'};
// INSTANTIATE_TEST_CASE_P(StringSequence, SrtingTest, ValuesIn(strings));
//
// This instantiates tests from test case StlStringTest
// each with STL strings with values 'a' and 'b':
//
// ::std::vector< ::std::string> GetParameterStrings() {
//   ::std::vector< ::std::string> v;
//   v.push_back('a');
//   v.push_back('b');
//   return v;
// }
//
// INSTANTIATE_TEST_CASE_P(CharSequence,
//                         StlStringTest,
//                         ValuesIn(GetParameterStrings()));
//
//
// This will also instantiate tests from CharTest
// each with parameter values 'a' and 'b':
//
// ::std::list<char> GetParameterChars() {
//   ::std::list<char> list;
//   list.push_back('a');
//   list.push_back('b');
//   return list;
// }
// ::std::list<char> l = GetParameterChars();
// INSTANTIATE_TEST_CASE_P(CharSequence2,
//                         CharTest,
//                         ValuesIn(l.begin(), l.end()));
//
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end) {
  typedef typename ::testing::internal::IteratorTraits<ForwardIterator>
      ::value_type ParamType;
  return internal::ParamGenerator<ParamType>(
      new internal::ValuesInIteratorRangeGenerator<ParamType>(begin, end));
}
    
    // The 'Types' template argument below must have spaces around it
// since some compilers may choke on '>>' when passing a template
// instance (e.g. Types<int>)
# define INSTANTIATE_TYPED_TEST_CASE_P(Prefix, CaseName, Types) \
  bool gtest_##Prefix##_##CaseName GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTestCase<CaseName, \
          GTEST_CASE_NAMESPACE_(CaseName)::gtest_AllTests_, \
          ::testing::internal::TypeList< Types >::type>::Register(\
              #Prefix, #CaseName, GTEST_REGISTERED_TEST_NAMES_(CaseName))
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2;
}
    
    namespace testing {
namespace internal {
    }
    }
    
      ASSERT_OK(env_->NewWritableFile('/dir/f', &writable_file));
  ASSERT_OK(writable_file->Append('hello '));
  ASSERT_OK(writable_file->Append('world'));
  delete writable_file;
    
    namespace leveldb {
    }
    
      // Support for iterating over the contents of a batch.
  Status Iterate(Handler* handler) const;
    
    
    {}  // namespace leveldb
    
    
    {    static void Run(void* arg) {
      Callback* callback = reinterpret_cast<Callback*>(arg);
      int current_id = callback->last_id_ptr_->load(std::memory_order_relaxed);
      ASSERT_EQ(callback->id_ - 1, current_id);
      callback->last_id_ptr_->store(callback->id_, std::memory_order_relaxed);
    }
  };
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname, Env* env, const Options& options,
                  TableCache* table_cache, Iterator* iter, FileMetaData* meta);
    
    class DBImpl;
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2005 Kristian Høgsberg <krh@redhat.com>
// Copyright (C) 2005 Jeff Muizelaar <jeff@infidigm.net>
// Copyright (C) 2006 Pino Toscano <pino@kde.org>
// Copyright (C) 2006 Carlos Garcia Campos <carlosgc@gnome.org>
// Copyright (C) 2007 Julien Rebetez <julienr@svn.gnome.org>
// Copyright (C) 2008 Iñigo Martínez <inigomartinez@gmail.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    
    {
    {    switch (i) {
    case 0:
      break;
    case 5:
      str->append(wh[2 * k + 1]);
      break;
    case 9:
      str->append(wh[2 * k + 0]);
      str->append(wh[ 2 * k + 2]);
      break;
    case 4:
      str->append(wh[2 * k + 0]);
      str->append(wh[2 * k + 1]);
      break;
    default:
      if (i > 5) {
       str->append(wh[2 * k + 1]);
       i -= 5;
      }
      for (j = 0; j < i; j++) {
       str->append(wh[2 * k + 0]);
      }
    }
       
    divisor = divisor / 10;
  }
}
    
    #include <math.h>
#include 'Rendition.h'
#include 'FileSpec.h'
    
      SoundKind getSoundKind() { return kind; }
  GooString *getFileName() { return fileName; }
  double getSamplingRate() { return samplingRate; }
  int getChannels() { return channels; }
  int getBitsPerSample() { return bitsPerSample; }
  SoundEncoding getEncoding() { return encoding; }
    
    const int ORDER_64[64] = {38, 39, 42, 43, 32, 33, 36, 37, 40, 41, 46, 47, 50,
                          51, 54, 55, 44, 45, 48, 49, 52, 53, 58, 59, 62, 63,
                          34, 35, 56, 57, 60, 61, 6,  7,  10, 11, 0,  1,  4,
                          5,  8,  9,  14, 15, 18, 19, 22, 23, 12, 13, 16, 17,
                          20, 21, 26, 27, 30, 31, 2,  3,  24, 25, 28, 29};
    
    namespace apollo {
namespace drivers {
namespace velodyne {
    }
    }
    }
    
      /**
   * @brief Destructor
   */
  virtual ~InteractionPredictor() = default;
    
    int cbfun(const char *channel_name) {
  AINFO << 'recv->[ ' << channel_name << ' ]';
  if (pr) AINFO << 'read->[ ' << pr->read() << ' ]';
  return 1;
}
    
    namespace apollo {
namespace drivers {
namespace gnss {
    }
    }
    }
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
    
    {  can_sender_->Update();
  const int32_t flag =
      CHECK_RESPONSE_STEER_UNIT_FLAG | CHECK_RESPONSE_SPEED_UNIT_FLAG;
  if (!CheckResponse(flag, true)) {
    AERROR << 'Failed to switch to COMPLETE_AUTO_DRIVE mode.';
    Emergency();
    set_chassis_error_code(Chassis::CHASSIS_ERROR);
    return ErrorCode::CANBUS_ERROR;
  }
  set_driving_mode(Chassis::COMPLETE_AUTO_DRIVE);
  AINFO << 'Switch to COMPLETE_AUTO_DRIVE mode ok.';
  return ErrorCode::OK;
}
    
      // Obstacle is blocked by others too.
  if (enable_obstacle_blocked_check &&
      !IsParkedVehicle(reference_line, obstacle)) {
    for (const auto* other_obstacle : path_decision.obstacles().Items()) {
      if (other_obstacle->Id() == obstacle->Id()) {
        continue;
      }
      if (other_obstacle->IsVirtual()) {
        continue;
      }
      if (other_obstacle->PerceptionSLBoundary().start_l() >
              obstacle->PerceptionSLBoundary().end_l() ||
          other_obstacle->PerceptionSLBoundary().end_l() <
              obstacle->PerceptionSLBoundary().start_l()) {
        // not blocking the backside vehicle
        continue;
      }
      double delta_s = other_obstacle->PerceptionSLBoundary().start_s() -
                       obstacle->PerceptionSLBoundary().end_s();
      if (delta_s < 0.0 || delta_s > kAdcDistanceThreshold) {
        continue;
      }
    }
    }
    
      // 4. If the end of current passage region not appeared, no rerouting
  const auto& route_end_waypoint = segments.RouteEndWaypoint();
  if (!route_end_waypoint.lane) {
    return true;
  }
  auto point = route_end_waypoint.lane->GetSmoothPoint(route_end_waypoint.s);
  const auto& reference_line = reference_line_info_->reference_line();
  common::SLPoint sl_point;
  if (!reference_line.XYToSL({point.x(), point.y()}, &sl_point)) {
    AERROR << 'Failed to project point: ' << point.ShortDebugString();
    return false;
  }
  if (!reference_line.IsOnLane(sl_point)) {
    return true;
  }
  // 5. If the end of current passage region is further than kPrepareRoutingTime
  // * speed, no rerouting
  double adc_s = reference_line_info_->AdcSlBoundary().end_s();
  const auto vehicle_state = common::VehicleStateProvider::Instance();
  double speed = vehicle_state->linear_velocity();
  const double prepare_rerouting_time =
      config_.rerouting().prepare_rerouting_time();
  const double prepare_distance = speed * prepare_rerouting_time;
  if (sl_point.s() > adc_s + prepare_distance) {
    ADEBUG << 'No need rerouting now because still can drive for time: '
           << prepare_rerouting_time << ' seconds';
    return true;
  }
  // 6. Check if we have done rerouting before
  auto* rerouting = PlanningContext::Instance()
                        ->mutable_planning_status()
                        ->mutable_rerouting();
  if (rerouting == nullptr) {
    AERROR << 'rerouting is nullptr.';
    return false;
  }
  double current_time = Clock::NowInSeconds();
  if (rerouting->has_last_rerouting_time() &&
      (current_time - rerouting->last_rerouting_time() <
       config_.rerouting().cooldown_time())) {
    ADEBUG << 'Skip rerouting and wait for previous rerouting result';
    return true;
  }
  if (!frame_->Rerouting()) {
    AERROR << 'Failed to send rerouting request';
    return false;
  }
    
    
    {  EXPECT_EQ(expect, real);
}
    
      const std::map<TemplateIndex, int> &kLookUpTableMinVolumeIndex =
      object_template_manager_->LookUpTableMinVolumeIndex();