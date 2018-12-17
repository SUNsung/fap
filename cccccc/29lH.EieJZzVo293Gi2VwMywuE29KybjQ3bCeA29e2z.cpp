
        
        
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    void ImmutableMapFieldGenerator::
GenerateMapGetters(io::Printer* printer) const {
  printer->Print(
      variables_,
      '$deprecation$\n'
      'public int ${$get$capitalized_name$Count$}$() {\n'
      '  return internalGet$capitalized_name$().getMap().size();\n'
      '}\n');
  printer->Annotate('{', '}', descriptor_);
  WriteFieldDocComment(printer, descriptor_);
  printer->Print(
      variables_,
      '$deprecation$\n'
      'public boolean ${$contains$capitalized_name$$}$(\n'
      '    $key_type$ key) {\n'
      '  $key_null_check$\n'
      '  return internalGet$capitalized_name$().getMap().containsKey(key);\n'
      '}\n');
  printer->Annotate('{', '}', descriptor_);
  if (GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use {@link #get$capitalized_name$Map()} instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'public java.util.Map<$boxed_key_type$, $value_enum_type$>\n'
        '${$get$capitalized_name$$}$() {\n'
        '  return get$capitalized_name$Map();\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public java.util.Map<$boxed_key_type$, $value_enum_type$>\n'
        '${$get$capitalized_name$Map$}$() {\n'
        '  return internalGetAdapted$capitalized_name$Map(\n'
        '      internalGet$capitalized_name$().getMap());'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public $value_enum_type$ ${$get$capitalized_name$OrDefault$}$(\n'
        '    $key_type$ key,\n'
        '    $value_enum_type$ defaultValue) {\n'
        '  $key_null_check$\n'
        '  java.util.Map<$boxed_key_type$, $boxed_value_type$> map =\n'
        '      internalGet$capitalized_name$().getMap();\n'
        '  return map.containsKey(key)\n'
        '         ? $name$ValueConverter.doForward(map.get(key))\n'
        '         : defaultValue;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public $value_enum_type$ ${$get$capitalized_name$OrThrow$}$(\n'
        '    $key_type$ key) {\n'
        '  $key_null_check$\n'
        '  java.util.Map<$boxed_key_type$, $boxed_value_type$> map =\n'
        '      internalGet$capitalized_name$().getMap();\n'
        '  if (!map.containsKey(key)) {\n'
        '    throw new java.lang.IllegalArgumentException();\n'
        '  }\n'
        '  return $name$ValueConverter.doForward(map.get(key));\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    if (SupportUnknownEnumValue(descriptor_->file())) {
      printer->Print(
          variables_,
          '/**\n'
          ' * Use {@link #get$capitalized_name$ValueMap()} instead.\n'
          ' */\n'
          '@java.lang.Deprecated\n'
          'public java.util.Map<$boxed_key_type$, $boxed_value_type$>\n'
          '${$get$capitalized_name$Value$}$() {\n'
          '  return get$capitalized_name$ValueMap();\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$\n'
          'public java.util.Map<$boxed_key_type$, $boxed_value_type$>\n'
          '${$get$capitalized_name$ValueMap$}$() {\n'
          '  return internalGet$capitalized_name$().getMap();\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$\n'
          'public $value_type$ ${$get$capitalized_name$ValueOrDefault$}$(\n'
          '    $key_type$ key,\n'
          '    $value_type$ defaultValue) {\n'
          '  $key_null_check$\n'
          '  java.util.Map<$boxed_key_type$, $boxed_value_type$> map =\n'
          '      internalGet$capitalized_name$().getMap();\n'
          '  return map.containsKey(key) ? map.get(key) : defaultValue;\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$\n'
          'public $value_type$ ${$get$capitalized_name$ValueOrThrow$}$(\n'
          '    $key_type$ key) {\n'
          '  $key_null_check$\n'
          '  java.util.Map<$boxed_key_type$, $boxed_value_type$> map =\n'
          '      internalGet$capitalized_name$().getMap();\n'
          '  if (!map.containsKey(key)) {\n'
          '    throw new java.lang.IllegalArgumentException();\n'
          '  }\n'
          '  return map.get(key);\n'
          '}\n');
      printer->Annotate('{', '}', descriptor_);
    }
  } else {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use {@link #get$capitalized_name$Map()} instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'public java.util.Map<$type_parameters$> '
        '${$get$capitalized_name$$}$() {\n'
        '  return get$capitalized_name$Map();\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public java.util.Map<$type_parameters$> '
        '${$get$capitalized_name$Map$}$() {\n'
        '  return internalGet$capitalized_name$().getMap();\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public $value_type$ ${$get$capitalized_name$OrDefault$}$(\n'
        '    $key_type$ key,\n'
        '    $value_type$ defaultValue) {\n'
        '  $key_null_check$\n'
        '  java.util.Map<$type_parameters$> map =\n'
        '      internalGet$capitalized_name$().getMap();\n'
        '  return map.containsKey(key) ? map.get(key) : defaultValue;\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        'public $value_type$ ${$get$capitalized_name$OrThrow$}$(\n'
        '    $key_type$ key) {\n'
        '  $key_null_check$\n'
        '  java.util.Map<$type_parameters$> map =\n'
        '      internalGet$capitalized_name$().getMap();\n'
        '  if (!map.containsKey(key)) {\n'
        '    throw new java.lang.IllegalArgumentException();\n'
        '  }\n'
        '  return map.get(key);\n'
        '}\n');
    printer->Annotate('{', '}', descriptor_);
  }
}
    
    
string ClassNameResolver::GetJavaImmutableClassName(
    const Descriptor* descriptor) {
  return GetJavaClassFullName(
      ClassNameWithoutPackage(descriptor, true),
      descriptor->file(), true);
}
    
    FileGenerator::FileGenerator(const FileDescriptor *file, const Options& options)
    : file_(file),
      root_class_name_(FileClassName(file)),
      is_bundled_proto_(IsProtobufLibraryBundledProtoFile(file)),
      options_(options) {
  for (int i = 0; i < file_->enum_type_count(); i++) {
    EnumGenerator *generator = new EnumGenerator(file_->enum_type(i));
    enum_generators_.push_back(generator);
  }
  for (int i = 0; i < file_->message_type_count(); i++) {
    MessageGenerator *generator =
        new MessageGenerator(root_class_name_, file_->message_type(i), options_);
    message_generators_.push_back(generator);
  }
  for (int i = 0; i < file_->extension_count(); i++) {
    ExtensionGenerator *generator =
        new ExtensionGenerator(root_class_name_, file_->extension(i));
    extension_generators_.push_back(generator);
  }
}
    
    #include 'joint_bullet.h'
    
    #ifndef RID_BULLET_H
#define RID_BULLET_H
    
    	const RigidBodyBullet *getRigidBodyA() const;
	const RigidBodyBullet *getRigidBodyB() const;
	const Transform getCalculatedTransformA() const;
	const Transform getCalculatedTransformB() const;
	const Transform getFrameOffsetA() const;
	const Transform getFrameOffsetB() const;
	Transform getFrameOffsetA();
	Transform getFrameOffsetB();
	real_t getLowerLinLimit() const;
	void setLowerLinLimit(real_t lowerLimit);
	real_t getUpperLinLimit() const;
	void setUpperLinLimit(real_t upperLimit);
	real_t getLowerAngLimit() const;
	void setLowerAngLimit(real_t lowerLimit);
	real_t getUpperAngLimit() const;
	void setUpperAngLimit(real_t upperLimit);
    
    void register_csg_types() {
    }
    
    
    {		allocs[i].free_list = &allocs[i + 1];
	}
    
    	ClassDB::bind_method(D_METHOD('set_transfer_mode', 'mode'), &NetworkedMultiplayerPeer::set_transfer_mode);
	ClassDB::bind_method(D_METHOD('get_transfer_mode'), &NetworkedMultiplayerPeer::get_transfer_mode);
	ClassDB::bind_method(D_METHOD('set_target_peer', 'id'), &NetworkedMultiplayerPeer::set_target_peer);
    
    
    {	PCKPacker();
	~PCKPacker();
};
    
    template <class F, class S>
bool operator==(const Pair<F, S> &pair, const Pair<F, S> &other) {
	return (pair.first == other.first) && (pair.second == other.second);
}
    
      startParams.add('block_count', blkCount);
  startParams.add('block_size', size_t(FLAGS_carver_block_size));
  startParams.add('carve_size', pFile.size());
  startParams.add('carve_id', carveGuid_);
  startParams.add('request_id', requestId_);
  startParams.add('node_key', getNodeKey('tls'));
    
      enum class RestoreConfigError { DatabaseError = 1 };
  /**
   * @brief restoreConfigBackup retrieve backed up config
   * @return config persisted int the database
   */
  static Expected<std::map<std::string, std::string>,
                  Config::RestoreConfigError>
  restoreConfigBackup();
    
    Status ATCConfigParserPlugin::setUp() {
  VLOG(1) << 'Removing stale ATC entries';
  std::vector<std::string> keys;
  scanDatabaseKeys(kPersistentSettings, keys, kDatabaseKeyPrefix);
  for (const auto& key : keys) {
    auto s = deleteDatabaseValue(kPersistentSettings, key);
    if (!s.ok()) {
      LOG(INFO) << 'Could not clear ATC key ' << key << 'from database';
    }
  }
  return Status();
}
    
    #include <string>
#include <vector>
    
    #include <osquery/config/config.h>
    
      auto cv = config.find(kLoggerKey);
  if (cv != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(cv->second.doc(), obj);
    data_.add(kLoggerKey, obj);
  }
    
    std::vector<std::string> PrometheusMetricsConfigParserPlugin::keys() const {
  return {kPrometheusParserRootKey};
}
    
    #include <osquery/config/config.h>
#include <osquery/config/tests/test_utils.h>
#include <osquery/database.h>
#include <osquery/filesystem/filesystem.h>
#include <osquery/registry.h>
#include <osquery/registry_interface.h>
#include <osquery/system.h>
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    
    {  double ret = x * OBJECT_AREL_RES + OBJECT_AREL_LONG_MIN;
  return ret;
}
    
    namespace apollo {
namespace drivers {
namespace conti_radar {
    }
    }
    }
    
    #include 'modules/localization/msf/local_map/base_map/base_map_matrix.h'
    
    TEST_F(SpeedLimitTest, SimpleSpeedLimitCreation) {
  SpeedLimit simple_speed_limit;
  EXPECT_TRUE(simple_speed_limit.speed_limit_points().empty());
  EXPECT_EQ(speed_limit_.speed_limit_points().size(), 100);
}
    
      double s0 = lon_trajectory.Evaluate(0, 0.0);
  double s_ref_max = reference_line.back().s();
  double accumulated_trajectory_s = 0.0;
  PathPoint prev_trajectory_point;
    
      const double init_derivative = 0.1;
  constraint.AddSecondDerivativeBoundary(init_derivative, index_list,
                                         lower_bound, upper_bound);
  const auto mat = constraint.inequality_constraint_matrix();
  const auto bd = constraint.inequality_constraint_boundary();
    
    namespace guetzli {
    }
    
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
    
    #ifndef GUETZLI_JPEG_BIT_WRITER_H_
#define GUETZLI_JPEG_BIT_WRITER_H_
    
    const int kJPEGNaturalOrder[80] = {
  0,   1,  8, 16,  9,  2,  3, 10,
  17, 24, 32, 25, 18, 11,  4,  5,
  12, 19, 26, 33, 40, 48, 41, 34,
  27, 20, 13,  6,  7, 14, 21, 28,
  35, 42, 49, 56, 57, 50, 43, 36,
  29, 22, 15, 23, 30, 37, 44, 51,
  58, 59, 52, 45, 38, 31, 39, 46,
  53, 60, 61, 54, 47, 55, 62, 63,
  // extra entries for safety in decoder
  63, 63, 63, 63, 63, 63, 63, 63,
  63, 63, 63, 63, 63, 63, 63, 63
};
    
    #endif  // GUETZLI_JPEG_DATA_DECODER_H_

    
    #include 'guetzli/fdct.h'
    
    void BuildSequentialHuffmanCodes(
    const JPEGData& jpg,
    std::vector<HuffmanCodeTable>* dc_huffman_code_tables,
    std::vector<HuffmanCodeTable>* ac_huffman_code_tables) {
  JPEGOutput out(NullOut, nullptr);
  BuildAndEncodeHuffmanCodes(jpg, out, dc_huffman_code_tables,
                             ac_huffman_code_tables);
}