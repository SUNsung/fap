
        
        const int32 MAX_CONNECTED = 32;
const float32 COLLAPSE_DIST_SQR = CMP_EPSILON*CMP_EPSILON;//0.1f;//1000*CMP_EPSILON*1000*CMP_EPSILON;
	
class b2PolyNode{
public:
	b2Vec2 position;
	b2PolyNode* connected[MAX_CONNECTED];
	int32 nConnected;
	bool visited;
    }
    
    #ifndef B2_TRIANGLE_H
#define B2_TRIANGLE_H
    
    namespace Etc
{
	// ----------------------------------------------------------------------------------------------------
	// C-style inteface to the encoder
	//
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth, 
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uiMaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight, 
				int *a_piEncodingTime_ms, bool a_bVerboseOutput)
	{
    }
    }
    
    	// C-style inteface to the encoder
	void Encode(float *a_pafSourceRGBA,
				unsigned int a_uiSourceWidth,
				unsigned int a_uiSourceHeight,
				Image::Format a_format,
				ErrorMetric a_eErrMetric,
				float a_fEffort,
				unsigned int a_uiJobs,
				unsigned int a_uimaxJobs,
				unsigned char **a_ppaucEncodingBits,
				unsigned int *a_puiEncodingBitsBytes,
				unsigned int *a_puiExtendedWidth,
				unsigned int *a_puiExtendedHeight,
				int *a_piEncodingTime_ms, bool a_bVerboseOutput = false);
    
    		m_errormetric = a_errormetric;
    
    		static unsigned int GetBytesPerBlock(Format a_format)
		{
			switch (a_format)
			{
			case Format::RGB8:
			case Format::R11:
			case Format::RGB8A1:
				return 8;
				break;
    }
    }
    
    #include 'vpx_dsp/vpx_dsp_common.h'
    
    /**
  Decompress a block of compressed data and returns the size of the
  decompressed block. If error occurs, e.g. the compressed data is
  corrupted or the output buffer is not large enough, then 0 (zero)
  will be returned instead.
    
       C_MUL(m,a,b)         : m = a*b
   C_FIXDIV( c , div )  : if a fixed point impl., c /= div. noop otherwise
   C_SUB( res, a,b)     : res = a - b
   C_SUBFROM( res , a)  : res -= a
   C_ADDTO( res , a)    : res += a
 * */
#ifdef FIXED_POINT
#include 'arch.h'
    
    #define ABS16(x) ((x) < 0 ? (-(x)) : (x))
#define ABS32(x) ((x) < 0 ? (-(x)) : (x))
    
    #endif /* OPUS_HAVE_RTCD */
    
    #endif

    
    /*The number of bits to output at a time.*/
# define EC_SYM_BITS   (8)
/*The total number of bits in each of the state registers.*/
# define EC_CODE_BITS  (32)
/*The maximum symbol value.*/
# define EC_SYM_MAX    ((1U<<EC_SYM_BITS)-1)
/*Bits to shift by to move a symbol into the high-order position.*/
# define EC_CODE_SHIFT (EC_CODE_BITS-EC_SYM_BITS-1)
/*Carry bit of the high-order range symbol.*/
# define EC_CODE_TOP   (((opus_uint32)1U)<<(EC_CODE_BITS-1))
/*Low-order bit of the high-order range symbol.*/
# define EC_CODE_BOT   (EC_CODE_TOP>>EC_SYM_BITS)
/*The number of bits available for the last, partial symbol in the code field.*/
# define EC_CODE_EXTRA ((EC_CODE_BITS-2)%EC_SYM_BITS+1)
#endif

    
      if (!manualCtrl) {
    Page *page;
    // this check is needed in case the document has zero pages
    if ((page = doc->getPage(firstPage))) {
      writeHeader(firstPage, lastPage,
		  page->getMediaBox(),
		  page->getCropBox(),
		  page->getRotate(),
		  pstitle);
    } else {
      error(-1, 'Invalid page %d', firstPage);
      box = new PDFRectangle(0, 0, 1, 1);
      writeHeader(firstPage, lastPage, box, box, 0, pstitle);
      delete box;
    }
    if (mode != psModeForm) {
      writePS('%%BeginProlog\n');
    }
    writeXpdfProcset();
    if (mode != psModeForm) {
      writePS('%%EndProlog\n');
      writePS('%%BeginSetup\n');
    }
    writeDocSetup(doc, catalog, firstPage, lastPage, duplexA);
    if (mode != psModeForm) {
      writePS('%%EndSetup\n');
    }
  }
    
      count = p - buffer;
  if (buffer[0] >= 'a' && buffer[0] <= 'z')
    return 26 * (count - 1) + buffer[0] - 'a' + 1;
  if (buffer[0] >= 'A' && buffer[0] <= 'Z')
    return 26 * (count - 1) + buffer[0] - 'A' + 1;
    
      // get alignment
  if (dict->lookup('Dm', &obj)->isName()) {
    const char *dm = obj.getName();
    
    if (strcmp('H', dm) == 0)
      alignment = transitionHorizontal;
    else if (strcmp('V', dm) == 0)
      alignment = transitionVertical;
  }
  obj.free();
    
        Object *put(const Ref &ref);
    Object *lookup(const Ref &ref, Object *obj);
    
      MediaParameters* getMHParameters() { return &MH; }
  MediaParameters* getBEParameters() { return &BE; }
    
    
    {#ifdef SPLASH_CMYK
  if (cm == splashModeCMYK8) {
    SplashColor rgbSrc;
    SplashColor rgbDest;
    SplashColor rgbBlend;
    cmykToRGB(src, rgbSrc);
    cmykToRGB(dest, rgbDest);
    for (i = 0; i < 3; ++i) {
      rgbBlend[i] = rgbDest[i] > rgbSrc[i] ? rgbDest[i] : rgbSrc[i];
    }
    rgbToCMYK(rgbBlend, blend);
  } else
#endif
  {
    for (i = 0; i < splashColorModeNComps[cm]; ++i) {
      blend[i] = dest[i] > src[i] ? dest[i] : src[i];
    }
  }
}
    
    #include 'StdinPDFDocBuilder.h'
#include 'CachedFile.h'
#include 'StdinCachedFile.h'
    
      // if background compaction is not working, write will stall
  // because of options.level0_stop_writes_trigger
  for (int i = 1000; i < 99999; ++i) {
    db->Put(WriteOptions(), std::to_string(i),
                            std::string(500, 'a' + (i % 26)));
  }
    
      // Initialize pointer options for each column family
  for (size_t i = 0; i < loaded_cf_descs.size(); ++i) {
    auto* loaded_bbt_opt = reinterpret_cast<BlockBasedTableOptions*>(
        loaded_cf_descs[0].options.table_factory->GetOptions());
    // Expect the same as BlockBasedTableOptions will be loaded form file.
    assert(loaded_bbt_opt->block_size == bbt_opts.block_size);
    // However, block_cache needs to be manually initialized as documented
    // in rocksdb/utilities/options_util.h.
    loaded_bbt_opt->block_cache = cache;
  }
  // In addition, as pointer options are initialized with default value,
  // we need to properly initialized all the pointer options if non-defalut
  // values are used before calling DB::Open().
  assert(loaded_cf_descs[0].options.compaction_filter == nullptr);
  loaded_cf_descs[0].options.compaction_filter = compaction_filter.get();
    
      PinnableSlice pinnable_val;
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key1', &pinnable_val);
  assert(s.IsNotFound());
  // Reset PinnableSlice after each use and before each reuse
  pinnable_val.Reset();
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
  assert(pinnable_val == 'value');
  pinnable_val.Reset();
  // The Slice pointed by pinnable_val is not valid after this point
    
    class DbDumpTool {
 public:
  bool Run(const DumpOptions& dump_options,
           rocksdb::Options options = rocksdb::Options());
};
    
    namespace rocksdb {
namespace experimental {
    }
    }
    
      // Return stats as map of {string, double} per-tier
  //
  // Persistent cache can be initialized as a tier of caches. The stats are per
  // tire top-down
  virtual StatsType Stats() = 0;
    
     private:
  void Init(
      const std::string& lua_script,
      const std::vector<std::shared_ptr<RocksLuaCustomLibrary>>& libraries) {
    if (lua_state_) {
      luaL_openlibs(lua_state_);
      for (const auto& library : libraries) {
        luaL_openlib(lua_state_, library->Name(), library->Lib(), 0);
        library->CustomSetup(lua_state_);
      }
      luaL_dostring(lua_state_, lua_script.c_str());
    }
  }