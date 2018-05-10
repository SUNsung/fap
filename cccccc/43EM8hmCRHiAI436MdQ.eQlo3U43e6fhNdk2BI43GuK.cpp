
        
          if (hasRequiredSize)
    return;
    
    #include 'override_macros.h'
    
    #define THDPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPDoubleStorageClass)
#define THDPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPFloatStorageClass)
#define THDPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPHalfStorageClass)
#define THDPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPLongStorageClass)
#define THDPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPIntStorageClass)
#define THDPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPShortStorageClass)
#define THDPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPCharStorageClass)
#define THDPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THDPByteStorageClass)
    
    #undef THPTensor_
#undef THPTensor_stateless_
#undef THPTensor
#undef THPTensorStr
#undef THPTensorBaseStr
#undef THPTensorClass
    
    
void print_init_message(const char *message) {
  size_t unused;
  unused = write(1, message, strlen(message));
  unused = write(1, '\n', 1);
}
    
    struct ByteArray {
  using size_type = std::size_t;
    }
    
    #include 'ifaddrs_android.h'
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <errno.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
    
    
    {	String solution = GDMonoMarshal::mono_string_to_godot(p_solution);
	String config = GDMonoMarshal::mono_string_to_godot(p_config);
	GodotSharpBuilds::get_singleton()->build_exit_callback(MonoBuildInfo(solution, config), p_exit_code);
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
      if (num_left < 2)
    stop_decoding(JPGD_BAD_DQT_MARKER);
    
      {1,0,32,  &_residue_44_hi_un,
   &_huff_book__44u8__long,&_huff_book__44u8__long,
   &_resbook_44u_8,&_resbook_44u_8}
};
static const vorbis_residue_template _res_44u_9[]={
  {1,0,16,  &_residue_44_hi_un,
   &_huff_book__44u9__short,&_huff_book__44u9__short,
   &_resbook_44u_9,&_resbook_44u_9},
    
     private:
  char delim_;         // The delimiter is inserted between elements
    
      /// Return (list: key)[first..last] (inclusive)
  /// May throw RedisListException
  std::vector<std::string> Range(const std::string& key,
                                 int32_t first, int32_t last);
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
      while (!PredecessorsAllCleared(point)) {
    cv_.wait(lock);
    if (DisabledByMarker(point, thread_id)) {
      return;
    }
  }
    
      std::mutex              mutex_;
  std::condition_variable cv_;
  // sync points that have been passed through
  std::unordered_set<std::string> cleared_points_;
  bool enabled_ = false;
  int num_callbacks_running_ = 0;
    
    
    {  ~IosFlagsSaver() {
    ios_.flags(flags_);
  }
};
    
        friend class Node;
    
     public: // Style getters
    
    void setAssertHandler(AssertHandler assertHandler) {
    gAssertHandler = assertHandler;
}
    
    class Countable : public noncopyable, public nonmovable {
public:
  // RefPtr expects refcount to start at 0
  Countable() : m_refcount(0) {}
  virtual ~Countable()
  {
    FBASSERT(m_refcount == 0);
  }
    }
    
    #define FBCRASH(msg, ...) facebook::assertInternal('Fatal error (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__)
#define FBUNREACHABLE() facebook::assertInternal('This code should be unreachable (%s:%d)', __FILE__, __LINE__)