
        
            enum FLIP_MODE
    {
        FLIP_HORIZONTAL_MODE = 1,
        FLIP_VERTICAL_MODE = 2,
        FLIP_BOTH_MODE = FLIP_HORIZONTAL_MODE | FLIP_VERTICAL_MODE
    };
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        typename internal::VecTraits<T>::vec64 v_min = internal::vmin(v_src0, v_src1);
        typename internal::VecTraits<T>::vec64 v_max = internal::vmax(v_src0, v_src1);
        v_dst = internal::vqsub(v_max, v_min);
    }
    
        void operator() (const typename VecTraits<s32>::vec64 & v_src0,
                     const typename VecTraits<s32>::vec64 & v_src1,
                     typename VecTraits<s32>::vec64 & v_dst) const
    {
        float32x2_t vs1 = vcvt_f32_s32(v_src0);
        float32x2_t vs2 = vcvt_f32_s32(v_src1);
    }
    
            mag_buf[1][0] = mag_buf[1][size.width+1] = 0;
        if (borderyt == 0)
        {
            //sobelH row #-1
            _src = internal::getRowPtr(srcBase, srcStride, -1);
            sobelRow(_src, ((s16*)mag_buf[2]) + shxOffset, ((s16*)mag_buf[2]) + shyOffset, size.width);
    }
    
    
    {
    {        for (; sj < size.width; ++sj, syj += 2, dj += 4)
        {
            dst[dj] = srcy[syj];
            dst[dj + 1] = srcu[sj];
            dst[dj + 2] = srcy[syj + 1];
            dst[dj + 3] = srcv[sj];
        }
    }
#else
    (void)size;
    (void)srcyBase;
    (void)srcyStride;
    (void)srcuBase;
    (void)srcuStride;
    (void)srcvBase;
    (void)srcvStride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    #endif

    
            if (cpolicy == CONVERT_POLICY_SATURATE)
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src + j);
                int16x8_t v_src0 = vshrq_n_s16(vld1q_s16(src + j), shift),
                          v_src1 = vshrq_n_s16(vld1q_s16(src + j + 8), shift);
                uint8x16_t v_dst = vcombine_u8(vqmovun_s16(v_src0),
                                               vqmovun_s16(v_src1));
                vst1q_u8(dst + j, v_dst);
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src = vshrq_n_s16(vld1q_s16(src + j), shift);
                vst1_u8(dst + j, vqmovun_s16(v_src));
            }
    }
    
                // calculate values for plain CPU part below if needed
            if (x + 8 >= bwidth)
            {
                ptrdiff_t x3 = x == width ? width - 1 : x;
                ptrdiff_t x4 = border == BORDER_MODE_CONSTANT ? x3 - 1 : std::max<ptrdiff_t>(x3 - 1, 0);
    }
    
    s32 countNonZero(const Size2D &_size,
                 const s32 * srcBase, ptrdiff_t srcStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (srcStride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    size_t roiw4 = size.width & ~3u;
    s32 result = 0;
    for(size_t k = 0; k < size.height; ++k)
    {
        const u32* src = (const u32*)internal::getRowPtr( srcBase,  srcStride, k);
        u32 i = 0;
    }
    }
    
                // make extrapolation for the first elements
            if (!x)
            {
                // make border
                if (border == BORDER_MODE_CONSTANT)
                    tcurr = v_border_x3;
                else if (border == BORDER_MODE_REPLICATE)
                    tcurr = vdupq_n_u16(vgetq_lane_u16(tnext, 0));
    }
    
    CardinalSplineBy* CardinalSplineBy::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CardinalSplineBy();
    a->initWithDuration(this->_duration, this->_points->clone(), this->_tension);
    a->autorelease();
    return a;
}
    
    Liquid* Liquid::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) Liquid();
    a->initWithDuration(_duration, _gridSize, _waves, _amplitude);
    a->autorelease();
    return a;
}
    
    #include '2d/CCActionInstant.h'
#include '2d/CCNode.h'
#include '2d/CCSprite.h'
    
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
    
    Animation* Animation::create(const Vector<AnimationFrame*>& arrayOfAnimationFrameNames, float delayPerUnit, unsigned int loops /* = 1 */)
{
    Animation *animation = new (std::nothrow) Animation();
    animation->initWithAnimationFrames(arrayOfAnimationFrameNames, delayPerUnit, loops);
    animation->autorelease();
    return animation;
}
    
    void AtlasNode::updateAtlasValues()
{
    CCASSERT(false, 'CCAtlasNode:Abstract updateAtlasValue not overridden');
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/