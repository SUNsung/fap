
        
          if (LangOpts.Target.isTvOS()) {
    return (LangOpts.EnableAppExtensionRestrictions
            ? PlatformKind::tvOSApplicationExtension
            : PlatformKind::tvOS);
  }
    
      // This is a substitution function from the generic parameters of the
  // conforming type to the synthetic environment.
  //
  // For structs, enums and protocols, this is a 1:1 mapping; for classes,
  // we increase the depth of each generic parameter by 1 so that we can
  // introduce a class-bound 'Self' parameter.
  //
  // This is a raw function rather than a substitution map because we need to
  // keep generic parameters as generic, even if the conformanceSig (the best
  // way to create the substitution map) equates them to concrete types.
  auto conformanceToSyntheticTypeFn = [&](SubstitutableType *type) {
    auto *genericParam = cast<GenericTypeParamType>(type);
    if (covariantSelf) {
      return GenericTypeParamType::get(genericParam->getDepth() + 1,
                                       genericParam->getIndex(), ctx);
    }
    }
    
    PartOfSpeech swift::getPartOfSpeech(StringRef word) {
  // FIXME: This implementation is woefully inefficient.
#define PREPOSITION(Word)                       \
  if (word.equals_lower(#Word))                 \
    return PartOfSpeech::Preposition;
#define VERB(Word)                              \
  if (word.equals_lower(#Word))                 \
    return PartOfSpeech::Verb;
#include 'PartsOfSpeech.def'
    }
    
    #include 'swift/Basic/Unicode.h'
    
    bool AnyMetadata::InternalIs(const Descriptor* descriptor) const {
  const string type_url = type_url_->GetNoArena();
  string full_name;
  if (!ParseAnyTypeUrl(type_url, &full_name)) {
    return false;
  }
  return full_name == descriptor->full_name();
}
    
    void ReflectionClassGenerator::WriteDescriptor(io::Printer* printer) {
  printer->Print(
    '#region Descriptor\n'
    '/// <summary>File descriptor for $file_name$</summary>\n'
    'public static pbr::FileDescriptor Descriptor {\n'
    '  get { return descriptor; }\n'
    '}\n'
    'private static pbr::FileDescriptor descriptor;\n'
    '\n'
    'static $reflection_class_name$() {\n',
    'file_name', file_->name(),
    'reflection_class_name', reflectionClassname_);
  printer->Indent();
  printer->Print(
    'byte[] descriptorData = global::System.Convert.FromBase64String(\n');
  printer->Indent();
  printer->Indent();
  printer->Print('string.Concat(\n');
  printer->Indent();
    }
    }
    
    void ImmutableMapFieldGenerator::
GenerateInterfaceMembers(io::Printer* printer) const {
  WriteFieldDocComment(printer, descriptor_);
  printer->Print(
      variables_,
      '$deprecation$int ${$get$capitalized_name$Count$}$();\n');
  printer->Annotate('{', '}', descriptor_);
  WriteFieldDocComment(printer, descriptor_);
  printer->Print(
      variables_,
      '$deprecation$boolean ${$contains$capitalized_name$$}$(\n'
      '    $key_type$ key);\n');
  printer->Annotate('{', '}', descriptor_);
  if (GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use {@link #get$capitalized_name$Map()} instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'java.util.Map<$boxed_key_type$, $value_enum_type$>\n'
        '${$get$capitalized_name$$}$();\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$java.util.Map<$boxed_key_type$, $value_enum_type$>\n'
        '${$get$capitalized_name$Map$}$();\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$$value_enum_type$ ${$get$capitalized_name$OrDefault$}$(\n'
        '    $key_type$ key,\n'
        '    $value_enum_type$ defaultValue);\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$$value_enum_type$ ${$get$capitalized_name$OrThrow$}$(\n'
        '    $key_type$ key);\n');
    printer->Annotate('{', '}', descriptor_);
    if (SupportUnknownEnumValue(descriptor_->file())) {
      printer->Print(
          variables_,
          '/**\n'
          ' * Use {@link #get$capitalized_name$ValueMap()} instead.\n'
          ' */\n'
          '@java.lang.Deprecated\n'
          'java.util.Map<$type_parameters$>\n'
          '${$get$capitalized_name$Value$}$();\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$java.util.Map<$type_parameters$>\n'
          '${$get$capitalized_name$ValueMap$}$();\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$\n'
          '$value_type$ ${$get$capitalized_name$ValueOrDefault$}$(\n'
          '    $key_type$ key,\n'
          '    $value_type$ defaultValue);\n');
      printer->Annotate('{', '}', descriptor_);
      WriteFieldDocComment(printer, descriptor_);
      printer->Print(
          variables_,
          '$deprecation$\n'
          '$value_type$ ${$get$capitalized_name$ValueOrThrow$}$(\n'
          '    $key_type$ key);\n');
      printer->Annotate('{', '}', descriptor_);
    }
  } else {
    printer->Print(
        variables_,
        '/**\n'
        ' * Use {@link #get$capitalized_name$Map()} instead.\n'
        ' */\n'
        '@java.lang.Deprecated\n'
        'java.util.Map<$type_parameters$>\n'
        '${$get$capitalized_name$$}$();\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$java.util.Map<$type_parameters$>\n'
        '${$get$capitalized_name$Map$}$();\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        '$value_type$ ${$get$capitalized_name$OrDefault$}$(\n'
        '    $key_type$ key,\n'
        '    $value_type$ defaultValue);\n');
    printer->Annotate('{', '}', descriptor_);
    WriteFieldDocComment(printer, descriptor_);
    printer->Print(
        variables_,
        '$deprecation$\n'
        '$value_type$ ${$get$capitalized_name$OrThrow$}$(\n'
        '    $key_type$ key);\n');
    printer->Annotate('{', '}', descriptor_);
  }
}
    
    void ConstraintBullet::disable_collisions_between_bodies(const bool p_disabled) {
	disabled_collisions_between_bodies = p_disabled;
    }
    
    class ConstraintBullet : public RIDBullet {
    }
    
    #ifndef HINGE_JOINT_BULLET_H
#define HINGE_JOINT_BULLET_H
    
    class JointBullet : public ConstraintBullet {
    }
    
    	jclass activityThread = env->FindClass('android/app/ActivityThread');
	jmethodID currentActivityThread = env->GetStaticMethodID(activityThread, 'currentActivityThread', '()Landroid/app/ActivityThread;');
	jobject at = env->CallStaticObjectMethod(activityThread, currentActivityThread);
	jmethodID getApplication = env->GetMethodID(activityThread, 'getApplication', '()Landroid/app/Application;');
	jobject context = env->CallObjectMethod(at, getApplication);
    
    #include 'core/reference.h'
    
    
    {	if (get_thread_id_func)
		return get_thread_id_func();
	return 0;
}
    
    
    {	Pair() {}
	Pair(F p_first, const S &p_second) :
			first(p_first),
			second(p_second) {
	}
};
    
    
    {
    {}  // namespace common
}  // namespace xgboost
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    // Should GradStats be in this header, rather than param.h?
struct GradStats;
    
    /**
 * \class CompressedBufferWriter
 *
 * \brief Writes bit compressed symbols to a memory buffer. Use
 * CompressedIterator to read symbols back from buffer. Currently limited to a
 * maximum symbol size of 28 bits.
 *
 * \author  Rory
 * \date  7/9/2017
 */
    
        // want to compute storage boundary for each feature
    // using variants of prefix sum scan
    boundary_.resize(nfeature);
    size_t accum_index_ = 0;
    size_t accum_row_ind_ = 0;
    for (bst_uint fid = 0; fid < nfeature; ++fid) {
      boundary_[fid].index_begin = accum_index_;
      boundary_[fid].row_ind_begin = accum_row_ind_;
      if (type_[fid] == kDenseColumn) {
        accum_index_ += static_cast<size_t>(nrow);
        accum_row_ind_ += static_cast<size_t>(nrow);
      } else {
        accum_index_ += feature_counts_[fid];
        accum_row_ind_ += feature_counts_[fid];
      }
      boundary_[fid].index_end = accum_index_;
      boundary_[fid].row_ind_end = accum_row_ind_;
    }