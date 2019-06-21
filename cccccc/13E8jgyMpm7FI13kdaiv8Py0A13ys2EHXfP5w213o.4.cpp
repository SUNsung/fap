
        
        
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
  }
    
      bool isVoid() const {
    assert(isValid());
    return Decl.isNull();
  }
    
    using namespace swift;
using namespace Mangle;
    
    void swift::Demangle::Node::dump() {
  std::string TreeStr = getNodeTreeAsString(this);
  fputs(TreeStr.c_str(), stderr);
}
    
      /// Whether we've emitted the call for the current callee yet.  This
  /// is just for debugging purposes --- e.g. the destructor asserts
  /// that it's true --- but is otherwise derivable from
  /// RemainingArgsForCallee, at least between calls.
  bool EmittedCall;
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    
    {}  // namespace nw

    
    
    {
  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.getListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardGetListSyncFunction);
};
    
     protected:
  ResponseAction Run() override;
  ~NwObjCallObjectMethodAsyncFunction() override;
    
    
    {}

    
    namespace Etc
{
	class Block4x4EncodingBits;
    }
    
    			float fDRed = (a_fDecodedAlpha * a_frgbaDecodedColor.fR) -
							(a_frgbaSourcePixel.fA * a_frgbaSourcePixel.fR);
			float fDGreen = (a_fDecodedAlpha * a_frgbaDecodedColor.fG) -
							(a_frgbaSourcePixel.fA * a_frgbaSourcePixel.fG);
			float fDBlue = (a_fDecodedAlpha * a_frgbaDecodedColor.fB) -
							(a_frgbaSourcePixel.fA * a_frgbaSourcePixel.fB);
    
    		typedef struct
		{
			unsigned green1a : 3;
			unsigned red1 : 4;
			unsigned detect1 : 1;
			//
			unsigned blue1b : 2;
			unsigned detect3 : 1;
			unsigned blue1a : 1;
			unsigned green1b : 1;
			unsigned detect2 : 3;
			//
			unsigned green2a : 3;
			unsigned red2 : 4;
			unsigned blue1c : 1;
			//
			unsigned db : 1;
			unsigned diff : 1;
			unsigned da : 1;
			unsigned blue2 : 4;
			unsigned green2b : 1;
			//
			unsigned int selectors;
		} H;
    
    		for (unsigned int uiPixel = 0; uiPixel < 8; uiPixel++)
		{
			ColorFloatRGBA *pfrgbaLeft = &m_pafrgbaSource[uiPixel];
			ColorFloatRGBA *pfrgbaRight = &m_pafrgbaSource[uiPixel + 8];
			ColorFloatRGBA *pfrgbaTop = &m_pafrgbaSource[s_auiTopPixelMapping[uiPixel]];
			ColorFloatRGBA *pfrgbaBottom = &m_pafrgbaSource[s_auiBottomPixelMapping[uiPixel]];
    }
    
    #if !defined(OPUS_HAVE_RTCD)
#define OVERRIDE_OPUS_FFT (1)
    
    #define MULT16_16_P13(a,b) (SHR(ADD32(4096,MULT16_16((a),(b))),13))
#define MULT16_16_P14(a,b) (SHR(ADD32(8192,MULT16_16((a),(b))),14))
#define MULT16_16_P15(a,b) (SHR(ADD32(16384,MULT16_16((a),(b))),15))
    
    static unsigned int stb__running_adler;
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.
    
        // You can set those flags on a per font basis in ImFontConfig::RasterizerFlags.
    // Use the 'extra_flags' parameter of BuildFontAtlas() to force a flag on all your fonts.
    enum RasterizerFlags
    {
        // By default, hinting is enabled and the font's native hinter is preferred over the auto-hinter.
        NoHinting       = 1 << 0,   // Disable hinting. This generally generates 'blurrier' bitmap glyphs when the glyph are rendered in any of the anti-aliased modes.
        NoAutoHint      = 1 << 1,   // Disable auto-hinter.
        ForceAutoHint   = 1 << 2,   // Indicates that the auto-hinter is preferred over the font's native hinter.
        LightHinting    = 1 << 3,   // A lighter hinting algorithm for gray-level modes. Many generated glyphs are fuzzier but better resemble their original shape. This is achieved by snapping glyphs to the pixel grid only vertically (Y-axis), as is done by Microsoft's ClearType and Adobe's proprietary font renderer. This preserves inter-glyph spacing in horizontal text.
        MonoHinting     = 1 << 4,   // Strong hinting algorithm that should only be used for monochrome output.
        Bold            = 1 << 5,   // Styling: Should we artificially embolden the font?
        Oblique         = 1 << 6,   // Styling: Should we slant the font, emulating italic style?
        Monochrome      = 1 << 7    // Disable anti-aliasing. Combine this with MonoHinting for best results!
    };
    
    // Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
    
            D3D12_RESOURCE_BARRIER barrier = {};
        barrier.Type                   = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Flags                  = D3D12_RESOURCE_BARRIER_FLAG_NONE;
        barrier.Transition.pResource   = g_mainRenderTargetResource[backBufferIdx];
        barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
        barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
        barrier.Transition.StateAfter  = D3D12_RESOURCE_STATE_RENDER_TARGET;
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        std::shared_ptr<DHTNode> localNode;
    
      void sendMessage();
    
    public:
  DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode);
    
    #include 'DHTNode.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'util.h'
#include 'TimeA2.h'
#include 'fmt.h'
#include 'File.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    
    {
    {    PrefPtr prefEntryPointHost = family == AF_INET ? PREF_DHT_ENTRY_POINT_HOST
                                                   : PREF_DHT_ENTRY_POINT_HOST6;
    if (!e->getOption()->get(prefEntryPointHost).empty()) {
      {
        PrefPtr prefEntryPointPort = family == AF_INET
                                         ? PREF_DHT_ENTRY_POINT_PORT
                                         : PREF_DHT_ENTRY_POINT_PORT6;
        std::pair<std::string, uint16_t> addr(
            e->getOption()->get(prefEntryPointHost),
            e->getOption()->getAsInt(prefEntryPointPort));
        std::vector<std::pair<std::string, uint16_t>> entryPoints;
        entryPoints.push_back(addr);
        auto command = make_unique<DHTEntryPointNameResolveCommand>(
            e->newCUID(), e, family, entryPoints);
        command->setBootstrapEnabled(true);
        command->setTaskQueue(taskQueue.get());
        command->setTaskFactory(taskFactory.get());
        command->setRoutingTable(routingTable.get());
        command->setLocalNode(localNode);
        tempCommands.push_back(std::move(command));
      }
    }
    else {
      A2_LOG_INFO('No DHT entry point specified.');
    }
    {
      auto command = make_unique<DHTInteractionCommand>(e->newCUID(), e);
      command->setMessageDispatcher(dispatcher.get());
      command->setMessageReceiver(receiver.get());
      command->setTaskQueue(taskQueue.get());
      command->setReadCheckSocket(connection->getSocket());
      command->setConnection(std::move(connection));
      command->setUDPTrackerClient(udpTrackerClient);
      tempRoutineCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTTokenUpdateCommand>(
          e->newCUID(), e, DHT_TOKEN_UPDATE_INTERVAL);
      command->setTokenTracker(tokenTracker.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTBucketRefreshCommand>(
          e->newCUID(), e, DHT_BUCKET_REFRESH_CHECK_INTERVAL);
      command->setTaskQueue(taskQueue.get());
      command->setRoutingTable(routingTable.get());
      command->setTaskFactory(taskFactory.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTPeerAnnounceCommand>(
          e->newCUID(), e, DHT_PEER_ANNOUNCE_CHECK_INTERVAL);
      command->setPeerAnnounceStorage(peerAnnounceStorage.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command =
          make_unique<DHTAutoSaveCommand>(e->newCUID(), e, family, 30_min);
      command->setLocalNode(localNode);
      command->setRoutingTable(routingTable.get());
      tempCommands.push_back(std::move(command));
    }
    // add deserialized nodes to routing table
    auto& desnodes = deserializer.getNodes();
    for (auto& node : desnodes) {
      routingTable->addNode(node);
    }
    if (!desnodes.empty()) {
      auto task = std::static_pointer_cast<DHTBucketRefreshTask>(
          taskFactory->createBucketRefreshTask());
      task->setForceRefresh(true);
      taskQueue->addPeriodicTask1(task);
    }
    // assign them into DHTRegistry
    if (family == AF_INET) {
      DHTRegistry::getMutableData().localNode = localNode;
      DHTRegistry::getMutableData().routingTable = std::move(routingTable);
      DHTRegistry::getMutableData().taskQueue = std::move(taskQueue);
      DHTRegistry::getMutableData().taskFactory = std::move(taskFactory);
      DHTRegistry::getMutableData().peerAnnounceStorage =
          std::move(peerAnnounceStorage);
      DHTRegistry::getMutableData().tokenTracker = std::move(tokenTracker);
      DHTRegistry::getMutableData().messageDispatcher = std::move(dispatcher);
      DHTRegistry::getMutableData().messageReceiver = std::move(receiver);
      DHTRegistry::getMutableData().messageFactory = std::move(factory);
      e->getBtRegistry()->setUDPTrackerClient(udpTrackerClient);
      DHTRegistry::setInitialized(true);
    }
    else {
      DHTRegistry::getMutableData6().localNode = localNode;
      DHTRegistry::getMutableData6().routingTable = std::move(routingTable);
      DHTRegistry::getMutableData6().taskQueue = std::move(taskQueue);
      DHTRegistry::getMutableData6().taskFactory = std::move(taskFactory);
      DHTRegistry::getMutableData6().peerAnnounceStorage =
          std::move(peerAnnounceStorage);
      DHTRegistry::getMutableData6().tokenTracker = std::move(tokenTracker);
      DHTRegistry::getMutableData6().messageDispatcher = std::move(dispatcher);
      DHTRegistry::getMutableData6().messageReceiver = std::move(receiver);
      DHTRegistry::getMutableData6().messageFactory = std::move(factory);
      DHTRegistry::setInitialized6(true);
    }
    if (e->getBtRegistry()->getUdpPort() == 0) {
      // We assign port last so that no exception gets in the way
      e->getBtRegistry()->setUdpPort(port);
    }
  }
  catch (RecoverableException& ex) {
    A2_LOG_ERROR_EX(fmt('Exception caught while initializing DHT functionality.'
                        ' DHT is disabled.'),
                    ex);
    tempCommands.clear();
    tempRoutineCommands.clear();
    if (family == AF_INET) {
      DHTRegistry::clearData();
      e->getBtRegistry()->setUDPTrackerClient(
          std::shared_ptr<UDPTrackerClient>{});
    }
    else {
      DHTRegistry::clearData6();
    }
  }
  return std::make_pair(std::move(tempCommands),
                        std::move(tempRoutineCommands));
}
    
    
    {} // namespace aria2
    
    #include 'common.h'
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}
    
      DHTMessageFactory* factory_;
    
      DHTTaskExecutor immediateTaskQueue_;
    
    
    {} // namespace aria2
