
        
        // Author: tibell@google.com (Johan Tibell)
    
    CodeGenerator::~CodeGenerator() {}
    
    void WriteDocCommentBodyImpl(io::Printer* printer, SourceLocation location) {
    string comments = location.leading_comments.empty() ?
        location.trailing_comments : location.leading_comments;
    if (comments.empty()) {
        return;
    }
    // XML escaping... no need for apostrophes etc as the whole text is going to be a child
    // node of a summary element, not part of an attribute.
    comments = StringReplace(comments, '&', '&amp;', true);
    comments = StringReplace(comments, '<', '&lt;', true);
    std::vector<string> lines = Split(comments, '\n', false /* skip_empty */);
    // TODO: We really should work out which part to put in the summary and which to put in the remarks...
    // but that needs to be part of a bigger effort to understand the markdown better anyway.
    printer->Print('/// <summary>\n');
    bool last_was_empty = false;
    // We squash multiple blank lines down to one, and remove any trailing blank lines. We need
    // to preserve the blank lines themselves, as this is relevant in the markdown.
    // Note that we can't remove leading or trailing whitespace as *that's* relevant in markdown too.
    // (We don't skip 'just whitespace' lines, either.)
    for (std::vector<string>::iterator it = lines.begin(); it != lines.end(); ++it) {
        string line = *it;
        if (line.empty()) {
            last_was_empty = true;
        } else {
            if (last_was_empty) {
                printer->Print('///\n');
            }
            last_was_empty = false;
            printer->Print('///$line$\n', 'line', *it);
        }
    }
    printer->Print('/// </summary>\n');
}
    
    // implements ZeroCopyInputStream ----------------------------------
bool GzipInputStream::Next(const void** data, int* size) {
  bool ok = (zerror_ == Z_OK) || (zerror_ == Z_STREAM_END)
      || (zerror_ == Z_BUF_ERROR);
  if ((!ok) || (zcontext_.next_out == NULL)) {
    return false;
  }
  if (zcontext_.next_out != output_position_) {
    DoNextOutput(data, size);
    return true;
  }
  if (zerror_ == Z_STREAM_END) {
    if (zcontext_.next_out != NULL) {
      // sub_stream_ may have concatenated streams to follow
      zerror_ = inflateEnd(&zcontext_);
      byte_count_ += zcontext_.total_out;
      if (zerror_ != Z_OK) {
        return false;
      }
      zerror_ = internalInflateInit2(&zcontext_, format_);
      if (zerror_ != Z_OK) {
        return false;
      }
    } else {
      *data = NULL;
      *size = 0;
      return false;
    }
  }
  zerror_ = Inflate(Z_NO_FLUSH);
  if ((zerror_ == Z_STREAM_END) && (zcontext_.next_out == NULL)) {
    // The underlying stream's Next returned false inside Inflate.
    return false;
  }
  ok = (zerror_ == Z_OK) || (zerror_ == Z_STREAM_END)
      || (zerror_ == Z_BUF_ERROR);
  if (!ok) {
    return false;
  }
  DoNextOutput(data, size);
  return true;
}
void GzipInputStream::BackUp(int count) {
  output_position_ = reinterpret_cast<void*>(
      reinterpret_cast<uintptr_t>(output_position_) - count);
}
bool GzipInputStream::Skip(int count) {
  const void* data;
  int size = 0;
  bool ok = Next(&data, &size);
  while (ok && (size < count)) {
    count -= size;
    ok = Next(&data, &size);
  }
  if (size > count) {
    BackUp(size - count);
  }
  return ok;
}
int64 GzipInputStream::ByteCount() const {
  int64 ret = byte_count_ + zcontext_.total_out;
  if (zcontext_.next_out != NULL && output_position_ != NULL) {
    ret += reinterpret_cast<uintptr_t>(zcontext_.next_out) -
           reinterpret_cast<uintptr_t>(output_position_);
  }
  return ret;
}
    
    void Assembler::rldicr(const Reg64& ra, const Reg64& rs, uint8_t sh,
                       uint8_t mb, bool rc) {
  EmitMDForm(30, rn(rs), rn(ra), sh, mb, 1, rc);
}
    
    // Deserializing an array could give back a different ArrayKind than we need,
// so we have to go with the slow case of calling a collection constructor.
NEVER_INLINE
Object createFromSerialized(CollectionType colType, APCHandle* handle) {
  auto const col = Object::attach(collections::alloc(colType));
  auto const arr = handle->toLocal();
  switch (colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    static_cast<BaseVector*>(col.get())->init(arr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    static_cast<BaseSet*>(col.get())->init(arr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    static_cast<BaseMap*>(col.get())->init(arr);
    break;
  case CollectionType::Pair:
    not_reached();
    break;
  }
  return col;
}
    
    void logAHMSubMapWarning(folly::StringPiece mapName) {
  StackTrace st;
  logPerfWarning(
    'AtomicHashMap overflow',
    [&](StructuredLogEntry& cols) {
      cols.setStr('map_name', mapName);
      cols.setStackTrace('stack', st);
    }
  );
}
    
    #endif

    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    #if DMLC_ENABLE_STD_THREAD
/*!
 * \brief A threaded writer to write sparse batch page to sharded files.
 */
class SparsePageWriter {
 public:
  /*!
   * \brief constructor
   * \param name_shards name of shard files.
   * \param format_shards format of each shard.
   * \param extra_buffer_capacity Extra buffer capacity before block.
   */
  explicit SparsePageWriter(
      const std::vector<std::string>& name_shards,
      const std::vector<std::string>& format_shards,
      size_t extra_buffer_capacity);
  /*! \brief destructor, will close the files automatically */
  ~SparsePageWriter();
  /*!
   * \brief Push a write job to the writer.
   * This function won't block,
   * writing is done by another thread inside writer.
   * \param page The page to be written
   */
  void PushWrite(std::shared_ptr<SparsePage>&& page);
  /*!
   * \brief Allocate a page to store results.
   *  This function can block when the writer is too slow and buffer pages
   *  have not yet been recycled.
   * \param out_page Used to store the allocated pages.
   */
  void Alloc(std::shared_ptr<SparsePage>* out_page);
    }
    
      // Resets the SplitEvaluator to the state it was in after the Init was called
  virtual void Reset();
    
    /*! \brief try to do efficient pruning */
template<typename DType, typename RType>
struct WXQSummary : public WQSummary<DType, RType> {
  // redefine entry type
  using Entry = typename WQSummary<DType, RType>::Entry;
  // constructor
  WXQSummary(Entry *data, size_t size)
      : WQSummary<DType, RType>(data, size) {}
  // check if the block is large chunk
  inline static bool CheckLarge(const Entry &e, RType chunk) {
    return  e.RMinNext() > e.RMaxPrev() + chunk;
  }
  // set prune
  inline void SetPrune(const WQSummary<DType, RType> &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    RType begin = src.data[0].rmax;
    // n is number of points exclude the min/max points
    size_t n = maxsize - 2, nbig = 0;
    // these is the range of data exclude the min/max point
    RType range = src.data[src.size - 1].rmin - begin;
    // prune off zero weights
    if (range == 0.0f || maxsize <= 2) {
      // special case, contain only two effective data pts
      this->data[0] = src.data[0];
      this->data[1] = src.data[src.size - 1];
      this->size = 2;
      return;
    } else {
      range = std::max(range, static_cast<RType>(1e-3f));
    }
    // Get a big enough chunk size, bigger than range / n
    // (multiply by 2 is a safe factor)
    const RType chunk = 2 * range / n;
    // minimized range
    RType mrange = 0;
    {
      // first scan, grab all the big chunk
      // moving block index, exclude the two ends.
      size_t bid = 0;
      for (size_t i = 1; i < src.size - 1; ++i) {
        // detect big chunk data point in the middle
        // always save these data points.
        if (CheckLarge(src.data[i], chunk)) {
          if (bid != i - 1) {
            // accumulate the range of the rest points
            mrange += src.data[i].RMaxPrev() - src.data[bid].RMinNext();
          }
          bid = i; ++nbig;
        }
      }
      if (bid != src.size - 2) {
        mrange += src.data[src.size-1].RMaxPrev() - src.data[bid].RMinNext();
      }
    }
    // assert: there cannot be more than n big data points
    if (nbig >= n) {
      // see what was the case
      LOG(INFO) << ' check quantile stats, nbig=' << nbig << ', n=' << n;
      LOG(INFO) << ' srcsize=' << src.size << ', maxsize=' << maxsize
                << ', range=' << range << ', chunk=' << chunk;
      src.Print();
      CHECK(nbig < n) << 'quantile: too many large chunk';
    }
    this->data[0] = src.data[0];
    this->size = 1;
    // The counter on the rest of points, to be selected equally from small chunks.
    n = n - nbig;
    // find the rest of point
    size_t bid = 0, k = 1, lastidx = 0;
    for (size_t end = 1; end < src.size; ++end) {
      if (end == src.size - 1 || CheckLarge(src.data[end], chunk)) {
        if (bid != end - 1) {
          size_t i = bid;
          RType maxdx2 = src.data[end].RMaxPrev() * 2;
          for (; k < n; ++k) {
            RType dx2 =  2 * ((k * mrange) / n + begin);
            if (dx2 >= maxdx2) break;
            while (i < end &&
                   dx2 >= src.data[i + 1].rmax + src.data[i + 1].rmin) ++i;
            if (i == end) break;
            if (dx2 < src.data[i].RMinNext() + src.data[i + 1].RMaxPrev()) {
              if (i != lastidx) {
                this->data[this->size++] = src.data[i]; lastidx = i;
              }
            } else {
              if (i + 1 != lastidx) {
                this->data[this->size++] = src.data[i + 1]; lastidx = i + 1;
              }
            }
          }
        }
        if (lastidx != end) {
          this->data[this->size++] = src.data[end];
          lastidx = end;
        }
        bid = end;
        // shift base by the gap
        begin += src.data[bid].RMinNext() - src.data[bid].RMaxPrev();
      }
    }
  }
};
/*!
 * \brief traditional GK summary
 */
template<typename DType, typename RType>
struct GKSummary {
  /*! \brief an entry in the sketch summary */
  struct Entry {
    /*! \brief minimum rank */
    RType rmin;
    /*! \brief maximum rank */
    RType rmax;
    /*! \brief the value of data */
    DType value;
    // constructor
    Entry() = default;
    // constructor
    Entry(RType rmin, RType rmax, DType value)
        : rmin(rmin), rmax(rmax), value(value) {}
  };
  /*! \brief input data queue before entering the summary */
  struct Queue {
    // the input queue
    std::vector<DType> queue;
    // end of the queue
    size_t qtail;
    // push data to the queue
    inline void Push(DType x, RType w) {
      queue[qtail++] = x;
    }
    inline void MakeSummary(GKSummary *out) {
      std::sort(queue.begin(), queue.begin() + qtail);
      out->size = qtail;
      for (size_t i = 0; i < qtail; ++i) {
        out->data[i] = Entry(i + 1, i + 1, queue[i]);
      }
    }
  };
  /*! \brief data field */
  Entry *data;
  /*! \brief number of elements in the summary */
  size_t size;
  GKSummary(Entry *data, size_t size)
      : data(data), size(size) {}
  /*! \brief the maximum error of the summary */
  inline RType MaxError() const {
    RType res = 0;
    for (size_t i = 1; i < size; ++i) {
      res = std::max(data[i].rmax - data[i-1].rmin, res);
    }
    return res;
  }
  /*! \return maximum rank in the summary */
  inline RType MaxRank() const {
    return data[size - 1].rmax;
  }
  /*!
   * \brief copy content from src
   * \param src source sketch
   */
  inline void CopyFrom(const GKSummary &src) {
    size = src.size;
    std::memcpy(data, src.data, sizeof(Entry) * size);
  }
  inline void CheckValid(RType eps) const {
    // assume always valid
  }
  /*! \brief used for debug purpose, print the summary */
  inline void Print() const {
    for (size_t i = 0; i < size; ++i) {
      LOG(CONSOLE) << 'x=' << data[i].value << '\t'
                   << '[' << data[i].rmin << ',' << data[i].rmax << ']';
    }
  }
  /*!
   * \brief set current summary to be pruned summary of src
   *        assume data field is already allocated to be at least maxsize
   * \param src source summary
   * \param maxsize size we can afford in the pruned sketch
   */
  inline void SetPrune(const GKSummary &src, size_t maxsize) {
    if (src.size <= maxsize) {
      this->CopyFrom(src); return;
    }
    const RType max_rank = src.MaxRank();
    this->size = maxsize;
    data[0] = src.data[0];
    size_t n = maxsize - 1;
    RType top = 1;
    for (size_t i = 1; i < n; ++i) {
      RType k = (i * max_rank) / n;
      while (k > src.data[top + 1].rmax) ++top;
      // assert src.data[top].rmin <= k
      // because k > src.data[top].rmax >= src.data[top].rmin
      if ((k - src.data[top].rmin) < (src.data[top+1].rmax - k)) {
        data[i] = src.data[top];
      } else {
        data[i] = src.data[top + 1];
      }
    }
    data[n] = src.data[src.size - 1];
  }
  inline void SetCombine(const GKSummary &sa,
                         const GKSummary &sb) {
    if (sa.size == 0) {
      this->CopyFrom(sb); return;
    }
    if (sb.size == 0) {
      this->CopyFrom(sa); return;
    }
    CHECK(sa.size > 0 && sb.size > 0) << 'invalid input for merge';
    const Entry *a = sa.data, *a_end = sa.data + sa.size;
    const Entry *b = sb.data, *b_end = sb.data + sb.size;
    this->size = sa.size + sb.size;
    RType aprev_rmin = 0, bprev_rmin = 0;
    Entry *dst = this->data;
    while (a != a_end && b != b_end) {
      if (a->value < b->value) {
        *dst = Entry(bprev_rmin + a->rmin,
                     a->rmax + b->rmax - 1, a->value);
        aprev_rmin = a->rmin;
        ++dst; ++a;
      } else {
        *dst = Entry(aprev_rmin + b->rmin,
                     b->rmax + a->rmax - 1, b->value);
        bprev_rmin = b->rmin;
        ++dst; ++b;
      }
    }
    if (a != a_end) {
      RType bprev_rmax = (b_end - 1)->rmax;
      do {
        *dst = Entry(bprev_rmin + a->rmin, bprev_rmax + a->rmax, a->value);
        ++dst; ++a;
      } while (a != a_end);
    }
    if (b != b_end) {
      RType aprev_rmax = (a_end - 1)->rmax;
      do {
        *dst = Entry(aprev_rmin + b->rmin, aprev_rmax + b->rmax, b->value);
        ++dst; ++b;
      } while (b != b_end);
    }
    CHECK(dst == data + size) << 'bug in combine';
  }
};
    
        ASSERT_EQ(first.size(), 4);
    ASSERT_EQ(first.data(), arr);
    
            if(_rightBoundary < _leftBoundary)
        {
            // screen width is larger than world's boundary width
            //set both in the middle of the world
            _rightBoundary = _leftBoundary = (_leftBoundary + _rightBoundary) / 2;
        }
        if(_topBoundary < _bottomBoundary)
        {
            // screen width is larger than world's boundary width
            //set both in the middle of the world
            _topBoundary = _bottomBoundary = (_topBoundary + _bottomBoundary) / 2;
        }
    
    class Camera;
    
    NS_CC_BEGIN;
    
    void StopGrid::startWithTarget(Node *target)
{
    ActionInstant::startWithTarget(target);
    cacheTargetAsGridNode();
    GridBase *grid = _gridNodeTarget->getGrid();
    if (grid && grid->isActive())
    {
        grid->setActive(false);
    }
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
        unsigned int t = 0;
    for (unsigned int i = 0; i < _tilesCount; i++ )
    {
        t = _tilesOrder[i];
        Vec2 tilePos( (unsigned int)(t / _gridSize.height), t % (unsigned int)_gridSize.height );
    }
    
        void shuffle(unsigned int *array, unsigned int len);
    Size getDelta(const Size& pos) const;
    void placeTile(const Vec2& pos, Tile *t);
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    unsigned int AutoPolygon::getSquareValue(unsigned int x, unsigned int y, const Rect& rect, float threshold)
{
    /*
     checking the 2x2 pixel grid, assigning these values to each pixel, if not transparent
     +---+---+
     | 1 | 2 |
     +---+---+
     | 4 | 8 | <- current pixel (curx,cury)
     +---+---+
     */
    unsigned int sv = 0;
    //NOTE: due to the way we pick points from texture, rect needs to be smaller, otherwise it goes outside 1 pixel
    auto fixedRect = Rect(rect.origin, rect.size-Size(2,2));
    
    Vec2 tl = Vec2(x-1, y-1);
    sv += (fixedRect.containsPoint(tl) && getAlphaByPos(tl) > threshold)? 1 : 0;
    Vec2 tr = Vec2(x, y-1);
    sv += (fixedRect.containsPoint(tr) && getAlphaByPos(tr) > threshold)? 2 : 0;
    Vec2 bl = Vec2(x-1, y);
    sv += (fixedRect.containsPoint(bl) && getAlphaByPos(bl) > threshold)? 4 : 0;
    Vec2 br = Vec2(x, y);
    sv += (fixedRect.containsPoint(br) && getAlphaByPos(br) > threshold)? 8 : 0;
    CCASSERT(sv != 0 && sv != 15, 'square value should not be 0, or 15');
    return sv;
}