
        
          void OnWindowMapped(unsigned long xid);
  void OnWindowUnmapped(unsigned long xid);
    
    namespace mate {
    }
    
     private:
  ObjectTemplateBuilder& SetImpl(const base::StringPiece& name,
                                 v8::Local<v8::Data> val);
  ObjectTemplateBuilder& SetPropertyImpl(
      const base::StringPiece& name,
      v8::Local<v8::FunctionTemplate> getter,
      v8::Local<v8::FunctionTemplate> setter);
    
      template <typename P, typename C>
  void SetWeak(P* parameter, C callback) {
    handle_.SetWeak(parameter, callback);
  }
    
    #ifndef NATIVE_MATE_NATIVE_MATE_WRAPPABLE_H_
#define NATIVE_MATE_NATIVE_MATE_WRAPPABLE_H_
    
    template <>
struct Converter<download::DownloadItem::DownloadState> {
  static v8::Local<v8::Value> ToV8(
      v8::Isolate* isolate,
      download::DownloadItem::DownloadState state) {
    std::string download_state;
    switch (state) {
      case download::DownloadItem::IN_PROGRESS:
        download_state = 'progressing';
        break;
      case download::DownloadItem::COMPLETE:
        download_state = 'completed';
        break;
      case download::DownloadItem::CANCELLED:
        download_state = 'cancelled';
        break;
      case download::DownloadItem::INTERRUPTED:
        download_state = 'interrupted';
        break;
      default:
        break;
    }
    return ConvertToV8(isolate, download_state);
  }
};
    
    
    {}  // namespace nwapi
    
    #include 'content/nw/src/api/clipboard/clipboard.h'
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    void Menu::Append(MenuItem* menu_item) {
  if (menu_item->submenu_)
    menu_model_->AddSubMenu(menu_item->id(), menu_item->label_,
                            menu_item->submenu_->menu_model_.get());
  else if (menu_item->type_ == 'normal')
    menu_model_->AddItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'checkbox')
    menu_model_->AddCheckItem(menu_item->id(), menu_item->label_);
  else if (menu_item->type_ == 'separator')
    menu_model_->AddSeparator(ui::NORMAL_SEPARATOR);
    }
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
    
    {} // namespace extensions
#endif

    
    Status WriteBatchBase::Merge(const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
    
    { private:
  // no copying allowed
  WriteControllerToken(const WriteControllerToken&) = delete;
  void operator=(const WriteControllerToken&) = delete;
};
    
    #include 'rocksdb/cache.h'
#include 'rocksdb/compaction_filter.h'
#include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/table.h'
#include 'rocksdb/utilities/options_util.h'
    
      db->Get(ReadOptions(), 'key2', &value);
  assert(value == 'value');