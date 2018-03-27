
        
        #ifndef STORAGE_LEVELDB_DB_DB_ITER_H_
#define STORAGE_LEVELDB_DB_DB_ITER_H_
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG.old';
}
    
    void TableCache::Evict(uint64_t file_number) {
  char buf[sizeof(file_number)];
  EncodeFixed64(buf, file_number);
  cache_->Erase(Slice(buf, sizeof(buf)));
}
    
    
    {}  // namespace leveldb
    
    namespace {
class MemTableInserter : public WriteBatch::Handler {
 public:
  SequenceNumber sequence_;
  MemTable* mem_;
    }
    }
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
      // Create a slice that refers to s[0,strlen(s)-1]
  Slice(const char* s) : data_(s), size_(strlen(s)) { }
    
    
// //////////////////////////////////////////////////////////////////////
// Beginning of content of file: src/lib_json/json_tool.h
// //////////////////////////////////////////////////////////////////////
    
    namespace enum_descriptor {
PyObject* NewEnumValuesByName(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesByNumber(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesSeq(const EnumDescriptor* descriptor);
}  // namespace enum_descriptor
    
    
    { private:
  // The python object that implements the database. The reference is owned.
  PyObject* py_database_;
};
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
    
     private:
  const FieldDescriptor* descriptor_;
  Context* context_;
  ClassNameResolver* name_resolver_;
  string scope_;
    
    
    {  if (word->word->flag(W_DONT_CHOP)) {
    saved_enable_assoc = wordrec_enable_assoc;
    saved_chop_enable = chop_enable;
    wordrec_enable_assoc.set_value(0);
    chop_enable.set_value(0);
  }
  if (pass_n == 1)
    set_pass1();
  else
    set_pass2();
  recog_word(word);
  if (word->best_choice == NULL)
    word->SetupFake(*word->uch_set);
  if (word->word->flag(W_DONT_CHOP)) {
    wordrec_enable_assoc.set_value(saved_enable_assoc);
    chop_enable.set_value(saved_chop_enable);
  }
}
    
    // Fits a line to the points, ignoring the skip_first initial points and the
// skip_last final points, returning the fitted line as a pair of points,
// and the upper quartile error.
double DetLineFit::Fit(int skip_first, int skip_last,
                       ICOORD* pt1, ICOORD* pt2) {
  // Do something sensible with no points.
  if (pts_.empty()) {
    pt1->set_x(0);
    pt1->set_y(0);
    *pt2 = *pt1;
    return 0.0;
  }
  // Count the points and find the first and last kNumEndPoints.
  int pt_count = pts_.size();
  ICOORD* starts[kNumEndPoints];
  if (skip_first >= pt_count) skip_first = pt_count - 1;
  int start_count = 0;
  int end_i = MIN(skip_first + kNumEndPoints, pt_count);
  for (int i = skip_first; i < end_i; ++i) {
    starts[start_count++] = &pts_[i].pt;
  }
  ICOORD* ends[kNumEndPoints];
  if (skip_last >= pt_count) skip_last = pt_count - 1;
  int end_count = 0;
  end_i = MAX(0, pt_count - kNumEndPoints - skip_last);
  for (int i = pt_count - 1 - skip_last; i >= end_i; --i) {
    ends[end_count++] = &pts_[i].pt;
  }
  // 1 or 2 points need special treatment.
  if (pt_count <= 2) {
    *pt1 = *starts[0];
    if (pt_count > 1)
      *pt2 = *ends[0];
    else
      *pt2 = *pt1;
    return 0.0;
  }
  // Although with between 2 and 2*kNumEndPoints-1 points, there will be
  // overlap in the starts, ends sets, this is OK and taken care of by the
  // if (*start != *end) test below, which also tests for equal input points.
  double best_uq = -1.0;
  // Iterate each pair of points and find the best fitting line.
  for (int i = 0; i < start_count; ++i) {
    ICOORD* start = starts[i];
    for (int j = 0; j < end_count; ++j) {
      ICOORD* end = ends[j];
      if (*start != *end) {
        ComputeDistances(*start, *end);
        // Compute the upper quartile error from the line.
        double dist = EvaluateLineFit();
        if (dist < best_uq || best_uq < 0.0) {
          best_uq = dist;
          *pt1 = *start;
          *pt2 = *end;
        }
      }
    }
  }
  // Finally compute the square root to return the true distance.
  return best_uq > 0.0 ? sqrt(best_uq) : best_uq;
}
    
    
/**********************************************************************
 * QLSQ::remove
 *
 * Delete an element from the accumulator.
 **********************************************************************/
    
     private:
  struct ReferenceCount {
    STRING id;  // A unique ID to identify the object (think path on disk)
    T *object;  // A copy of the object in memory.  Can be delete'd.
    int count;  // A count of the number of active users of this object.
  };
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'strngs.h'
    
      // Creates a report of the error rate. The report_level controls the detail
  // that is reported to stderr via tprintf:
  // 0   -> no output.
  // >=1 -> bottom-line error rate.
  // >=3 -> font-level error rate.
  // boosting_mode determines the return value. It selects which (un-weighted)
  // error rate to return.
  // The fontinfo_table from MasterTrainer provides the names of fonts.
  // The it determines the current subset of the training samples.
  // If not NULL, the top-choice unichar error rate is saved in unichar_error.
  // If not NULL, the report string is saved in fonts_report.
  // (Ignoring report_level).
  double ReportErrors(int report_level, CountTypes boosting_mode,
                      const FontInfoTable& fontinfo_table,
                      const SampleIterator& it,
                      double* unichar_error,
                      STRING* fonts_report);
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'host.h'
#include <stdio.h>
#include <math.h>
    
      // Initialize the bool array to the given size of feature space.
  // The feature_map is just borrowed, and must exist for the entire
  // lifetime of the IntFeatureDist.
  void Init(const IntFeatureMap* feature_map);
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    class Test_Spy_Sample {
  public:
    Test_Spy_Sample();
    ~Test_Spy_Sample();
    }
    
    void TSpy::TestFun0()
{
    return reinterpret_cast<Test_Spy_Sample*>(This())->TestFun0();
}
    
    #endif

    
    #endif

    
    
/*
 * scop_jenv.h
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
        void SetBooleanArrayRegion(jbooleanArray array, jsize start, jsize len,
        const jboolean* buf)
    { functions->SetBooleanArrayRegion(this, array, start, len, buf); }
    void SetByteArrayRegion(jbyteArray array, jsize start, jsize len,
        const jbyte* buf)
    { functions->SetByteArrayRegion(this, array, start, len, buf); }
    void SetCharArrayRegion(jcharArray array, jsize start, jsize len,
        const jchar* buf)
    { functions->SetCharArrayRegion(this, array, start, len, buf); }
    void SetShortArrayRegion(jshortArray array, jsize start, jsize len,
        const jshort* buf)
    { functions->SetShortArrayRegion(this, array, start, len, buf); }
    void SetIntArrayRegion(jintArray array, jsize start, jsize len,
        const jint* buf)
    { functions->SetIntArrayRegion(this, array, start, len, buf); }
    void SetLongArrayRegion(jlongArray array, jsize start, jsize len,
        const jlong* buf)
    { functions->SetLongArrayRegion(this, array, start, len, buf); }
    void SetFloatArrayRegion(jfloatArray array, jsize start, jsize len,
        const jfloat* buf)
    { functions->SetFloatArrayRegion(this, array, start, len, buf); }
    void SetDoubleArrayRegion(jdoubleArray array, jsize start, jsize len,
        const jdouble* buf)
    { functions->SetDoubleArrayRegion(this, array, start, len, buf); }
    
    void Config::setExperimentalFeatureEnabled(int feature, bool enabled)
{
    YGConfigSetExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature), enabled);
}
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
    #pragma once
#include <utility>
#include <fb/assert.h>
    
    
    
      if (opts.proto_mode) {
    if (any_generator)
      Error('cannot generate code directly from .proto files', true);
  } else if (!any_generator && conform_to_schema.empty()) {
    Error('no options: specify at least one generator.', true);
  }
    
    // Contains all the parameters that are parsed from the command line.
struct Parameters {
  // Puts the service into a namespace
  grpc::string services_namespace;
  // Use system includes (<>) or local includes ('')
  bool use_system_headers;
  // Prefix to any grpc include
  grpc::string grpc_search_path;
  // Generate GMOCK code to facilitate unit testing.
  bool generate_mock_code;
};
    
      auto channel =
      grpc::CreateChannel(server_address, grpc::InsecureChannelCredentials());
  GreeterClient greeter(channel);
    
    std::unique_ptr< MonsterStorage::Stub> MonsterStorage::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< MonsterStorage::Stub> stub(new MonsterStorage::Stub(channel));
  return stub;
}
    
    namespace grpc_java_generator {
struct Parameters {
  //        //Defines the custom parameter types for methods
  //        //eg: flatbuffers uses flatbuffers.Builder as input for the client
  //        and output for the server grpc::string custom_method_io_type;
    }
    }
    
        if (status.ok()) {
      auto resp = response.GetRoot()->id();
      std::cout << 'RPC response: ' << resp->str() << std::endl;
    } else {
      std::cout << 'RPC failed' << std::endl;
    }
  }
  {
    grpc::ClientContext context;
    fbb.Clear();
    auto stat_offset = CreateStat(fbb, fbb.CreateString('Fred'));
    fbb.Finish(stat_offset);
    auto request = fbb.ReleaseMessage<Stat>();
    
    static void Error(const flatbuffers::FlatCompiler *flatc,
                  const std::string &err, bool usage, bool show_exe_name) {
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('error: %s\n', err.c_str());
  if (usage) { printf('%s', flatc->GetUsageString(g_program_name).c_str()); }
  exit(1);
}
    
    
    {
    {
    {
    {    code_ += '}';  // close schema root
    const std::string file_path = GeneratedFileName(path_, file_name_);
    const std::string final_code = code_.ToString();
    return SaveFile(file_path.c_str(), final_code, false);
  }
};
}  // namespace jsons