bool ParseAnyTypeUrl(const string& type_url, string* url_prefix,
                     string* full_type_name) {
  size_t pos = type_url.find_last_of('/');
  if (pos == string::npos || pos + 1 == type_url.size()) {
    return false;
  }
  if (url_prefix) {
    *url_prefix = type_url.substr(0, pos + 1);
  }
  *full_type_name = type_url.substr(pos + 1);
  return true;
}
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
        if (options_.annotate_code) {
      std::unique_ptr<io::ZeroCopyOutputStream> info_output(
          context->Open(info_full_path));
      annotations.SerializeToZeroCopyStream(info_output.get());
      annotation_file_list->push_back(info_full_path);
    }
    
    TEST(ObjCHelper, TextFormatDecodeData_RawStrings) {
  TextFormatDecodeData decode_data;
    }
    
    void OneofGenerator::GenerateClearFunctionDeclaration(io::Printer* printer) {
  printer->Print(
      variables_,
      '/**\n'
      ' * Clears whatever value was set for the oneof '$name$'.\n'
      ' **/\n'
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message);\n');
}
    
    #include <cstdint>      // for int32_t
    
      // Add all parameters to a list.
  int v, i;
  int num_iterations = (tess->params() == nullptr) ? 1 : 2;
  for (v = 0; v < num_iterations; ++v) {
    tesseract::ParamsVectors *vec = (v == 0) ? GlobalParams() : tess->params();
    for (i = 0; i < vec->int_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->int_params[i]));
    }
    for (i = 0; i < vec->bool_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->bool_params[i]));
    }
    for (i = 0; i < vec->string_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->string_params[i]));
    }
    for (i = 0; i < vec->double_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->double_params[i]));
    }
  }
    
    // A list of all possible parameter types used.
enum ParamType {
  VT_INTEGER,
  VT_BOOLEAN,
  VT_STRING,
  VT_DOUBLE
};
    
      /// Return true if we are processing the full image.
  bool IsFullImage() const {
    return rect_left_ == 0 && rect_top_ == 0 &&
           rect_width_ == image_width_ && rect_height_ == image_height_;
  }
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
      // Merges the boxes from start to end, not including end, and deletes
  // the boxes between start and end.
  void MergeBoxes(int start, int end);
    
    	const btDiscreteDynamicsWorld *m_world;
	btPersistentManifold *m_manifoldPtr;
	bool m_ownManifold;
	bool m_isSwapped;
    
    size_t MemoryPool::total_memory = 0;
size_t MemoryPool::max_memory = 0;
    
    
    {	return singleton;
}
    
    Thread::ID Thread::get_caller_id() {
    }
    
    
    {			return OK;
		}
    
    
    {}
    
    
struct Config {
  /*
   * Normalizes hdf string names to their ini counterparts
   *
   * We have special handling for a few hdf strings such as those containing
   * MySQL, Eval, IPv[4|6] and EnableHipHopSyntax
   */
  static std::string IniName(const Hdf& config,
                             const bool prepend_hhvm = true);
  static std::string IniName(const std::string& config,
                             const bool prepend_hhvm = true);
    }