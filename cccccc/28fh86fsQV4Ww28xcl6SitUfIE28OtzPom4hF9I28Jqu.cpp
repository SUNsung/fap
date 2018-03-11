
        
        
    {  // The length of the transcoded string in UTF-16 code points.
  Length = toPtr - &buffer[0];
  return Length;
}

    
    #import <Foundation/Foundation.h>
    
    
    {    return Parts.getValue().hasFunctionDocumentation();
  }
    
    public:
  /// The replacement type.
  Type getReplacement() const { return Replacement; }
  
  /// The protocol conformances for the replacement. These appear in the same
  /// order as Archetype->getConformsTo() for the substituted archetype.
  const ArrayRef<ProtocolConformanceRef> getConformances() const {
    return Conformance;
  }
  
  Substitution() {}
  
  Substitution(Type Replacement, ArrayRef<ProtocolConformanceRef> Conformance);
    
    bool Substitution::operator==(const Substitution &other) const {
  // The archetypes may be missing, but we can compare them directly
  // because archetypes are always canonical.
  return
    Replacement->isEqual(other.Replacement) &&
    Conformance.equals(other.Conformance);
}
    
    /* Bidirectional Stream API */
    
    TEST(InlinedVectorTest, ClearAndRepopulate) {
  const int kNumElements = 10;
  InlinedVector<int, 5> v;
  EXPECT_EQ(0UL, v.size());
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(i);
    EXPECT_EQ(i + 1UL, v.size());
  }
  for (int i = 0; i < kNumElements; ++i) {
    EXPECT_EQ(i, v[i]);
  }
  v.clear();
  EXPECT_EQ(0UL, v.size());
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(kNumElements + i);
    EXPECT_EQ(i + 1UL, v.size());
  }
  for (int i = 0; i < kNumElements; ++i) {
    EXPECT_EQ(kNumElements + i, v[i]);
  }
}
    
    #include <gflags/gflags.h>
#include <grpc/grpc.h>
#include <grpc/support/time.h>
    
    
    {}  // namespace grpc_python_generator
    
    std::vector<grpc::string_ref> SecureAuthContext::GetPeerIdentity() const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter = grpc_auth_context_peer_identity(ctx_);
  std::vector<grpc::string_ref> identity;
  const grpc_auth_property* property = nullptr;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    identity.push_back(
        grpc::string_ref(property->value, property->value_length));
  }
  return identity;
}
    
    class CodegenTestMinimal : public ::testing::Test {};
    
    #ifndef TEST_QPS_STATS_UTILS_H
#define TEST_QPS_STATS_UTILS_H
    
      /// Set the timer's expiry time as an absolute time.
  /**
   * This function sets the expiry time. Any pending asynchronous wait
   * operations will be cancelled. The handler for each cancelled operation will
   * be invoked with the boost::asio::error::operation_aborted error code.
   *
   * @param expiry_time The expiry time to be used for the timer.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @return The number of asynchronous operations that were cancelled.
   *
   * @note If the timer has already expired when expires_at() is called, then
   * the handlers for asynchronous wait operations will:
   *
   * @li have already been invoked; or
   *
   * @li have been queued for invocation in the near future.
   *
   * These handlers can no longer be cancelled, and therefore are passed an
   * error code that indicates the successful completion of the wait operation.
   */
  std::size_t expires_at(const time_point& expiry_time,
      boost::system::error_code& ec)
  {
    return this->service.expires_at(this->implementation, expiry_time, ec);
  }
    
    
    {
    {} // namespace asio
} // namespace boost
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    #include <boost/asio/detail/push_options.hpp>
    
    
    {    // Put all values back into the hash.
    iterator iter = values_.begin();
    while (iter != end_iter)
    {
      std::size_t bucket = calculate_hash_value(iter->first) % num_buckets_;
      if (buckets_[bucket].last == end_iter)
      {
        buckets_[bucket].first = buckets_[bucket].last = iter++;
      }
      else if (++buckets_[bucket].last == iter)
      {
        ++iter;
      }
      else
      {
        values_.splice(buckets_[bucket].last, values_, iter++);
        --buckets_[bucket].last;
      }
    }
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    int main(int argc, char** argv) {
  // All tests currently run with the same read-only file limits.
  leveldb::EnvPosixTest::SetFileLimits(leveldb::kReadOnlyFileLimit,
                                       leveldb::kMMapLimit);
  return leveldb::test::RunAllTests();
}

    
          case kCompactPointer:
        if (GetLevel(&input, &level) &&
            GetInternalKey(&input, &key)) {
          compact_pointers_.push_back(std::make_pair(level, key));
        } else {
          msg = 'compaction pointer';
        }
        break;
    
    // Helper for quickly generating random data.
namespace {
class RandomGenerator {
 private:
  std::string data_;
  int pos_;
    }
    }
    
    
    {
    {      bool known = true;
      bool write_sync = false;
      if (name == Slice('fillseq')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillrandom')) {
        Write(write_sync, RANDOM, FRESH, num_, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('overwrite')) {
        Write(write_sync, RANDOM, EXISTING, num_, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillrandsync')) {
        write_sync = true;
        Write(write_sync, RANDOM, FRESH, num_ / 100, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillseqsync')) {
        write_sync = true;
        Write(write_sync, SEQUENTIAL, FRESH, num_ / 100, FLAGS_value_size, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillrand100K')) {
        Write(write_sync, RANDOM, FRESH, num_ / 1000, 100 * 1000, 1);
        DBSynchronize(db_);
      } else if (name == Slice('fillseq100K')) {
        Write(write_sync, SEQUENTIAL, FRESH, num_ / 1000, 100 * 1000, 1);
        DBSynchronize(db_);
      } else if (name == Slice('readseq')) {
        ReadSequential();
      } else if (name == Slice('readrandom')) {
        ReadRandom();
      } else if (name == Slice('readrand100K')) {
        int n = reads_;
        reads_ /= 1000;
        ReadRandom();
        reads_ = n;
      } else if (name == Slice('readseq100K')) {
        int n = reads_;
        reads_ /= 1000;
        ReadSequential();
        reads_ = n;
      } else {
        known = false;
        if (name != Slice()) {  // No error message for empty name
          fprintf(stderr, 'unknown benchmark '%s'\n', name.ToString().c_str());
        }
      }
      if (known) {
        Stop(name);
      }
    }
  }
    
    namespace leveldb {
    }
    
    
    {}  // anonymous namespace
    
      // Return the offset in data_ just past the end of the current entry.
  inline uint32_t NextEntryOffset() const {
    return (value_.data() + value_.size()) - data_;
  }
    
    // A internal wrapper class with an interface similar to Iterator that
// caches the valid() and key() results for an underlying iterator.
// This can help avoid virtual function calls and also gives better
// cache locality.
class IteratorWrapper {
 public:
  IteratorWrapper(): iter_(NULL), valid_(false) { }
  explicit IteratorWrapper(Iterator* iter): iter_(NULL) {
    Set(iter);
  }
  ~IteratorWrapper() { delete iter_; }
  Iterator* iter() const { return iter_; }
    }
    
    
    
    
    
        virtual void DrawPoint(const b2Vec2& p, float32 size, const b2Color& color);
    
    
    {	for (int32 i = 0; i < manifold->pointCount && m_pointCount < k_maxContactPoints; ++i)
	{
		ContactPoint* cp = m_points + m_pointCount;
		cp->fixtureA = fixtureA;
		cp->fixtureB = fixtureB;
		cp->position = worldManifold.points[i];
		cp->normal = worldManifold.normal;
		cp->state = state2[i];
		cp->normalImpulse = manifold->points[i].normalImpulse;
		cp->tangentImpulse = manifold->points[i].tangentImpulse;
		cp->separation = worldManifold.separations[i];
		++m_pointCount;
	}
}
    
    
    {		Test::Step(settings);
		m_debugDraw.DrawString(5, m_textLine, 'Keys: (d) dynamic, (s) static, (k) kinematic');
		m_textLine += DRAW_STRING_NEW_LINE;
	}
    
    void OutputImage::SaveToJpegData(JPEGData* jpg) const {
  assert(components_[0].factor_x() == 1);
  assert(components_[0].factor_y() == 1);
  jpg->width = width_;
  jpg->height = height_;
  jpg->max_h_samp_factor = 1;
  jpg->max_v_samp_factor = 1;
  jpg->MCU_cols = components_[0].width_in_blocks();
  jpg->MCU_rows = components_[0].height_in_blocks();
  int ncomp = components_[1].IsAllZero() && components_[2].IsAllZero() ? 1 : 3;
  for (int i = 1; i < ncomp; ++i) {
    jpg->max_h_samp_factor = std::max(jpg->max_h_samp_factor,
                                      components_[i].factor_x());
    jpg->max_v_samp_factor = std::max(jpg->max_h_samp_factor,
                                      components_[i].factor_y());
    jpg->MCU_cols = std::min(jpg->MCU_cols, components_[i].width_in_blocks());
    jpg->MCU_rows = std::min(jpg->MCU_rows, components_[i].height_in_blocks());
  }
  jpg->components.resize(ncomp);
  int q[3][kDCTBlockSize];
  for (int c = 0; c < 3; ++c) {
    memcpy(&q[c][0], components_[c].quant(), kDCTBlockSize * sizeof(q[0][0]));
  }
  for (int c = 0; c < ncomp; ++c) {
    JPEGComponent* comp = &jpg->components[c];
    assert(jpg->max_h_samp_factor % components_[c].factor_x() == 0);
    assert(jpg->max_v_samp_factor % components_[c].factor_y() == 0);
    comp->id = c;
    comp->h_samp_factor = jpg->max_h_samp_factor / components_[c].factor_x();
    comp->v_samp_factor = jpg->max_v_samp_factor / components_[c].factor_y();
    comp->width_in_blocks = jpg->MCU_cols * comp->h_samp_factor;
    comp->height_in_blocks = jpg->MCU_rows * comp->v_samp_factor;
    comp->num_blocks = comp->width_in_blocks * comp->height_in_blocks;
    comp->coeffs.resize(kDCTBlockSize * comp->num_blocks);
    }
    }
    
    static const int kCrToRedTable[256] = {
  -179, -178, -177, -175, -174, -172, -171, -170, -168, -167, -165, -164,
  -163, -161, -160, -158, -157, -156, -154, -153, -151, -150, -149, -147,
  -146, -144, -143, -142, -140, -139, -137, -136, -135, -133, -132, -130,
  -129, -128, -126, -125, -123, -122, -121, -119, -118, -116, -115, -114,
  -112, -111, -109, -108, -107, -105, -104, -102, -101, -100,  -98,  -97,
   -95,  -94,  -93,  -91,  -90,  -88,  -87,  -86,  -84,  -83,  -81,  -80,
   -79,  -77,  -76,  -74,  -73,  -72,  -70,  -69,  -67,  -66,  -64,  -63,
   -62,  -60,  -59,  -57,  -56,  -55,  -53,  -52,  -50,  -49,  -48,  -46,
   -45,  -43,  -42,  -41,  -39,  -38,  -36,  -35,  -34,  -32,  -31,  -29,
   -28,  -27,  -25,  -24,  -22,  -21,  -20,  -18,  -17,  -15,  -14,  -13,
   -11,  -10,   -8,   -7,   -6,   -4,   -3,   -1,    0,    1,    3,    4,
     6,    7,    8,   10,   11,   13,   14,   15,   17,   18,   20,   21,
    22,   24,   25,   27,   28,   29,   31,   32,   34,   35,   36,   38,
    39,   41,   42,   43,   45,   46,   48,   49,   50,   52,   53,   55,
    56,   57,   59,   60,   62,   63,   64,   66,   67,   69,   70,   72,
    73,   74,   76,   77,   79,   80,   81,   83,   84,   86,   87,   88,
    90,   91,   93,   94,   95,   97,   98,  100,  101,  102,  104,  105,
   107,  108,  109,  111,  112,  114,  115,  116,  118,  119,  121,  122,
   123,  125,  126,  128,  129,  130,  132,  133,  135,  136,  137,  139,
   140,  142,  143,  144,  146,  147,  149,  150,  151,  153,  154,  156,
   157,  158,  160,  161,  163,  164,  165,  167,  168,  170,  171,  172,
   174,  175,  177,  178
};
    
    void ComputeBlockDCTDouble(double block[64]) {
  TransformBlock(block, DCT1d);
}
    
    #include 'guetzli/gamma_correct.h'
    
      tmp0 = in[5 * stride];
  tmp1 = kIDCTMatrix[ 5] * tmp0;
  tmp2 = kIDCTMatrix[13] * tmp0;
  tmp3 = kIDCTMatrix[21] * tmp0;
  tmp4 = kIDCTMatrix[29] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    // Functions for reading a jpeg byte stream into a JPEGData object.
    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
    // Builds jpeg-style Huffman lookup table from the given symbols.
// The symbols are in order of increasing bit lengths. The number of symbols
// with bit length n is given in counts[n] for each n >= 1.
// Returns the size of the lookup table.
int BuildJpegHuffmanTable(const int* counts, const int* symbols,
                          HuffmanTableEntry* lut);
    
    /**
 * Canonicalize the parent path, leaving the filename (last component)
 * unchanged.  You may use this before creating a file instead of
 * boost::filesystem::canonical, which requires that the entire path exists.
 */
path canonical_parent(const path& p, const path& basePath = current_path());
    
    
    {    for (size_t i = 0; i < nrRead; i++) {
      int id = completed[i] - ops.get();
      EXPECT_GE(id, 0);
      EXPECT_LT(id, specs.size());
      EXPECT_TRUE(pending[id]);
      pending[id] = false;
      ssize_t res = ops[id].result();
      EXPECT_LE(0, res) << folly::errnoStr(-res);
      EXPECT_EQ(specs[id].size, res);
    }
  }
  EXPECT_EQ(specs.size(), aioReader.totalSubmits());
    
    
    {
    {      if (end == msgData.size()) {
        break;
      }
      idx = end + 1;
    }
  } else {
    buffer.reserve(headerLengthGuess + msgData.size());
    headerFormatter.appendTo(buffer);
    buffer.append(msgData.data(), msgData.size());
    buffer.push_back('\n');
  }
    
      /**
   * Whether this category should inherit its effective log level from its
   * parent category, if the parent category has a more verbose log level.
   */
  bool inheritParentLevel{true};
    
    using std::string;