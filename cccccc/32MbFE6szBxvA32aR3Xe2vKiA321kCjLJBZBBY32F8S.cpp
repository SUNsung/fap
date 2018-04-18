
        
        
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,'cc.SimpleAudioEngine',0,&tolua_err)) goto tolua_lerror;
#endif
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    int register_all_cocos2dx_experimental(lua_State* tolua_S);
    
    
    
    void GLESDebugDraw::initShader( void )
{
    mShaderProgram = GLProgramCache::getInstance()->getGLProgram(GLProgram::SHADER_NAME_POSITION_U_COLOR);
    }
    
    			b2Vec2 vertices[3];
			vertices[0] = b2Mul(xf1, b2Vec2(-1.0f, 0.0f));
			vertices[1] = b2Mul(xf1, b2Vec2(1.0f, 0.0f));
			vertices[2] = b2Mul(xf1, b2Vec2(0.0f, 0.5f));
			
			b2PolygonShape poly1;
			poly1.Set(vertices, 3);
    
        page->offset.clear();
    page->offset.push_back(0);
    for (bst_uint cid : sorted_index_set) {
      page->offset.push_back(
          page->offset.back() + disk_offset_[cid + 1] - disk_offset_[cid]);
    }
    page->data.resize(page->offset.back());
    CHECK_EQ(index_.data.size(), value_.data.size());
    CHECK_EQ(index_.data.size(), disk_offset_.back());
    
    
    {
    {    double dat[2]; dat[0] = sum, dat[1] = wsum;
    if (distributed) {
      rabit::Allreduce<rabit::op::Sum>(dat, 2);
    }
    return Derived::GetFinal(dat[0], dat[1]);
  }
  /*!
   * \brief to be implemented by subclass,
   *   get evaluation result from one row
   * \param label label of current instance
   * \param pred prediction value of current instance
   * \param nclass number of class in the prediction
   */
  inline static bst_float EvalRow(int label,
                                  const bst_float *pred,
                                  size_t nclass);
  /*!
   * \brief to be overridden by subclass, final transformation
   * \param esum the sum statistics returned by EvalRow
   * \param wsum sum of weight
   */
  inline static bst_float GetFinal(bst_float esum, bst_float wsum) {
    return esum / wsum;
  }
  // used to store error message
  const char *error_msg_;
};
    
    #include 'assert/__assert.h'
    
    #include <vector>
#include <string>
    
    
CommFrequencyLimit::CommFrequencyLimit(size_t _count, uint64_t _time_span)
    : count_(_count)
    , time_span_(_time_span) {
    xassert2(count_ > 0);
    xassert2(time_span_ > 0);
}
    
            __FirstGetCreater(T::ServiceName());
    
    #endif

    
    //
//  testspy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    #define DEFINE_HAS_MEMBER(member_name) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <int> struct tester;\
        template <typename U> static yes_type test(tester<sizeof(&U::member_name)>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };