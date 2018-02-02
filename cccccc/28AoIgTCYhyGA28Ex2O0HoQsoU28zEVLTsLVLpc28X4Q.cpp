
        
        namespace tesseract {
    }
    
    #ifndef           PGEDIT_H
#define           PGEDIT_H
    
    // Helper recursively prints all paths through the ratings matrix, starting
// at column col.
static void PrintMatrixPaths(int col, int dim,
                             const MATRIX& ratings,
                             int length, const BLOB_CHOICE** blob_choices,
                             const UNICHARSET& unicharset,
                             const char *label, FILE *output_file) {
  for (int row = col; row < dim && row - col < ratings.bandwidth(); ++row) {
    if (ratings.get(col, row) != NOT_CLASSIFIED) {
      BLOB_CHOICE_IT bc_it(ratings.get(col, row));
      for (bc_it.mark_cycle_pt(); !bc_it.cycled_list(); bc_it.forward()) {
        blob_choices[length] = bc_it.data();
        if (row + 1 < dim) {
          PrintMatrixPaths(row + 1, dim, ratings, length + 1, blob_choices,
                           unicharset, label, output_file);
        } else {
          PrintPath(length + 1, blob_choices, unicharset, label, output_file);
        }
      }
    }
  }
}
    
        #ifndef GRAPHICS_DISABLED
    void plot(                 //draw one
              ScrollView* window,   //window to draw in
              ScrollView::Color colour);  //uniform colour
    void plot(                 //draw one
              ScrollView* window);  //in rainbow colours
    
    
    {
    {    std::ostringstream oss;
    std::copy(line.begin() + options_index,
              line.end(),
              std::ostream_iterator<std::string>(oss, ' '));
    r['options'] = oss.str();
    results.push_back(r);
  }
}
    
      /// Calling startExtension should declare the registry external.
  /// This will cause extension-internal events to forward to osquery core.
  bool external_{false};
    
    
    {error_exit:
  // Unlock and return a status to the daemon.
  lck_mtx_unlock(osquery.mtx);
  return err;
}
    
    namespace osquery {
    }
    
        pt::ptree multi_pack;
    for (const auto& path : paths) {
      std::string content;
      if (!readFile(path, content)) {
        LOG(WARNING) << 'Cannot read multi-pack file: ' << path;
        continue;
      }
    }
    
      auto s = TLSRequestHelper::go<JSONSerializer>(
      uri_, params, json, FLAGS_config_tls_max_attempts);
  if (s.ok()) {
    if (FLAGS_tls_node_api) {
      // The node API embeds configuration data (JSON escaped).
      pt::ptree tree;
      try {
        std::stringstream input;
        input << json;
        pt::read_json(input, tree);
      } catch (const pt::json_parser::json_parser_error& /* e */) {
        VLOG(1) << 'Could not parse JSON from TLS node API';
      }
    }
    }
    
    #include 'osquery/core/conversions.h'
    
    #include 'mars/log/appender.h'
    
    #ifndef __PublicComponent__testspy__
#define __PublicComponent__testspy__
    
    // bool JNU_Jstring2Wstring( JNIEnv* _env, const jstring jstr, std::wstring& wstr); //in linux sizeof(wchar_t)==4 but sizeof(jchar)==2
wchar_t* JNU_Jstring2Wchar(JNIEnv* _env, const jstring jstr);
void JNU_FreeWchar(JNIEnv* _env, jstring str, wchar_t* wchar);
jstring JNU_Wstring2Jstring(JNIEnv* _env, const std::wstring& wstr);
jstring JNU_Wchar2JString(JNIEnv* _env, wchar_t* wchar);
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {}  // namespace grpc
    
      grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cerr << 'Server listening on ' << server_address << std::endl;
    
    grpc::string GetHeaderEpilogue(grpc_generator::File *file,
                               const Parameters & /*params*/) {
  grpc::string output;
  {
    // Scope the output stream so it closes and finalizes output to the string.
    auto printer = file->CreatePrinter(&output);
    std::map<grpc::string, grpc::string> vars;
    }
    }
    
    template<typename T> const char *EnumName(T tval, const TypeTable *type_table) {
  if (!type_table || !type_table->names) return nullptr;
  auto i = LookupEnum(static_cast<int32_t>(tval), type_table->values,
                      type_table->num_elems);
  if (i >= 0 && i < static_cast<int32_t>(type_table->num_elems)) {
    return type_table->names[i];
  }
  return nullptr;
}