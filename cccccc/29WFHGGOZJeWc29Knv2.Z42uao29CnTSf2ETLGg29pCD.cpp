
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    
    {  if (debug) {
    const OpRegistrationData* op_reg_data;
    Status status = OpRegistry::Global()->LookUp(node->op(), &op_reg_data);
    if (!status.ok()) {
      os << '\tCouldn't find op registration for ' << node->op() << std::endl;
    } else if (!op_reg_data->shape_inference_fn) {
      os << '\tCouldn't find shape function for op ' << node->op() << std::endl;
    } else if (properties.HasInputProperties(node->name())) {
      const std::vector<OpInfo::TensorProperties>& props =
          properties.GetInputProperties(node->name());
      for (int i = 0; i < props.size(); ++i) {
        const OpInfo::TensorProperties& prop = props[i];
        if (prop.has_value()) {
          os << '\t'
             << 'input ' << i << ' (' << DataTypeString(prop.dtype())
             << ') has known value' << std::endl;
        }
      }
    }
  }
}
    
    static void TensorReleaser_dealloc(PyObject* pself) {
  TensorReleaser* self = reinterpret_cast<TensorReleaser*>(pself);
  (*self->destructor)();
  delete self->destructor;
  TensorReleaserType.tp_free(pself);
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // Returns a pointer to the described executor (if one with a matching config
  // has been created), or a NOT_FOUND status.
  port::StatusOr<StreamExecutor*> Get(const StreamExecutorConfig& config);
    
    
    {          return out;
        });
    
    #define VARDIR        'configs/' /*parameters files */
#define MAX_ITEMS_IN_SUBMENU 30
    
      // Factory to build a BoxWord from a TWERD using the DENORMs on each blob to
  // switch back to original image coordinates.
  static BoxWord* CopyFromNormalized(TWERD* tessword);
    
     private:
  // Returns a page by serial number, selecting them in a round-robin fashion
  // from all the documents. Highly disk-intensive, but doesn't need samples
  // to be shuffled between files to begin with.
  const ImageData* GetPageRoundRobin(int serial);
  // Returns a page by serial number, selecting them in sequence from each file.
  // Requires the samples to be shuffled between the files to give a random or
  // uniform distribution of data. Less disk-intensive than GetPageRoundRobin.
  const ImageData* GetPageSequential(int serial);
    
    // Returns a Boolean value indicating whether the caller is currently
// executing in the context of the death test child process.  Tools such as
// Valgrind heap checkers may need this to modify their behavior in death
// tests.  IMPORTANT: This is an internal utility.  Using it may break the
// implementation of death tests.  User code MUST NOT use it.
GTEST_API_ bool InDeathTestChild();
    
    // Prints a TestPartResult object.
std::ostream& operator<<(std::ostream& os, const TestPartResult& result);
    
    // This header implements a family of generic predicate assertion
// macros:
//
//   ASSERT_PRED_FORMAT1(pred_format, v1)
//   ASSERT_PRED_FORMAT2(pred_format, v1, v2)
//   ...
//
// where pred_format is a function or functor that takes n (in the
// case of ASSERT_PRED_FORMATn) values and their source expression
// text, and returns a testing::AssertionResult.  See the definition
// of ASSERT_EQ in gtest.h for an example.
//
// If you don't care about formatting, you can use the more
// restrictive version:
//
//   ASSERT_PRED1(pred, v1)
//   ASSERT_PRED2(pred, v1, v2)
//   ...
//
// where pred is an n-ary function or functor that returns bool,
// and the values v1, v2, ..., must support the << operator for
// streaming to std::ostream.
//
// We also define the EXPECT_* variations.
//
// For now we only support predicates whose arity is at most 5.
// Please email googletestframework@googlegroups.com if you need
// support for higher arities.
    
    // This macro is for implementing ASSERT_DEATH*, EXPECT_DEATH*,
// ASSERT_EXIT*, and EXPECT_EXIT*.
# define GTEST_DEATH_TEST_(statement, predicate, regex, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    const ::testing::internal::RE& gtest_regex = (regex); \
    ::testing::internal::DeathTest* gtest_dt; \
    if (!::testing::internal::DeathTest::Create(#statement, &gtest_regex, \
        __FILE__, __LINE__, &gtest_dt)) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__); \
    } \
    if (gtest_dt != NULL) { \
      ::testing::internal::scoped_ptr< ::testing::internal::DeathTest> \
          gtest_dt_ptr(gtest_dt); \
      switch (gtest_dt->AssumeRole()) { \
        case ::testing::internal::DeathTest::OVERSEE_TEST: \
          if (!gtest_dt->Passed(predicate(gtest_dt->Wait()))) { \
            goto GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__); \
          } \
          break; \
        case ::testing::internal::DeathTest::EXECUTE_TEST: { \
          ::testing::internal::DeathTest::ReturnSentinel \
              gtest_sentinel(gtest_dt); \
          GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, gtest_dt); \
          gtest_dt->Abort(::testing::internal::DeathTest::TEST_DID_NOT_DIE); \
          break; \
        } \
        default: \
          break; \
      } \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__): \
      fail(::testing::internal::DeathTest::LastMessage())
// The symbol 'fail' here expands to something into which a message
// can be streamed.
    
      explicit FilePath(const std::string& pathname) : pathname_(pathname) {
    Normalize();
  }
    
    
    {    linked_ptr_internal const* p = ptr;
    while (p->next_ != ptr) p = p->next_;
    p->next_ = this;
    next_ = ptr;
  }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29>
struct Templates29 {
  typedef TemplateSel<T1> Head;
  typedef Templates28<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29> Tail;
};
    
    #include <mxnet/op_attr_types.h>
#include <vector>
    
    #include <caffe/layer.hpp>
#include <caffe/blob.hpp>
#include <caffe/layer_factory.hpp>
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file iter_normalize.h
 * \brief Iterator that subtracts mean and do a few augmentations.
 */
#ifndef MXNET_IO_ITER_NORMALIZE_H_
#define MXNET_IO_ITER_NORMALIZE_H_
    
        info = MXNET_LAPACK_posv<DType>(MXNET_LAPACK_ROW_MAJOR, 'U',
      k, out.size(1), hadamard_prod.dptr_, hadamard_prod.stride_,
      out.dptr_, out.stride_);
  } else {
    Tensor<cpu, 2, DType> kr(Shape2(out.size(1), out.size(0)));
    AllocSpace(&kr);
    khatri_rao(kr, ts_arr);
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file cudnn_lrn-inl.h
 * \brief
 * \author Bing Xu
*/
    
      CustomOpPropCreator Find(const std::string &op_type) {
    std::lock_guard<std::mutex> lock(mutex_);
    auto it = registry_.find(op_type);
    if (it != registry_.end()) return it->second;
    return nullptr;
  }
    
        // Setup GLUT display function
    // We will also call ImGui_ImplFreeGLUT_InstallFuncs() to get all the other functions installed for us,
    // otherwise it is possible to install our own functions and call the imgui_impl_freeglut.h functions ourselves.
    glutDisplayFunc(glut_display_func);
    
        // Cleanup
    ImGui_Marmalade_Shutdown();
    ImGui::DestroyContext();
    IwGxTerminate();
    
    #ifdef _MSC_VER
#pragma warning (disable: 4505) // unreferenced local function has been removed (stb stuff)
#endif
    
    static int stb_compress_chunk(stb_uchar *history,
    stb_uchar *start,
    stb_uchar *end,
    int length,
    int *pending_literals,
    stb_uchar **chash,
    stb_uint mask)
{
    (void)history;
    int window = stb__window;
    stb_uint match_max;
    stb_uchar *lit_start = start - *pending_literals;
    stb_uchar *q = start;
    }
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);