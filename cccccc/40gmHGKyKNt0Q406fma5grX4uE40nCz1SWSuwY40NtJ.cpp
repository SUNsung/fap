
        
        
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
    
    #include 'hphp/runtime/base/apc-handle.h'
    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
    #include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/runtime-error.h'