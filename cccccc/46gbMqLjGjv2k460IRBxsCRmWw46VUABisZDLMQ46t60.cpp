
        
        IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
      ~EventListener() override;
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    #include 'base/logging.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
    
      focus_manager_ = NULL;
  window_ = NULL;
    
      GURL manifest_url(manifest);
  scoped_refptr<CannedBrowsingDataAppCacheHelper> helper(
                                                         new CannedBrowsingDataAppCacheHelper(content::BrowserContext::GetDefaultStoragePartition(context_)
                                                                                              ->GetAppCacheService()));
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.setListSync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardSetListSyncFunction);
};
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
    
    {      if (ns > time_ns)
        return pResult;
    }
    
    static const static_codebook*const _floor_Xx0_books[]={
  0
};
    
    static const static_bookblock _resbook_16s_0={
  {
    {0},
    {0,0,&_16c0_s_p1_0},
    {0},
    {0,0,&_16c0_s_p3_0},
    {0,0,&_16c0_s_p4_0},
    {0,0,&_16c0_s_p5_0},
    {0,0,&_16c0_s_p6_0},
    {&_16c0_s_p7_0,&_16c0_s_p7_1},
    {&_16c0_s_p8_0,&_16c0_s_p8_1},
    {&_16c0_s_p9_0,&_16c0_s_p9_1,&_16c0_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_1={
  {
    {0},
    {0,0,&_16c1_s_p1_0},
    {0},
    {0,0,&_16c1_s_p3_0},
    {0,0,&_16c1_s_p4_0},
    {0,0,&_16c1_s_p5_0},
    {0,0,&_16c1_s_p6_0},
    {&_16c1_s_p7_0,&_16c1_s_p7_1},
    {&_16c1_s_p8_0,&_16c1_s_p8_1},
    {&_16c1_s_p9_0,&_16c1_s_p9_1,&_16c1_s_p9_2}
   }
};
static const static_bookblock _resbook_16s_2={
  {
    {0},
    {0,0,&_16c2_s_p1_0},
    {0,0,&_16c2_s_p2_0},
    {0,0,&_16c2_s_p3_0},
    {0,0,&_16c2_s_p4_0},
    {&_16c2_s_p5_0,&_16c2_s_p5_1},
    {&_16c2_s_p6_0,&_16c2_s_p6_1},
    {&_16c2_s_p7_0,&_16c2_s_p7_1},
    {&_16c2_s_p8_0,&_16c2_s_p8_1},
    {&_16c2_s_p9_0,&_16c2_s_p9_1,&_16c2_s_p9_2}
   }
};
    
    #endif /* default implementation */
    
    #define HAS_MMX     0x01
#define HAS_SSE     0x02
#define HAS_SSE2    0x04
#define HAS_SSE3    0x08
#define HAS_SSSE3   0x10
#define HAS_SSE4_1  0x20
#define HAS_AVX     0x40
#define HAS_AVX2    0x80
#ifndef BIT
#define BIT(n) (1<<n)
#endif
    
      CodeBlock main;
  main.init(code, codeSize, 'test');
  DataBlock data;
  data.init(data_buffer, dataSize, 'data');
    
      CodeAddress frontier() const {
    return codeBlock.frontier();
  }
    
    
    {  // open a temporary file
  snprintf(path, sizeof(path), '/tmp/XXXXXX');
  int fd = mkstemp(path);
  if (fd == -1) {
    raise_warning('Unable to open temporary file');
    return;
  }
  setFd(fd);
  m_stream = fdopen(fd, 'r+');
  setName(path);
  m_rawName = std::string(path);
}
    
    ZipFile::~ZipFile() {
  ZipFile::closeImpl();
}
    
        arr = make_varray('s0').merge(make_varray('s1'));
    EXPECT_TRUE(equal(arr, make_varray('s0', 's1')));
    
      bool isValid() const { return id != kInvalidTransID; }
  bool isConsistent() const;
  std::string print() const;
  Offset bcPast() const;
  void optimizeForMemory();
    
    // If set, releaseUnit will contain a pointer to any extraneous unit created due
// to race-conditions while compiling
Unit* compile_file(const char* s, size_t sz, const SHA1& sha1,
                   const char* fname, const Native::FuncTable& nativeFuncs,
                   const RepoOptions&, Unit** releaseUnit = nullptr);
    
      SHA1() : q{} {}
    
    TransEnv::~TransEnv() {}
    
    
    {    new_value->assign(max.data(), max.size());
    return true;
  }
    
    
    {  bool FullMergeV2(const MergeOperationInput& merge_in,
                   MergeOperationOutput* merge_out) const override {
    // Put basically only looks at the current/latest value
    assert(!merge_in.operand_list.empty());
    merge_out->existing_operand = merge_in.operand_list.back();
    return true;
  }
};
    
    
    { private:
  std::condition_variable cv_;
};
    
      // drop column family
  s = db->DropColumnFamily(handles[1]);
  assert(s.ok());
    
    #include 'rocksdb/cache.h'
#include 'rocksdb/compaction_filter.h'
#include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
#include 'rocksdb/table.h'
#include 'rocksdb/utilities/options_util.h'
    
    
    {  virtual std::string GetPrintableOptions() const = 0;
};
    
      // Approximate size of user data packed per block.  Note that the
  // block size specified here corresponds to uncompressed data.  The
  // actual size of the unit read from disk may be smaller if
  // compression is enabled.  This parameter can be changed dynamically.
  //
  // Default: 4K
  size_t block_size;