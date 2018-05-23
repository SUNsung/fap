
        
         private:
  // The following methods are implemented by platform-specific implementations
  // of this class.
  //
  // Start/StopListening are called when transitioning between zero and nonzero
  // registered accelerators. StartListening will be called after
  // RegisterAcceleratorImpl and StopListening will be called after
  // UnregisterAcceleratorImpl.
  //
  // For RegisterAcceleratorImpl, implementations return false if registration
  // did not complete successfully.
  virtual void StartListening() = 0;
  virtual void StopListening() = 0;
  virtual bool RegisterAcceleratorImpl(const ui::Accelerator& accelerator) = 0;
  virtual void UnregisterAcceleratorImpl(
      const ui::Accelerator& accelerator) = 0;
    
    // filenames
const base::FilePath::CharType kCacheDirname[] = FPL('Cache');
const base::FilePath::CharType kChannelIDFilename[] = FPL('Origin Bound Certs');
const base::FilePath::CharType kCookieFilename[] = FPL('Cookies');
const base::FilePath::CharType kCRLSetFilename[] =
    FPL('Certificate Revocation Lists');
const base::FilePath::CharType kCustomDictionaryFileName[] =
    FPL('Custom Dictionary.txt');
const base::FilePath::CharType kExtensionActivityLogFilename[] =
    FPL('Extension Activity');
const base::FilePath::CharType kExtensionsCookieFilename[] =
    FPL('Extension Cookies');
const base::FilePath::CharType kFirstRunSentinel[] = FPL('First Run');
const base::FilePath::CharType kGCMStoreDirname[] = FPL('GCM Store');
const base::FilePath::CharType kLocalStateFilename[] = FPL('Local State');
const base::FilePath::CharType kLocalStorePoolName[] = FPL('LocalStorePool');
const base::FilePath::CharType kMediaCacheDirname[] = FPL('Media Cache');
const base::FilePath::CharType kNetworkPersistentStateFilename[] =
    FPL('Network Persistent State');
const base::FilePath::CharType kOfflinePageArchviesDirname[] =
    FPL('Offline Pages/archives');
const base::FilePath::CharType kOfflinePageMetadataDirname[] =
    FPL('Offline Pages/metadata');
const base::FilePath::CharType kPreferencesFilename[] = FPL('Preferences');
const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[] =
    FPL('Protected Preferences');
const base::FilePath::CharType kReadmeFilename[] = FPL('README');
const base::FilePath::CharType kResetPromptMementoFilename[] =
    FPL('Reset Prompt Memento');
const base::FilePath::CharType kSafeBrowsingBaseFilename[] =
    FPL('Safe Browsing');
const base::FilePath::CharType kSecurePreferencesFilename[] =
    FPL('Secure Preferences');
const base::FilePath::CharType kServiceStateFileName[] = FPL('Service State');
const base::FilePath::CharType kSingletonCookieFilename[] =
    FPL('SingletonCookie');
const base::FilePath::CharType kSingletonLockFilename[] = FPL('SingletonLock');
const base::FilePath::CharType kSingletonSocketFilename[] =
    FPL('SingletonSocket');
const base::FilePath::CharType kSupervisedUserSettingsFilename[] =
    FPL('Managed Mode Settings');
const base::FilePath::CharType kThemePackFilename[] = FPL('Cached Theme.pak');
const base::FilePath::CharType kThemePackMaterialDesignFilename[] =
    FPL('Cached Theme Material Design.pak');
const base::FilePath::CharType kWebAppDirname[] = FPL('Web Applications');
    
    bool TessUnlvRenderer::AddImageHandler(TessBaseAPI* api) {
  const std::unique_ptr<const char[]> unlv(api->GetUNLVText());
  if (unlv == nullptr) return false;
    }
    
      // Compute the number of unichars in the label.
  GenericVector<UNICHAR_ID> encoding;
  if (!unicharset.encode_string(label, true, &encoding, nullptr, nullptr)) {
    tprintf('Not outputting illegal unichar %s\n', label);
    return;
  }
    
      // Counts here are of blobs in the rebuild_word / unichars in best_choice.
  *leading_pos = *trailing_pos = SP_NORMAL;
  int leading_outliers = 0;
  int trailing_outliers = 0;
  int num_normal = 0;
  float normal_certainty_total = 0.0f;
  float worst_normal_certainty = 0.0f;
  ScriptPos last_pos = SP_NORMAL;
  int num_blobs = word->rebuild_word->NumBlobs();
  for (int b = 0; b < num_blobs; ++b) {
    TBOX box = word->rebuild_word->blobs[b]->bounding_box();
    ScriptPos pos = SP_NORMAL;
    if (box.bottom() >= super_y_bottom) {
      pos = SP_SUPERSCRIPT;
    } else if (box.top() <= sub_y_top) {
      pos = SP_SUBSCRIPT;
    }
    if (pos == SP_NORMAL) {
      if (word->best_choice->unichar_id(b) != 0) {
        float char_certainty = word->best_choice->certainty(b);
        if (char_certainty < worst_normal_certainty) {
          worst_normal_certainty = char_certainty;
        }
        num_normal++;
        normal_certainty_total += char_certainty;
      }
      if (trailing_outliers == b) {
        leading_outliers = trailing_outliers;
        *leading_pos = last_pos;
      }
      trailing_outliers = 0;
    } else {
      if (last_pos == pos) {
        trailing_outliers++;
      } else {
        trailing_outliers = 1;
      }
    }
    last_pos = pos;
  }
  *trailing_pos = last_pos;
  if (num_normal >= 3) {  // throw out the worst as an outlier.
    num_normal--;
    normal_certainty_total -= worst_normal_certainty;
  }
  if (num_normal > 0) {
    *avg_certainty = normal_certainty_total / num_normal;
    *unlikely_threshold = superscript_worse_certainty * (*avg_certainty);
  }
  if (num_normal == 0 ||
      (leading_outliers == 0 && trailing_outliers == 0)) {
    return;
  }
    
    
// Returns the median value of the vector, given that the values are
// circular, with the given modulus. Values may be signed or unsigned,
// eg range from -pi to pi (modulus 2pi) or from 0 to 2pi (modulus 2pi).
// NOTE that the array is shuffled, but the time taken is linear.
// An assumption is made that most of the values are spread over no more than
// half the range, but wrap-around is accounted for if the median is near
// the wrap-around point.
// Cannot be a member of GenericVector, as it makes heavy used of LLSQ.
// T must be an integer or float/double type.
template<typename T> T MedianOfCircularValues(T modulus, GenericVector<T>* v) {
  LLSQ stats;
  T halfrange = static_cast<T>(modulus / 2);
  int num_elements = v->size();
  for (int i = 0; i < num_elements; ++i) {
    stats.add((*v)[i], (*v)[i] + halfrange);
  }
  bool offset_needed = stats.y_variance() < stats.x_variance();
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] += halfrange;
    }
  }
  int median_index = v->choose_nth_item(num_elements / 2);
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] -= halfrange;
    }
  }
  return (*v)[median_index];
}
    
    const int16_t idirtab[] = {
  1000, 0, 998, 49, 995, 98, 989, 146,
  980, 195, 970, 242, 956, 290, 941, 336,
  923, 382, 903, 427, 881, 471, 857, 514,
  831, 555, 803, 595, 773, 634, 740, 671,
  707, 707, 671, 740, 634, 773, 595, 803,
  555, 831, 514, 857, 471, 881, 427, 903,
  382, 923, 336, 941, 290, 956, 242, 970,
  195, 980, 146, 989, 98, 995, 49, 998,
  0, 1000, -49, 998, -98, 995, -146, 989,
  -195, 980, -242, 970, -290, 956, -336, 941,
  -382, 923, -427, 903, -471, 881, -514, 857,
  -555, 831, -595, 803, -634, 773, -671, 740,
  -707, 707, -740, 671, -773, 634, -803, 595,
  -831, 555, -857, 514, -881, 471, -903, 427,
  -923, 382, -941, 336, -956, 290, -970, 242,
  -980, 195, -989, 146, -995, 98, -998, 49,
  -1000, 0, -998, -49, -995, -98, -989, -146,
  -980, -195, -970, -242, -956, -290, -941, -336,
  -923, -382, -903, -427, -881, -471, -857, -514,
  -831, -555, -803, -595, -773, -634, -740, -671,
  -707, -707, -671, -740, -634, -773, -595, -803,
  -555, -831, -514, -857, -471, -881, -427, -903,
  -382, -923, -336, -941, -290, -956, -242, -970,
  -195, -980, -146, -989, -98, -995, -49, -998,
  0, -1000, 49, -998, 98, -995, 146, -989,
  195, -980, 242, -970, 290, -956, 336, -941,
  382, -923, 427, -903, 471, -881, 514, -857,
  555, -831, 595, -803, 634, -773, 671, -740,
  707, -707, 740, -671, 773, -634, 803, -595,
  831, -555, 857, -514, 881, -471, 903, -427,
  923, -382, 941, -336, 956, -290, 970, -242,
  980, -195, 989, -146, 995, -98, 998, -49
};
    
      r['sycall_addr_modified'] = syscall_addr_modified;
  r['text_segment_hash'] = text_segment_hash;
  results.push_back(r);
    
      /**
   * @brief Return all events added by this EventSubscriber within start, stop.
   *
   * This is used internally (for the most part) by EventSubscriber::genTable.
   *
   * @param yield The Row yield method.
   * @param start Inclusive lower bound time limit.
   * @param stop Inclusive upper bound time limit.
   * @return Set of event rows matching time limits.
   */
  virtual void get(RowYield& yield, EventTime start, EventTime stop) final;
    
      /**
   * @brief A constructor which can be used to concisely express the status of
   * an operation.
   *
   * @param c a status code. The idiom is that a zero status code indicates a
   * successful operation and a non-zero status code indicates a failed
   * operation.
   * @param m a message indicating some extra detail regarding the operation.
   * If all operations were successful, this message should be 'OK'.
   * Otherwise, it doesn't matter what the string is, as long as both the
   * setter and caller agree.
   */
  Status(int c, std::string m) : code_(c), message_(std::move(m)) {}
    
      char* buffer = (char*)malloc(range.length + 1);
  if (buffer == nullptr) {
    return '';
  }
  memset(buffer, 0, range.length + 1);
    
    #include <gtest/gtest.h>
    
      auto status = ::strerror_s(buffer.data(), buffer.size(), errnum);
  if (status != 0) {
    return '';
  }
    
    extern JSClass  *jsb_cocos2d_Physics3DHingeConstraint_class;
extern JSObject *jsb_cocos2d_Physics3DHingeConstraint_prototype;
    
    bool js_cocos2dx_studio_ProcessBase_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ProcessBase_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ProcessBase(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ProcessBase_play(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_pause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_getRawDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_resume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_setIsComplete(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_update(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_getCurrentFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_isComplete(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_getCurrentPercent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_setIsPause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_getProcessScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_isPause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_isPlaying(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_setProcessScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_setIsPlaying(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_ProcessBase(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
#endif // __cocos2dx_experimental_h__

    
        cobj = (cocos2d::PhysicsWorld*)tolua_tousertype(tolua_S,1,0);
    
    
#endif

    
    	AddPair()
	{
		m_world->SetGravity(b2Vec2(0.0f,0.0f));
		{
			b2CircleShape shape;
			shape.m_p.SetZero();
			shape.m_radius = 0.1f;
    }
    }
    
    
    {
    {		case 'd':
			{
				m_body->ApplyTorque(-50.0f, true);
			}
			break;
		}
	}
    
    
    {		Test::Step(settings);
		m_debugDraw.DrawString(5, m_textLine, 'Keys: (d) dynamic, (s) static, (k) kinematic');
		m_textLine += DRAW_STRING_NEW_LINE;
	}
    
    			b2PolygonShape shape;
			shape.Set(vertices, 3);
    
    TEST(IOBuf, QueueAppenderInsertClone) {
  IOBuf buf{IOBuf::CREATE, 100};
  folly::IOBufQueue queue;
  QueueAppender appender{&queue, 100};
  // Buffer is shared, so we create a new buffer to write to
  appender.insert(buf);
  uint8_t x = 42;
  appender.pushAtMost(&x, 1);
  EXPECT_EQ(2, queue.front()->countChainElements());
  EXPECT_EQ(0, queue.front()->length());
  EXPECT_LT(0, queue.front()->tailroom());
  EXPECT_EQ(1, queue.front()->next()->length());
  EXPECT_EQ(x, queue.front()->next()->data()[0]);
}
    
      EXPECT_EQ(hash(*empty), hash(empty));
  EXPECT_NE(0, hash(empty));
    
    TEST_F(OrderingTest, ordering) {
  EXPECT_EQ(-1, int(ordering::lt));
  EXPECT_EQ(0, int(ordering::eq));
  EXPECT_EQ(+1, int(ordering::gt));
}
    
    
    {} // namespace folly

    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.try_dequeue(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
      struct Node : public hazptr_obj_base<Node, Atom> {
    T value_;
    Node* next_;
    }
    
    /** Set implemented as an ordered singly-linked list.
 *
 *  A single writer thread may add or remove elements. Multiple reader
 *  threads may search the set concurrently with each other and with
 *  the writer's operations.
 */
template <typename T, template <typename> class Atom = std::atomic>
class HazptrSWMRSet {
  template <typename Node>
  struct Reclaimer {
    void operator()(Node* p) {
      delete p;
    }
  };
    }
    
    #include <folly/Utility.h>
#include <folly/portability/GTest.h>