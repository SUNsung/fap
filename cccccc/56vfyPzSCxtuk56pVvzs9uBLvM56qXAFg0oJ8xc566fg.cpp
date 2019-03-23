
        
        namespace nw {
    }
    
    namespace content {
class RenderFrameHost;
}
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
      static int getUID() {
    static int id = 0;
    return ++id;
  }
    
    
    {  gtk_widget_show(menu_);
  g_object_ref_sink(G_OBJECT(menu_));
}
    
    void MenuItem::SetIcon(const std::string& icon) {
  if (icon.empty()) {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_), NULL); 
  } else {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                  gtk_image_new_from_file(icon.c_str()));
    gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                              TRUE);
  }
}
    
    // Prints the given value using the << operator if it has one;
// otherwise prints the bytes in it.  This is what
// UniversalPrinter<T>::Print() does when PrintTo() is not specialized
// or overloaded for type T.
//
// A user can override this behavior for a class type Foo by defining
// an overload of PrintTo() in the namespace where Foo is defined.  We
// give the user this option as sometimes defining a << operator for
// Foo is not desirable (e.g. the coding style may prevent doing it,
// or there is already a << operator but it doesn't do what the user
// wants).
template <typename T>
void PrintTo(const T& value, ::std::ostream* os) {
  // DefaultPrintTo() is overloaded.  The type of its first two
  // arguments determine which version will be picked.  If T is an
  // STL-style container, the version for container will be called; if
  // T is a pointer, the pointer version will be called; otherwise the
  // generic version will be called.
  //
  // Note that we check for container types here, prior to we check
  // for protocol message types in our operator<<.  The rationale is:
  //
  // For protocol messages, we want to give people a chance to
  // override Google Mock's format by defining a PrintTo() or
  // operator<<.  For STL containers, other formats can be
  // incompatible with Google Mock's format for the container
  // elements; therefore we check for container types here to ensure
  // that our format is used.
  //
  // The second argument of DefaultPrintTo() is needed to bypass a bug
  // in Symbian's C++ compiler that prevents it from picking the right
  // overload between:
  //
  //   PrintTo(const T& x, ...);
  //   PrintTo(T* x, ...);
  DefaultPrintTo(IsContainerTest<T>(0), is_pointer<T>(), value, os);
}
    
      // Gets the outcome of the test part.
  Type type() const { return type_; }
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
        static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
        static_cast<T>(v27_), static_cast<T>(v28_)};
    return ValuesIn(array);
  }
    
      // Gets the 0-terminated C string this MyString object represents.
  const char* c_string() const { return c_string_; }
    
      static bool isInitialized6() { return data6_.initialized; }
    
    #include <string>
#include <vector>
#include <memory>
    
    public:
  DHTRoutingTableDeserializer(int family);
    
    #include 'LogFactory.h'
#include 'Logger.h'
#include 'util.h'
#include 'DHTNode.h'
#include 'DHTConnectionImpl.h'
#include 'DHTRoutingTable.h'
#include 'DHTMessageFactoryImpl.h'
#include 'DHTMessageTracker.h'
#include 'DHTMessageDispatcherImpl.h'
#include 'DHTMessageReceiver.h'
#include 'DHTTaskQueueImpl.h'
#include 'DHTTaskFactoryImpl.h'
#include 'DHTPeerAnnounceStorage.h'
#include 'DHTTokenTracker.h'
#include 'DHTInteractionCommand.h'
#include 'DHTTokenUpdateCommand.h'
#include 'DHTBucketRefreshCommand.h'
#include 'DHTPeerAnnounceCommand.h'
#include 'DHTEntryPointNameResolveCommand.h'
#include 'DHTAutoSaveCommand.h'
#include 'DHTTask.h'
#include 'DHTRoutingTableDeserializer.h'
#include 'DHTRegistry.h'
#include 'DHTBucketRefreshTask.h'
#include 'DHTMessageCallback.h'
#include 'DHTMessageTrackerEntry.h'
#include 'DHTMessageEntry.h'
#include 'UDPTrackerClient.h'
#include 'BtRegistry.h'
#include 'prefs.h'
#include 'Option.h'
#include 'SocketCore.h'
#include 'DlAbortEx.h'
#include 'RecoverableException.h'
#include 'a2functional.h'
#include 'DownloadEngine.h'
#include 'fmt.h'
    
    namespace aria2 {
    }
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}