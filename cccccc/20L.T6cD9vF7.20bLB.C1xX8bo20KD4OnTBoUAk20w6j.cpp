
        
        template <typename T, typename Head, typename... Tail>
struct is_any_of<T, std::tuple<Head, Tail...>>
  : or_trait<std::is_same<T, Head>, is_any_of<T, std::tuple<Tail...>>> {};
    
    
    {    PyThreadState *_save = NULL;
    try {
      Py_UNBLOCK_THREADS;
      copyFunc(LIBRARY_STATE THDPModule_makeDescriptor(dst_), src);
      Py_BLOCK_THREADS;
    } catch (...) {
      if (_save) {
        Py_BLOCK_THREADS;
      }
      throw;
    }
  };
    
    void ColorPrintf(std::ostream& out, LogColor color, const char* fmt, ...) {
  va_list args;
  va_start(args, fmt);
  ColorPrintf(out, color, fmt, args);
  va_end(args);
}
    
    // Parses a string for a string flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseStringFlag(const char* str, const char* flag, std::string* value);
    
    #include 'benchmark/benchmark.h'
    
    static void IgnoreColorPrint(std::ostream& out, LogColor, const char* fmt,
                             ...) {
  va_list args;
  va_start(args, fmt);
  out << FormatString(fmt, args);
  va_end(args);
}
    
    
    {
    {} // end namespace internal
} // end namespace benchmark

    
    std::string FormatKV(std::string const& key, int64_t value) {
  std::stringstream ss;
  ss << ''' << key << '\': ' << value;
  return ss.str();
}
    
      // Only add label if it is same for all runs
  std::string report_label = reports[0].report_label;
  for (std::size_t i = 1; i < reports.size(); i++) {
    if (reports[i].report_label != report_label) {
      report_label = '';
      break;
    }
  }