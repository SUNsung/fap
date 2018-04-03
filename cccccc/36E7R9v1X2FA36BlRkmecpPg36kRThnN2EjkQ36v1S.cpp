
        
        SavePageHandler::SavePageHandler(content::WebContents* web_contents,
                                 const SavePageCallback& callback)
    : web_contents_(web_contents),
      callback_(callback) {
}
    
    #ifndef ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
#define ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
    
    RenderProcessPreferences::RenderProcessPreferences(const Predicate& predicate)
    : predicate_(predicate),
      next_id_(0),
      cache_needs_update_(true) {
  registrar_.Add(this,
                 content::NOTIFICATION_RENDERER_PROCESS_CREATED,
                 content::NotificationService::AllBrowserContextsAndSources());
}
    
    namespace atom {
    }
    
    
    {
    {                return count;
#else
                return ::atomicMin(address, val);
#endif
            }
        }; // struct cmem
    
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
    
    /** 32x32 multiplication, followed by a 31-bit shift right. Results fits in 32 bits */
#undef MULT32_32_Q31
#define MULT32_32_Q31(a,b) (opus_val32)((((opus_int64)(a)) * ((opus_int64)(b)))>>31)
    
    #undef MULT32_32_Q31
static inline int MULT32_32_Q31(int a, int b)
{
    int r;
    asm volatile('MULT $ac1, %0, %1' : : 'r' (a), 'r' (b));
    asm volatile('EXTR.W %0,$ac1, %1' : '=r' (r): 'i' (31));
    return r;
}
    
    #else
#define varDefine
#define silk_SaveCount()