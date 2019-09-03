
        
        
    {  bool isChild() {
    return pid == 0;
  }
};
    
    
    {} // namespace caffe2

    
    namespace caffe2 {
    }
    
    #endif  // GRPC_TEST_CPP_INTEROP_CLIENT_HELPER_H

    
    namespace grpc_impl {
    }
    
    
    {    const protobuf::Descriptor* desc = desc_pool_->FindMessageTypeByName(type);
    const protobuf::Descriptor* ref_desc =
        ref_desc_pool_->FindMessageTypeByName(type);
    EXPECT_TRUE(desc != nullptr);
    EXPECT_TRUE(ref_desc != nullptr);
    EXPECT_EQ(desc->DebugString(), ref_desc->DebugString());
  }
    
        // Get the map of indexes and check if any were postconstructing or being deleted.
    // Kick off coroutines to finish the respective operations
    {
        std::map<sindex_name_t, secondary_index_t> sindexes;
        get_secondary_indexes(&sindex_block, &sindexes);
        for (auto it = sindexes.begin(); it != sindexes.end(); ++it) {
            if (it->second.being_deleted) {
                coro_t::spawn_sometime(std::bind(clear_sindex,
                                                 it->second.id, drainer.lock()));
            } else if (!it->second.post_construction_complete()) {
                coro_t::spawn_sometime(std::bind(&rdb_protocol::resume_construct_sindex,
                                                 it->second.id,
                                                 it->second.needs_post_construction_range,
                                                 this,
                                                 drainer.lock()));
            }
        }
    }
    
    ql::grouped_t<ql::stream_t> read_row_via_sindex(
        store_t *store,
        const sindex_name_t &sindex_name,
        int sindex_value) {
    cond_t dummy_interruptor;
    read_token_t token;
    store->new_read_token(&token);
    }
    
    	/*
	Convert legacy user-aliases.cmd to new name user_aliases.cmd
	*/
	PathCombine(legacyUserAliasesPath, configDirPath, L'user-aliases.cmd');
	if (PathFileExists(legacyUserAliasesPath))
	{
		PathCombine(userAliasesPath, configDirPath, L'user_aliases.cmd');
    }
    
      Ref *fontIDs;			// list of object IDs of all used fonts
  int fontIDLen;		// number of entries in fontIDs array
  int fontIDSize;		// size of fontIDs array
  Ref *fontFileIDs;		// list of object IDs of all embedded fonts
  int fontFileIDLen;		// number of entries in fontFileIDs array
  int fontFileIDSize;		// size of fontFileIDs array
  GooString **fontFileNames;	// list of names of all embedded external fonts
  GooString **psFileNames;	// list of names of all embedded external fonts
  int fontFileNameLen;		// number of entries in fontFileNames array
  int fontFileNameSize;		// size of fontFileNames array
  int nextTrueTypeNum;		// next unique number to append to a TrueType
				//   font name
  PSFont8Info *font8Info;	// info for 8-bit fonts
  int font8InfoLen;		// number of entries in font8Info array
  int font8InfoSize;		// size of font8Info array
  PSFont16Enc *font16Enc;	// encodings for substitute 16-bit fonts
  int font16EncLen;		// number of entries in font16Enc array
  int font16EncSize;		// size of font16Enc array
  Ref *imgIDs;			// list of image IDs for in-memory images
  int imgIDLen;			// number of entries in imgIDs array
  int imgIDSize;		// size of imgIDs array
  Ref *formIDs;			// list of IDs for predefined forms
  int formIDLen;		// number of entries in formIDs array
  int formIDSize;		// size of formIDs array
  GooList *xobjStack;		// stack of XObject dicts currently being
				//   processed
  int numSaves;			// current number of gsaves
  int numTilingPatterns;	// current number of nested tiling patterns
  int nextFunc;			// next unique number to use for a function
    
    // A '1' in this array means the character is white space.  A '1' or
// '2' means the character ends a name or command.
static const char specialChars[256] = {
  1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,   // 0x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 1x
  1, 0, 0, 0, 0, 2, 0, 0, 2, 2, 0, 0, 0, 0, 0, 2,   // 2x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0,   // 3x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 4x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0,   // 5x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 6x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 0, 0,   // 7x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 8x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 9x
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // ax
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // bx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // cx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // dx
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // ex
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0    // fx
};
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
      // Get the next object from the input stream.
  Object *getObj(Object *obj, Guchar *fileKey = NULL,
		 CryptAlgorithm encAlgorithm = cryptRC4, int keyLength = 0,
		 int objNum = 0, int objGen = 0);
  
  Object *getObj(Object *obj, Guchar *fileKey,
     CryptAlgorithm encAlgorithm, int keyLength,
     int objNum, int objGen, std::set<int> *fetchOriginatorNums);
    
    
    {  return item ? item->item.copy(obj) : obj->initNull();
}

    
    class PopplerObjectCache
{
  public:
    PopplerObjectCache (int cacheSizeA, XRef *xrefA);
    ~PopplerObjectCache();
    }
    
    void PreScanOutputDev::clearStats() {
  mono = gTrue;
  gray = gTrue;
  transparency = gFalse;
  gdi = gTrue;
  level1PSBug = gFalse;
}

    
    
    {  if (ownerPassword || userPassword) {
    authData = makeAuthData(ownerPassword, userPassword);
  } else {
    authData = NULL;
  }
  ok = authorize(authData);
  if (authData) {
    freeAuthData(authData);
  }
  for (i = 0; !ok && i < 3; ++i) {
    if (!(authData = getAuthData())) {
      break;
    }
    ok = authorize(authData);
    if (authData) {
      freeAuthData(authData);
    }
  }
  if (!ok) {
    error(-1, 'Incorrect password');
  }
  return ok;
}
    
    class GooString;
class PDFDoc;
struct XpdfSecurityHandler;
    
    GBool SplashOutputDev::alphaImageSrc(void *data, SplashColorPtr colorLine,
				     Guchar *alphaLine) {
  SplashOutImageData *imgData = (SplashOutImageData *)data;
  Guchar *p, *aq;
  SplashColorPtr q, col;
  GfxRGB rgb;
  GfxGray gray;
#if SPLASH_CMYK
  GfxCMYK cmyk;
#endif
  Guchar alpha;
  int nComps, x, i;
    }
    
    const float INNER_TIME_128[12][32] = {
    {-8.7f, -8.7f, -8.7f, -8.7f, -8.7f, -8.7f, -8.7f, -8.7f,
     -6.0f, -6.0f, -6.0f, -6.0f, -6.0f, -6.0f, -6.0f, -6.0f,
     -3.4f, -3.4f, -3.4f, -3.4f, -3.4f, -3.4f, -3.4f, -3.4f,
     -0.7f, -0.7f, -0.7f, -0.7f, -0.7f, -0.7f, -0.7f, -0.7f},
    {2.0f, 2.0f, 2.0f,  2.0f,  2.0f,  2.0f,  2.0f,  2.0f,  4.6f,  4.6f, 4.6f,
     4.6f, 4.6f, 4.6f,  4.6f,  4.6f,  7.3f,  7.3f,  7.3f,  7.3f,  7.3f, 7.3f,
     7.3f, 7.3f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f, 10.0f},
    {15.3f, 15.3f, 15.3f, 15.3f, 15.3f, 15.3f, 15.3f, 15.3f,
     18.0f, 18.0f, 18.0f, 18.0f, 18.0f, 18.0f, 18.0f, 18.0f,
     20.6f, 20.6f, 20.6f, 20.6f, 20.6f, 20.6f, 20.6f, 20.6f,
     23.3f, 23.3f, 23.3f, 23.3f, 23.3f, 23.3f, 23.3f, 23.3f},
    {25.9f, 25.9f, 25.9f, 25.9f, 25.9f, 25.9f, 25.9f, 25.9f,
     28.6f, 28.6f, 28.6f, 28.6f, 28.6f, 28.6f, 28.6f, 28.6f,
     31.3f, 31.3f, 31.3f, 31.3f, 31.3f, 31.3f, 31.3f, 31.3f,
     33.9f, 33.9f, 33.9f, 33.9f, 33.9f, 33.9f, 33.9f, 33.9f},
    {44.6f, 44.6f, 44.6f, 44.6f, 44.6f, 44.6f, 44.6f, 44.6f,
     47.3f, 47.3f, 47.3f, 47.3f, 47.3f, 47.3f, 47.3f, 47.3f,
     49.9f, 49.9f, 49.9f, 49.9f, 49.9f, 49.9f, 49.9f, 49.9f,
     52.6f, 52.6f, 52.6f, 52.6f, 52.6f, 52.6f, 52.6f, 52.6f},
    {55.3f, 55.3f, 55.3f, 55.3f, 55.3f, 55.3f, 55.3f, 55.3f,
     57.9f, 57.9f, 57.9f, 57.9f, 57.9f, 57.9f, 57.9f, 57.9f,
     60.6f, 60.6f, 60.6f, 60.6f, 60.6f, 60.6f, 60.6f, 60.6f,
     63.3f, 63.3f, 63.3f, 63.3f, 63.3f, 63.3f, 63.3f, 63.3f},
    {68.6f, 68.6f, 68.6f, 68.6f, 68.6f, 68.6f, 68.6f, 68.6f,
     71.3f, 71.3f, 71.3f, 71.3f, 71.3f, 71.3f, 71.3f, 71.3f,
     73.9f, 73.9f, 73.9f, 73.9f, 73.9f, 73.9f, 73.9f, 73.9f,
     76.6f, 76.6f, 76.6f, 76.6f, 76.6f, 76.6f, 76.6f, 76.6f},
    {79.2f, 79.2f, 79.2f, 79.2f, 79.2f, 79.2f, 79.2f, 79.2f,
     81.9f, 81.9f, 81.9f, 81.9f, 81.9f, 81.9f, 81.9f, 81.9f,
     84.6f, 84.9f, 84.9f, 84.9f, 84.9f, 84.9f, 84.9f, 84.9f,
     87.2f, 87.2f, 87.2f, 87.2f, 87.2f, 87.2f, 87.2f, 87.2f},
    {97.9f,  97.9f,  97.9f,  97.9f,  97.9f,  97.9f,  97.9f,  97.9f,
     100.6f, 100.6f, 100.6f, 100.6f, 100.6f, 100.6f, 100.6f, 100.6f,
     103.2f, 103.2f, 103.2f, 103.2f, 103.2f, 103.2f, 103.2f, 103.2f,
     105.9f, 105.9f, 105.9f, 105.9f, 105.9f, 105.9f, 105.9f, 105.9f},
    {108.6f, 108.6f, 108.6f, 108.6f, 108.6f, 108.6f, 108.6f, 108.6f,
     111.2f, 111.2f, 111.2f, 111.2f, 111.2f, 111.2f, 111.2f, 111.2f,
     113.9f, 113.9f, 113.9f, 113.9f, 113.9f, 113.9f, 113.9f, 113.9f,
     116.6f, 116.6f, 116.6f, 116.6f, 116.6f, 116.6f, 116.6f, 116.6f},
    {121.9f, 121.9f, 121.9f, 121.9f, 121.9f, 121.9f, 121.9f, 121.9f,
     124.6f, 124.6f, 124.6f, 124.6f, 124.6f, 124.6f, 124.6f, 124.6f,
     127.2f, 127.2f, 127.2f, 127.2f, 127.2f, 127.2f, 127.2f, 127.2f,
     129.9f, 129.9f, 129.9f, 129.9f, 129.9f, 129.9f, 129.9f, 129.9f},
    {132.5f, 132.5f, 132.5f, 132.5f, 132.5f, 132.5f, 132.5f, 132.5f,
     135.2f, 135.2f, 135.2f, 135.2f, 135.2f, 135.2f, 135.2f, 135.2f,
     137.9f, 137.9f, 137.9f, 137.9f, 137.9f, 137.9f, 137.9f, 137.9f,
     140.5f, 140.5f, 140.5f, 140.5f, 140.5f, 140.5f, 140.5f, 140.5f}};
    
    TEST_F(GraphSegmentorTest, test_segment_graph) {
  {
    GraphSegmentor segmentor;
    segmentor.Init(5.0);
    segmentor.SegmentGraph(num_vertices_, num_edges_, nullptr, false);
    EXPECT_EQ(0, segmentor.universe().GetSetsNum());
    segmentor.SegmentGraph(num_vertices_, num_edges_, edges_, true);
    EXPECT_EQ(3, segmentor.universe().GetSetsNum());
  }
  {
    GraphSegmentor segmentor;
    segmentor.Init(6.0);
    segmentor.SegmentGraph(num_vertices_, num_edges_, edges_);
    EXPECT_EQ(1, segmentor.universe().GetSetsNum());
  }
  {
    GraphSegmentor segmentor;
    segmentor.Init(2.0);
    segmentor.SegmentGraph(num_vertices_, num_edges_, edges_);
    EXPECT_EQ(4, segmentor.universe().GetSetsNum());
  }
}
    
    
    {  std::vector<NaviSpeedTsPoint> points;
  EXPECT_EQ(Status::OK(), graph.Solve(&points));
  EXPECT_NEAR(0.0, points.front().s, 0.1);
  EXPECT_NEAR(0.0, points.front().t, 0.1);
  EXPECT_NEAR(5.0, points.front().v, 0.1);
  for (const auto& point : points) {
    if (point.s > 15.0) {
      auto obstacle_distance = 5.0 * point.t + 10.0;
      EXPECT_GE(obstacle_distance, point.s);
      EXPECT_NEAR(5.0, point.v, 0.1);
    }
  }
}
    
    namespace apollo {
namespace planning {
    }
    }
    
    Scenario::Scenario(const ScenarioConfig& config, const ScenarioContext* context)
    : config_(config), scenario_context_(context) {
  name_ = ScenarioConfig::ScenarioType_Name(config.scenario_type());
}
    
    Status Rerouting::ApplyRule(Frame* const frame,
                            ReferenceLineInfo* const reference_line_info) {
  frame_ = frame;
  reference_line_info_ = reference_line_info;
  if (!ChangeLaneFailRerouting()) {
    return Status(common::PLANNING_ERROR,
                  'In un-successful lane change case, rerouting failed');
  }
  return Status::OK();
}
    
    #define ALOG_MODULE_STREAM_INFO(module)                         \
  google::LogMessage(__FILE__, __LINE__, google::INFO).stream() \
      << LEFT_BRACKET << module << RIGHT_BRACKET
    
      Eigen::Matrix3d pos_var = mapper_->get_position_uncertainty();
  obj->center_uncertainty(0) = static_cast<float>(pos_var(0));
  obj->center_uncertainty(1) = static_cast<float>(pos_var(1));
  obj->center_uncertainty(2) = static_cast<float>(pos_var(2));
    
    #pragma once
    
    
    {  bool SameResultWhenAppended(const Slice& prefix) const override {
    return InDomain(prefix);
  }
};
    
    
    {  const char* Name() const override { return 'PutOperator'; }
};
    
      void UnLock() override { mutex_.unlock(); }
    
      if (bytes_left_ >= num_bytes) {
    bytes_left_ -= num_bytes;
    return 0;
  }
  // The frequency to get time inside DB mutex is less than one per refill
  // interval.
  auto time_now = NowMicrosMonotonic(env);
    
    
    {  std::unique_ptr<RateLimiter> low_pri_rate_limiter_;
};
    
      // open DB with two column families
  std::vector<ColumnFamilyDescriptor> column_families;
  // have to open default column family
  column_families.push_back(ColumnFamilyDescriptor(
      kDefaultColumnFamilyName, ColumnFamilyOptions()));
  // open the new one, too
  column_families.push_back(ColumnFamilyDescriptor(
      'new_cf', ColumnFamilyOptions()));
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(DBOptions(), kDBPath, column_families, &handles, &db);
  assert(s.ok());
    
    
    {class DbUndumpTool {
 public:
  bool Run(const UndumpOptions& undump_options,
           rocksdb::Options options = rocksdb::Options());
};
}  // namespace rocksdb
#endif  // ROCKSDB_LITE
