
        
        #include 'absl/types/span.h'
#include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/sequential_thunk.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      VLOG(2) << 'Infeeding to GPU: ' << hlo_instruction()->ToString();
    
    
    {
    {}  // namespace gpu
}  // namespace xla
    
    
    {
    {}  // namespace gpu
}  // namespace xla
    
    
    {        // TODO(b/111309141): Run this on a separate stream so it doesn't block
        // the GPU from doing work during the transfer. This could be handled by
        // making StreamAssignment do something intelligent with outfeed thunks.
        stream
            .ThenMemcpy((*buffer)->destination()->untyped_data(), data_address,
                        (*buffer)->length())
            .ThenDoHostCallback([buffer]() { (*buffer)->Done(); });
        return Status::OK();
      }));
    
    namespace xla {
namespace gpu {
    }
    }
    
    #include 'absl/strings/str_cat.h'
#include 'absl/strings/str_format.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/types.h'
#include 'tensorflow/compiler/xla/util.h'
#include 'tensorflow/compiler/xla/xla_data.pb.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
#include 'tensorflow/stream_executor/blas.h'
#include 'tensorflow/stream_executor/device_memory.h'
    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    class TensorScatterAddOp : public XlaOpKernel {
 public:
  explicit TensorScatterAddOp(OpKernelConstruction* context)
      : XlaOpKernel(context) {}
    }
    
    #include <algorithm>
#include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/register_types.h'
#include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/core/platform/types.h'
#include 'tensorflow/core/util/work_sharder.h'
    
     protected:
  HDF5DataLayerTest()
      : filename(NULL),
        blob_top_data_(new Blob<Dtype>()),
        blob_top_label_(new Blob<Dtype>()),
        blob_top_label2_(new Blob<Dtype>()) {}
  virtual void SetUp() {
    blob_top_vec_.push_back(blob_top_data_);
    blob_top_vec_.push_back(blob_top_label_);
    blob_top_vec_.push_back(blob_top_label2_);
    }
    
    template <>
void hdf5_load_nd_dataset<float>(hid_t file_id, const char* dataset_name_,
        int min_dim, int max_dim, Blob<float>* blob, bool reshape) {
  hdf5_load_nd_dataset_helper(file_id, dataset_name_, min_dim, max_dim, blob,
                              reshape);
  herr_t status = H5LTread_dataset_float(
    file_id, dataset_name_, blob->mutable_cpu_data());
  CHECK_GE(status, 0) << 'Failed to read float dataset ' << dataset_name_;
}
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    template <typename Dtype>
void ClipLayer<Dtype>::Backward_cpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down,
    const vector<Blob<Dtype>*>& bottom) {
  if (propagate_down[0]) {
    const Dtype* bottom_data = bottom[0]->cpu_data();
    const Dtype* top_diff = top[0]->cpu_diff();
    Dtype* bottom_diff = bottom[0]->mutable_cpu_diff();
    const int count = bottom[0]->count();
    }
    }
    
    TYPED_TEST(NeuronLayerTest, TestPReLUInPlace) {
  typedef typename TypeParam::Dtype Dtype;
  // Set layer parameters
  LayerParameter ip_layer_param;
  LayerParameter prelu_layer_param;
  InnerProductParameter *ip_param =
      ip_layer_param.mutable_inner_product_param();
  ip_param->mutable_weight_filler()->set_type('gaussian');
  ip_param->set_num_output(3);
  InnerProductLayer<Dtype> ip(ip_layer_param);
  PReLULayer<Dtype> prelu(prelu_layer_param);
  InnerProductLayer<Dtype> ip2(ip_layer_param);
  PReLULayer<Dtype> prelu2(prelu_layer_param);
  // Set up blobs
  vector<Blob<Dtype>*> blob_bottom_vec_2;
  vector<Blob<Dtype>*> blob_middle_vec_2;
  vector<Blob<Dtype>*> blob_top_vec_2;
  shared_ptr<Blob<Dtype> > blob_bottom_2(new Blob<Dtype>());
  shared_ptr<Blob<Dtype> > blob_middle_2(new Blob<Dtype>());
  shared_ptr<Blob<Dtype> > blob_top_2(new Blob<Dtype>());
  blob_bottom_vec_2.push_back(blob_bottom_2.get());
  blob_middle_vec_2.push_back(blob_middle_2.get());
  blob_top_vec_2.push_back(blob_top_2.get());
  blob_bottom_2->CopyFrom(*this->blob_bottom_, false, true);
  // SetUp layers
  ip.SetUp(this->blob_bottom_vec_, this->blob_top_vec_);
  prelu.SetUp(this->blob_top_vec_, this->blob_top_vec_);
  ip2.SetUp(blob_bottom_vec_2, blob_middle_vec_2);
  prelu2.SetUp(blob_middle_vec_2, blob_top_vec_2);
  caffe_copy(ip2.blobs()[0]->count(), ip.blobs()[0]->cpu_data(),
      ip2.blobs()[0]->mutable_cpu_data());
  // Forward in-place
  ip.Forward(this->blob_bottom_vec_, this->blob_top_vec_);
  prelu.Forward(this->blob_top_vec_, this->blob_top_vec_);
  // Forward non-in-place
  ip2.Forward(blob_bottom_vec_2, blob_middle_vec_2);
  prelu2.Forward(blob_middle_vec_2, blob_top_vec_2);
  // Check numbers
  for (int s = 0; s < blob_top_2->count(); ++s) {
    EXPECT_EQ(this->blob_top_->cpu_data()[s], blob_top_2->cpu_data()[s]);
  }
  // Fill top diff with random numbers
  shared_ptr<Blob<Dtype> > tmp_blob(new Blob<Dtype>());
  tmp_blob->ReshapeLike(*blob_top_2.get());
  FillerParameter filler_param;
  GaussianFiller<Dtype> filler(filler_param);
  filler.Fill(tmp_blob.get());
  caffe_copy(blob_top_2->count(), tmp_blob->cpu_data(),
      this->blob_top_->mutable_cpu_diff());
  caffe_copy(blob_top_2->count(), tmp_blob->cpu_data(),
      blob_top_2->mutable_cpu_diff());
  // Backward in-place
  vector<bool> propagate_down;
  propagate_down.push_back(true);
  prelu.Backward(this->blob_top_vec_, propagate_down, this->blob_top_vec_);
  ip.Backward(this->blob_top_vec_, propagate_down, this->blob_bottom_vec_);
  // Backward non-in-place
  prelu2.Backward(blob_top_vec_2, propagate_down, blob_middle_vec_2);
  ip2.Backward(blob_middle_vec_2, propagate_down, blob_bottom_vec_2);
  // Check numbers
  for (int s = 0; s < blob_bottom_2->count(); ++s) {
    EXPECT_FLOAT_EQ(this->blob_bottom_->cpu_diff()[s],
        blob_bottom_2->cpu_diff()[s]);
  }
  for (int s = 0; s < ip.blobs()[0]->count(); ++s) {
    EXPECT_FLOAT_EQ(ip.blobs()[0]->cpu_diff()[s],
        ip2.blobs()[0]->cpu_diff()[s]);
  }
  for (int s = 0; s < ip.blobs()[1]->count(); ++s) {
    EXPECT_FLOAT_EQ(ip.blobs()[1]->cpu_diff()[s],
        ip2.blobs()[1]->cpu_diff()[s]);
  }
  for (int s = 0; s < prelu.blobs()[0]->count(); ++s) {
    EXPECT_FLOAT_EQ(prelu.blobs()[0]->cpu_diff()[s],
        prelu2.blobs()[0]->cpu_diff()[s]);
  }
}
    
      // Make and apply the update value for the current iteration.
  virtual void ApplyUpdate() = 0;
    
    	wchar_t commandStr[MAX_PATH + 20] = { 0 };
	wchar_t baseCommandStr[MAX_PATH + 20] = { 0 };
	if (!single) {
		swprintf_s(baseCommandStr, L'\'%s\'', exePath);
	}
	else {
		swprintf_s(baseCommandStr, L'\'%s\' /single', exePath);
	}
    
    
    {  switch (level) {
  case psLevel1:
    state->getStrokeGray(&gray);
    writePSFmt('{0:.4g} G\n', colToDbl(gray));
    break;
  case psLevel1Sep:
    state->getStrokeCMYK(&cmyk);
    c = colToDbl(cmyk.c);
    m = colToDbl(cmyk.m);
    y = colToDbl(cmyk.y);
    k = colToDbl(cmyk.k);
    writePSFmt('{0:.4g} {1:.4g} {2:.4g} {3:.4g} K\n', c, m, y, k);
    addProcessColor(c, m, y, k);
    break;
  case psLevel2:
  case psLevel3:
    if (state->getStrokeColorSpace()->getMode() != csPattern) {
      colorPtr = state->getStrokeColor();
      writePS('[');
      for (i = 0; i < state->getStrokeColorSpace()->getNComps(); ++i) {
	if (i > 0) {
	  writePS(' ');
	}
	writePSFmt('{0:.4g}', colToDbl(colorPtr->c[i]));
      }
      writePS('] SC\n');
    }
    break;
  case psLevel2Sep:
  case psLevel3Sep:
    if (state->getStrokeColorSpace()->getMode() == csSeparation) {
      sepCS = (GfxSeparationColorSpace *)state->getStrokeColorSpace();
      color.c[0] = gfxColorComp1;
      sepCS->getCMYK(&color, &cmyk);
      writePSFmt('{0:.4g} {1:.4g} {2:.4g} {3:.4g} {4:.4g} ({5:t}) CK\n',
		 colToDbl(state->getStrokeColor()->c[0]),
		 colToDbl(cmyk.c), colToDbl(cmyk.m),
		 colToDbl(cmyk.y), colToDbl(cmyk.k),
		 sepCS->getName());
      addCustomColor(sepCS);
    } else {
      state->getStrokeCMYK(&cmyk);
      c = colToDbl(cmyk.c);
      m = colToDbl(cmyk.m);
      y = colToDbl(cmyk.y);
      k = colToDbl(cmyk.k);
      writePSFmt('{0:.4g} {1:.4g} {2:.4g} {3:.4g} K\n', c, m, y, k);
      addProcessColor(c, m, y, k);
    }
    break;
  }
  t3Cacheable = gFalse;
}
    
    
    {  GooList intervals;
};

    
    #include 'PageTransition.h'
    
    //------------------------------------------------------------------------
// Parser
//------------------------------------------------------------------------
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    bool ImGui_ImplOpenGL2_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);   // Load as RGBA 32-bits (75% of the memory is wasted, but default font is so small) because it is more likely to be compatible with user's existing shaders. If your ImTextureId represent a higher-level concept than just a GL texture id, consider calling GetTexDataAsAlpha8() instead to save on GPU memory.
    }