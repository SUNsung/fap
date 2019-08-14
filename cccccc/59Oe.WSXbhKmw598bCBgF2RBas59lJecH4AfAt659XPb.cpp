
        
        
    {    remap(dst_frame2, dst_frame2, displacement_field, Mat(), INTER_LINEAR, BORDER_REPLICATE);
}
    
    
//-----------------------------------------------------------------------------
//
//	class EnvmapAttribute
//
//-----------------------------------------------------------------------------
    
    
    {    return i->second;
}
    
    
class FrameBuffer::ConstIterator
{
  public:
    }
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT

    
        IMF_EXPORT
    Attribute &			operator [] (const char name[]);
    IMF_EXPORT
    const Attribute &		operator [] (const char name[]) const;
    
    
char *
IStream::readMemoryMapped (int n)
{
    throw IEX_NAMESPACE::InputExc ('Attempt to perform a memory-mapped read '
			 'on a file that is not memory mapped.');
    return 0;
}
    
    		    _data->cachedBuffer->insert
			(k.name(),
			 Slice (HALF,
				(char *)(new half[tileRowSize] - 
					_data->offset),
				sizeof (half),
				sizeof (half) *
				    _data->tFile->levelWidth(0),
				1, 1,
				s.fillValue,
				false, true));
		    break;
    
    void
InputPart::readPixels (int scanLine1, int scanLine2)
{
    file->readPixels(scanLine1, scanLine2);
}
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    public:
	virtual String get_name() const { return 'Particles2D'; }
	bool has_main_screen() const { return false; }
	virtual void edit(Object *p_object);
	virtual bool handles(Object *p_object) const;
	virtual void make_visible(bool p_visible);
    
    	void _send_rpc(Node *p_from, int p_to, bool p_unreliable, bool p_set, const StringName &p_name, const Variant **p_arg, int p_argcount);
	bool _send_confirm_path(NodePath p_path, PathSentCache *psc, int p_target);
    
    	if (p_path.data && p_path.data->refcount.ref()) {
    }
    
    
    {	while (true) {
		T tmp = static_cast<T const volatile &>(*pw);
		if (tmp >= val)
			return tmp; // already greater, or equal
		if (__sync_val_compare_and_swap(pw, tmp, val) == tmp)
			return val;
	}
}
    
    		if (V) {
			switch (E->get().type) {
				case ShaderLanguage::TYPE_BOOL: {
    }
    }
    }
    
    		GLuint index_wireframe_id;
		GLuint array_wireframe_id;
		GLuint instancing_array_wireframe_id;
		int index_wireframe_len;
    
    #endif
    
    		undo_redo->add_do_property(ProjectSettings::get_singleton(), base, path);
		undo_redo->add_undo_property(ProjectSettings::get_singleton(), base, ProjectSettings::get_singleton()->get(base));
    
    void second(void) {
  printf('second\n');
  emscripten_sleep(1);
  longjmp(buf, -1);
}
    
      // Display a page.
  void display(OutputDev *out, double hDPI, double vDPI,
	       int rotate, GBool useMediaBox, GBool crop,
	       GBool printing, Catalog *catalog,
	       GBool (*abortCheckCbk)(void *data) = NULL,
	       void *abortCheckCbkData = NULL,
               GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data) = NULL,
               void *annotDisplayDecideCbkData = NULL);
    
    
    {  return &item->item;
}
    
    void PreScanOutputDev::stroke(GfxState *state) {
  double *dash;
  int dashLen;
  double dashStart;
    }
    
    
    {  splash->setSoftMask(NULL);
  gfree(imgData.lookup);
  delete imgData.imgStr;
  str->close();
}
    
    namespace ImGuiFreeType
{
    // Hinting greatly impacts visuals (and glyph sizes).
    // When disabled, FreeType generates blurrier glyphs, more or less matches the stb's output.
    // The Default hinting mode usually looks good, but may distort glyphs in an unusual way.
    // The Light hinting mode generates fuzzier glyphs but better matches Microsoft's rasterizer.
    }
    
            // 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
        {
            static float f = 0.0f;
            static int counter = 0;
    }
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    #include 'imgui.h'
#include 'imgui_impl_opengl2.h'
#if defined(_MSC_VER) && _MSC_VER <= 1500 // MSVC 2008 or earlier
#include <stddef.h>     // intptr_t
#else
#include <stdint.h>     // intptr_t
#endif
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
      static Data& getMutableData6() { return data6_; }
    
    void DHTReplaceNodeTask::onTimeout(const std::shared_ptr<DHTNode>& node)
{
  ++numRetry_;
  if (numRetry_ >= MAX_RETRY) {
    A2_LOG_INFO(fmt('ReplaceNode: Ping failed %d times. Replace %s with %s.',
                    numRetry_, node->toString().c_str(),
                    newNode_->toString().c_str()));
    node->markBad();
    bucket_->addNode(newNode_);
    setFinished(true);
  }
  else {
    A2_LOG_INFO(fmt('ReplaceNode: Ping reply timeout from %s. Try once more.',
                    node->toString().c_str()));
    sendMessage();
  }
}
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
    
    {  virtual std::shared_ptr<DHTTask>
  createReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                        const std::shared_ptr<DHTNode>& newNode) = 0;
};
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPeerAnnounceTask(const unsigned char* infoHash)
{
  // TODO
  return nullptr;
}
    
      virtual void addPeriodicTask2(const std::shared_ptr<DHTTask>& task) = 0;
    
    namespace {
const size_t NUM_CONCURRENT_TASK = 15;
} // namespace
    
      virtual void executeTask() CXX11_OVERRIDE;
    
    bool DNSCache::CacheEntry::operator==(const CacheEntry& e) const
{
  return hostname_ == e.hostname_ && port_ == e.port_;
}
    
    
    {    coro_test_wait(&complete_num, args.size());
}
    
    }
TEST(os_signal, swSignalfd_set)
{
    int ret;
    sigset_t curset;