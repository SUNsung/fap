
        
        static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        inline int get_num_components() const { return m_comps_in_frame; }
    
    /*All of these macros should expect floats as arguments.*/
#define OC_MAXF(_a,_b)      ((_a)<(_b)?(_b):(_a))
#define OC_MINF(_a,_b)      ((_a)>(_b)?(_b):(_a))
#define OC_CLAMPF(_a,_b,_c) (OC_MINF(_a,OC_MAXF(_b,_c)))
#define OC_FABSF(_f)        ((float)fabs(_f))
#define OC_SQRTF(_f)        ((float)sqrt(_f))
#define OC_POWF(_b,_e)      ((float)pow(_b,_e))
#define OC_LOGF(_f)         ((float)log(_f))
#define OC_IFLOORF(_f)      ((int)floor(_f))
#define OC_ICEILF(_f)       ((int)ceil(_f))
    
      {1,2,6,  &_residue_44p_lfe,
   &_huff_book__44p0_lfe,&_huff_book__44p0_lfe,
   &_resbook_44p_l0,&_resbook_44p_l0}
};
static const vorbis_residue_template _res_44p51_1[]={
  {2,0,15,  &_residue_44p_lo,
   &_huff_book__44p1_short,&_huff_book__44p1_short,
   &_resbook_44p_1,&_resbook_44p_1},
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
       - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
    
    #undef MULT16_16_P15
static inline int MULT16_16_P15(int a, int b)
{
    int r;
    asm volatile ('mul %0, %1, %2' :'=r' (r): 'r' (a), 'r' (b));
    asm volatile ('SHRA_R.W %0, %1, %2' : '+r' (r):  '0' (r), 'i'(15));
    return r;
}
    
    /*gcc appears to emit MOVDQA's to load the argument of an _mm_cvtepi8_epi32()
  or _mm_cvtepi16_epi32() when optimizations are disabled, even though the
  actual PMOVSXWD instruction takes an m32 or m64. Unlike a normal memory
  reference, these require 16-byte alignment and load a full 16 bytes (instead
  of 4 or 8), possibly reading out of bounds.
    
    #endif // BOOST_ASIO_BASIC_WAITABLE_TIMER_HPP

    
    
    {
    {} // namespace asio
} // namespace boost
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #include <boost/asio/detail/addressof.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_sequence_adapter.hpp>
#include <boost/asio/detail/descriptor_ops.hpp>
#include <boost/asio/detail/fenced_block.hpp>
#include <boost/asio/detail/reactor_op.hpp>
    
    #include <boost/asio/detail/config.hpp>
    
    #include <boost/asio/detail/pop_options.hpp>
    
      // Get an iterator for the beginning of the map.
  iterator begin()
  {
    return values_.begin();
  }
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_BUFFER_SEQUENCE_ADAPTER_IPP
#define BOOST_ASIO_DETAIL_IMPL_BUFFER_SEQUENCE_ADAPTER_IPP
    
    #if defined(BOOST_ASIO_HAS_DEV_POLL)
    
      // Remove the descriptor from /dev/poll. Since this function is only called
  // during a fork, we can apply the change immediately.
  ::pollfd ev = { 0, 0, 0 };
  ev.fd = descriptor;
  ev.events = POLLREMOVE;
  ev.revents = 0;
  ::write(dev_poll_fd_, &ev, sizeof(ev));
    
    bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    #ifndef AddPair_H
#define AddPair_H
    
    			b2PrismaticJointDef pjd;
			pjd.Initialize(ground, m_platform, b2Vec2(0.0f, 5.0f), b2Vec2(1.0f, 0.0f));
    
    			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 1.0f;
    
    static bool ParseOneFlag(const char *Param) {
  if (Param[0] != '-') return false;
  if (Param[1] == '-') {
    static bool PrintedWarning = false;
    if (!PrintedWarning) {
      PrintedWarning = true;
      Printf('INFO: libFuzzer ignores flags that start with '--'\n');
    }
    for (size_t F = 0; F < kNumFlags; F++)
      if (FlagValue(Param + 1, FlagDescriptions[F].Name))
        Printf('WARNING: did you mean '%s' (single dash)?\n', Param + 1);
    return true;
  }
  for (size_t F = 0; F < kNumFlags; F++) {
    const char *Name = FlagDescriptions[F].Name;
    const char *Str = FlagValue(Param, Name);
    if (Str)  {
      if (FlagDescriptions[F].IntFlag) {
        int Val = MyStol(Str);
        *FlagDescriptions[F].IntFlag = Val;
        if (Flags.verbosity >= 2)
          Printf('Flag: %s %d\n', Name, Val);;
        return true;
      } else if (FlagDescriptions[F].UIntFlag) {
        unsigned int Val = std::stoul(Str);
        *FlagDescriptions[F].UIntFlag = Val;
        if (Flags.verbosity >= 2)
          Printf('Flag: %s %u\n', Name, Val);
        return true;
      } else if (FlagDescriptions[F].StrFlag) {
        *FlagDescriptions[F].StrFlag = Str;
        if (Flags.verbosity >= 2)
          Printf('Flag: %s %s\n', Name, Str);
        return true;
      } else {  // Deprecated flag.
        Printf('Flag: %s: deprecated, don't use\n', Name);
        return true;
      }
    }
  }
  Printf('\n\nWARNING: unrecognized flag '%s'; '
         'use -help=1 to list all flags\n\n', Param);
  return true;
}
    
    
    {#undef EXT_FUNC
}
    
    namespace fuzzer {
    }
    
    // The control file example:
//
// 3 # The number of inputs
// 1 # The number of inputs in the first corpus, <= the previous number
// file0
// file1
// file2  # One file name per line.
// STARTED 0 123  # FileID, file size
// DONE 0 1 4 6 8  # FileID COV1 COV2 ...
// STARTED 1 456  # If DONE is missing, the input crashed while processing.
// STARTED 2 567
// DONE 2 8 9
bool Merger::Parse(std::istream &IS, bool ParseCoverage) {
  LastFailure.clear();
  std::string Line;
    }
    
    
    {}  // namespace fuzzer
    
    namespace fuzzer {
    }
    
    #include 'FuzzerUtil.h'
#include 'FuzzerIO.h'
#include 'FuzzerInternal.h'
#include <cassert>
#include <chrono>
#include <cstring>
#include <errno.h>
#include <signal.h>
#include <sstream>
#include <stdio.h>
#include <sys/types.h>
#include <thread>
    
    FILE *OpenProcessPipe(const char *Command, const char *Mode);