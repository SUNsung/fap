
        
        class DebugGraphDecorator : public DebugGraphDecoratorInterface {
 public:
  DebugGraphDecorator(const DebugOptions& debug_options)
      : debug_options_(debug_options) {}
  virtual ~DebugGraphDecorator() {}
    }
    
    void PartialRunMgr::PartialRunDone(int step_id, StatusCallback done,
                                   const Status& status) {
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    run_it->second->final_status.Update(status);
    if (!run_it->second->executor_done) {
      // If we found the partial_run, we set the final callback to call only
      // when the executor is completely done.
      run_it->second->final_callback = std::move(done);
      return;
    }
    callback_status = run_it->second->final_status;
  }
  // Otherwise we call the callback immediately.
  done(callback_status);
  mutex_lock l(mu_);
  step_id_to_partial_run_.erase(step_id);
}
    
     private:
  // Must return a T descendant allocated with new that ResourceOpKernel will
  // take ownership of.
  virtual Status CreateResource(T** resource) EXCLUSIVE_LOCKS_REQUIRED(mu_) = 0;
    
    #include 'tensorflow/core/common_runtime/device.h'
#include 'tensorflow/core/framework/device_base.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      void Clear();
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
    
    
    {  // clang-format off
  std::vector<FDH::Node> nodes = {
   {{'x_shape'}, 'Shape', {'x'}},
   {{'x_rank'}, 'Rank', {'x'}},
   {{'i_shape'}, 'Shape', {'i'}, {{'T', DT_INT32}}},
   FDH::Const('zero', 0),
   FDH::Const('one', 1),
   // stitch_idx0 = Range(0, x_rank, 1)
   {{'stitch_val1'}, 'Fill', {'i_shape:output:0', 'one:output:0'},
    {{'T', DT_INT32}}},
   {{'y_shape'}, 'DynamicStitch',
    {'stitch_idx0:output:0', 'i',
     'x_shape:output:0', 'stitch_val1:output:0'},
    {{'N', 2}, {'T', DT_INT32}}},
   {{'tile_scaling'}, 'Div', {'x_shape:output:0', 'y_shape:merged:0'},
    {{'T', DT_INT32}}},
   {{'di'}, 'ZerosLike', {'i'}, {{'T', DT_INT32}}}
  };
  // clang-format on
  nodes.insert(nodes.end(), body.begin(), body.end());
  for (auto& n : nodes) {
    if (n.attr.empty()) {
      n.attr = {{'T', '$T'}};
    }
  }
  // 'Range' doesn't need any attr.
  nodes.push_back({{'stitch_idx0'},
                   'Range',
                   {'zero:output:0', 'x_rank:output:0', 'one:output:0'},
                   {}});
  *g = FDH::Create('_',
                   // Input defs
                   {'x:T', 'i:int32', 'dy:T'},
                   // Ret val defs
                   {'dx:T', 'di:int32'},
                   // Attr defs
                   {{'T: {half, float, double}'}},
                   // Nodes
                   nodes,
                   // Return values
                   {{'dx', 'dx:output:0'}, {'di', 'di:y:0'}});
  return Status::OK();
}
    
    
    {  if (argc != 4) {
    printf('This script converts the CIFAR dataset to the leveldb format used\n'
           'by caffe to perform classification.\n'
           'Usage:\n'
           '    convert_cifar_data input_folder output_folder db_type\n'
           'Where the input folder should contain the binary batch files.\n'
           'The CIFAR dataset could be downloaded at\n'
           '    http://www.cs.toronto.edu/~kriz/cifar.html\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(string(argv[1]), string(argv[2]), string(argv[3]));
  }
  return 0;
}

    
    #include <vector>
    
    #include <vector>
    
      /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe {
    }
    
    #endif  // CAFFE_ELU_LAYER_HPP_

    
    TEST_F(UnicharcompressTest, DoesKannada) {
  LOG(INFO) << 'Testing kan';
  LoadUnicharset('kan.unicharset');
  ExpectCorrect('kan');
  SerializeAndUndo();
  ExpectCorrect('kan');
}
    
    // Tests that the SSE implementation gets the same result as the vanilla.
TEST_F(IntSimdMatrixTest, SSE) {
  if (SIMDDetect::IsSSEAvailable()) {
    tprintf('SSE found! Continuing...');
  } else {
    tprintf('No SSE found! Not Tested!');
    return;
  }
  std::unique_ptr<IntSimdMatrix> matrix(new IntSimdMatrixSSE());
  ExpectEqualResults(matrix.get());
}
    
    
/**********************************************************************
 * UTF8 Text Renderer interface implementation
 **********************************************************************/
TessTextRenderer::TessTextRenderer(const char *outputbase)
    : TessResultRenderer(outputbase, 'txt') {
}
    
    #include 'intsimdmatrix.h'
#include 'intsimdmatrixavx2.h'
#include 'intsimdmatrixsse.h'
#include 'simddetect.h'
    
    /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
    ResultIterator::ResultIterator(const LTRResultIterator &resit)
    : LTRResultIterator(resit) {
  in_minor_direction_ = false;
  at_beginning_of_minor_run_ = false;
  preserve_interword_spaces_ = false;
    }
    
    /**********************************************************************
 * ROW::operator=
 *
 * Assign rows by duplicating the row structure but NOT the WERDLIST
 **********************************************************************/
    
    
/**********************************************************************
 * TBOX::bounding_union()  Build the smallest box containing both boxes
 *
 **********************************************************************/
    
    	if (IsUserOnly(opt))
	{
		FAIL_ON_ERROR(RegCreateKeyEx(HKEY_CURRENT_USER, L'Software\\Classes', 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &root, NULL));
	}
	else
	{
		root = HKEY_CLASSES_ROOT;
	}
    
    
    
    void GLESDebugDraw::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color)
{
    mShaderProgram->use();
    mShaderProgram->setUniformsForBuiltins();
    }
    
    		b2Body* body2 = m_world->CreateBody(&bd);
		m_piece2 = body2->CreateFixture(&m_shape2, 1.0f);
    
    	BulletTest()
	{
		{
			b2BodyDef bd;
			bd.position.Set(0.0f, 0.0f);
			b2Body* body = m_world->CreateBody(&bd);
    }
    }
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < 3; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-14.0f + 2.0f * i, 15.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
    TEST_P(EnvMoreTestWithParam, GetModTime) {
  ASSERT_OK(env_->CreateDirIfMissing(test_dir_ + '/dir1'));
  uint64_t mtime1 = 0x0;
  ASSERT_OK(env_->GetFileModificationTime(test_dir_ + '/dir1', &mtime1));
}
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
    #include 'util/sync_point.h'
#include 'util/sync_point_impl.h'
    
        void SetObjectField(jobject obj, jfieldID fieldID, jobject value)
    { functions->SetObjectField(this, obj, fieldID, value); }
    void SetBooleanField(jobject obj, jfieldID fieldID, jboolean value)
    { functions->SetBooleanField(this, obj, fieldID, value); }
    void SetByteField(jobject obj, jfieldID fieldID, jbyte value)
    { functions->SetByteField(this, obj, fieldID, value); }
    void SetCharField(jobject obj, jfieldID fieldID, jchar value)
    { functions->SetCharField(this, obj, fieldID, value); }
    void SetShortField(jobject obj, jfieldID fieldID, jshort value)
    { functions->SetShortField(this, obj, fieldID, value); }
    void SetIntField(jobject obj, jfieldID fieldID, jint value)
    { functions->SetIntField(this, obj, fieldID, value); }
    void SetLongField(jobject obj, jfieldID fieldID, jlong value)
    { functions->SetLongField(this, obj, fieldID, value); }
    void SetFloatField(jobject obj, jfieldID fieldID, jfloat value)
    { functions->SetFloatField(this, obj, fieldID, value); }
    void SetDoubleField(jobject obj, jfieldID fieldID, jdouble value)
    { functions->SetDoubleField(this, obj, fieldID, value); }
    
    #pragma once
#include <stdio.h>
#include 'YGConfig.h'
#include 'YGLayout.h'
#include 'YGStyle.h'
#include 'Yoga-internal.h'
    
      ASSERT_TRUE(YGNodeLayoutGetHadOverflow(root));
    
        double width;
    double height;
    
    #pragma once
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(width, height);
    }
};

    
        method(setBorder);
    
    #define ASSERT_BUF_SIZE 4096
static char sAssertBuf[ASSERT_BUF_SIZE];
static AssertHandler gAssertHandler;
    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }