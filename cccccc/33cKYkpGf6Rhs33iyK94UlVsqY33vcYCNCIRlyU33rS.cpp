    for (;;) {
        if (bytes < 64) {
            ctarget = c;
            c = tmp;
        }
        x0 = j0;
        x1 = j1;
        x2 = j2;
        x3 = j3;
        x4 = j4;
        x5 = j5;
        x6 = j6;
        x7 = j7;
        x8 = j8;
        x9 = j9;
        x10 = j10;
        x11 = j11;
        x12 = j12;
        x13 = j13;
        x14 = j14;
        x15 = j15;
        for (i = 20;i > 0;i -= 2) {
            QUARTERROUND( x0, x4, x8,x12)
            QUARTERROUND( x1, x5, x9,x13)
            QUARTERROUND( x2, x6,x10,x14)
            QUARTERROUND( x3, x7,x11,x15)
            QUARTERROUND( x0, x5,x10,x15)
            QUARTERROUND( x1, x6,x11,x12)
            QUARTERROUND( x2, x7, x8,x13)
            QUARTERROUND( x3, x4, x9,x14)
        }
        x0 += j0;
        x1 += j1;
        x2 += j2;
        x3 += j3;
        x4 += j4;
        x5 += j5;
        x6 += j6;
        x7 += j7;
        x8 += j8;
        x9 += j9;
        x10 += j10;
        x11 += j11;
        x12 += j12;
        x13 += j13;
        x14 += j14;
        x15 += j15;
    }
    
    // Author: qrczak@google.com (Marcin Kowalczyk)
    
    // Checks if a message contains any extension definitions (on the message or
// a nested message under it).
bool MessageContainsExtensions(const Descriptor* message) {
  if (message->extension_count() > 0) {
    return true;
  }
  for (int i = 0; i < message->nested_type_count(); i++) {
    if (MessageContainsExtensions(message->nested_type(i))) {
      return true;
    }
  }
  return false;
}
    
      desired_output_for_decode = 'abcdefghIJ';
  expected = string('\x0A\x0', 2);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
    void OneofGenerator::GenerateClearFunctionImplementation(io::Printer* printer) {
  printer->Print(
      variables_,
      'void $owning_message_class$_Clear$capitalized_name$OneOfCase($owning_message_class$ *message) {\n'
      '  GPBDescriptor *descriptor = [message descriptor];\n'
      '  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:$raw_index$];\n'
      '  GPBMaybeClearOneof(message, oneof, $index$, 0);\n'
      '}\n');
}
    
    #include <ostream>
#include <stdio.h>
#include <string>
#include <utility>
    
    TEST(StatusOr, TestPointerAssignmentStatusNotOkConverting) {
  StatusOr<Derived*> source(Status::CANCELLED);
  StatusOr<Base2*>   target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
}
    
    // Copyright 2008 Google Inc. All Rights Reserved.
// Author: xpeng@google.com (Peter Peng)
    
    	//Process intersection nodes - horribly inefficient
	bool dirty = true;
	int counter = 0;
	while (dirty){
		dirty = false;
		for (int32 i=0; i < nNodes; ++i){
			for (int32 j=0; j < nodes[i].nConnected; ++j){
				for (int32 k=0; k < nNodes; ++k){
					if (k==i || &nodes[k] == nodes[i].connected[j]) continue;
					for (int32 l=0; l < nodes[k].nConnected; ++l){
				
						if ( nodes[k].connected[l] == nodes[i].connected[j] ||
							 nodes[k].connected[l] == &nodes[i]) continue;
						//Check intersection
						b2Vec2 intersectPt;
						//if (counter > 100) printf('checking intersection: %d, %d, %d, %d\n',i,j,k,l);
						bool crosses = intersect(nodes[i].position,nodes[i].connected[j]->position,
												 nodes[k].position,nodes[k].connected[l]->position,
												 intersectPt);
						if (crosses){
							/*if (counter > 100) {
								printf('Found crossing at %f, %f\n',intersectPt.x, intersectPt.y);
								printf('Locations: %f,%f - %f,%f | %f,%f - %f,%f\n',
												nodes[i].position.x, nodes[i].position.y,
												nodes[i].connected[j]->position.x, nodes[i].connected[j]->position.y,
												nodes[k].position.x,nodes[k].position.y,
												nodes[k].connected[l]->position.x,nodes[k].connected[l]->position.y);
								printf('Memory addresses: %d, %d, %d, %d\n',(int)&nodes[i],(int)nodes[i].connected[j],(int)&nodes[k],(int)nodes[k].connected[l]);
							}*/
							dirty = true;
							//Destroy and re-hook connections at crossing point
							b2PolyNode* connj = nodes[i].connected[j];
							b2PolyNode* connl = nodes[k].connected[l];
							nodes[i].connected[j]->RemoveConnection(nodes[i]);
							nodes[i].RemoveConnection(*connj);
							nodes[k].connected[l]->RemoveConnection(nodes[k]);
							nodes[k].RemoveConnection(*connl);
							nodes[nNodes] = b2PolyNode(intersectPt);
							nodes[nNodes].AddConnection(nodes[i]);
							nodes[i].AddConnection(nodes[nNodes]);
							nodes[nNodes].AddConnection(nodes[k]);
							nodes[k].AddConnection(nodes[nNodes]);
							nodes[nNodes].AddConnection(*connj);
							connj->AddConnection(nodes[nNodes]);
							nodes[nNodes].AddConnection(*connl);
							connl->AddConnection(nodes[nNodes]);
							++nNodes;
							goto SkipOut;
						}
					}
				}
			}
		}
		SkipOut:
		++counter;
		//if (counter > 100) printf('Counter: %d\n',counter);
	}
	
	/*
	// Debugging: check for connection consistency
	for (int32 i=0; i<nNodes; ++i) {
		int32 nConn = nodes[i].nConnected;
		for (int32 j=0; j<nConn; ++j) {
			if (nodes[i].connected[j]->nConnected == 0) b2Assert(false);
			b2PolyNode* connect = nodes[i].connected[j];
			bool found = false;
			for (int32 k=0; k<connect->nConnected; ++k) {
				if (connect->connected[k] == &nodes[i]) found = true;
			}
			b2Assert(found);
		}
	}*/
    
    #define ETCCOMP_MIN_EFFORT_LEVEL (0.0f)
#define ETCCOMP_DEFAULT_EFFORT_LEVEL (40.0f)
#define ETCCOMP_MAX_EFFORT_LEVEL (100.0f)
    
    		case Image::Format::RGBA8:
		case Image::Format::SRGBA8:
			m_pencoding = new Block4x4Encoding_RGBA8;
			break;
    
    	// ----------------------------------------------------------------------------------------------------
	// try an ETC1 differential mode encoding for a half of a 4x4 block
	// vary the basecolor components using a radius
	//
	void Block4x4Encoding_ETC1::TryDifferentialHalf(DifferentialTrys::Half *a_phalf)
	{
    }
    
      THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/
    
    #define  kf_cexp2(x,phase) \
   do{ \
      (x)->r = TRIG_UPSCALE*celt_cos_norm((phase));\
      (x)->i = TRIG_UPSCALE*celt_cos_norm((phase)-32768);\
}while(0)
    
    /* Set this if opus_int64 is a native type of the CPU. */
/* Assume that all LP64 architectures have fast 64-bit types; also x86_64
   (which can be ILP32 for x32) and Win64 (which is LLP64). */
#if defined(__x86_64__) || defined(__LP64__) || defined(_WIN64)
#define OPUS_FAST_INT64 1
#else
#define OPUS_FAST_INT64 0
#endif
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    /** 16x32 multiplication, followed by a 16-bit shift right and 32-bit add.
    Results fits in 32 bits */
#define MAC16_32_Q16(c,a,b) ADD32((c),ADD32(MULT16_16((a),SHR((b),16)), SHR(MULT16_16SU((a),((b)&0x0000ffff)),16)))
    
    
    {}  // namespace leveldb

    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    #include <stdio.h>
#include 'leveldb/comparator.h'
#include 'leveldb/db.h'
#include 'leveldb/filter_policy.h'
#include 'leveldb/slice.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
#include 'util/logging.h'
    
    int main(int argc, char** argv) {
  leveldb::Env* env = leveldb::Env::Default();
  bool ok = true;
  if (argc < 2) {
    Usage();
    ok = false;
  } else {
    std::string command = argv[1];
    if (command == 'dump') {
      ok = leveldb::HandleDumpCommand(env, argv+2, argc-2);
    } else {
      Usage();
      ok = false;
    }
  }
  return (ok ? 0 : 1);
}

    
      kFullType = 1,
    
          case kEof:
        if (in_fragmented_record) {
          // This can be caused by the writer dying immediately after
          // writing a physical record but before completing the next; don't
          // treat it as a corruption, just ignore the entire logical record.
          scratch->clear();
        }
        return false;
    
     private:
  WritableFile* dest_;
  int block_offset_;       // Current offset in block
    
    
    {
    {  void ArchiveFile(const std::string& fname) {
    // Move into another directory.  E.g., for
    //    dir/foo
    // rename to
    //    dir/lost/foo
    const char* slash = strrchr(fname.c_str(), '/');
    std::string new_dir;
    if (slash != nullptr) {
      new_dir.assign(fname.data(), slash - fname.data());
    }
    new_dir.append('/lost');
    env_->CreateDir(new_dir);  // Ignore error
    std::string new_file = new_dir;
    new_file.append('/');
    new_file.append((slash == nullptr) ? fname.c_str() : slash + 1);
    Status s = env_->RenameFile(fname, new_file);
    Log(options_.info_log, 'Archiving %s: %s\n',
        fname.c_str(), s.ToString().c_str());
  }
};
}  // namespace
    
      Cache::Handle* handle = nullptr;
  Status s = FindTable(file_number, file_size, &handle);
  if (!s.ok()) {
    return NewErrorIterator(s);
  }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
    /*! \brief collection of rowset */
class RowSetCollection {
 public:
  /*! \brief data structure to store an instance set, a subset of
   *  rows (instances) associated with a particular node in a decision
   *  tree. */
  struct Elem {
    const size_t* begin{nullptr};
    const size_t* end{nullptr};
    int node_id{-1};
      // id of node associated with this instance set; -1 means uninitialized
    Elem()
         = default;
    Elem(const size_t* begin,
         const size_t* end,
         int node_id)
        : begin(begin), end(end), node_id(node_id) {}
    }
    }
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    
    {
    {}  // namespace obj
}  // namespace xgboost
    
      inline static void LimitSizeLevel
    (size_t maxn, double eps, size_t* out_nlevel, size_t* out_limit_size) {
    size_t& nlevel = *out_nlevel;
    size_t& limit_size = *out_limit_size;
    nlevel = 1;
    while (true) {
      limit_size = static_cast<size_t>(ceil(nlevel / eps)) + 1;
      size_t n = (1ULL << nlevel);
      if (n * limit_size >= maxn) break;
      ++nlevel;
    }
    // check invariant
    size_t n = (1ULL << nlevel);
    CHECK(n * limit_size >= maxn) << 'invalid init parameter';
    CHECK(nlevel <= limit_size * eps) << 'invalid init parameter';
  }
    
    
    {  /*!
   * \brief transform prediction values, this is only called when Eval is called,
   *  usually it redirect to PredTransform
   * \param io_preds prediction values, saves to this vector as well
   */
  virtual void EvalTransform(HostDeviceVector<bst_float> *io_preds) {
    this->PredTransform(io_preds);
  }
  /*!
   * \brief transform probability value back to margin
   * this is used to transform user-set base_score back to margin
   * used by gradient boosting
   * \return transformed value
   */
  virtual bst_float ProbToMargin(bst_float base_score) const {
    return base_score;
  }
  /*!
   * \brief Create an objective function according to name.
   * \param name Name of the objective.
   */
  static ObjFunction* Create(const std::string& name);
};
    
    void SimpleCSRSource::SaveBinary(dmlc::Stream* fo) const {
  int tmagic = kMagic;
  fo->Write(&tmagic, sizeof(tmagic));
  info.SaveBinary(fo);
  fo->Write(page_.offset.HostVector());
  fo->Write(page_.data.HostVector());
}
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        IMGUI_API bool BuildFontAtlas(ImFontAtlas* atlas, unsigned int extra_flags = 0);
    
    void ImGui_ImplDX9_InvalidateDeviceObjects()
{
    if (!g_pd3dDevice)
        return;
    if (g_pVB)
    {
        g_pVB->Release();
        g_pVB = NULL;
    }
    if (g_pIB)
    {
        g_pIB->Release();
        g_pIB = NULL;
    }
    }
    
        if (install_callbacks)
    {
        s3ePointerRegister(S3E_POINTER_BUTTON_EVENT, ImGui_Marmalade_PointerButtonEventCallback, 0);
        s3eKeyboardRegister(S3E_KEYBOARD_KEY_EVENT, ImGui_Marmalade_KeyCallback, 0);
        s3eKeyboardRegister(S3E_KEYBOARD_CHAR_EVENT, ImGui_Marmalade_CharCallback, 0);
    }
    
    //////////////////////////////////////////////////////////////////////
    
    
    {} // namespace folly

    
      for (int i = 0; i < 8; ++i) {
    writeIntegerString<
        uint16_t,
        4, // at most 4 hex digits per ushort
        16, // base 16 (hex)
        true>(htons(bytes[i]), &buf);
    }
    
    #include <map>
    
    // Return the services for generated source file.
grpc::string GetSourceServices(grpc_generator::File *file,
                               const Parameters &params);
    
      // parse schema first, so we can use it to parse the data after
  flatbuffers::Parser parser;
  const char *include_directories[] = { 'samples', nullptr };
  ok = parser.Parse(schemafile.c_str(), include_directories) &&
       parser.Parse(jsonfile.c_str(), include_directories);
  assert(ok);
    
    static void GenNameSpace(const Namespace &name_space, std::string *_schema,
                         const Namespace **last_namespace) {
  if (*last_namespace == &name_space) return;
  *last_namespace = &name_space;
  auto &schema = *_schema;
  schema += 'namespace ';
  for (auto it = name_space.components.begin();
       it != name_space.components.end(); ++it) {
    if (it != name_space.components.begin()) schema += '.';
    schema += *it;
  }
  schema += ';\n\n';
}
    
    namespace grpc_go_generator {
    }
    
    #include <stdlib.h>  // for abort()
#include <iostream>
#include <map>
#include <string>
    
        // Check Parser.
    parser.Parse(parse_input);
    
    
    {    // Read a locale for the test.
    if (flatbuffers::ReadEnvironmentVariable('FLATBUFFERS_TEST_LOCALE',
                                             &test_locale_)) {
      TEST_OUTPUT_LINE('The environment variable FLATBUFFERS_TEST_LOCALE=%s',
                       test_locale_.c_str());
      test_locale_ = flatbuffers::RemoveStringQuotes(test_locale_);
      has_locale_ = true;
    }
  }
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(left, right, top, bottom, width, height);
    }
};

    
    namespace facebook {
    }
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }
    
    // If a pending JNI Java exception is found, wraps it in a JniException object and throws it as
// a C++ exception.
#define FACEBOOK_JNI_THROW_PENDING_EXCEPTION() \
  ::facebook::jni::throwPendingJniExceptionAsCppException()
    
    template<typename T>
inline JStaticField<enable_if_t<IsJniScalar<T>(), T>> JClass::getStaticField(
    const char* name) const {
  return getStaticField<T>(name, jtype_traits<T>::descriptor().c_str());
}