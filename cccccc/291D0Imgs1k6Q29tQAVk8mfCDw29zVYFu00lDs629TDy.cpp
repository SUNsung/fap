
        
        #ifndef BITCOIN_QT_MACDOCKICONHANDLER_H
#define BITCOIN_QT_MACDOCKICONHANDLER_H
    
    protected:
    void paintEvent(QPaintEvent *);
    
    /* Equality between doubles is imprecise. Comparison should be done
 * with a small threshold of tolerance, rather than exact equality.
 */
static bool DoubleEquals(double a, double b, double epsilon)
{
    return std::abs(a - b) < epsilon;
}
    
    
    {    // These inputs are valid because PROTOCOLINFO accepts an OtherLine that is
    // just an OptArguments, which enables multiple spaces to be present
    // between the command and arguments.
    CheckSplitTorReplyLine('COMMAND  ARGS', 'COMMAND', ' ARGS');
    CheckSplitTorReplyLine('COMMAND   EVEN+more  ARGS', 'COMMAND', '  EVEN+more  ARGS');
}
    
    
//------------------------------------------------------------------------------
// Implementation details.
#include <algorithm>
#include <cassert>
#include <iostream>
#include <sstream>
#include <stdexcept>
    
        void __pushKV(const std::string& key, const UniValue& val);
    bool pushKV(const std::string& key, const UniValue& val);
    bool pushKV(const std::string& key, const std::string& val_) {
        UniValue tmpVal(VSTR, val_);
        return pushKV(key, tmpVal);
    }
    bool pushKV(const std::string& key, const char *val_) {
        std::string _val(val_);
        return pushKV(key, _val);
    }
    bool pushKV(const std::string& key, int64_t val_) {
        UniValue tmpVal(val_);
        return pushKV(key, tmpVal);
    }
    bool pushKV(const std::string& key, uint64_t val_) {
        UniValue tmpVal(val_);
        return pushKV(key, tmpVal);
    }
    bool pushKV(const std::string& key, bool val_) {
        UniValue tmpVal((bool)val_);
        return pushKV(key, tmpVal);
    }
    bool pushKV(const std::string& key, int val_) {
        UniValue tmpVal((int64_t)val_);
        return pushKV(key, tmpVal);
    }
    bool pushKV(const std::string& key, double val_) {
        UniValue tmpVal(val_);
        return pushKV(key, tmpVal);
    }
    bool pushKVs(const UniValue& obj);
    
    # define TYPED_TEST_P(CaseName, TestName) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  template <typename gtest_TypeParam_> \
  class TestName : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  static bool gtest_##TestName##_defined_ GTEST_ATTRIBUTE_UNUSED_ = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).AddTestName(\
          __FILE__, __LINE__, #CaseName, #TestName); \
  } \
  template <typename gtest_TypeParam_> \
  void GTEST_CASE_NAMESPACE_(CaseName)::TestName<gtest_TypeParam_>::TestBody()
    
    // A unique type used as the default value for the arguments of class
// template Types.  This allows us to simulate variadic templates
// (e.g. Types<int>, Type<int, double>, and etc), which C++ doesn't
// support directly.
struct None {};
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    
    {  // Sets the 0-terminated C string this MyString object represents.
  void Set(const char* c_string);
};
    
    void EaseBezierAction::setBezierParamer( float p0, float p1, float p2, float p3)
{
    _p0 = p0;
    _p1 = p1;
    _p2 = p2;
    _p3 = p3;
}
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual FlipY* reverse() const override;
    virtual FlipY* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    FlipY() :_flipY(false) {}
    virtual ~FlipY() {}
    
    #endif // __ACTION_CCACTION_MANAGER_H__

    
    /*
 * Update each tick
 * Time is the percentage of the way through the duration
 */
void PageTurn3D::update(float time)
{
    float tt = MAX(0, time - 0.25f);
    float deltaAy = (tt * tt * 500);
    float ay = -100 - deltaAy;
    
    float deltaTheta = sqrtf(time);
    float theta = deltaTheta > 0.5f ? (float)M_PI_2*deltaTheta : (float)M_PI_2*(1-deltaTheta);
    
    float rotateByYAxis = (2-time)* M_PI;
    
    float sinTheta = sinf(theta);
    float cosTheta = cosf(theta);
    
    for (int i = 0; i <= _gridSize.width; ++i)
    {
        for (int j = 0; j <= _gridSize.height; ++j)
        {
            // Get original vertex
            Vec3 p = getOriginalVertex(Vec2(i ,j));
            
            p.x -= getGridRect().origin.x;
            float R = sqrtf((p.x * p.x) + ((p.y - ay) * (p.y - ay)));
            float r = R * sinTheta;
            float alpha = asinf( p.x / R );
            float beta = alpha / sinTheta;
            float cosBeta = cosf( beta );
            
            // If beta > PI then we've wrapped around the cone
            // Reduce the radius to stop these points interfering with others
            if (beta <= M_PI)
            {
                p.x = ( r * sinf(beta));
            }
            else
            {
                // Force X = 0 to stop wrapped
                // points
                p.x = 0;
            }
    }
    }
    }
    
        for (const auto& anim : animations)
    {
        std::string name = anim.first;
        ValueMap& animationDict = const_cast<ValueMap&>(anim.second.asValueMap());
    }
    
    #include '2d/CCAtlasNode.h'
#include 'renderer/CCTextureAtlas.h'
#include 'base/CCDirector.h'
#include 'renderer/CCTextureCache.h'
#include 'renderer/CCRenderer.h'
#include 'renderer/CCGLProgram.h'
    
        
    // Overrides
    virtual void draw(Renderer *renderer, const Mat4 &transform, uint32_t flags) override;
    virtual Texture2D* getTexture() const override;
    virtual void setTexture(Texture2D *texture) override;
    virtual bool isOpacityModifyRGB() const override;
    virtual void setOpacityModifyRGB(bool isOpacityModifyRGB) override;
    virtual const Color3B& getColor(void) const override;
    virtual void setColor(const Color3B& color) override;
    virtual void setOpacity(GLubyte opacity) override;
    /**
    * @code
    * When this function bound into js or lua,the parameter will be changed
    * In js: var setBlendFunc(var src, var dst)
    * @endcode
    * @lua NA
    */
    virtual void setBlendFunc(const BlendFunc& blendFunc) override;
    /**
    * @lua NA
    */
    virtual const BlendFunc& getBlendFunc() const override;