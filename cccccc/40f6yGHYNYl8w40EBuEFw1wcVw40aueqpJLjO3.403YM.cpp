
        
        
    {}%
    
      static CFPointeeInfo forTypedef(const clang::TypedefNameDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = decl;
    return info;
  }
    
        void emitDiagnosticMessage(clang::FullSourceLoc Loc,
                               clang::PresumedLoc PLoc,
                               clang::DiagnosticsEngine::Level Level,
                               StringRef Message,
                               ArrayRef<clang::CharSourceRange> Ranges,
                               clang::DiagOrStoredDiag Info) override {
      if (isInSwiftBuffers(Loc)) {
        // FIXME: Ideally, we'd report non-suppressed diagnostics on synthetic
        // buffers, printing their names (eg. <swift-imported-modules>:...) but
        // this risks printing _excerpts_ of those buffers to stderr too; at
        // present the synthetic buffers are 'large blocks of null bytes' which
        // we definitely don't want to print out. So until we have some clever
        // way to print the name but suppress printing excerpts, we just replace
        // the Loc with an invalid one here, which suppresses both.
        Loc = clang::FullSourceLoc();
        if (shouldSuppressDiagInSwiftBuffers(Info))
          return;
      }
      callback(Loc, Level, Message);
    }
    
    using namespace swift;
using namespace Demangle;
    
    #endif
    /**
	 * Find the convex hull of a point cloud using 'Gift-wrap' algorithm - start
     * with an extremal point, and walk around the outside edge by testing
     * angles.
     * 
     * Runs in O(N*S) time where S is number of sides of resulting polygon.
     * Worst case: point cloud is all vertices of convex polygon -> O(N^2).
     * 
     * There may be faster algorithms to do this, should you need one -
     * this is just the simplest. You can get O(N log N) expected time if you
     * try, I think, and O(N) if you restrict inputs to simple polygons.
     * 
     * Returns null if number of vertices passed is less than 3.
     * 
	 * Results should be passed through convex decomposition afterwards
	 * to ensure that each shape has few enough points to be used in Box2d.
	 *
     * FIXME?: May be buggy with colinear points on hull. Couldn't find a test
     * case that resulted in wrong behavior. If one turns up, the solution is to
     * supplement angle check with an equality resolver that always picks the
     * longer edge. I think the current solution is working, though it sometimes
     * creates an extra edge along a line.
     */
	
b2Polygon ConvexHull(b2Vec2* v, int nVert) {
        float32* cloudX = new float32[nVert];
        float32* cloudY = new float32[nVert];
        for (int32 i = 0; i < nVert; ++i) {
            cloudX[i] = v[i].x;
            cloudY[i] = v[i].y;
        }
        b2Polygon result = ConvexHull(cloudX, cloudY, nVert);
		delete[] cloudX;
		delete[] cloudY;
		return result;
}
	
b2Polygon ConvexHull(float32* cloudX, float32* cloudY, int32 nVert) {
		b2Assert(nVert > 2);
        int32* edgeList = new int32[nVert];
        int32 numEdges = 0;
		
	float32 minY = 1e10;
        int32 minYIndex = nVert;
        for (int32 i = 0; i < nVert; ++i) {
            if (cloudY[i] < minY) {
                minY = cloudY[i];
                minYIndex = i;
            }
        }
		
        int32 startIndex = minYIndex;
        int32 winIndex = -1;
        float32 dx = -1.0f;
        float32 dy = 0.0f;
        while (winIndex != minYIndex) {
            float32 newdx = 0.0f;
            float32 newdy = 0.0f;
            float32 maxDot = -2.0f;
            for (int32 i = 0; i < nVert; ++i) {
                if (i == startIndex)
                    continue;
                newdx = cloudX[i] - cloudX[startIndex];
                newdy = cloudY[i] - cloudY[startIndex];
                float32 nrm = sqrtf(newdx * newdx + newdy * newdy);
                nrm = (nrm == 0.0f) ? 1.0f : nrm;
                newdx /= nrm;
                newdy /= nrm;
                
                //Cross and dot products act as proxy for angle
                //without requiring inverse trig.
                //FIXED: don't need cross test
                //float32 newCross = newdx * dy - newdy * dx;
                float32 newDot = newdx * dx + newdy * dy;
                if (newDot > maxDot) {//newCross >= 0.0f && newDot > maxDot) {
                    maxDot = newDot;
                    winIndex = i;
                }
            }
            edgeList[numEdges++] = winIndex;
            dx = cloudX[winIndex] - cloudX[startIndex];
            dy = cloudY[winIndex] - cloudY[startIndex];
            float32 nrm = sqrtf(dx * dx + dy * dy);
            nrm = (nrm == 0.0f) ? 1.0f : nrm;
            dx /= nrm;
            dy /= nrm;
            startIndex = winIndex;
        }
		
        float32* xres = new float32[numEdges];
        float32* yres = new float32[numEdges];
        for (int32 i = 0; i < numEdges; i++) {
            xres[i] = cloudX[edgeList[i]];
            yres[i] = cloudY[edgeList[i]];
			//('%f, %f\n',xres[i],yres[i]);
        }
		
        b2Polygon returnVal(xres, yres, numEdges);
    }
    }
    
    
    {	b2PolyNode(b2Vec2& pos);
	b2PolyNode();
	void AddConnection(b2PolyNode& toMe);
	void RemoveConnection(b2PolyNode& fromMe);
	void RemoveConnectionByIndex(int32 index);
	bool IsConnectedTo(b2PolyNode& me);
	b2PolyNode* GetRightestConnection(b2PolyNode* incoming);
	b2PolyNode* GetRightestConnection(b2Vec2& incomingDir);
};
    
    
    {		*a_piEncodingTime_ms = totalEncodingTime;
	}
    
    		m_pencoding->InitFromEncodingBits(this, a_paucEncodingBits, m_afrgbaSource,
										m_pimageSource->GetErrorMetric());
    
    namespace Etc
{
	class Block4x4EncodingBits;
    }
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    #endif /* SILK_MACROS_ARMv4_H */

    
    
    {        if(equalPrefixLength > 0) {
            if((leftUnit >= 0 && data->isUnsafeBackward(leftUnit, numeric)) ||
                    (rightUnit >= 0 && data->isUnsafeBackward(rightUnit, numeric))) {
                // Identical prefix: Back up to the start of a contraction or reordering sequence.
                do {
                    --equalPrefixLength;
                    leftUnit = left.previous(&left);
                    right.previous(&right);
                } while(equalPrefixLength > 0 && data->isUnsafeBackward(leftUnit, numeric));
            }
            // See the notes in the UTF-16 version.
        }
    }
    
    //eof

    
    SharedBreakIterator::~SharedBreakIterator() {
  delete ptr;
}
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
    U_NAMESPACE_END
    
    SimpleDateFormatStaticSets::SimpleDateFormatStaticSets(UErrorCode &status)
: fDateIgnorables(NULL),
  fTimeIgnorables(NULL),
  fOtherIgnorables(NULL)
{
    fDateIgnorables  = new UnicodeSet(UNICODE_STRING('[-,./[:whitespace:]]', 20), status);
    fTimeIgnorables  = new UnicodeSet(UNICODE_STRING('[-.:[:whitespace:]]', 19),  status);
    fOtherIgnorables = new UnicodeSet(UNICODE_STRING('[:whitespace:]', 14),       status);
    }
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    CollationKey::CollationKey()
    : UObject(), fFlagAndLength(0),
      fHashCode(kEmptyHashCode)
{
}
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or a negative value
     */
    static int32_t indexOrNegativeFromString(const UnicodeString &keyword);
    
    StringMatcher::StringMatcher(const StringMatcher& o) :
    UnicodeFunctor(o),
    UnicodeMatcher(o),
    UnicodeReplacer(o),
    pattern(o.pattern),
    data(o.data),
    segmentNumber(o.segmentNumber),
    matchStart(o.matchStart),
    matchLimit(o.matchLimit)
{
}
    
            // The temporary buffer starts at tempStart, and extends
        // to destLimit.  The start of the buffer has a single
        // character from before the key.  This provides style
        // data when addition characters are filled into the
        // temporary buffer.  If there is nothing to the left, use
        // the non-character U+FFFF, which Replaceable subclasses
        // should treat specially as a 'no-style character.'
        // destStart points to the point after the style context
        // character, so it is tempStart+1 or tempStart+2.
        int32_t tempStart = text.length(); // start of temp buffer
        int32_t destStart = tempStart; // copy new text to here
        if (start > 0) {
            int32_t len = U16_LENGTH(text.char32At(start-1));
            text.copy(start-len, start, tempStart);
            destStart += len;
        } else {
            UnicodeString str((UChar) 0xFFFF);
            text.handleReplaceBetween(tempStart, tempStart, str);
            destStart++;
        }
        int32_t destLimit = destStart;
    
      virtual ~Extension_call_result() throw();
  ExtensionResponse success;
    
    /**
 * @brief Represents a hardware driver type that SMART api can you use to query
 * device information.
 *
 * @param driver name of SMART controller driver
 * @param maxID max ID number of which disks on the controller is monitored
 */
struct hardwareDriver {
  std::string driver;
  size_t maxID;
};
    
      // Author: @guliashvili
  // Creation Time: 3/09/2018
  bool isWindowsProfilingEnabled();
    
    struct mei_response {
  uint32_t maxlen;
  uint8_t version;
};
    
    
    {  auto dst = std::vector<TestMessage>{};
  auto status =
      ebpf::impl::consumeWrappedMessagesFromCircularBuffer<WrappedMessage>(
          &buf[0], tail, head, buf.size(), dst);
  ASSERT_FALSE(status.isError()) << status.getError().getMessage();
  ASSERT_EQ(dst.size(), test_size);
  for (std::size_t i = 0; i < test_size; ++i) {
    EXPECT_EQ(dst[i].c_, 't');
    EXPECT_EQ(dst[i].d_, 'i');
  }
  EXPECT_EQ(dst[0].a_, 1);
  EXPECT_EQ(dst[0].b_, 2);
  EXPECT_EQ(dst[1].a_, 3);
  EXPECT_EQ(dst[1].b_, 4);
  EXPECT_EQ(dst[2].a_, 5);
  EXPECT_EQ(dst[2].b_, 6);
}
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    TEST_F(KernelModules, test_sanity) {
  QueryData data = execute_query('select * from kernel_modules');
  ASSERT_GT(data.size(), 0ul);
  ValidatatioMap row_map = {
      {'name', NonEmptyString},
      {'size', NonNegativeInt},
      {'used_by', NonEmptyString},
      {'status', NonEmptyString},
      {'address', NonNegativeInt},
  };
  validate_rows(data, row_map);
}
    
    TEST_F(keychainItems, test_sanity) {
  // 1. Query data
  auto const data = execute_query('select * from keychain_items');
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {'label', NormalType}
  //      {'description', NormalType}
  //      {'comment', NormalType}
  //      {'created', NormalType}
  //      {'modified', NormalType}
  //      {'type', NormalType}
  //      {'path', NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}
    
            memcpy(&tmp, recv_pkg.ptr, sizeof(tmp));
        ASSERT_EQ(tmp, recv_pkg.size);
    
    #include <atomic>
    
    using namespace swoole;
    
        coro_test({
        make_pair([](void *arg)
        {
            auto chan = (Channel *) arg;
    }
    }
    
            if (pid == 0)
        {
            exit(0);
        }
    
    public:
    static int _onReceive(swServer *serv, swEventData *req);
    static void _onConnect(swServer *serv, swDataHead *info);
    static void _onClose(swServer *serv, swDataHead *info);
    static int _onPacket(swServer *serv, swEventData *req);
    static void _onPipeMessage(swServer *serv, swEventData *req);
    static void _onStart(swServer *serv);
    static void _onShutdown(swServer *serv);
    static void _onWorkerStart(swServer *serv, int worker_id);
    static void _onWorkerStop(swServer *serv, int worker_id);
    static int _onTask(swServer *serv, swEventData *task);
    static int _onFinish(swServer *serv, swEventData *task);
    
    #include 'swoole.h'
    
        virtual void onStart();
    virtual void onShutdown() {};
    virtual void onWorkerStart(int worker_id);
    virtual void onWorkerStop(int worker_id) {}
    virtual void onPipeMessage(int src_worker_id, const DataBuffer &) {}
    virtual void onReceive(int fd, const DataBuffer &data);
    virtual void onConnect(int fd);
    virtual void onClose(int fd);
    virtual void onPacket(const DataBuffer &data, ClientInfo &clientInfo);