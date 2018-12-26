
        
        
    {
    {
    {        for (;;) {
          auto start = index.fetch_add(work_chunk);
          auto const stop = std::min(start + work_chunk, inputs.size());
          if (start >= stop) break;
          for (auto i = start; i != stop; ++i) func(inputs[i]);
        }
      } catch (const std::exception& e) {
        std::fprintf(stderr,
          'worker thread exited with exception: %s\n', e.what());
        failed = true;
      }
    }));
  }
    
    enum class RegNumber : uint32_t {};
    
    // No `ini` binding yet. Hdf still takes precedence but will be removed
// once we have made all options ini-aware. All new settings should
// use the ini path of this method (i.e., pass a bogus Hdf or keep it null)
void Config::Iterate(std::function<void (const IniSettingMap&,
                                         const Hdf&,
                                         const std::string&)> cb,
                     const IniSettingMap &ini, const Hdf& config,
                     const std::string &name,
                     const bool prepend_hhvm /* = true */) {
  Hdf hdf = name.empty() ? config : config[name];
  if (hdf.exists() && !hdf.isEmpty()) {
    for (Hdf c = hdf.firstChild(); c.exists(); c = c.next()) {
      cb(IniSetting::Map::object, c, '');
    }
  } else {
    Hdf empty;
    auto ini_value = name.empty() ? ini :
      ini_iterate(ini, IniName(name, prepend_hhvm));
    if (ini_value.isArray()) {
      for (ArrayIter iter(ini_value.toArray()); iter; ++iter) {
        cb(iter.second(), empty, iter.first().toString().toCppString());
      }
    }
  }
}
    
      static std::string FormatNumber(const char* fmt, int64_t n);
  static std::string FormatSize(int64_t size);
  static std::string FormatTime(int64_t milliSeconds);
    
    #include 'hphp/runtime/base/file-util.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
#include 'hphp/runtime/base/unit-cache.h'
#include 'hphp/runtime/ext/std/ext_std_file.h'
#include 'hphp/util/logger.h'
    
    #include 'hphp/runtime/base/glob-stream-wrapper.h'