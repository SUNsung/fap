
        
        #ifndef PREPOSITION
#  define PREPOSITION(Word)
#endif
    
    void PrefixMapKeyPrinter<char>::print(raw_ostream &out, ArrayRef<char> key) {
  out << QuotedString(StringRef(key.data(), key.size()));
};
    
    
    {    return name;
  }
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    void InputAction::anchor() {}
    
    class LLVM_LIBRARY_VISIBILITY Windows : public ToolChain {
protected:
  InvocationInfo constructInvocation(const LinkJobAction &job,
                                     const JobContext &context) const override;
    }
    
    struct OSBestResult {
  OSBestResult() : orientation_id(0), script_id(0), sconfidence(0.0),
                   oconfidence(0.0) {}
  int orientation_id;
  int script_id;
  float sconfidence;
  float oconfidence;
};
    
    class MutableIterator;
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
      double m() const;  // get gradient
  double c(double m) const;            // get constant
  double rms(double m, double c) const;            // get error
  double pearson() const;  // get correlation coefficient.
    
    #include 'publictypes.h'
#include 'elst.h'
#include 'strngs.h'
    
        void setrej_tess_failure();  //Tess generated blank
    void setrej_small_xht();  //Small xht char/wd
    void setrej_edge_char();  //Close to image edge
    void setrej_1Il_conflict();  //Initial reject map
    void setrej_postNN_1Il();  //1Il after NN
    void setrej_rej_cblob();  //Insert duff blob
    void setrej_mm_reject();  //Matrix matcher
                                 //Odd repeated char
    void setrej_bad_repetition();
    void setrej_poor_match();  //Failed Rays heuristic
                                 //TEMP reject_word
    void setrej_not_tess_accepted();
                                 //TEMP reject_word
    void setrej_contains_blanks();
    void setrej_bad_permuter();  //POTENTIAL reject_word
    void setrej_hyphen();  //PostNN dubious hyph or .
    void setrej_dubious();  //PostNN dubious limit
    void setrej_no_alphanums();  //TEMP reject_word
    void setrej_mostly_rej();  //TEMP reject_word
    void setrej_xht_fixup();  //xht fixup
    void setrej_bad_quality();  //TEMP reject_word
    void setrej_doc_rej();  //TEMP reject_word
    void setrej_block_rej();  //TEMP reject_word
    void setrej_row_rej();  //TEMP reject_word
    void setrej_unlv_rej();  //TEMP reject_word
    void setrej_nn_accept();  //NN Flipped a char
    void setrej_hyphen_accept();  //Good aspect ratio
    void setrej_mm_accept();  //Matrix matcher
                                 //Quality flip a char
    void setrej_quality_accept();
                                 //Accept all except blank
    void setrej_minimal_rej_accept();
    
    // A simple object cache which maps a string to an object of type T.
// Usually, these are expensive objects that are loaded from disk.
// Reference counting is performed, so every Get() needs to be followed later
// by a Free().  Actual deletion is accomplished by DeleteUnusedObjects().
template<typename T>
class ObjectCache {
 public:
  ObjectCache() = default;
  ~ObjectCache() {
    mu_.Lock();
    for (int i = 0; i < cache_.size(); i++) {
      if (cache_[i].count > 0) {
        tprintf('ObjectCache(%p)::~ObjectCache(): WARNING! LEAK! object %p '
                'still has count %d (id %s)\n',
                this, cache_[i].object, cache_[i].count,
                cache_[i].id.string());
      } else {
        delete cache_[i].object;
        cache_[i].object = nullptr;
      }
    }
    mu_.Unlock();
  }
    }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2005 Martin Kretzschmar <martink@gnome.org>
// Copyright (C) 2005 Kristian Høgsberg <krh@redhat.com>
// Copyright (C) 2006-2008 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2007 Brad Hards <bradh@kde.org>
// Copyright (C) 2009, 2010 Thomas Freitag <Thomas.Freitag@alfa.de>
// Copyright (C) 2009 Till Kamppeter <till.kamppeter@gmail.com>
// Copyright (C) 2009 Carlos Garcia Campos <carlosgc@gnome.org>
// Copyright (C) 2009, 2011 William Bader <williambader@hotmail.com>
// Copyright 2010 Hib Eris <hib@hiberis.nl>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    
    {      /* Convert the ascii number string to ucs2 and append. */
      len = number_string.getLength ();
      ucs2_char[0] = 0;
      for (i = 0; i < len; ++i) {
	  ucs2_char[1] = number_string.getChar(i);
	  label->append(ucs2_char, 2);
      }
      ucs2_char[1] = 0;
      label->append(ucs2_char, 2);
  } else {
      label->append(&number_string);
  }
    
    #ifndef PARSER_H
#define PARSER_H
    
    
    {  GBool mono;
  GBool gray;
  GBool transparency;
  GBool gdi;
  PSLevel level;		// PostScript level (1, 2, separation)
  GBool level1PSBug;		// gTrue if it uses a feature not supported in PSOutputDev
};
    
    #ifndef PROFILE_DATA_H
#define PROFILE_DATA_H
    
    void Config::ParseIniString(const std::string &iniStr, IniSettingMap &ini,
                            const bool constants_only /* = false */ ) {
  Config::SetParsedIni(ini, iniStr, '', constants_only, true);
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    static int InputTextCallback(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData* user_data = (InputTextCallback_UserData*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        // If for some reason we refuse the new length (BufTextLen) and/or capacity (BufSize) we need to set them back to what we want.
        std::string* str = user_data->Str;
        IM_ASSERT(data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    
    {    ImGuiIO& io = ImGui::GetIO();
    if (g_pVertexShaderBlob) { g_pVertexShaderBlob->Release(); g_pVertexShaderBlob = NULL; }
    if (g_pPixelShaderBlob) { g_pPixelShaderBlob->Release(); g_pPixelShaderBlob = NULL; }
    if (g_pRootSignature) { g_pRootSignature->Release(); g_pRootSignature = NULL; }
    if (g_pPipelineState) { g_pPipelineState->Release(); g_pPipelineState = NULL; }
    if (g_pFontTextureResource) { g_pFontTextureResource->Release(); g_pFontTextureResource = NULL; io.Fonts->TexID = NULL; } // We copied g_pFontTextureView to io.Fonts->TexID so let's clear that as well.
    for (UINT i = 0; i < g_numFramesInFlight; i++)
    {
        FrameResources* fr = &g_pFrameResources[i];
        if (fr->IndexBuffer)  { fr->IndexBuffer->Release();  fr->IndexBuffer = NULL; }
        if (fr->VertexBuffer) { fr->VertexBuffer->Release(); fr->VertexBuffer = NULL; }
    }
}
    
        std::unique_ptr<DHTTaskFactory> taskFactory;
    
    
    {} // namespace aria2

    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
    
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
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    void DHTTaskFactoryImpl::setMessageDispatcher(DHTMessageDispatcher* dispatcher)
{
  dispatcher_ = dispatcher;
}