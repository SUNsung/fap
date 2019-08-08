
        
        #include <Python.h>
    
    
    {  // Cache some descriptors, used to convert keys and values.
  const FieldDescriptor* key_field_descriptor;
  const FieldDescriptor* value_field_descriptor;
  // We bump this whenever we perform a mutation, to invalidate existing
  // iterators.
  uint64 version;
};
    
      // The Python MessageFactory used to create the class. It is needed to resolve
  // fields descriptors, including extensions fields; its C++ MessageFactory is
  // used to instantiate submessages.
  // This reference must stay alive until all message pointers are destructed.
  PyMessageFactory* py_message_factory;
    
    static PyObject* ToStr(PyObject* pself) {
  ScopedPyObjectPtr full_slice(PySlice_New(NULL, NULL, NULL));
  if (full_slice == NULL) {
    return NULL;
  }
  ScopedPyObjectPtr list(Subscript(
      reinterpret_cast<RepeatedCompositeContainer*>(pself), full_slice.get()));
  if (list == NULL) {
    return NULL;
  }
  return PyObject_Repr(list.get());
}
    
    static int AssSubscript(PyObject* pself, PyObject* slice, PyObject* value) {
  RepeatedScalarContainer* self =
      reinterpret_cast<RepeatedScalarContainer*>(pself);
    }
    
    #if PY_MAJOR_VERSION >= 3
  #define PyInt_FromLong PyLong_FromLong
#endif
    
    
    {
    {
    {}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    #include <map>
#include <set>
#include <string>
#include <google/protobuf/compiler/cpp/cpp_options.h>
#include <google/protobuf/descriptor.h>
    
    TEST_F(CppMetadataTest, CapturesEnumNames) {
  FileDescriptorProto file;
  GeneratedCodeInfo info;
  std::string pb_h;
  atu::AddFile('test.proto', kSmallTestFile);
  EXPECT_TRUE(
      CaptureMetadata('test.proto', &file, &pb_h, &info, NULL, NULL, NULL));
  EXPECT_EQ('Enum', file.enum_type(0).name());
  std::vector<int> enum_path;
  enum_path.push_back(FileDescriptorProto::kEnumTypeFieldNumber);
  enum_path.push_back(0);
  const GeneratedCodeInfo::Annotation* enum_annotation =
      atu::FindAnnotationOnPath(info, 'test.proto', enum_path);
  EXPECT_TRUE(NULL != enum_annotation);
  EXPECT_TRUE(atu::AnnotationMatchesSubstring(pb_h, enum_annotation, 'Enum'));
}
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EnumGenerator);
};
    
    
  std::vector<std::string> all_files;
  std::vector<std::string> all_annotations;
    
    inline TypedValue ExecutionContext::invokeFunc(
  const CallCtx& ctx,
  const Variant& args_
) {
  return invokeFunc(ctx.func, args_, ctx.this_, ctx.cls, nullptr,
                    ctx.invName, InvokeNormal, ctx.dynamic);
}
    
    void CmdVariable::PrintVariable(DebuggerClient &client, const String& varName) {
  CmdVariable cmd;
  auto charCount = client.getDebuggerClientShortPrintCharCount();
  cmd.m_frame = client.getFrame();
  auto rcmd = client.xend<CmdVariable>(&cmd);
    }
    
    void* SparseHeap::resizeBig(void* ptr, size_t new_size,
                            MemoryUsageStats& stats) {
  auto old = static_cast<HeapObject*>(ptr);
  auto old_cap = m_bigs.get(old);
#ifdef USE_JEMALLOC
  auto const flags =
    (RuntimeOption::EvalBigAllocUseLocalArena ? local_arena_flags : 0);
  auto const newNode = static_cast<HeapObject*>(
    rallocx(ptr, new_size, flags)
  );
  auto new_cap = sallocx(newNode, flags);
#else
  auto const newNode = static_cast<HeapObject*>(
    safe_realloc(ptr, new_size)
  );
  auto new_cap = malloc_usable_size(newNode);
  if (new_cap % kSmallSizeAlign != 0) {
    // adjust to satisfy RadixMap (see justification in allocBig())
    new_cap += kSmallSizeAlign - new_cap % kSmallSizeAlign;
  }
#endif
  if (newNode != old || new_cap != old_cap) {
    m_bigs.erase(old);
    m_bigs.insert(newNode, new_cap);
  }
  stats.mm_udebt -= new_cap - old_cap;
  stats.malloc_cap += new_cap - old_cap;
  return newNode;
}
    
      static void EnsureInitFile(const char* file) {
    if (out && out != stderr) return;
    }
    
      static tv_rval NvGetStr(const ArrayData*, const StringData*) {
    return nullptr;
  }
  static constexpr auto NvTryGetStr = &NvGetStr;
    
      const double ellipse_point_1_x = roots.first;
  const double ellipse_point_2_x = roots.second;
    
      void GetQuadraticCoefficients(const double position_x,
                                const double position_y,
                                const double direction_x,
                                const double direction_y,
                                const double ellipse_len_1,
                                const double ellipse_len_2,
                                std::vector<double>* coefficients);
    
    bool NewtonM2Parser::HandleBestPos(const novatel::BestPos* pos,
                                   uint16_t gps_week, uint32_t gps_millisecs) {
  gnss_.mutable_position()->set_lon(pos->longitude);
  gnss_.mutable_position()->set_lat(pos->latitude);
  gnss_.mutable_position()->set_height(pos->height_msl + pos->undulation);
  gnss_.mutable_position_std_dev()->set_x(pos->longitude_std_dev);
  gnss_.mutable_position_std_dev()->set_y(pos->latitude_std_dev);
  gnss_.mutable_position_std_dev()->set_z(pos->height_std_dev);
  gnss_.set_num_sats(pos->num_sats_in_solution);
  if (solution_status_ != pos->solution_status) {
    solution_status_ = pos->solution_status;
    AINFO << 'Solution status: ' << static_cast<int>(solution_status_);
  }
  if (position_type_ != pos->position_type) {
    position_type_ = pos->position_type;
    AINFO << 'Position type: ' << static_cast<int>(position_type_);
  }
  gnss_.set_solution_status(static_cast<uint32_t>(pos->solution_status));
  if (pos->solution_status == novatel::SolutionStatus::SOL_COMPUTED) {
    gnss_.set_position_type(static_cast<uint32_t>(pos->position_type));
    switch (pos->position_type) {
      case novatel::SolutionType::SINGLE:
      case novatel::SolutionType::INS_PSRSP:
        gnss_.set_type(apollo::drivers::gnss::Gnss::SINGLE);
        break;
      case novatel::SolutionType::PSRDIFF:
      case novatel::SolutionType::WAAS:
      case novatel::SolutionType::INS_SBAS:
        gnss_.set_type(apollo::drivers::gnss::Gnss::PSRDIFF);
        break;
      case novatel::SolutionType::FLOATCONV:
      case novatel::SolutionType::L1_FLOAT:
      case novatel::SolutionType::IONOFREE_FLOAT:
      case novatel::SolutionType::NARROW_FLOAT:
      case novatel::SolutionType::RTK_DIRECT_INS:
      case novatel::SolutionType::INS_RTKFLOAT:
        gnss_.set_type(apollo::drivers::gnss::Gnss::RTK_FLOAT);
        break;
      case novatel::SolutionType::WIDELANE:
      case novatel::SolutionType::NARROWLANE:
      case novatel::SolutionType::L1_INT:
      case novatel::SolutionType::WIDE_INT:
      case novatel::SolutionType::NARROW_INT:
      case novatel::SolutionType::INS_RTKFIXED:
        gnss_.set_type(apollo::drivers::gnss::Gnss::RTK_INTEGER);
        break;
      case novatel::SolutionType::OMNISTAR:
      case novatel::SolutionType::INS_OMNISTAR:
      case novatel::SolutionType::INS_OMNISTAR_HP:
      case novatel::SolutionType::INS_OMNISTAR_XP:
      case novatel::SolutionType::OMNISTAR_HP:
      case novatel::SolutionType::OMNISTAR_XP:
      case novatel::SolutionType::PPP_CONVERGING:
      case novatel::SolutionType::PPP:
      case novatel::SolutionType::INS_PPP_CONVERGING:
      case novatel::SolutionType::INS_PPP:
        gnss_.set_type(apollo::drivers::gnss::Gnss::PPP);
        break;
      case novatel::SolutionType::PROPOGATED:
        gnss_.set_type(apollo::drivers::gnss::Gnss::PROPAGATED);
        break;
      default:
        gnss_.set_type(apollo::drivers::gnss::Gnss::INVALID);
    }
  } else {
    gnss_.set_type(apollo::drivers::gnss::Gnss::INVALID);
    gnss_.set_position_type(0);
  }
  if (pos->datum_id != novatel::DatumId::WGS84) {
    AERROR_EVERY(5) << 'Unexpected Datum Id: '
                    << static_cast<int>(pos->datum_id);
  }
    }
    
      void Update(const std::string &data) {
    Update(reinterpret_cast<const uint8_t *>(data.data()), data.size());
  }
    
      // @brief: initialize new track data and push new object to cache
  // @params [in/out]: new track data
  // @params [in/out]: new object
  void InitializeTrack(MlfTrackDataPtr new_track_data,
                       TrackedObjectPtr new_object);
    
    /*
 * Class:     org_rocksdb_CompactionOptions
 * Method:    outputFileSizeLimit
 * Signature: (J)J
 */
jlong Java_org_rocksdb_CompactionOptions_outputFileSizeLimit(
    JNIEnv*, jclass, jlong jhandle) {
  auto* compact_opts =
      reinterpret_cast<rocksdb::CompactionOptions*>(jhandle);
  return static_cast<jlong>(
      compact_opts->output_file_size_limit);
}
    
    /*
 * Class:     org_rocksdb_EnvOptions
 * Method:    fallocateWithKeepSize
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_EnvOptions_fallocateWithKeepSize(
    JNIEnv*, jobject, jlong jhandle) {
  return ENV_OPTIONS_GET(jhandle, fallocate_with_keep_size);
}
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setMoveFiles
 * Signature: (JZ)V
 */
void Java_org_rocksdb_IngestExternalFileOptions_setMoveFiles(
    JNIEnv*, jobject, jlong jhandle, jboolean jmove_files) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->move_files = static_cast<bool>(jmove_files);
}
    
    /*
 * Class:     org_rocksdb_SstFileManager
 * Method:    getDeleteRateBytesPerSecond
 * Signature: (J)J
 */
jlong Java_org_rocksdb_SstFileManager_getDeleteRateBytesPerSecond(
    JNIEnv* /*env*/, jobject /*jobj*/, jlong jhandle) {
  auto* sptr_sst_file_manager =
      reinterpret_cast<std::shared_ptr<rocksdb::SstFileManager>*>(jhandle);
  return sptr_sst_file_manager->get()->GetDeleteRateBytesPerSecond();
}