
        
            KeyChord::KeyChord(Settings::KeyModifiers const& modifiers, int32_t vkey) :
        _modifiers{ modifiers },
        _vkey{ vkey }
    {
    }
    
    // Forward declarations
HRESULT CreatePseudoConsoleAndPipes(HPCON*, HANDLE*, HANDLE*);
HRESULT InitializeStartupInfoAttachedToPseudoConsole(STARTUPINFOEX*, HPCON);
void __cdecl PipeListener(LPVOID);
    
        bool WriteToFile(const base::FilePath& path);
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    base::StringPiece GetStringResource(int resource_id) {
  return ResourceBundle::GetSharedInstance().GetRawDataResource(resource_id);
}
    
    // Tell browser to delete a object.
// function DeallocateObject(id);
v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id);
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
    void Menu::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    for(auto* item : menu_items_) {
      item->UpdateKeys(focus_manager);
    }
  }
}
    
    
    {  int menu_id;
  if (option.GetInteger('submenu', &menu_id))
    SetSubmenu(object_manager()->GetApiObject<Menu>(menu_id));
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Clipboard.readAvailableTypes', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwClipboardReadAvailableTypesFunction);
};
    
    namespace extensions {
    }
    
    struct ModulesTest : torch::test::SeedingFixture {};
    
    namespace {
    }
    
    workspace.ResetWorkspace()
    
    
    {} // namespace caffe2

    
    #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    
    {}  // namespace tesseract
    
    #include <cstdint>      // for int32_t
#include 'points.h'     // for FCOORD
    
     private:
  // Free allocated memory and clear pointers.
  void Clear();
  // Setup default values.
  void Init();
    
    bool ParagraphModel::ValidBodyLine(int lmargin, int lindent,
                                   int rindent, int rmargin) const {
  switch (justification_) {
    case JUSTIFICATION_LEFT:
      return NearlyEqual(lmargin + lindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_RIGHT:
      return NearlyEqual(rmargin + rindent, margin_ + body_indent_,
                         tolerance_);
    case JUSTIFICATION_CENTER:
      return NearlyEqual(lindent, rindent, tolerance_ * 2);
    default:
      // shouldn't happen
      return false;
  }
}
    
      /* Initial reject modes (pre NN_ACCEPT) */
  R_POOR_MATCH,         // TEMP Ray's original heuristic (Not used)
  R_NOT_TESS_ACCEPTED,  // TEMP Tess didn't accept WERD
  R_CONTAINS_BLANKS,    // TEMP Tess failed on other chs in WERD
  R_BAD_PERMUTER,       // POTENTIAL Bad permuter for WERD
    
    
    {}  // namespace tesseract.
    
      // Provides access to the ShapeTable that this classifier works with.
  virtual const ShapeTable* GetShapeTable() const = 0;
  // Provides access to the UNICHARSET that this classifier works with.
  // Must be overridden IFF GetShapeTable() returns nullptr.
  virtual const UNICHARSET& GetUnicharset() const;
    
    	f->get_buffer(w.ptr(), len);
    
    public:
	virtual String get_name() const { return 'CPUParticles'; }
	bool has_main_screen() const { return false; }
	virtual void edit(Object *p_object);
	virtual bool handles(Object *p_object) const;
	virtual void make_visible(bool p_visible);
    
    	ConfirmationDialog *generate_visibility_rect;
	SpinBox *generate_seconds;
    
    
    {			buff = pages.write[page].buffer.ptrw();
			last_page_buff = buff;
			last_page = page;
		}
    
    
    {				} break;
    
    	virtual void particles_set_emitting(RID p_particles, bool p_emitting);
	virtual bool particles_get_emitting(RID p_particles);
	virtual void particles_set_amount(RID p_particles, int p_amount);
	virtual void particles_set_lifetime(RID p_particles, float p_lifetime);
	virtual void particles_set_one_shot(RID p_particles, bool p_one_shot);
	virtual void particles_set_pre_process_time(RID p_particles, float p_time);
	virtual void particles_set_explosiveness_ratio(RID p_particles, float p_ratio);
	virtual void particles_set_randomness_ratio(RID p_particles, float p_ratio);
	virtual void particles_set_custom_aabb(RID p_particles, const AABB &p_aabb);
	virtual void particles_set_speed_scale(RID p_particles, float p_scale);
	virtual void particles_set_use_local_coordinates(RID p_particles, bool p_enable);
	virtual void particles_set_process_material(RID p_particles, RID p_material);
	virtual void particles_set_fixed_fps(RID p_particles, int p_fps);
	virtual void particles_set_fractional_delta(RID p_particles, bool p_enable);
	virtual void particles_restart(RID p_particles);
    
    	if (!version->ok) { //broken, unable to bind (do not throw error, you saw it before already when it failed compilation).
		glUseProgram(0);
		return false;
	}
    
    			const Variant &key = keys[index];
			UndoRedo *ur = EditorNode::get_undo_redo();
    
    	VBoxContainer *makevb = memnew(VBoxContainer);
	makedialog->add_child(makevb);
	//makedialog->set_child_rect(makevb);
    
    
    {		char      *lPr = (char *)malloc(MAX_PATH);
		char      *pR = (char *)malloc(MAX_PATH);
		size_t i;
		wcstombs_s(&i, lPr, (size_t)MAX_PATH,
			legacyUserProfilePath, (size_t)MAX_PATH);
		wcstombs_s(&i, pR, (size_t)MAX_PATH,
			userProfilePath, (size_t)MAX_PATH);
		rename(lPr, pR);
	}
    
      // Our data structure does not allow duplicate insertion
  assert(x == nullptr || !Equal(key, x->key));
    
    TEST(MemEnvTest, DBTest) {
  Options options;
  options.create_if_missing = true;
  options.env = env_;
  DB* db;
    }
    
    namespace leveldb {
    }
    
    void TableBuilder::WriteRawBlock(const Slice& block_contents,
                                 CompressionType type, BlockHandle* handle) {
  Rep* r = rep_;
  handle->set_offset(r->offset);
  handle->set_size(block_contents.size());
  r->status = r->file->Append(block_contents);
  if (r->status.ok()) {
    char trailer[kBlockTrailerSize];
    trailer[0] = type;
    uint32_t crc = crc32c::Value(block_contents.data(), block_contents.size());
    crc = crc32c::Extend(crc, trailer, 1);  // Extend crc to cover block type
    EncodeFixed32(trailer + 1, crc32c::Mask(crc));
    r->status = r->file->Append(Slice(trailer, kBlockTrailerSize));
    if (r->status.ok()) {
      r->offset += block_contents.size() + kBlockTrailerSize;
    }
  }
}
    
    TEST(EnvWindowsTest, TestOpenOnRead) {
  // Write some test data to a single file that will be opened |n| times.
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file = test_dir + '/open_on_read.txt';
    }
    
    size_t BlockBuilder::CurrentSizeEstimate() const {
  return (buffer_.size() +                       // Raw data buffer
          restarts_.size() * sizeof(uint32_t) +  // Restart array
          sizeof(uint32_t));                     // Restart array length
}
    
    #include 'db/builder.h'
    
      if (allow_exec) {
    allow_mask |= CHMOD_EXECUTE | FILE_READ_ATTRIBUTES | SYNCHRONIZE;
  } else {
    deny_mask |= CHMOD_EXECUTE;
  }
    
    #include <osquery/core.h>
#include <osquery/tables.h>
    
      /// Returns the pid of the current process
  static int getCurrentPid();
    
    std::map<std::string, std::string> getTestConfigMap(const std::string& file) {
  std::string content;
  auto const filepath = getTestConfigDirectory() / file;
  auto status = readFile(filepath, content);
  EXPECT_TRUE(status.ok())
      << 'Could not read file: ' << boost::io::quoted(filepath.string())
      << ', because: ' << status.what();
  std::map<std::string, std::string> config;
  config['awesome'] = content;
  return config;
}
    
     private:
  template <typename T>
  Expected<T, DatabaseError> getValue(const std::string& domain,
                                      const std::string& key);
  template <typename T>
  ExpectedSuccess<DatabaseError> putValue(const std::string& domain,
                                          const std::string& key,
                                          const T& value);
    
      db_ = std::unique_ptr<rocksdb::DB>(raw_db_handle);
  for (size_t i = 0; i < column_families.size(); i++) {
    handles_map_[column_families[i].name] =
        std::shared_ptr<Handle>(raw_handles[i]);
  }
    
        ret = p.write(&p, (void*) SW_STRS('hello world1'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world2'));
    ASSERT_GT(ret, 0);
    ret = p.write(&p, (void*) SW_STRS('hello world3'));
    ASSERT_GT(ret, 0);
    
    TEST(coroutine_gethostbyname, resolve_cache_inet4_and_inet6)
{
    coro_test([](void *arg)
    {
        System::set_dns_cache_capacity(10);
    }
    }
    
        ret = swSocket_unix_sendto(fd1,sock2_path,test_data,strlen(test_data));
    ASSERT_GT(ret, 0);
    
    
    {    ASSERT_EQ(swThreadPool_free(&pool), SW_OK);
    ASSERT_EQ(result, N);
}
#endif
    
            pid_t pid = fork();
        ASSERT_NE(pid, -1);
    
        friend
    void RedisQtCleanup(void * adapter) {
        RedisQtAdapter * a = static_cast<RedisQtAdapter *>(adapter);
        a->cleanup();
    }
    
    #endif /* !__HIREDIS_EXAMPLE_QT_H */

    
        for (auto i = lists.begin(); i != lists.end(); i++)
    {
        int ret = swRbtree_delete(tree, *i);
        ASSERT_EQ(ret, 0);
    }
    
    greeting_packet::greeting_packet(const char *data) : server_packet(data)
{
    swMysqlPacketDump(header.length, header.number, data, 'Protocol::HandshakeGreeting');
    /**
    1              [0a] protocol version
    string[NUL]    server version
    4              connection id
    string[8]      auth-plugin-data-part-1
    1              [00] filler
    2              capability flags (lower 2 bytes)
      if more data in the packet:
    1              character set
    2              status flags
    2              capability flags (upper 2 bytes)
      if capabilities & CLIENT_PLUGIN_AUTH {
    1              length of auth-plugin-data
      } else {
    1              [00]
      }
    string[10]     reserved (all [00])
      if capabilities & CLIENT_SECURE_CONNECTION {
    string[$len]   auth-plugin-data-part-2 ($len=MAX(13, length of auth-plugin-data - 8))
      if capabilities & CLIENT_PLUGIN_AUTH {
    string[NUL]    auth-plugin name
      }
    */
    const char *p = data + SW_MYSQL_PACKET_HEADER_SIZE;
    // 1              [0a] protocol version
    protocol_version = *p;
    p++;
    // x              server version
    server_version = std::string(p);
    p += server_version.length() + 1;
    // 4              connection id
    connection_id = *((int *) p);
    p += 4;
    // string[8]      auth-plugin-data-part-1
    memcpy(auth_plugin_data, p, 8);
    p += 8;
    // 1              [00] filler
    filler = *p;
    p += 1;
    // 2              capability flags (lower 2 bytes)
    memcpy(((char *) (&capability_flags)), p, 2);
    p += 2;
    }
    }