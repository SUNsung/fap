
        
          if (IsSameChromeInstance(pid))
    return true;
    
    #include <string>
    
    #include 'shell/browser/native_window_views.h'
    
      // DesktopMediaListObserver overrides.
  void OnSourceAdded(DesktopMediaList* list, int index) override;
  void OnSourceRemoved(DesktopMediaList* list, int index) override;
  void OnSourceMoved(DesktopMediaList* list,
                     int old_index,
                     int new_index) override;
  void OnSourceNameChanged(DesktopMediaList* list, int index) override;
  void OnSourceThumbnailChanged(DesktopMediaList* list, int index) override;
  void OnSourceUnchanged(DesktopMediaList* list) override;
  bool ShouldScheduleNextRefresh(DesktopMediaList* list) override;
    
    #endif  // SHELL_BROWSER_API_ATOM_API_MENU_VIEWS_H_

    
    class Net : public mate::EventEmitter<Net> {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
    
    {}  // namespace api
    
    #ifndef SHELL_BROWSER_API_ATOM_API_SCREEN_H_
#define SHELL_BROWSER_API_ATOM_API_SCREEN_H_
    
    
    {  auto nn = caffe2::convertToNNModule(net);
  auto new_netdef = caffe2::convertToCaffe2Proto(nn);
  EXPECT_EQ(new_netdef.external_input().size(), net.external_input().size());
  for (auto i = 0; i < net.external_input().size(); ++i) {
    EXPECT_EQ(new_netdef.external_input(i), net.external_input(i));
  }
}
    
    #include <torch/nn/cloneable.h>
#include <torch/nn/pimpl.h>
#include <torch/types.h>
    
    class GetCol2ImGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Im2Col', '', std::vector<string>{GO(0)}, std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Col2Im, GetCol2ImGradient);
    
    		/*
		Convert legacy user-aliases.cmd to new name user_aliases.cmd
		*/
		PathCombine(legacyUserAliasesPath, userConfigDirPath, L'user-aliases.cmd');
		if (PathFileExists(legacyUserAliasesPath))
		{
			PathCombine(userAliasesPath, userConfigDirPath, L'user_aliases.cmd');
    }
    
    class DB;
    
    namespace rocksdb {
    }
    
    namespace {
// A dummy compaction filter
class DummyCompactionFilter : public CompactionFilter {
 public:
  virtual ~DummyCompactionFilter() {}
  virtual bool Filter(int level, const Slice& key, const Slice& existing_value,
                      std::string* new_value, bool* value_changed) const {
    return false;
  }
  virtual const char* Name() const { return 'DummyCompactionFilter'; }
};
    }
    
    #pragma once
// lua headers
extern 'C' {
#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>
}