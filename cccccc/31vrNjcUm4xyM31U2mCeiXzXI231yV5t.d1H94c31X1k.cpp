
        
        typedef ScopedPythonPtr<PyObject> ScopedPyObjectPtr;
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    #include <google/protobuf/io/zero_copy_stream.h>
    
    // All Rights Reserved.
//
// Author: Maxim Lifantsev
//
    
    // ----
// Author: lar@google.com (Laramie Leavitt)
//
// These tests are really compile time tests.
// If you try to step through this in a debugger
// you will not see any evaluations, merely that
// value is assigned true or false sequentially.
    
    REGISTER_CPU_OPERATOR(
    MergeSingleScalarFeatureTensors,
    MergeSingleScalarFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleScalarFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with scalar features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 2 && n % 2 == 0; })
    .NumOutputs(3)
    .Input(0, 'in1', '')
    .Input(1, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values', '.values')
    .Arg('feature_ids', 'feature ids');
    
    Missing features (represented by empty ranges) filled with default_value.
    
        /**
	 * Decomposes a polygon into convex polygons and adds all pieces to a b2BodyDef
     * using a prototype b2PolyDef. All fields of the prototype are used for every
     * shape except the vertices (friction, restitution, density, etc).
     * 
     * If you want finer control, you'll have to add everything by hand.
     * 
     * This is the simplest method to add a complicated polygon to a body.
	 *
	 * Until Box2D's b2BodyDef behavior changes, this method returns a pointer to
	 * a heap-allocated array of b2PolyDefs, which must be deleted by the user
	 * after the b2BodyDef is added to the world.
     */
#if 0
void DecomposeConvexAndAddTo(b2Polygon* p, b2Body* bd, b2FixtureDef* prototype) {
    }
    
    class b2Triangle{
public:
	float* x;
    float* y;
	b2Triangle();
	b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3);
	~b2Triangle();
	bool IsInside(float32 _x, float32 _y);
	void Set(const b2Triangle& toMe);
    }
    
    		typedef struct
		{
			signed dred2 : 3;
			unsigned red1 : 5;
			//
			signed dgreen2 : 3;
			unsigned green1 : 5;
			//
			signed dblue2 : 3;
			unsigned blue1 : 5;
			//
			unsigned flip : 1;
			unsigned diff : 1;
			unsigned cw2 : 3;
			unsigned cw1 : 3;
			//
			unsigned int selectors;
		} Differential;
    
      Note that the compressed data, regardless of the level, can always be
  decompressed using the function fastlz_decompress above.
*/
    
    #endif
    
    #if defined(HAVE_ARM_NE10)
    
    /** 16x32 multiplication, followed by a 16-bit shift right (round-to-nearest). Results fits in 32 bits */
#if OPUS_FAST_INT64
#define MULT16_32_P16(a,b) ((opus_val32)PSHR((opus_int64)((opus_val16)(a))*(b),16))
#else
#define MULT16_32_P16(a,b) ADD32(MULT16_16((a),SHR((b),16)), PSHR(MULT16_16SU((a),((b)&0x0000ffff)),16))
#endif
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
    /*! \brief override type_name for caffe::LayerParameter */
namespace dmlc {
  DMLC_DECLARE_TYPE_NAME(::caffe::LayerParameter, 'caffe-layer-parameter');
}
    
    
    {  g.attrs['storage_id'] = std::make_shared<nnvm::any>(std::move(storage_id));
  g.attrs['storage_inplace_index'] = std::make_shared<nnvm::any>(
      std::move(storage_inplace_index));
  g.attrs['addto_entry'] = std::make_shared<nnvm::any>(std::move(addto_entry));
  g.attrs['skip_plus_node'] = std::make_shared<nnvm::any>(std::move(skip_plus_node));
  return g;
}
    
    namespace mxnet {
    }
    
    
    {
    {.add_argument('data', 'Symbol or Symbol[]', 'Tensor or List of Tensors, the second input '
'will be used as crop_like shape reference')
.add_arguments(CropParam::__FIELDS__())
.set_key_var_num_args('num_args');
}  // namespace op
}  // namespace mxnet

    
     private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    #if CUDNN_MAJOR >= 5
    format_ = CUDNN_TENSOR_NCHW;
    #endif
    CHECK_EQ(in_data.size(), 2U);
    CHECK_EQ(out_data.size(), 3U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[st::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[st::kOut].get<gpu, 4, DType>(s);
      CUDNN_CALL(cudnnCreateSpatialTransformerDescriptor(&st_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&in_desc_));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&out_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(in_desc_,
                                            format_,
                                            dtype_,
                                            data.size(0),
                                            data.size(1),
                                            data.size(2),
                                            data.size(3)));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(out_desc_,
                                            format_,
                                            dtype_,
                                            out.size(0),
                                            out.size(1),
                                            out.size(2),
                                            out.size(3)));
      if (param_.sampler_type == st::kBilinear) {
        int dim[] = {static_cast<int>(out.size(0)), static_cast<int>(out.size(1)),
                     static_cast<int>(out.size(2)), static_cast<int>(out.size(3))};
        CUDNN_CALL(cudnnSetSpatialTransformerNdDescriptor(st_desc_,
                                                          sampler_,
                                                          dtype_,
                                                          4,
                                                          dim));
      }
    }
  }
    
    #pragma once
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    // About GLSL version:
// The 'glsl_version' initialization parameter defaults to '#version 150' if NULL.
// Only override if your GL version doesn't handle this GLSL version. Keep NULL if unsure!
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // Render function
// (this used to be set in io.RenderDrawListsFn and called by ImGui::Render(), but you can now call this directly from your main loop)
void ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data)
{
    ID3D10Device* ctx = g_pd3dDevice;
    }
    
    
    {
    {
    {                // Bind texture, Draw
                ID3D11ShaderResourceView* texture_srv = (ID3D11ShaderResourceView*)pcmd->TextureId;
                ctx->PSSetShaderResources(0, 1, &texture_srv);
                ctx->DrawIndexed(pcmd->ElemCount, idx_offset, vtx_offset);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
    
    
    {    // exception out_of_range.401
    try
    {
        // try to write at a nonexisting key
        object.at('the fast') = 'il rapido';
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create an object from an object_t value
    json::object_t object_value = { {'one', 1}, {'two', 2} };
    json j_object_t(object_value);
    
        // Overrides
    OrbitCamera *clone() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    OrbitCamera();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~OrbitCamera();
    
    /** Initializes a OrbitCamera action with radius, delta-radius,  z, deltaZ, x, deltaX. */
    bool initWithDuration(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX);
    
    NS_CC_END;

    
    
    {    tHashElement *element = nullptr;
    Ref *target = action->getOriginalTarget();
    HASH_FIND_PTR(_targets, &target, element);
    if (element)
    {
        auto i = ccArrayGetIndexOfObject(element->actions, action);
        if (i != CC_INVALID_INDEX)
        {
            removeActionAtIndex(i, element);
        }
    }
}
    
    
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
#ifndef __CCACTIONTWEEN_H__
#define __CCACTIONTWEEN_H__
    
    
    {}
    
    
class Animation;
    
    std::vector<Vec2> AutoPolygon::expand(const std::vector<Vec2>& points, const cocos2d::Rect &rect, float epsilon)
{
    auto size = points.size();
    // if there are less than 3 points, then we have nothing
    if(size<3)
    {
        log('AUTOPOLYGON: cannot expand points for %s with less than 3 points, e: %f', _filename.c_str(), epsilon);
        return std::vector<Vec2>();
    }
    ClipperLib::Path subj;
    ClipperLib::PolyTree solution;
    ClipperLib::PolyTree out;
    for(const auto& pt : points)
    {
        subj << ClipperLib::IntPoint(pt.x* PRECISION, pt.y * PRECISION);
    }
    ClipperLib::ClipperOffset co;
    co.AddPath(subj, ClipperLib::jtMiter, ClipperLib::etClosedPolygon);
    co.Execute(solution, epsilon * PRECISION);
    
    ClipperLib::PolyNode* p = solution.GetFirst();
    if(!p)
    {
        log('AUTOPOLYGON: Clipper failed to expand the points');
        return points;
    }
    while(p->IsHole()){
        p = p->GetNext();
    }
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    int ClusterQualityInfo702::lateral_dist_rms(const std::uint8_t* bytes,
                                            int32_t length) const {
  Byte t0(bytes + 1);
  int32_t x = t0.get_byte(0, 3);
    }
    
    using apollo::drivers::canbus::Byte;
    
    const PolynomialXd& Spline1dSeg::SecondOrderDerivative() const {
  return second_order_derivative_;
}
    
      const LaneGraph &lane_graph =
      ObstacleClusters::GetLaneGraph(start_s, length, lane);
  EXPECT_EQ(1, lane_graph.lane_sequence_size());
  EXPECT_EQ(3, lane_graph.lane_sequence(0).lane_segment_size());
  EXPECT_EQ('l9', lane_graph.lane_sequence(0).lane_segment(0).lane_id());
  EXPECT_EQ('l18', lane_graph.lane_sequence(0).lane_segment(1).lane_id());
  EXPECT_EQ('l21', lane_graph.lane_sequence(0).lane_segment(2).lane_id());
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    #include 'modules/canbus/proto/vehicle_parameter.pb.h'
    
      Byte t2(bytes + 6);
  t = t2.get_byte(0, 8);
  x <<= 8;
  x |= t;