
        
        static void findCorner(const std::vector<Point2f>& contour, Point2f point, Point2f& corner)
{
    // find the nearest point
    double min_dist = std::numeric_limits<double>::max();
    int min_idx = -1;
    }
    
    TEST_F(cameraCalibrationTiltTest, undistortPoints)
{
    cv::Vec<double, NUM_DIST_COEFF_TILT> coeffNoiseHalfWidth(
        .2, .1, // k1 k2
        .01, .01, // p1 p2
        .01, .01, .01, .01, // k3 k4 k5 k6
        .001, .001, .001, .001, // s1 s2 s3 s4
        .001, .001); // tauX tauY
    double step = 99;
    double toleranceBackProjection = 1e-5;
    }
    
    static const int kBlockSize = 32768;
    
    namespace leveldb {
    }
    
    // Snapshots are kept in a doubly-linked list in the DB.
// Each SnapshotImpl corresponds to a particular sequence number.
class SnapshotImpl : public Snapshot {
 public:
  SequenceNumber number_;  // const after creation
    }
    
    inline
static void DBSynchronize(kyotocabinet::TreeDB* db_)
{
  // Synchronize will flush writes to disk
  if (!db_->synchronize()) {
    fprintf(stderr, 'synchronize error: %s\n', db_->error().name());
  }
}
    
      DBImpl* dbi = reinterpret_cast<DBImpl*>(db);
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
    void BlockBuilder::Reset() {
  buffer_.clear();
  restarts_.clear();
  restarts_.push_back(0);       // First restart point is at offset 0
  counter_ = 0;
  finished_ = false;
  last_key_.clear();
}
    
    class FilterBlockReader {
 public:
 // REQUIRES: 'contents' and *policy must stay live while *this is live.
  FilterBlockReader(const FilterPolicy* policy, const Slice& contents);
  bool KeyMayMatch(uint64_t block_offset, const Slice& key);
    }
    
    namespace {
class EmptyIterator : public Iterator {
 public:
  EmptyIterator(const Status& s) : status_(s) { }
  virtual bool Valid() const { return false; }
  virtual void Seek(const Slice& target) { }
  virtual void SeekToFirst() { }
  virtual void SeekToLast() { }
  virtual void Next() { assert(false); }
  virtual void Prev() { assert(false); }
  Slice key() const { assert(false); return Slice(); }
  Slice value() const { assert(false); return Slice(); }
  virtual Status status() const { return status_; }
 private:
  Status status_;
};
}  // namespace
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwVulkan_InvalidateFontUploadObjects();
IMGUI_API void        ImGui_ImplGlfwVulkan_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwVulkan_CreateFontsTexture(VkCommandBuffer command_buffer);
IMGUI_API bool        ImGui_ImplGlfwVulkan_CreateDeviceObjects();
    
        // Create the blending setup
    {
        D3D10_BLEND_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.AlphaToCoverageEnable = false;
        desc.BlendEnable[0] = true;
        desc.SrcBlend = D3D10_BLEND_SRC_ALPHA;
        desc.DestBlend = D3D10_BLEND_INV_SRC_ALPHA;
        desc.BlendOp = D3D10_BLEND_OP_ADD;
        desc.SrcBlendAlpha = D3D10_BLEND_INV_SRC_ALPHA;
        desc.DestBlendAlpha = D3D10_BLEND_ZERO;
        desc.BlendOpAlpha = D3D10_BLEND_OP_ADD;
        desc.RenderTargetWriteMask[0] = D3D10_COLOR_WRITE_ENABLE_ALL;
        g_pd3dDevice->CreateBlendState(&desc, &g_pBlendState);
    }
    
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
bool ImGui_ImplA5_ProcessEvent(ALLEGRO_EVENT *ev)
{
    ImGuiIO &io = ImGui::GetIO();
    }
    
        if (!g_DescriptorSetLayout)
    {
        VkSampler sampler[1] = {g_FontSampler};
        VkDescriptorSetLayoutBinding binding[1] = {};
        binding[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        binding[0].descriptorCount = 1;
        binding[0].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
        binding[0].pImmutableSamplers = sampler;
        VkDescriptorSetLayoutCreateInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
        info.bindingCount = 1;
        info.pBindings = binding;
        err = vkCreateDescriptorSetLayout(g_Device, &info, g_Allocator, &g_DescriptorSetLayout);
        ImGui_ImplGlfwVulkan_VkResult(err);
    }
    
    
    {        // Rendering
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui::Render();
        glfwSwapBuffers(window);
    }
    
    #include 'imgui.h'
#include 'imgui_impl_sdl_gl3.h'
#include <stdio.h>
#include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions (because it is small). You may use glew/glad/glLoadGen/etc. whatever already works for you.
#include <SDL.h>
    
    static VkClearValue             g_ClearValue = {};
    
    
    {    YGNodeReset(m_node);
}
    
    #pragma once
    
    struct Value
{
    static Value fromYGValue(YGValue const & ygValue)
    {
        return Value(static_cast<int>(ygValue.unit), ygValue.value);
    }
    }
    
    TEST(YogaTest, computed_layout_margin) {
  const YGNodeRef root = YGNodeNew();
  YGNodeStyleSetWidth(root, 100);
  YGNodeStyleSetHeight(root, 100);
  YGNodeStyleSetMarginPercent(root, YGEdgeStart, 10);
    }
    
      ASSERT_FLOAT_EQ(10, YGNodeLayoutGetPadding(root, YGEdgeLeft));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetPadding(root, YGEdgeRight));
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root));
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(100, YGNodeLayoutGetHeight(root));
    
      bool hasOnlyOneRef() const {
    return m_refcount == 1;
  }
    
      // Creates a strong reference from a raw pointer, assuming that is already
  // referenced from some other RefPtr. This should be used sparingly.
  static inline RefPtr<T> assumeAlreadyReffed(T* ptr) {
    return RefPtr<T>(ptr, ConstructionMode::External);
  }
    
      template <typename ...Args>
  void initialize(Args&&... arguments) {
    FBASSERT(!m_instance);
    m_instance = new T(std::forward<Args>(arguments)...);
  }