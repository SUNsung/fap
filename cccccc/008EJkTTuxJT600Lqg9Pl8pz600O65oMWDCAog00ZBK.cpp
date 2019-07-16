
        
        
    {  // Returns a string representation of the block dimensionality.
  string ToString() const {
    return absl::StrCat('BlockDim{', x, ', ', y, ', ', z, '}');
  }
};
    
    // Unlike test_ops.cc, these are built with the 'require_shapes' option in the
// BUILD file.
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    #include <Python.h>
    
      // Close the underlying file and release its resources.
  void Close();
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
    #ifndef TENSORFLOW_STREAM_EXECUTOR_HOST_OR_DEVICE_SCALAR_H_
#define TENSORFLOW_STREAM_EXECUTOR_HOST_OR_DEVICE_SCALAR_H_
    
    #include <ImfEnvmapAttribute.h>
    
    #include <ImfFloatAttribute.h>
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
        IMF_EXPORT
    TileDescription &		tileDescription ();
    IMF_EXPORT
    const TileDescription &	tileDescription () const;
    
    	//
	// The entries in scode are linked into lists with the
	// entries in hlink serving as 'next' pointers and with
	// the end of a list marked by hlink[j] == j.
	//
	// Traverse the lists that start at scode[m] and scode[mm].
	// For each element visited, increment the length of the
	// corresponding code by one bit. (If we visit scode[j]
	// during the traversal, then the code for symbol j becomes
	// one bit longer.)
	//
	// Merge the lists that start at scode[m] and scode[mm]
	// into a single list that starts at scode[m].
	//
	
	//
	// Add a bit to all codes in the first list.
	//
    
    
template <>
const char *
IntAttribute::staticTypeName ()
{
    return 'int';
}
    
    
    {      // Between where %rsp is now and the saved RIP of the call into the
      // freeLocalsHelpers stub, we have all the live regs we pushed, plus the
      // saved RIP of the call from the stub to this helper.
      v << syncpoint{makeIndirectFixup(prs.dwordsPushed())};
    };
    
    
    {    folly::format(&ret, '  {} := {}', show(Vreg{i}), show(def));
    if (def.expr != PhysExpr{}) {
      folly::format(&ret, ' ({} := {})', show(def.base), show(def.expr));
    }
    folly::format(&ret, '\n');
  }
    
    OutputFile::~OutputFile() {
  OutputFile::closeImpl();
}
    
    namespace HPHP {
    }
    
    int64_t TempFile::tell() {
  assertx(valid());
  if (getLength() < 0) return -1;
  return getPosition();
}
    
    
    {  return m_innerFile->open(filename, mode) &&
    (m_bzFile = BZ2_bzdopen(dup(m_innerFile->fd()), mode.data()));
}
    
      void moduleLoad(const IniSetting::Map& /*ini*/, Hdf /*config*/) override {
    // Closure must be hoisted before anything which extends from it.
    // So we place it in the global systemlib and bind its dependencies early.
    loadClosure();
  }
    
    bool HHVM_FUNCTION(stream_context_set_params,
                   const Resource& stream_or_context,
                   const Array& params);
    
      Array vec1 = Array::CreateVec();
  vec1.append('test');
  EXPECT_TRUE(vec1.toBoolean() == true);
  EXPECT_TRUE(vec1.toByte() == 1);
  EXPECT_TRUE(vec1.toInt16() == 1);
  EXPECT_TRUE(vec1.toInt32() == 1);
  EXPECT_TRUE(vec1.toInt64() == 1);
  EXPECT_TRUE(vec1.toDouble() == 1.0);
  EXPECT_TRUE(vec1.toString() == s_Vec);
    
      EXPECT_EQ(intersection_of(tstruct,  mapn_str_int), tstruct);
  EXPECT_EQ(intersection_of(tstruct2, mapn_str_int), tstruct2);
  EXPECT_EQ(intersection_of(tstruct3, mapn_str_int), tstruct3);
  EXPECT_EQ(intersection_of(tstruct4, mapn_str_int), TBottom);
  EXPECT_EQ(intersection_of(tstruct, tstruct2),      tstruct);
    
    static bool isValidClassConstantName(int tokid) {
  switch (tokid) {
  case T_STRING:
  case T_SUPER:
  case T_XHP_ATTRIBUTE:
  case T_XHP_CATEGORY:
  case T_XHP_CHILDREN:
  case T_XHP_REQUIRED:
  case T_ENUM:
  case T_CALLABLE:
  case T_TRAIT:
  case T_EXTENDS:
  case T_IMPLEMENTS:
  case T_STATIC:
  case T_ABSTRACT:
  case T_FINAL:
  case T_PRIVATE:
  case T_PROTECTED:
  case T_PUBLIC:
  case T_CONST:
  case T_ENDDECLARE:
  case T_ENDFOR:
  case T_ENDFOREACH:
  case T_ENDIF:
  case T_ENDWHILE:
  case T_LOGICAL_AND:
  case T_GLOBAL:
  case T_GOTO:
  case T_INSTANCEOF:
  case T_INSTEADOF:
  case T_INTERFACE:
  case T_NAMESPACE:
  case T_NEW:
  case T_LOGICAL_OR:
  case T_LOGICAL_XOR:
  case T_TRY:
  case T_USE:
  case T_VAR:
  case T_EXIT:
  case T_LIST:
  case T_CLONE:
  case T_INCLUDE:
  case T_INCLUDE_ONCE:
  case T_THROW:
  case T_ARRAY:
  case T_PRINT:
  case T_ECHO:
  case T_REQUIRE:
  case T_REQUIRE_ONCE:
  case T_RETURN:
  case T_ELSE:
  case T_ELSEIF:
  case T_DEFAULT:
  case T_BREAK:
  case T_CONTINUE:
  case T_SWITCH:
  case T_YIELD:
  case T_FUNCTION:
  case T_IF:
  case T_ENDSWITCH:
  case T_FINALLY:
  case T_FOR:
  case T_FOREACH:
  case T_DECLARE:
  case T_CASE:
  case T_DO:
  case T_WHILE:
  case T_AS:
  case T_CATCH:
  case T_DICT:
  case T_VEC:
  case T_KEYSET:
  case T_VARRAY:
  case T_DARRAY:
  case T_INOUT:
    return true;
  default:
    return false;
  }
}