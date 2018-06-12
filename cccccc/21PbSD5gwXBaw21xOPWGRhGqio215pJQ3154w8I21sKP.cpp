
        
                // Version: 1.2
        UNSIGNED_BYTE_3_3_2              = 0x8032,
        UNSIGNED_SHORT_4_4_4_4           = 0x8033,
        UNSIGNED_SHORT_5_5_5_1           = 0x8034,
        UNSIGNED_INT_8_8_8_8             = 0x8035,
        UNSIGNED_INT_10_10_10_2          = 0x8036,
        TEXTURE_BINDING_3D               = 0x806A,
        PACK_SKIP_IMAGES                 = 0x806B,
        PACK_IMAGE_HEIGHT                = 0x806C,
        UNPACK_SKIP_IMAGES               = 0x806D,
        UNPACK_IMAGE_HEIGHT              = 0x806E,
        TEXTURE_3D                       = 0x806F,
        PROXY_TEXTURE_3D                 = 0x8070,
        TEXTURE_DEPTH                    = 0x8071,
        TEXTURE_WRAP_R                   = 0x8072,
        MAX_3D_TEXTURE_SIZE              = 0x8073,
        UNSIGNED_BYTE_2_3_3_REV          = 0x8362,
        UNSIGNED_SHORT_5_6_5             = 0x8363,
        UNSIGNED_SHORT_5_6_5_REV         = 0x8364,
        UNSIGNED_SHORT_4_4_4_4_REV       = 0x8365,
        UNSIGNED_SHORT_1_5_5_5_REV       = 0x8366,
        UNSIGNED_INT_8_8_8_8_REV         = 0x8367,
        UNSIGNED_INT_2_10_10_10_REV      = 0x8368,
        BGR                              = 0x80E0,
        BGRA                             = 0x80E1,
        MAX_ELEMENTS_VERTICES            = 0x80E8,
        MAX_ELEMENTS_INDICES             = 0x80E9,
        CLAMP_TO_EDGE                    = 0x812F,
        TEXTURE_MIN_LOD                  = 0x813A,
        TEXTURE_MAX_LOD                  = 0x813B,
        TEXTURE_BASE_LEVEL               = 0x813C,
        TEXTURE_MAX_LEVEL                = 0x813D,
        SMOOTH_POINT_SIZE_RANGE          = 0x0B12,
        SMOOTH_POINT_SIZE_GRANULARITY    = 0x0B13,
        SMOOTH_LINE_WIDTH_RANGE          = 0x0B22,
        SMOOTH_LINE_WIDTH_GRANULARITY    = 0x0B23,
        ALIASED_LINE_WIDTH_RANGE         = 0x846E,
    
    #include 'precomp.hpp'
    
    const float g_8x32fTab[] =
{
    -128.f, -127.f, -126.f, -125.f, -124.f, -123.f, -122.f, -121.f,
    -120.f, -119.f, -118.f, -117.f, -116.f, -115.f, -114.f, -113.f,
    -112.f, -111.f, -110.f, -109.f, -108.f, -107.f, -106.f, -105.f,
    -104.f, -103.f, -102.f, -101.f, -100.f,  -99.f,  -98.f,  -97.f,
     -96.f,  -95.f,  -94.f,  -93.f,  -92.f,  -91.f,  -90.f,  -89.f,
     -88.f,  -87.f,  -86.f,  -85.f,  -84.f,  -83.f,  -82.f,  -81.f,
     -80.f,  -79.f,  -78.f,  -77.f,  -76.f,  -75.f,  -74.f,  -73.f,
     -72.f,  -71.f,  -70.f,  -69.f,  -68.f,  -67.f,  -66.f,  -65.f,
     -64.f,  -63.f,  -62.f,  -61.f,  -60.f,  -59.f,  -58.f,  -57.f,
     -56.f,  -55.f,  -54.f,  -53.f,  -52.f,  -51.f,  -50.f,  -49.f,
     -48.f,  -47.f,  -46.f,  -45.f,  -44.f,  -43.f,  -42.f,  -41.f,
     -40.f,  -39.f,  -38.f,  -37.f,  -36.f,  -35.f,  -34.f,  -33.f,
     -32.f,  -31.f,  -30.f,  -29.f,  -28.f,  -27.f,  -26.f,  -25.f,
     -24.f,  -23.f,  -22.f,  -21.f,  -20.f,  -19.f,  -18.f,  -17.f,
     -16.f,  -15.f,  -14.f,  -13.f,  -12.f,  -11.f,  -10.f,   -9.f,
      -8.f,   -7.f,   -6.f,   -5.f,   -4.f,   -3.f,   -2.f,   -1.f,
       0.f,    1.f,    2.f,    3.f,    4.f,    5.f,    6.f,    7.f,
       8.f,    9.f,   10.f,   11.f,   12.f,   13.f,   14.f,   15.f,
      16.f,   17.f,   18.f,   19.f,   20.f,   21.f,   22.f,   23.f,
      24.f,   25.f,   26.f,   27.f,   28.f,   29.f,   30.f,   31.f,
      32.f,   33.f,   34.f,   35.f,   36.f,   37.f,   38.f,   39.f,
      40.f,   41.f,   42.f,   43.f,   44.f,   45.f,   46.f,   47.f,
      48.f,   49.f,   50.f,   51.f,   52.f,   53.f,   54.f,   55.f,
      56.f,   57.f,   58.f,   59.f,   60.f,   61.f,   62.f,   63.f,
      64.f,   65.f,   66.f,   67.f,   68.f,   69.f,   70.f,   71.f,
      72.f,   73.f,   74.f,   75.f,   76.f,   77.f,   78.f,   79.f,
      80.f,   81.f,   82.f,   83.f,   84.f,   85.f,   86.f,   87.f,
      88.f,   89.f,   90.f,   91.f,   92.f,   93.f,   94.f,   95.f,
      96.f,   97.f,   98.f,   99.f,  100.f,  101.f,  102.f,  103.f,
     104.f,  105.f,  106.f,  107.f,  108.f,  109.f,  110.f,  111.f,
     112.f,  113.f,  114.f,  115.f,  116.f,  117.f,  118.f,  119.f,
     120.f,  121.f,  122.f,  123.f,  124.f,  125.f,  126.f,  127.f,
     128.f,  129.f,  130.f,  131.f,  132.f,  133.f,  134.f,  135.f,
     136.f,  137.f,  138.f,  139.f,  140.f,  141.f,  142.f,  143.f,
     144.f,  145.f,  146.f,  147.f,  148.f,  149.f,  150.f,  151.f,
     152.f,  153.f,  154.f,  155.f,  156.f,  157.f,  158.f,  159.f,
     160.f,  161.f,  162.f,  163.f,  164.f,  165.f,  166.f,  167.f,
     168.f,  169.f,  170.f,  171.f,  172.f,  173.f,  174.f,  175.f,
     176.f,  177.f,  178.f,  179.f,  180.f,  181.f,  182.f,  183.f,
     184.f,  185.f,  186.f,  187.f,  188.f,  189.f,  190.f,  191.f,
     192.f,  193.f,  194.f,  195.f,  196.f,  197.f,  198.f,  199.f,
     200.f,  201.f,  202.f,  203.f,  204.f,  205.f,  206.f,  207.f,
     208.f,  209.f,  210.f,  211.f,  212.f,  213.f,  214.f,  215.f,
     216.f,  217.f,  218.f,  219.f,  220.f,  221.f,  222.f,  223.f,
     224.f,  225.f,  226.f,  227.f,  228.f,  229.f,  230.f,  231.f,
     232.f,  233.f,  234.f,  235.f,  236.f,  237.f,  238.f,  239.f,
     240.f,  241.f,  242.f,  243.f,  244.f,  245.f,  246.f,  247.f,
     248.f,  249.f,  250.f,  251.f,  252.f,  253.f,  254.f,  255.f
};
    
      vector<int64_t> sizes = {2, 2};
  tensor2->resize(sizes);
  tensor2->fill(4);
  tensor->add(*tensor2, 1);
  assert(tensor->nDim() == 2);
    
    // store all colliding object
struct GodotAllConvexResultCallback : public btCollisionWorld::ConvexResultCallback {
public:
	PhysicsDirectSpaceState::ShapeResult *m_results;
	int m_resultMax;
	int count;
	const Set<RID> *m_exclude;
    }
    
    	void _input(const Ref<InputEvent> &p_event);
	void _members_gui_input(const Ref<InputEvent> &p_event);
	void _on_nodes_delete();
	void _on_nodes_duplicate();
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
    namespace jpgd {
    }
    
    /*The number of extra bits of precision at which to store rate metrics.*/
# define OC_BIT_SCALE  (6)
/*The number of extra bits of precision at which to store RMSE metrics.
  This must be at least half OC_BIT_SCALE (rounded up).*/
# define OC_RMSE_SCALE (5)
/*The number of bins to partition statistics into.*/
# define OC_SAD_BINS   (24)
/*The number of bits of precision to drop from SAD scores to assign them to a
   bin.*/
# define OC_SAD_SHIFT  (9)
    
      std::string comparator_;
  uint64_t log_number_;
  uint64_t prev_log_number_;
  uint64_t next_file_number_;
  SequenceNumber last_sequence_;
  bool has_comparator_;
  bool has_log_number_;
  bool has_prev_log_number_;
  bool has_next_file_number_;
  bool has_last_sequence_;
    
    
    {}  // namespace leveldb
    
    #endif  // STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_

    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
    class WritableFile;
    
      size_t size() const { return size_; }
  Iterator* NewIterator(const Comparator* comparator);
    
    
    {  MockEnvTest()
      : env_(new MockEnv(Env::Default())) {
  }
  ~MockEnvTest() {
    delete env_;
  }
};
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
    using namespace rocksdb;
    
    
    {
    {    return true;
  }
// @lint-ignore TXT4 T25377293 Grandfathered in
};
    
    // @lint-ignore TXT4 T25377293 Grandfathered in
#endif  // JAVA_ROCKSJNI_STATISTICSJNI_H_
    
      std::mutex              mutex_;
  std::condition_variable cv_;
  // sync points that have been passed through
  std::unordered_set<std::string> cleared_points_;
  bool enabled_ = false;
  int num_callbacks_running_ = 0;
    
      // Updates flush_state_ using ShouldFlushNow()
  void UpdateFlushState();
    
    class Comparator;
class InternalIterator;
class Env;
class Arena;