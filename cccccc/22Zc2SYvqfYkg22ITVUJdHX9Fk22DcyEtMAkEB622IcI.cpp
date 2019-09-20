
        
        private Q_SLOTS:
    void on_selectFileButton_clicked();
    
    const std::vector<std::string>& UniValue::getKeys() const
{
    if (typ != VOBJ)
        throw std::runtime_error('JSON value is not an object as expected');
    return keys;
}
    
    ROTATE_ARGS
	movdqa	XTMP3, XTMP2	; XTMP3 = W[-2] {DDCC}
    mov	y0, e		; y0 = e
    ror	y0, (25-11)	; y0 = e >> (25-11)
    mov	y1, a		; y1 = a
	movdqa	X0,    XTMP2	; X0    = W[-2] {DDCC}
    ror	y1, (22-13)	; y1 = a >> (22-13)
    xor	y0, e		; y0 = e ^ (e >> (25-11))
    mov	y2, f		; y2 = f
    ror	y0, (11-6)	; y0 = (e >> (11-6)) ^ (e >> (25-6))
	psrlq	XTMP2, 17	; XTMP2 = W[-2] ror 17 {xDxC}
    xor	y1, a		; y1 = a ^ (a >> (22-13)
    xor	y2, g		; y2 = f^g
	psrlq	XTMP3, 19	; XTMP3 = W[-2] ror 19 {xDxC}
    xor	y0, e		; y0 = e ^ (e >> (11-6)) ^ (e >> (25-6))
    and	y2, e		; y2 = (f^g)&e
    ror	y1, (13-2)	; y1 = (a >> (13-2)) ^ (a >> (22-2))
	psrld	X0,    10	; X0 = W[-2] >> 10 {DDCC}
    xor	y1, a		; y1 = a ^ (a >> (13-2)) ^ (a >> (22-2))
    ror	y0, 6		; y0 = S1 = (e>>6) & (e>>11) ^ (e>>25)
    xor	y2, g		; y2 = CH = ((f^g)&e)^g
	pxor	XTMP2, XTMP3
    ror	y1, 2		; y1 = S0 = (a>>2) ^ (a>>13) ^ (a>>22)
    add	y2, y0		; y2 = S1 + CH
    add	y2, [rsp + _XFER + 3*4]	; y2 = k + w + S1 + CH
	pxor	X0, XTMP2	; X0 = s1 {xDxC}
    mov	y0, a		; y0 = a
    add	h, y2		; h = h + S1 + CH + k + w
    mov	y2, a		; y2 = a
	pshufb	X0, SHUF_DC00	; X0 = s1 {DC00}
    or	y0, c		; y0 = a|c
    add	d, h		; d = d + h + S1 + CH + k + w
    and	y2, c		; y2 = a&c
	paddd	X0, XTMP0	; X0 = {W[3], W[2], W[1], W[0]}
    and	y0, b		; y0 = (a|c)&b
    add	h, y1		; h = h + S1 + CH + k + w + S0
    or	y0, y2		; y0 = MAJ = (a|c)&b)|(a&c)
    add	h, y0		; h = h + S1 + CH + k + w + S0 + MAJ
    
      std::string AllEntriesFor(const Slice& user_key) {
    Iterator* iter = dbfull()->TEST_NewInternalIterator();
    InternalKey target(user_key, kMaxSequenceNumber, kTypeValue);
    iter->Seek(target.Encode());
    std::string result;
    if (!iter->status().ok()) {
      result = iter->status().ToString();
    } else {
      result = '[ ';
      bool first = true;
      while (iter->Valid()) {
        ParsedInternalKey ikey;
        if (!ParseInternalKey(iter->key(), &ikey)) {
          result += 'CORRUPTED';
        } else {
          if (last_options_.comparator->Compare(ikey.user_key, user_key) != 0) {
            break;
          }
          if (!first) {
            result += ', ';
          }
          first = false;
          switch (ikey.type) {
            case kTypeValue:
              result += iter->value().ToString();
              break;
            case kTypeDeletion:
              result += 'DEL';
              break;
          }
        }
        iter->Next();
      }
      if (!first) {
        result += ' ';
      }
      result += ']';
    }
    delete iter;
    return result;
  }
    
    TestWritableFile::TestWritableFile(const FileState& state,
                                   WritableFile* f,
                                   FaultInjectionTestEnv* env)
    : state_(state),
      target_(f),
      writable_file_opened_(true),
      env_(env) {
  assert(f != NULL);
}
    
      scratch->clear();
  record->clear();
  bool in_fragmented_record = false;
  // Record offset of the logical record that we're reading
  // 0 is a dummy value to make compilers happy
  uint64_t prospective_record_offset = 0;
    
      void pollAndSchedule(int task_id);
  void schedule(int task_id, bool run_inline = false) noexcept;
  void reset() override;
  virtual void finishRun();
  void parentCallback(int parent_id);
  bool isInlineTask(int parent_id, int child_id) const;
    
    REGISTER_CPU_OPERATOR(
    MergeSingleListFeatureTensors,
    MergeSingleListFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleListFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with list features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 3 == 0; })
    .NumOutputs(4)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_values', '.values')
    .Input(2, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values_lengths', '.values.lengths')
    .Output(3, 'out_values_values', '.values.values')
    .Arg('feature_ids', 'feature ids');
    
    Example 1:
  DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
  RANGES = [
    [
      [2, 4],
      [0, 2],
    ],
    [
      [0, 0],
      [6, 2],
    ]
  ]
  lengths = [4, 2]
  OUTPUT[0] = [[3, 4, 5, 6], [0, 0, 0, 0]]
  OUTPUT[1] = [[1, 2], [7, 8]]
    
    template <typename T, class Context>
class BernoulliJSDOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
        // Overrides
    virtual Shaky3D* clone() const override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    Shaky3D() {}
    virtual ~Shaky3D() {}
    
    /** 
    @brief Initializes the action with a range, shake Z vertices, grid size and duration.
    @param duration Specify the duration of the Shaky3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param range Specify the range of the shaky effect.
    @param shakeZ Specify whether shake on the z axis.
    @return If the Initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, int range, bool shakeZ);
    
        /** 
    @brief Initializes the action with a range, shake Z vertices, grid size and duration.
    @param duration Specify the duration of the ShakyTiles3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param range Specify the range of the shaky effect.
    @param shakeZ Specify whether shake on the z axis.
    @return If the Initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, int range, bool shakeZ);
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/