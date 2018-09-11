
        
        IPC_MESSAGE_ROUTED4(ShellViewHostMsg_Call_Object_Method,
                    int /* object id */,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Clipboard);
};
    
    
    {}  // namespace nwapi

    
    
    {} // namespace extensions
#endif

    
    bool NwObjAllocateIdFunction::RunNWSync(base::ListValue* response, std::string* error) {
  response->AppendInteger(nw::ObjectManager::AllocateId());
  return true;
}
    
    #include 'gtest/internal/gtest-death-test-internal.h'
    
    #if GTEST_OS_SYMBIAN
  // These are needed as the Nokia Symbian Compiler cannot decide between
  // const T& and const T* in a function template. The Nokia compiler _can_
  // decide between class template specializations for T and T*, so a
  // tr1::type_traits-like is_pointer works, and we can overload on that.
  template <typename T>
  inline void StreamHelper(internal::true_type /*is_pointer*/, T* pointer) {
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
  }
  template <typename T>
  inline void StreamHelper(internal::false_type /*is_pointer*/,
                           const T& value) {
    // See the comments in Message& operator <<(const T&) above for why
    // we need this using statement.
    using ::operator <<;
    *ss_ << value;
  }
#endif  // GTEST_OS_SYMBIAN
    
      template <typename Tuple>
  static void TersePrintPrefixToStrings(const Tuple&, Strings*) {}
};
// We have to specialize the entire TuplePrefixPrinter<> class
// template here, even though the definition of
// TersePrintPrefixToStrings() is the same as the generic version, as
// Embarcadero (formerly CodeGear, formerly Borland) C++ doesn't
// support specializing a method template of a class template.
template <>
struct TuplePrefixPrinter<1> {
  template <typename Tuple>
  static void PrintPrefixTo(const Tuple& t, ::std::ostream* os) {
    UniversalPrinter<typename ::std::tr1::tuple_element<0, Tuple>::type>::
        Print(::std::tr1::get<0>(t), os);
  }
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
    // Copyright 2008 Google Inc.
// All Rights Reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Author: wan@google.com (Zhanyong Wan)
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
      // Removes the head of the queue and returns it.  Returns NULL if
  // the queue is empty.
  E* Dequeue() {
    if (size_ == 0) {
      return NULL;
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
      bool operator!=(SrcLoc o) const { return !(*this == o); }
    
          M_form_t m_formater {{
                           rc,
                           me,
                           mb,
                           static_cast<uint32_t>(rb),
                           static_cast<uint32_t>(ra),
                           static_cast<uint32_t>(rs),
                           op
                          }};
    
    struct RequestMemoryExceededException : ResourceExceededException {
  RequestMemoryExceededException(const std::string& msg,
                                 const Array& backtrace)
    : ResourceExceededException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(RequestMemoryExceededException);
};
    
    size_t dirname_impl(char *path, int len) {
  if (len == 0) {
    /* Illegal use of this function */
    return 0;
  }
    }
    
      XGBOOST_DEVICE GradientPairInternal<T> &operator+=(
      const GradientPairInternal<T> &rhs) {
    grad_ += rhs.grad_;
    hess_ += rhs.hess_;
    return *this;
  }
    
      virtual void PredictContribution(DMatrix* dmat,
                                   std::vector<bst_float>* out_contribs,
                                   const gbm::GBTreeModel& model,
                                   unsigned ntree_limit = 0,
                                   bool approximate = false,
                                   int condition = 0,
                                   unsigned condition_feature = 0) = 0;
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
            if(_rightBoundary < _leftBoundary)
        {
            // screen width is larger than world's boundary width
            //set both in the middle of the world
            _rightBoundary = _leftBoundary = (_leftBoundary + _rightBoundary) / 2;
        }
        if(_topBoundary < _bottomBoundary)
        {
            // screen width is larger than world's boundary width
            //set both in the middle of the world
            _topBoundary = _bottomBoundary = (_topBoundary + _bottomBoundary) / 2;
        }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    /**
@brief SplitCols action.
@details Split the target node in many columns.
        Then move out some columns from top, move out the other columns from bottom.
*/
class CC_DLL SplitCols : public TiledGrid3DAction
{
public:
    
    /** 
     * @brief Create the action with the number of columns and the duration.
     * @param duration Specify the duration of the SplitCols action. It's a value in seconds.
     * @param cols Specify the columns count should be split.
     * @return If the creation success, return a pointer of SplitCols action; otherwise, return nil.
     */
    static SplitCols* create(float duration, unsigned int cols);
    }
    
            if ( frameNames.empty() )
        {
            CCLOG('cocos2d: AnimationCache: Animation '%s' found in dictionary without any frames - cannot add to animation cache.', anim.first.c_str());
            continue;
        }
    
        /** Adds an animation from an NSDictionary.
     * Make sure that the frames were previously loaded in the SpriteFrameCache.
     * @param dictionary An NSDictionary.
     * @param plist The path of the relative file,it use to find the plist path for load SpriteFrames.
     * @since v1.1
	 @js NA
     */
    void addAnimationsWithDictionary(const ValueMap& dictionary,const std::string& plist);