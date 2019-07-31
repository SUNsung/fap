
        
        // Thread dimensionality for use in a kernel launch. See file comment for
// details.
struct ThreadDim : public Dim3D {
  explicit ThreadDim(uint64 x = 1, uint64 y = 1, uint64 z = 1)
      : Dim3D(x, y, z) {}
    }
    
    void ModelAnalyzer::PrintNodeInfo(const NodeDef* node,
                                  const GraphProperties& properties, bool debug,
                                  std::ostream& os) const {
  os << node->name() << ' [' << node->op() << ']' << std::endl;
  if (properties.HasOutputProperties(node->name())) {
    const std::vector<OpInfo::TensorProperties>& props =
        properties.GetOutputProperties(node->name());
    for (int i = 0; i < props.size(); ++i) {
      const OpInfo::TensorProperties& prop = props[i];
      os << '\t'
         << 'output ' << i << ' (' << DataTypeString(prop.dtype())
         << ') has shape ';
      if (prop.shape().unknown_rank()) {
        os << '?';
      } else {
        os << '[';
        for (int i = 0; i < prop.shape().dim_size(); ++i) {
          if (i > 0) {
            os << ', ';
          }
          if (prop.shape().dim(i).size() >= 0) {
            // Print the actual dimension.
            os << prop.shape().dim(i).size();
          } else if (prop.shape().dim(i).size() == -1) {
            // We don't know anything about the dimension.
            os << '?';
          } else {
            // Symbolic dimension.
            os << 'x' << -prop.shape().dim(i).size();
          }
        }
        os << ']';
      }
      os << std::endl;
    }
  }
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include <Python.h>
    
     private:
  PyRecordReader();
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      static const unsigned kMask = 0xf;  // Mask of all available flags.
    
    #include 'tensorflow/stream_executor/host/host_platform_id.h'
    
    
    {
    {}  // namespace host
}  // namespace stream_executor
    
      // Transforms the given coords one step forward to normalized space, without
  // using any block rotation or predecessor.
  void LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const;
  void LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const;
  // Transforms the given coords forward to normalized space using the
  // full transformation sequence defined by the block rotation, the
  // predecessors, deepest first, and finally this. If first_norm is not nullptr,
  // then the first and deepest transformation used is first_norm, ending
  // with this, and the block rotation will not be applied.
  void NormTransform(const DENORM* first_norm, const TPOINT& pt,
                     TPOINT* transformed) const;
  void NormTransform(const DENORM* first_norm, const FCOORD& pt,
                     FCOORD* transformed) const;
  // Transforms the given coords one step back to source space, without
  // using to any block rotation or predecessor.
  void LocalDenormTransform(const TPOINT& pt, TPOINT* original) const;
  void LocalDenormTransform(const FCOORD& pt, FCOORD* original) const;
  // Transforms the given coords all the way back to source image space using
  // the full transformation sequence defined by this and its predecessors
  // recursively, shallowest first, and finally any block re_rotation.
  // If last_denorm is not nullptr, then the last transformation used will
  // be last_denorm, and the block re_rotation will never be executed.
  void DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                       TPOINT* original) const;
  void DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                       FCOORD* original) const;
    
      // Accessors.
  const Key& key() const {
    return key_;
  }
  void set_key(const Key& new_key) {
    key_ = new_key;
  }
  const Data* data() const {
    return data_;
  }
  // Sets the data pointer, taking ownership of the data.
  void set_data(Data* new_data) {
    delete data_;
    data_ = new_data;
  }
  // Relinquishes ownership of the data pointer (setting it to nullptr).
  Data* extract_data() {
    Data* result = data_;
    data_ = nullptr;
    return result;
  }
    
    // Enumeration of the different types of error count.
// Error counts work as follows:
//
// Ground truth is a valid unichar-id / font-id pair:
//        Number of classifier answers?
//          0                       >0
//     CT_REJECT          unichar-id matches top shape?
//     __________             yes!                      no
//                   CT_UNICHAR_TOP_OK           CT_UNICHAR_TOP1_ERR
//      Top shape-id has multiple unichars?   2nd shape unichar id matches?
//            yes!              no              yes!              no
//      CT_OK_MULTI_UNICHAR     |              _____    CT_UNICHAR_TOP2_ERR
//             Font attributes match?                 Any unichar-id matches?
//              yes!              no                  yes!        no
//      CT_FONT_ATTR_OK   CT_FONT_ATTR_ERR          ______  CT_UNICHAR_TOPN_ERR
//                |       __________________                 _________________
//      Top shape-id has multiple font attrs?
//            yes!              no
//      CT_OK_MULTI_FONT
//      _____________________________
//
// Note that multiple counts may be activated for a single sample!
//
// Ground truth is for a fragment/n-gram that is NOT in the unicharset.
// This is called junk and is expected to be rejected:
//        Number of classifier answers?
//          0                       >0
//     CT_REJECTED_JUNK     CT_ACCEPTED_JUNK
//
// Also, CT_NUM_RESULTS stores the mean number of results, and CT_RANK stores
// the mean rank of the correct result, counting from 0, and with an error
// receiving the number of answers as the correct rank.
//
// Keep in sync with the ReportString function.
enum CountTypes {
  CT_UNICHAR_TOP_OK,     // Top shape contains correct unichar id.
  // The rank of the results in TOP1, TOP2, TOPN is determined by a gap of
  // kRatingEpsilon from the first result in each group. The real top choice
  // is measured using TOPTOP.
  CT_UNICHAR_TOP1_ERR,   // Top shape does not contain correct unichar id.
  CT_UNICHAR_TOP2_ERR,   // Top 2 shapes don't contain correct unichar id.
  CT_UNICHAR_TOPN_ERR,   // No output shape contains correct unichar id.
  CT_UNICHAR_TOPTOP_ERR,   // Very top choice not correct.
  CT_OK_MULTI_UNICHAR,   // Top shape id has correct unichar id, and others.
  CT_OK_JOINED,          // Top shape id is correct but marked joined.
  CT_OK_BROKEN,          // Top shape id is correct but marked broken.
  CT_REJECT,             // Classifier hates this.
  CT_FONT_ATTR_ERR,      // Top unichar OK, but font attributes incorrect.
  CT_OK_MULTI_FONT,      // CT_FONT_ATTR_OK but there are multiple font attrs.
  CT_NUM_RESULTS,        // Number of answers produced.
  CT_RANK,               // Rank of correct answer.
  CT_REJECTED_JUNK,      // Junk that was correctly rejected.
  CT_ACCEPTED_JUNK,      // Junk that was incorrectly classified otherwise.
    }
    
    // Setup the map for the given indexed_features that have been indexed by
// feature_map.
void IntFeatureDist::Set(const GenericVector<int>& indexed_features,
                          int canonical_count, bool value) {
  total_feature_weight_ = canonical_count;
  for (int i = 0; i < indexed_features.size(); ++i) {
    const int f = indexed_features[i];
    features_[f] = value;
    for (int dir = -kNumOffsetMaps; dir <= kNumOffsetMaps; ++dir) {
      if (dir == 0) continue;
      const int mapped_f = feature_map_->OffsetFeature(f, dir);
      if (mapped_f >= 0) {
        features_delta_one_[mapped_f] = value;
        for (int dir2 = -kNumOffsetMaps; dir2 <= kNumOffsetMaps; ++dir2) {
          if (dir2 == 0) continue;
          const int mapped_f2 = feature_map_->OffsetFeature(mapped_f, dir2);
          if (mapped_f2 >= 0)
            features_delta_two_[mapped_f2] = value;
        }
      }
    }
  }
}
    
    /**
 * Hashing functions
 */
    
    #include 'core/os/file_access.h'
#include 'core/pool_vector.h'
#include 'core/ustring.h'
    
    
    {	MIDIDriverALSAMidi();
	virtual ~MIDIDriverALSAMidi();
};
    
    	result = MIDIInputPortCreate(client, CFSTR('Godot Input'), MIDIDriverCoreMidi::read, (void *)this, &port_in);
	if (result != noErr) {
		ERR_PRINTS('MIDIInputPortCreate failed, code: ' + itos(result));
		return ERR_CANT_OPEN;
	}
    
    #endif // MIDI_DRIVER_COREMIDI_H
#endif // COREMIDI_ENABLED

    
    
    {
    {			MIDIINCAPS caps;
			res = midiInGetDevCaps(i, &caps, sizeof(MIDIINCAPS));
			if (res == MMSYSERR_NOERROR) {
				ERR_PRINTS('Can't open MIDI device \'' + String(caps.szPname) + '\', is it being used by another application?');
			}
		}
	}
    
    #ifndef AUDIO_STREAM_EDITOR_PLUGIN_H
#define AUDIO_STREAM_EDITOR_PLUGIN_H
    
    
    {    for (superblock_metainfo_iterator_t kv_iter(metainfo.data(), metainfo.data() + metainfo.size()); !kv_iter.is_end(); ++kv_iter) {
        superblock_metainfo_iterator_t::key_t key = kv_iter.key();
        superblock_metainfo_iterator_t::value_t value = kv_iter.value();
        kv_pairs_out->push_back(std::make_pair(std::vector<char>(key.second, key.second + key.first), std::vector<char>(value.second, value.second + value.first)));
    }
}
    
    class sindex_not_ready_exc_t : public std::exception {
public:
    explicit sindex_not_ready_exc_t(std::string sindex_name,
                                    const secondary_index_t &sindex,
                                    const std::string &table_name);
    const char* what() const throw();
    ~sindex_not_ready_exc_t() throw();
protected:
    std::string info;
};
    
    # if !GTEST_OS_WINDOWS
// Tests that an exit code describes an exit due to termination by a
// given signal.
class GTEST_API_ KilledBySignal {
 public:
  explicit KilledBySignal(int signum);
  bool operator()(int exit_status) const;
 private:
  const int signum_;
};
# endif  // !GTEST_OS_WINDOWS
    
    // We print a protobuf using its ShortDebugString() when the string
// doesn't exceed this many characters; otherwise we print it using
// DebugString() for better readability.
const size_t kProtobufOneLinerMaxLength = 50;
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(DeathTest);
};
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_

    
      // Given two numbers in the sign-and-magnitude representation,
  // returns the distance between them as an unsigned number.
  static Bits DistanceBetweenSignAndMagnitudeNumbers(const Bits &sam1,
                                                     const Bits &sam2) {
    const Bits biased1 = SignAndMagnitudeToBiased(sam1);
    const Bits biased2 = SignAndMagnitudeToBiased(sam2);
    return (biased1 >= biased2) ? (biased1 - biased2) : (biased2 - biased1);
  }
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
      tuple() : f0_(), f1_(), f2_() {}
    
      const char* const name = typeid(T).name();
#  if GTEST_HAS_CXXABI_H_ || defined(__HP_aCC)
  int status = 0;
  // gcc's implementation of typeid(T).name() mangles the type name,
  // so we have to demangle it.
#   if GTEST_HAS_CXXABI_H_
  using abi::__cxa_demangle;
#   endif  // GTEST_HAS_CXXABI_H_
  char* const readable_name = __cxa_demangle(name, 0, 0, &status);
  const std::string name_str(status == 0 ? readable_name : name);
  free(readable_name);
  return name_str;
#  else
  return name;
#  endif  // GTEST_HAS_CXXABI_H_ || __HP_aCC
    
      ByteBuffer* GetSerializedSendMessage() override {
    GPR_CODEGEN_ASSERT(orig_send_message_ != nullptr);
    if (*orig_send_message_ != nullptr) {
      GPR_CODEGEN_ASSERT(serializer_(*orig_send_message_).ok());
      *orig_send_message_ = nullptr;
    }
    return send_message_;
  }
    
      ac = (async_connect*)gpr_malloc(sizeof(async_connect));
  ac->on_done = on_done;
  ac->socket = socket;
  gpr_mu_init(&ac->mu);
  ac->refs = 2;
  ac->addr_name = grpc_sockaddr_to_uri(addr);
  ac->endpoint = endpoint;
  ac->channel_args = grpc_channel_args_copy(channel_args);
  GRPC_CLOSURE_INIT(&ac->on_connect, on_connect, ac, grpc_schedule_on_exec_ctx);
    
    CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    int main(int argc, char** argv) {
  // Change the backup poll interval from 5s to 100ms to speed up the
  // ReconnectChannel test
  grpc::testing::TestEnvironment env(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  int ret = RUN_ALL_TESTS();
  return ret;
}

    
    
    // =============
    // boolean types
    // =============
    
      Status NewWritableFile(const std::string& fname,
                         std::unique_ptr<WritableFile>* result,
                         const EnvOptions& options) override {
    PERF_TIMER_GUARD(env_new_writable_file_nanos);
    return EnvWrapper::NewWritableFile(fname, result, options);
  }
    
    // Merge operator that picks the maximum operand, Comparison is based on
// Slice::compare
class MaxOperator : public MergeOperator {
 public:
  bool FullMergeV2(const MergeOperationInput& merge_in,
                   MergeOperationOutput* merge_out) const override {
    Slice& max = merge_out->existing_operand;
    if (merge_in.existing_value) {
      max = Slice(merge_in.existing_value->data(),
                  merge_in.existing_value->size());
    } else if (max.data() == nullptr) {
      max = Slice();
    }
    }
    }
    
      // put and get from non-default column family
  s = db->Put(WriteOptions(), handles[1], Slice('key'), Slice('value'));
  assert(s.ok());
  std::string value;
  s = db->Get(ReadOptions(), handles[1], Slice('key'), &value);
  assert(s.ok());
    
      PinnableSlice pinnable_val;
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key1', &pinnable_val);
  assert(s.IsNotFound());
  // Reset PinnableSlice after each use and before each reuse
  pinnable_val.Reset();
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
  assert(pinnable_val == 'value');
  pinnable_val.Reset();
  // The Slice pointed by pinnable_val is not valid after this point
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
      // Lookup page cache by page identifier
  //
  // page_key   Page identifier
  // buf        Buffer where the data should be copied
  // size       Size of the page
  virtual Status Lookup(const Slice& key, std::unique_ptr<char[]>* data,
                        size_t* size) = 0;
    
    // Simple RAII wrapper class for Snapshot.
// Constructing this object will create a snapshot.  Destructing will
// release the snapshot.
class ManagedSnapshot {
 public:
  explicit ManagedSnapshot(DB* db);
    }