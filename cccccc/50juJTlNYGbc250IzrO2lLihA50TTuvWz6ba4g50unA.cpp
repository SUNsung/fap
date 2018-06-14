
        
        #include <stdint.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include 'imgui.h'
#include 'imgui_impl_allegro5.h'
    
    
    {    return S_OK;
}
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        }
    
      // Test reading a null-terminated string past the maximum length
  {
    std::unique_ptr<IOBuf> buf(IOBuf::create(8));
    Appender app(buf.get(), 0);
    app.push(reinterpret_cast<const uint8_t*>('hello\0'), 6);
    std::unique_ptr<IOBuf> chain(IOBuf::create(8));
    chain->prependChain(std::move(buf));
    }
    
      BlockingQueueAddResult add(T item) override {
    switch (kBehavior) { // static
      case QueueBehaviorIfFull::THROW:
        if (!queue_.write(std::move(item))) {
          throw QueueFullException('LifoSemMPMCQueue full, can't add item');
        }
        break;
      case QueueBehaviorIfFull::BLOCK:
        queue_.blockingWrite(std::move(item));
        break;
    }
    return sem_.post();
  }
    
      std::shared_ptr<T> get() const {
    folly::hazptr_local<1> hazptr;
    auto slots = hazptr[0].get_protected(slots_);
    if (!slots) {
      return nullptr;
    }
    return (slots->slots_)[AccessSpreader<>::current(kNumSlots)];
  }
    
      template <typename K>
  if_is_transparent<K, iterator> lower_bound(const K& key) {
    return lower_bound(*this, key);
  }
    
    #endif
    
    namespace folly {
    }
    
    
    {  EXPECT_THROW(future.get(std::chrono::seconds(5)), BrokenPromise);
  EXPECT_THROW(
      captured_promise_future.get(std::chrono::seconds(5)), BrokenPromise);
}
    
        // Generate a CreateXDirect function with vector types as parameters
    if (has_string_or_vector_fields) {
      code_ +=
          'inline flatbuffers::Offset<{{STRUCT_NAME}}> '
          'Create{{STRUCT_NAME}}Direct(';
      code_ += '    flatbuffers::FlatBufferBuilder &_fbb\\';
      for (auto it = struct_def.fields.vec.begin();
           it != struct_def.fields.vec.end(); ++it) {
        const auto &field = **it;
        if (!field.deprecated) { GenParam(field, true, ',\n    '); }
      }
    }
    
    // Return the services for generated mock file.
grpc::string GetMockServices(grpc_generator::File *file,
                             const Parameters &params);
    
    namespace grpc_go_generator {
    }
    
    MonsterStorage::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(
          std::mem_fn(&MonsterStorage::Service::Store), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Stat>, flatbuffers::grpc::Message<Monster>>(
          std::mem_fn(&MonsterStorage::Service::Retrieve), this)));
}
    
      for (int i = 0; i < service->method_count(); ++i) {
    (*vars)['method_name'] = service->method(i).get()->name();
    printer->Print(*vars, 'WithAsyncMethod_$method_name$<');
  }
  printer->Print('Service');
  for (int i = 0; i < service->method_count(); ++i) {
    printer->Print(' >');
  }
  printer->Print(' AsyncService;\n');