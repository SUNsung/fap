
        
        // Finally, you can use INSTANTIATE_TEST_CASE_P to instantiate the test
// case with any set of parameters you want. Google Test defines a number
// of functions for generating test parameters. They return what we call
// (surprise!) parameter generators. Here is a  summary of them, which
// are all in the testing namespace:
//
//
//  Range(begin, end [, step]) - Yields values {begin, begin+step,
//                               begin+step+step, ...}. The values do not
//                               include end. step defaults to 1.
//  Values(v1, v2, ..., vN)    - Yields values {v1, v2, ..., vN}.
//  ValuesIn(container)        - Yields values from a C-style array, an STL
//  ValuesIn(begin,end)          container, or an iterator range [begin, end).
//  Bool()                     - Yields sequence {false, true}.
//  Combine(g1, g2, ..., gN)   - Yields all combinations (the Cartesian product
//                               for the math savvy) of the values generated
//                               by the N generators.
//
// For more details, see comments at the definitions of these functions below
// in this file.
//
// The following statement will instantiate tests from the FooTest test case
// each with parameter values 'meeny', 'miny', and 'moe'.
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
          typename T6, typename T7>
void PrintTo(const ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7>& t,
             ::std::ostream* os) {
  PrintTupleTo(t, os);
}
    
    #include 'gtest/gtest.h'
    
      // Returns true if pathname describes a directory in the file-system
  // that exists.
  bool DirectoryExists() const;
    
    // Helper macro for defining tests.
#define GTEST_TEST_(test_case_name, test_name, parent_class, parent_id)\
class GTEST_TEST_CLASS_NAME_(test_case_name, test_name) : public parent_class {\
 public:\
  GTEST_TEST_CLASS_NAME_(test_case_name, test_name)() {}\
 private:\
  virtual void TestBody();\
  static ::testing::TestInfo* const test_info_ GTEST_ATTRIBUTE_UNUSED_;\
  GTEST_DISALLOW_COPY_AND_ASSIGN_(\
      GTEST_TEST_CLASS_NAME_(test_case_name, test_name));\
};\
\
::testing::TestInfo* const GTEST_TEST_CLASS_NAME_(test_case_name, test_name)\
  ::test_info_ =\
    ::testing::internal::MakeAndRegisterTestInfo(\
        #test_case_name, #test_name, NULL, NULL, \
        (parent_id), \
        parent_class::SetUpTestCase, \
        parent_class::TearDownTestCase, \
        new ::testing::internal::TestFactoryImpl<\
            GTEST_TEST_CLASS_NAME_(test_case_name, test_name)>);\
void GTEST_TEST_CLASS_NAME_(test_case_name, test_name)::TestBody()
    
    template <typename T>
struct StaticAssertTypeEqHelper<T, T> {};
    
    // The compiler used in Symbian has a bug that prevents us from declaring the
// tuple template as a friend (it complains that tuple is redefined).  This
// hack bypasses the bug by declaring the members that should otherwise be
// private as public.
// Sun Studio versions < 12 also have the above bug.
#if defined(__SYMBIAN32__) || (defined(__SUNPRO_CC) && __SUNPRO_CC < 0x590)
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ public:
#else
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ \
    template <GTEST_$(n)_TYPENAMES_(U)> friend class tuple; \
   private:
#endif
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46, typename T47, typename T48, typename T49, typename T50>
struct Types50 {
  typedef T1 Head;
  typedef Types49<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
      T44, T45, T46, T47, T48, T49, T50> Tail;
};
    
    // The template 'selector' struct TemplateSel<Tmpl> is used to
// represent Tmpl, which must be a class template with one type
// parameter, as a type.  TemplateSel<Tmpl>::Bind<T>::type is defined
// as the type Tmpl<T>.  This allows us to actually instantiate the
// template 'selected' by TemplateSel<Tmpl>.
//
// This trick is necessary for simulating typedef for class templates,
// which C++ doesn't support directly.
template <GTEST_TEMPLATE_ Tmpl>
struct TemplateSel {
  template <typename T>
  struct Bind {
    typedef Tmpl<T> type;
  };
};
    
    #include <limits.h>
#include 'sample1.h'
#include 'gtest/gtest.h'
    
      if (flags.bit (CHECK_DAWGS) &&
    (word->best_choice->permuter () != SYSTEM_DAWG_PERM) &&
    (word->best_choice->permuter () != FREQ_DAWG_PERM) &&
    (word->best_choice->permuter () != USER_DAWG_PERM) &&
    (word->best_choice->permuter () != NUMBER_PERM)) {
    if (tessedit_adaption_debug) tprintf('word not in dawgs\n');
    return FALSE;
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
    
      if (page_res_it->word() != NULL) {
    *tbox = page_res_it->word()->word->bounding_box();
    }
    
    #include 'mfoutline.h'
#include 'tessbox.h'
#include 'tesseractclass.h'
    
    // Sets up the DENORM to execute a non-linear transformation based on
// preserving an even distribution of stroke edges. The transformation
// operates only within the given box.
// x_coords is a collection of the x-coords of vertical edges for each
// y-coord starting at box.bottom().
// y_coords is a collection of the y-coords of horizontal edges for each
// x-coord starting at box.left().
// Eg x_coords[0] is a collection of the x-coords of edges at y=bottom.
// Eg x_coords[1] is a collection of the x-coords of edges at y=bottom + 1.
// The second-level vectors must all be sorted in ascending order.
// See comments on the helper functions above for more details.
void DENORM::SetupNonLinear(
    const DENORM* predecessor, const TBOX& box, float target_width,
    float target_height, float final_xshift, float final_yshift,
    const GenericVector<GenericVector<int> >& x_coords,
    const GenericVector<GenericVector<int> >& y_coords) {
  Clear();
  predecessor_ = predecessor;
  // x_map_ and y_map_ store a mapping from input x and y coordinate to output
  // x and y coordinate, based on scaling to the supplied target_width and
  // target_height.
  x_map_ = new GenericVector<float>;
  y_map_ = new GenericVector<float>;
  // Set a 2-d image array to the run lengths at each pixel.
  int width = box.width();
  int height = box.height();
  GENERIC_2D_ARRAY<int> minruns(width, height, 0);
  ComputeRunlengthImage(box, x_coords, y_coords, &minruns);
  // Edge density is the sum of the inverses of the run lengths. Compute
  // edge density projection profiles.
  ComputeEdgeDensityProfiles(box, minruns, x_map_, y_map_);
  // Convert the edge density profiles to the coordinates by multiplying by
  // the desired size and accumulating.
  (*x_map_)[width] = target_width;
  for (int x = width - 1; x >= 0; --x) {
    (*x_map_)[x] = (*x_map_)[x + 1] - (*x_map_)[x] * target_width;
  }
  (*y_map_)[height] = target_height;
  for (int y = height - 1; y >= 0; --y) {
    (*y_map_)[y] = (*y_map_)[y + 1] - (*y_map_)[y] * target_height;
  }
  x_origin_ = box.left();
  y_origin_ = box.bottom();
  final_xshift_ = final_xshift;
  final_yshift_ = final_yshift;
}
    
      // get paragraphs
  PARA_LIST *para_list() {
    return &paras_;
  }
  /// get blobs
  C_BLOB_LIST *blob_list() {
    return &c_blobs;
  }
  C_BLOB_LIST *reject_blobs() {
    return &rej_blobs;
  }
  FCOORD re_rotation() const {
    return re_rotation_;         // How to transform coords back to image.
  }
  void set_re_rotation(const FCOORD& rotation) {
    re_rotation_ = rotation;
  }
  FCOORD classify_rotation() const {
    return classify_rotation_;   // Apply this before classifying.
  }
  void set_classify_rotation(const FCOORD& rotation) {
    classify_rotation_ = rotation;
  }
  FCOORD skew() const {
    return skew_;                // Direction of true horizontal.
  }
  void set_skew(const FCOORD& skew) {
    skew_ = skew;
  }
  const ICOORD& median_size() const {
    return median_size_;
  }
  void set_median_size(int x, int y) {
    median_size_.set_x(x);
    median_size_.set_y(y);
  }
    
      bool is_list_item;
    
    #include <gtest/gtest.h>
    
      EchoResponse response;
  std::thread* server_try_cancel_thd = nullptr;
  if (server_try_cancel == CANCEL_DURING_PROCESSING) {
    server_try_cancel_thd =
        new std::thread(&TestServiceImpl::ServerTryCancel, this, context);
  }
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
      ClientConfig client_config;
  client_config.set_client_type(ASYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1000);
  client_config.set_client_channels(8);
  client_config.set_async_client_threads(8);
  client_config.set_rpc_type(STREAMING);
  client_config.mutable_load_params()->mutable_poisson()->set_offered_load(
      1000.0 / grpc_test_slowdown_factor());
    
    #include 'test/cpp/qps/server.h'
    
    RouteNote MakeRouteNote(const std::string& message,
                        long latitude, long longitude) {
  RouteNote n;
  n.set_message(message);
  n.mutable_location()->CopyFrom(MakePoint(latitude, longitude));
  return n;
}
    
        gmat.GetFeatureCounts(&feature_counts_[0]);
    // classify features
    for (bst_uint fid = 0; fid < nfeature; ++fid) {
      if (static_cast<double>(feature_counts_[fid])
                 < param.sparse_threshold * nrow) {
        type_[fid] = kSparseColumn;
      } else {
        type_[fid] = kDenseColumn;
      }
    }
    
      std::string scratch;
  scratch.resize(kGood.size() + kCorrupted.size() + 16);
  Slice result;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_OK(env_->NewRandomAccessFile(kFileName, &rand_file, soptions_));
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
     private:
  char delim_;         // The delimiter is inserted between elements
    
    #pragma once
#include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>
#ifdef ROCKSDB_MALLOC_USABLE_SIZE
#ifdef OS_FREEBSD
#include <malloc_np.h>
#else
#include <malloc.h>
#endif
#endif
    
    
    {    StopLoggingInternal();
  }
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
extern InternalIterator* NewMergingIterator(
    const InternalKeyComparator* comparator, InternalIterator** children, int n,
    Arena* arena = nullptr, bool prefix_seek_mode = false);
    
    namespace rocksdb {
CompactionFilterFactoryJniCallback::CompactionFilterFactoryJniCallback(
    JNIEnv* env, jobject jcompaction_filter_factory)
    : JniCallback(env, jcompaction_filter_factory) {
  
  // Note: The name of a CompactionFilterFactory will not change during
  // it's lifetime, so we cache it in a global var
  jmethodID jname_method_id =
      AbstractCompactionFilterFactoryJni::getNameMethodId(env);
  if(jname_method_id == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }