
        
        
    {}  // namespace auto_updater

    
    #endif  // ATOM_BROWSER_NET_ASAR_ASAR_PROTOCOL_HANDLER_H_

    
      // PID 1 identifies init. launchd, that is. launchd never starts the
  // relauncher process directly, having this parent_pid means that the parent
  // already exited and launchd 'inherited' the relauncher as its child.
  // There's no reason to synchronize with launchd.
  if (parent_pid == 1) {
    LOG(ERROR) << 'unexpected parent_pid';
    return;
  }
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(ViewsDelegateMac);
};
    
    
    {}  // namespace nwapi
    
    v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    #ifndef CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
#define CONTENT_NW_SRC_API_BINDINGS_COMMON_H_
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    
    {  for (AppWindow* window : windows) {
    if (window->NWCanClose())
      window->GetBaseWindow()->Close();
  }
}
    
     protected:
  ~NwAppGetArgvSyncFunction() override;
    
          if (!(data.raw.get() && *(data.raw))) {
        if (data.type == TYPE_PNG) {
          encoded_image_base64.insert(0, kPNGDataUriPrefix);
        } else {
          DCHECK(data.type == TYPE_JPEG);
          encoded_image_base64.insert(0, kJPEGDataUriPrefix);
        }
      }
    
    namespace extensions {
    }
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnAllocateObject(id, type, *options, extension_id());
  return true;
}
    
    void OneofGenerator::GeneratePublicCasePropertyDeclaration(
    io::Printer* printer) {
  printer->Print(
      variables_,
      '$comments$'
      '@property(nonatomic, readonly) $enum_name$ $name$OneOfCase;\n'
      '\n');
}
    
    // Verify that ByteSink is subclassable and Flush() overridable.
class FlushingByteSink : public StringByteSink {
 public:
  explicit FlushingByteSink(string* dest) : StringByteSink(dest) {}
  virtual void Flush() { Append('z', 1); }
 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FlushingByteSink);
};
    
    string Status::ToString() const {
  if (error_code_ == error::OK) {
    return 'OK';
  } else {
    if (error_message_.empty()) {
      return error::CodeEnumToString(error_code_);
    } else {
      return error::CodeEnumToString(error_code_) + ':' +
          error_message_;
    }
  }
}
    
    TEST(StatusOr, TestAssignmentStatusOk) {
  const int kI = 4;
  StatusOr<int> source(kI);
  StatusOr<int> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(source.ValueOrDie(), target.ValueOrDie());
}
    
    using google::protobuf::io::FileInputStream;
using google::protobuf::io::GzipInputStream;
    
    // Author: brianolson@google.com (Brian Olson)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Test program to verify that GzipOutputStream is compatible with command line
// gzip or java.util.zip.GzipOutputStream
//
// Reads data on standard input and writes compressed gzip stream to standard
// output.
    
    class ExtensionStripper {
 public:
  static void StripFile(FileDescriptorProto *file) {
    for (int i = 0; i < file->mutable_message_type()->size(); i++) {
      StripMessage(file->mutable_message_type(i));
    }
    file->mutable_extension()->Clear();
  }
 private:
  static void StripMessage(DescriptorProto *message_type) {
    message_type->mutable_extension()->Clear();
    message_type->clear_extension_range();
    for (int i = 0; i < message_type->mutable_nested_type()->size(); i++) {
      StripMessage(message_type->mutable_nested_type(i));
    }
  }
};
    
      {
    // Write the new address book back to disk.
    fstream output(argv[1], ios::out | ios::trunc | ios::binary);
    if (!address_book.SerializeToOstream(&output)) {
      cerr << 'Failed to write address book.' << endl;
      return -1;
    }
  }
    
    bool DHTRoutingTable::addNode(const std::shared_ptr<DHTNode>& node)
{
  return addNode(node, false);
}
    
      void moveBucketHead(const std::shared_ptr<DHTNode>& node);
    
    #define READ_CHECK(fp, ptr, count)                                             \
  if (fp.read((ptr), (count)) != (count)) {                                    \
    throw DL_ABORT_EX('Failed to load DHT routing table.');                    \
  }
    
    class DHTNode;
    
    namespace aria2 {
    }
    
    #include <memory>
    
    
    {} // namespace aria2

    
    namespace aria2 {
    }