
        
        #endif  // ATOM_BROWSER_API_ATOM_API_RENDER_PROCESS_PREFERENCES_H_

    
    namespace gfx {
class Point;
class Rect;
class Screen;
}  // namespace gfx
    
      canvas_.reset();
  bitmap_.reset(new SkBitmap);
  bitmap_->allocN32Pixels(viewport_pixel_size_.width(),
                          viewport_pixel_size_.height(), !transparent_);
  if (bitmap_->drawsNothing()) {
    NOTREACHED();
    bitmap_.reset();
    return;
  }
    
      /// @brief Compute the sum of absolute values (L1 norm) of the data.
  Dtype asum_data() const;
  /// @brief Compute the sum of absolute values (L1 norm) of the diff.
  Dtype asum_diff() const;
  /// @brief Compute the sum of squares (L2 norm squared) of the data.
  Dtype sumsq_data() const;
  /// @brief Compute the sum of squares (L2 norm squared) of the diff.
  Dtype sumsq_diff() const;
    
    /**
 * Virtual class encapsulate boost::thread for use in base class
 * The child class will acquire the ability to run a single thread,
 * by reimplementing the virtual function InternalThreadEntry.
 */
class InternalThread {
 public:
  InternalThread() : thread_() {}
  virtual ~InternalThread();
    }
    
    #include 'caffe/common.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
  /// @brief Not implemented -- AccuracyLayer cannot be used as a loss.
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    for (int i = 0; i < propagate_down.size(); ++i) {
      if (propagate_down[i]) { NOT_IMPLEMENTED; }
    }
  }
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/im2col.hpp'
    
    
    {  // extra temporarary variables is used to carry out sums/broadcasting
  // using BLAS
  Blob<Dtype> batch_sum_multiplier_;
  Blob<Dtype> num_by_chans_;
  Blob<Dtype> spatial_sum_multiplier_;
};
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
      virtual inline const char* type() const { return 'Convolution'; }
    
    /**
 * @brief Takes a Blob and crop it, to the shape specified by the second input
 *  Blob, across all dimensions after the specified axis.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
    
    #include <vector>
    
      bool handles_setup_;
  cudnnHandle_t* handle_;
  cudaStream_t*  stream_;
    
    namespace caffe {
    }
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
        // pre-fill index_ for dense columns
    for (bst_uint fid = 0; fid < nfeature; ++fid) {
      if (type_[fid] == kDenseColumn) {
        const size_t ibegin = boundary_[fid].index_begin;
        uint32_t* begin = &index_[ibegin];
        uint32_t* end = begin + nrow;
        std::fill(begin, end, std::numeric_limits<uint32_t>::max());
        // max() indicates missing values
      }
    }
    
    void ActionEase::startWithTarget(Node *target)
{
    if (target && _inner)
    {
        ActionInterval::startWithTarget(target);
        _inner->startWithTarget(_target);
    }
    else
    {
        log('ActionEase::startWithTarget error: target or _inner is nullptr!');
    }
}
    
    void AccelAmplitude::update(float time)
{
    ((AccelAmplitude*)(_other))->setAmplitudeRate(powf(time, _rate));
    _other->update(time);
}
    
    bool Lens3D::initWithDuration(float duration, const Size& gridSize, const Vec2& position, float radius)
{
    if (Grid3DAction::initWithDuration(duration, gridSize))
    {
        _position.set(-1.0f, -1.0f);
        setPosition(position);
        _radius = radius;
        _lensEffect = 0.7f;
        _concave = false;
        _dirty = true;
    }
    }
    
    
    {
    {
    {            if ((action->getFlags() & flags) != 0 && action->getOriginalTarget() == target)
            {
                removeActionAtIndex(i, element);
                --limit;
            }
            else
            {
                ++i;
            }
        }
    }
}
    
        /** Removes all actions matching at least one bit in flags and the target.
     *
     * @param flags     The flag field to match the actions' flags based on bitwise AND.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeActionsByFlags(unsigned int flags, Node *target);
    
    
    {
    {
    {            p.z = (r * ( 1 - cosBeta ) * cosTheta);// '100' didn't work for
            p.x = p.z * sinf(rotateByYAxis) + p.x * cosf(rotateByYAxis);
            p.z = p.z * cosf(rotateByYAxis) - p.x * sinf(rotateByYAxis);
            p.z/=7;
            //    Stop z coord from dropping beneath underlying page in a transition
            // issue #751
            if( p.z < 0.5f )
            {
                p.z = 0.5f;
            }
            
            // Set new coords
            p.x += getGridRect().origin.x;
            setVertex(Vec2(i, j), p);
            
        }
    }
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CC_ANIMATION_H__
#define __CC_ANIMATION_H__
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions: