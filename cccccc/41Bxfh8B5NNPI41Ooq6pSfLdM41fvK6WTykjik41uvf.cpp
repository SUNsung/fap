
        
        
//-----------------------------------------------------------------------------
//
//	class EnvmapAttribute
//
//-----------------------------------------------------------------------------
    
    //-----------------------------------------------------------------------------
//
//	Convenience functions related to the framesPerSecond attribute
//
//-----------------------------------------------------------------------------
    
    #endif /* GENERICOUTPUTFILE_H_ */

    
        IMF_EXPORT
    IMATH_NAMESPACE::Box2i &		dataWindow ();
    IMF_EXPORT
    const IMATH_NAMESPACE::Box2i &	dataWindow () const;
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT

    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    void
InputPart::setFrameBuffer (const FrameBuffer &frameBuffer)
{
    file->setFrameBuffer(frameBuffer);
}
    
      void SetNextResolution(const std::vector<AddressData>& address_data) {
    grpc_core::ExecCtx exec_ctx;
    grpc_core::Resolver::Result result;
    for (const auto& addr : address_data) {
      char* lb_uri_str;
      gpr_asprintf(&lb_uri_str, 'ipv4:127.0.0.1:%d', addr.port);
      grpc_uri* lb_uri = grpc_uri_parse(lb_uri_str, true);
      GPR_ASSERT(lb_uri != nullptr);
      grpc_resolved_address address;
      GPR_ASSERT(grpc_parse_uri(lb_uri, &address));
      std::vector<grpc_arg> args_to_add;
      if (addr.is_balancer) {
        args_to_add.emplace_back(grpc_channel_arg_integer_create(
            const_cast<char*>(GRPC_ARG_ADDRESS_IS_BALANCER), 1));
        args_to_add.emplace_back(grpc_channel_arg_string_create(
            const_cast<char*>(GRPC_ARG_ADDRESS_BALANCER_NAME),
            const_cast<char*>(addr.balancer_name.c_str())));
      }
      grpc_channel_args* args = grpc_channel_args_copy_and_add(
          nullptr, args_to_add.data(), args_to_add.size());
      result.addresses.emplace_back(address.addr, address.len, args);
      grpc_uri_destroy(lb_uri);
      gpr_free(lb_uri_str);
    }
    response_generator_->SetResponse(std::move(result));
  }
    
    
    {  return p;
}
    
    static bool check_destroyable(grpc_winsocket* winsocket) {
  return winsocket->destroy_called == true &&
         winsocket->write_info.closure == NULL &&
         winsocket->read_info.closure == NULL;
}
    
    int main(int argc, char** argv) {
  // Not to abort the test when parsing error happens.
  grpc_core::SetGlobalConfigEnvErrorFunction(&FakeConfigErrorFunction);
    }
    
     private:
  TestServerBuilderPlugin* CheckPresent() {
    auto it = builder_->plugins_.begin();
    for (; it != builder_->plugins_.end(); it++) {
      if ((*it)->name() == PLUGIN_NAME) break;
    }
    if (it != builder_->plugins_.end()) {
      return static_cast<TestServerBuilderPlugin*>(it->get());
    } else {
      return nullptr;
    }
  }
    
      // decode 
  if (colorMap) {
    writePS('  /Decode [');
    if ((level == psLevel2Sep || level == psLevel3Sep) &&
	colorMap->getColorSpace()->getMode() == csSeparation) {
      // this matches up with the code in the pdfImSep operator
      n = (1 << colorMap->getBits()) - 1;
      writePSFmt('{0:.4g} {1:.4g}', colorMap->getDecodeLow(0) * n,
		 colorMap->getDecodeHigh(0) * n);
    } else if (colorMap->getColorSpace()->getMode() == csDeviceN) {
      numComps = ((GfxDeviceNColorSpace *)colorMap->getColorSpace())->
	           getAlt()->getNComps();
      for (i = 0; i < numComps; ++i) {
	if (i > 0) {
	  writePS(' ');
	}
	writePS('0 1');
      }
    } else {
      numComps = colorMap->getNumPixelComps();
      for (i = 0; i < numComps; ++i) {
	if (i > 0) {
	  writePS(' ');
	}
	writePSFmt('{0:.4g} {1:.4g}', colorMap->getDecodeLow(i),
		   colorMap->getDecodeHigh(i));
      }
    }
    writePS(']\n');
  } else {
    writePSFmt('  /Decode [{0:d} {1:d}]\n', invert ? 1 : 0, invert ? 0 : 1);
  }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2010 Albert Astals Cid <aacid@kde.org>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
      ExternalSecurityHandler(PDFDoc *docA, Object *encryptDictA,
			  XpdfSecurityHandler *xshA);
  virtual ~ExternalSecurityHandler();
    
    private:
  // Create a sound. The Object obj is ensured to be a Stream with a Dict
  Sound(Object *obj, bool readAttrs = true);
    
    const float INNER_TIME_VLP32C[12][32] = {
    {0.000f,  0.000f,  2.304f,  2.304f,  4.608f,  4.608f,  6.912f,  6.912f,
     9.216f,  9.216f,  11.520f, 11.520f, 13.824f, 13.824f, 16.128f, 16.128f,
     18.432f, 18.432f, 20.736f, 20.736f, 23.040f, 23.040f, 25.344f, 25.344f,
     27.648f, 27.648f, 29.952f, 29.952f, 32.256f, 32.256f, 34.560f, 34.560f},
    {0.000f,  0.000f,  2.304f,  2.304f,  4.608f,  4.608f,  6.912f,  6.912f,
     9.216f,  9.216f,  11.520f, 11.520f, 13.824f, 13.824f, 16.128f, 16.128f,
     18.432f, 18.432f, 20.736f, 20.736f, 23.040f, 23.040f, 25.344f, 25.344f,
     27.648f, 27.648f, 29.952f, 29.952f, 32.256f, 32.256f, 34.560f, 34.560f},
    {55.296f, 55.296f, 57.600f, 57.600f, 59.904f, 59.904f, 62.208f, 62.208f,
     64.512f, 64.512f, 66.816f, 66.816f, 69.120f, 69.120f, 71.424f, 71.424f,
     73.728f, 73.728f, 76.032f, 76.032f, 78.336f, 78.336f, 80.640f, 80.640f,
     82.944f, 82.944f, 85.248f, 85.248f, 87.552f, 87.552f, 89.856f, 89.856f},
    {55.296f, 55.296f, 57.600f, 57.600f, 59.904f, 59.904f, 62.208f, 62.208f,
     64.512f, 64.512f, 66.816f, 66.816f, 69.120f, 69.120f, 71.424f, 71.424f,
     73.728f, 73.728f, 76.032f, 76.032f, 78.336f, 78.336f, 80.640f, 80.640f,
     82.944f, 82.944f, 85.248f, 85.248f, 87.552f, 87.552f, 89.856f, 89.856f},
    {110.592f, 110.592f, 112.896f, 112.896f, 115.200f, 115.200f, 117.504f,
     117.504f, 119.808f, 119.808f, 122.112f, 122.112f, 124.416f, 124.416f,
     126.720f, 126.720f, 129.024f, 129.024f, 131.328f, 131.328f, 133.632f,
     133.632f, 135.936f, 135.936f, 138.240f, 138.240f, 140.544f, 140.544f,
     142.848f, 142.848f, 145.152f, 145.152f},
    {110.592f, 110.592f, 112.896f, 112.896f, 115.200f, 115.200f, 117.504f,
     117.504f, 119.808f, 119.808f, 122.112f, 122.112f, 124.416f, 124.416f,
     126.720f, 126.720f, 129.024f, 129.024f, 131.328f, 131.328f, 133.632f,
     133.632f, 135.936f, 135.936f, 138.240f, 138.240f, 140.544f, 140.544f,
     142.848f, 142.848f, 145.152f, 145.152f},
    {165.888f, 165.888f, 168.192f, 168.192f, 170.496f, 170.496f, 172.800f,
     172.800f, 175.104f, 175.104f, 177.408f, 177.408f, 179.712f, 179.712f,
     182.016f, 182.016f, 184.320f, 184.320f, 186.624f, 186.624f, 188.928f,
     188.928f, 191.232f, 191.232f, 193.536f, 193.536f, 195.840f, 195.840f,
     198.144f, 198.144f, 200.448f, 200.448f},
    {165.888f, 165.888f, 168.192f, 168.192f, 170.496f, 170.496f, 172.800f,
     172.800f, 175.104f, 175.104f, 177.408f, 177.408f, 179.712f, 179.712f,
     182.016f, 182.016f, 184.320f, 184.320f, 186.624f, 186.624f, 188.928f,
     188.928f, 191.232f, 191.232f, 193.536f, 193.536f, 195.840f, 195.840f,
     198.144f, 198.144f, 200.448f, 200.448f},
    {221.184f, 221.184f, 223.488f, 223.488f, 225.792f, 225.792f, 228.096f,
     228.096f, 230.400f, 230.400f, 232.704f, 232.704f, 235.008f, 235.008f,
     237.312f, 237.312f, 239.616f, 239.616f, 241.920f, 241.920f, 244.224f,
     244.224f, 246.528f, 246.528f, 248.832f, 248.832f, 251.136f, 251.136f,
     253.440f, 253.440f, 255.744f, 255.744f},
    {221.184f, 221.184f, 223.488f, 223.488f, 225.792f, 225.792f, 228.096f,
     228.096f, 230.400f, 230.400f, 232.704f, 232.704f, 235.008f, 235.008f,
     237.312f, 237.312f, 239.616f, 239.616f, 241.920f, 241.920f, 244.224f,
     244.224f, 246.528f, 246.528f, 248.832f, 248.832f, 251.136f, 251.136f,
     253.440f, 253.440f, 255.744f, 255.744f},
    {276.480f, 276.480f, 278.784f, 278.784f, 281.088f, 281.088f, 283.392f,
     283.392f, 285.696f, 285.696f, 288.000f, 288.000f, 290.304f, 290.304f,
     292.608f, 292.608f, 294.912f, 294.912f, 297.216f, 297.216f, 299.520f,
     299.520f, 301.824f, 301.824f, 304.128f, 304.128f, 306.432f, 306.432f,
     308.736f, 308.736f, 311.040f, 311.040f},
    {276.480f, 276.480f, 278.784f, 278.784f, 281.088f, 281.088f, 283.392f,
     283.392f, 285.696f, 285.696f, 288.000f, 288.000f, 290.304f, 290.304f,
     292.608f, 292.608f, 294.912f, 294.912f, 297.216f, 297.216f, 299.520f,
     299.520f, 301.824f, 301.824f, 304.128f, 304.128f, 306.432f, 306.432f,
     308.736f, 308.736f, 311.040f, 311.040f}};
    
    void Velodyne32Parser::Unpack(const VelodynePacket& pkt,
                              std::shared_ptr<PointCloud> pc) {
  // const RawPacket* raw = (const RawPacket*)&pkt.data[0];
  const RawPacket* raw = (const RawPacket*)pkt.data().c_str();
  double basetime = raw->gps_timestamp;  // usec
    }
    
    TEST(RecordTest, filter_test) {
  uint64_t msg_num = 200;
  uint64_t begin_time = 100000000;
  uint64_t step_time = 100000000;  // 100ms
  uint64_t end_time = begin_time + step_time * (msg_num - 1);
  ConstructRecord(msg_num, begin_time, step_time);
    }
    
    #include 'cyber/io/poller.h'
    
    
    {  return (b * d - 3.0 * a * c) / (d * d * d);
}
    
    /**
 * @file
 **/
    
    class KeepFilterFactory : public CompactionFilterFactory {
 public:
  explicit KeepFilterFactory(bool check_context = false,
                             bool check_context_cf_id = false)
      : check_context_(check_context),
        check_context_cf_id_(check_context_cf_id),
        compaction_filter_created_(false) {}
    }
    
      Status ReuseWritableFile(const std::string& fname,
                           const std::string& old_fname,
                           std::unique_ptr<WritableFile>* result,
                           const EnvOptions& options) override {
    PERF_TIMER_GUARD(env_reuse_writable_file_nanos);
    return EnvWrapper::ReuseWritableFile(fname, old_fname, result, options);
  }
    
      bool PartialMerge(const Slice& /*key*/, const Slice& left_operand,
                    const Slice& right_operand, std::string* new_value,
                    Logger* /*logger*/) const override {
    if (left_operand.compare(right_operand) >= 0) {
      new_value->assign(left_operand.data(), left_operand.size());
    } else {
      new_value->assign(right_operand.data(), right_operand.size());
    }
    return true;
  }
    
    #include <chrono>
#include <condition_variable>
#include <functional>
#include <mutex>
    
    
    {  return Put(key_slice, value_slice);
}
    
      DB* db = nullptr;
  DestroyDB(kDBPath, options);
  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());
  assert(db);
    
      // Do a write outside of the transaction to key 'y'
  s = db->Put(write_options, 'y', 'y');
    
      virtual ~PersistentCache() {}
    
      // Any internal progress/error information generated by the db will
  // be written to info_log if it is non-NULL, or to a file stored
  // in the same directory as the DB contents if info_log is NULL.
  // Default: NULL
  Logger* info_log;
    
    #pragma once
// lua headers
extern 'C' {
#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>
}
    
    #ifdef SW_NO_USE_ASM_CONTEXT
#ifdef HAVE_BOOST_CONTEXT
#define USE_BOOST_CONTEXT 1
#include <boost/context/all.hpp>
#else
#define USE_UCONTEXT 1
#include <ucontext.h>
#endif
#else
#include 'asm_context.h'
#endif
    
    using namespace swoole;
    
    
    {#ifdef SW_CONTEXT_PROTECT_STACK_PAGE
    uint32_t protect_page = get_protect_stack_page();
    if (protect_page)
    {
        if (protect_stack(stack_, stack_size, protect_page))
        {
            protect_page_ = protect_page;
        }
    }
#endif
}
    
    static int thread_onTask(swThreadPool *pool, void *task, int task_len)
{
    sw_atomic_long_t *n = (sw_atomic_long_t *) task;
    sw_atomic_fetch_add(n, 1);
    if (*n == N - 1)
    {
        write(_pipe, (void*) n, sizeof(long));
    }
    return SW_OK;
}
    
    
    {    ASSERT_GT(cid, 0);
    ASSERT_EQ(cid, _cid);
}
    
    static void RedisQtAddRead(void *);
static void RedisQtDelRead(void *);
static void RedisQtAddWrite(void *);
static void RedisQtDelWrite(void *);
static void RedisQtCleanup(void *);
    
        ExampleQt example(argv[argc-1]);
    
        pq = swHeap_new(SIZE, SW_MAX_HEAP);
    ASSERT_NE(pq, nullptr);