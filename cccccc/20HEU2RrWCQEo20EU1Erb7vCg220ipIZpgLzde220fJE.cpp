
        
          // Print statistics.
  void print_scores(void) const;
  void print_scores(int orientation_id) const;
    
    
    {}  // namespace tesseract.

    
    /**********************************************************************
 * recog_word
 *
 * Convert the word to tess form and pass it to the tess segmenter.
 * Convert the output back to editor form.
 **********************************************************************/
namespace tesseract {
void Tesseract::recog_word(WERD_RES *word) {
  if (wordrec_skip_no_truth_words && (word->blamer_bundle == nullptr ||
      word->blamer_bundle->incorrect_result_reason() == IRR_NO_TRUTH)) {
    if (classify_debug_level) tprintf('No truth for word - skipping\n');
    word->tess_failed = true;
    return;
  }
  ASSERT_HOST(!word->chopped_word->blobs.empty());
  recog_word_recursive(word);
  word->SetupBoxWord();
  if (word->best_choice->length() != word->box_word->length()) {
    tprintf('recog_word ASSERT FAIL String:\'%s\'; '
            'Strlen=%d; #Blobs=%d\n',
            word->best_choice->debug_string().string(),
            word->best_choice->length(), word->box_word->length());
  }
  ASSERT_HOST(word->best_choice->length() == word->box_word->length());
  // Check that the ratings matrix size matches the sum of all the
  // segmentation states.
  if (!word->StatesAllValid()) {
    tprintf('Not all words have valid states relative to ratings matrix!!');
    word->DebugWordChoices(true, nullptr);
    ASSERT_HOST(word->StatesAllValid());
  }
  if (tessedit_override_permuter) {
    /* Override the permuter type if a straight dictionary check disagrees. */
    uint8_t perm_type = word->best_choice->permuter();
    if ((perm_type != SYSTEM_DAWG_PERM) &&
        (perm_type != FREQ_DAWG_PERM) && (perm_type != USER_DAWG_PERM)) {
      uint8_t real_dict_perm_type = dict_word(*word->best_choice);
      if (((real_dict_perm_type == SYSTEM_DAWG_PERM) ||
           (real_dict_perm_type == FREQ_DAWG_PERM) ||
           (real_dict_perm_type == USER_DAWG_PERM)) &&
          (alpha_count(word->best_choice->unichar_string().string(),
                       word->best_choice->unichar_lengths().string()) > 0)) {
        word->best_choice->set_permuter(real_dict_perm_type);  // use dict perm
      }
    }
    if (tessedit_rejection_debug &&
        perm_type != word->best_choice->permuter()) {
      tprintf('Permuter Type Flipped from %d to %d\n',
              perm_type, word->best_choice->permuter());
    }
  }
  // Factored out from control.cpp
  ASSERT_HOST((word->best_choice == nullptr) == (word->raw_choice == nullptr));
  if (word->best_choice == nullptr || word->best_choice->length() == 0 ||
      static_cast<int>(strspn(word->best_choice->unichar_string().string(),
                              ' ')) == word->best_choice->length()) {
    word->tess_failed = true;
    word->reject_map.initialise(word->box_word->length());
    word->reject_map.rej_word_tess_failure();
  } else {
    word->tess_failed = false;
  }
}
    }
    
      // Gets a pix that contains an 8 bit threshold value at each pixel. The
  // returned pix may be an integer reduction of the binary image such that
  // the scale factor may be inferred from the ratio of the sizes, even down
  // to the extreme of a 1x1 pixel thresholds image.
  // Ideally the 8 bit threshold should be the exact threshold used to generate
  // the binary image in ThresholdToPix, but this is not a hard constraint.
  // Returns nullptr if the input is binary. PixDestroy after use.
  virtual Pix* GetPixRectThresholds();
    
    /**
	@author AndreaCatania
*/
    
    	/// This data is used to store the new world position for kinematic body
	btTransform bodyKinematicWorldTransf;
	/// This data is used to store last world position
	btTransform bodyCurrentWorldTransform;
    
    class RigidBodyBullet;
    
    #include 'texture_loader_dds.h'
    
    
    {	memdelete(resource_loader_pkm);
}

    
    size_t MemoryPool::total_memory = 0;
size_t MemoryPool::max_memory = 0;
    
    	if (!obj) {
		r_error.error = Variant::CallError::CALL_ERROR_INSTANCE_IS_NULL;
		return Variant();
	}
    
    	BIND_ENUM_CONSTANT(CONNECTION_DISCONNECTED);
	BIND_ENUM_CONSTANT(CONNECTION_CONNECTING);
	BIND_ENUM_CONSTANT(CONNECTION_CONNECTED);
    
    /**
 * @brief A simple ConfigParserPlugin for feature vector dictionary keys.
 */
class FeatureVectorsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
    }
    
    
    {
    {      // View has been updated
      osquery::query('DROP VIEW ' + name, r);
      auto s = osquery::query('CREATE VIEW ' + name + ' AS ' + query, r);
      if (s.ok()) {
        setDatabaseValue(kQueries, kConfigViews + name, query);
      } else {
        LOG(INFO) << 'Error creating view (' << name << '): ' << s.getMessage();
      }
    }
  }
    
    
    {  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  EXPECT_FALSE(fpack.shouldPackExecute());
}
    
    /**
 * @brief A scoped locker for iterating over watcher extensions.
 *
 * A lock must be used if any part of osquery wants to enumerate the autoloaded
 * extensions or autoloadable extension paths a Watcher may be monitoring.
 * A signal or WatcherRunner thread may stop or start extensions.
 */
class WatcherExtensionsLocker {
 public:
  /// Construct and gain watcher lock.
  WatcherExtensionsLocker() {
    Watcher::get().lock();
  }
    }
    
    namespace osquery {
    }
    
        if (queries.IsObject()) {
      for (const auto& query_entry : queries.GetObject()) {
        if (!query_entry.name.IsString() || !query_entry.value.IsString()) {
          return Status(1, 'Distributed discovery query is not a string');
        }
    }
    }
    
      if (stat(path.c_str(), &file_dir_stat) == -1) {
    LOG(WARNING) << 'Failed to do stat on: ' << path;
    return false;
  }
    
      struct audit_reply reply;
  reply.type = 1;
  reply.len = message.size();
  reply.message = (char*)malloc(sizeof(char) * (message.size() + 1));
  memset((void*)reply.message, 0, message.size() + 1);
  memcpy((void*)reply.message, message.c_str(), message.size());
    
      void TriggerEvent(const std::string& path) {
    FILE* fd = fopen(path.c_str(), 'w');
    fputs('inotify', fd);
    fclose(fd);
  }
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
    
    {    // Open file using underlying Env implementation
    std::unique_ptr<RandomRWFile> underlying;
    Status status = EnvWrapper::NewRandomRWFile(fname, &underlying, options);
    if (!status.ok()) {
      return status;
    }
    // Read or Initialize & write prefix (if needed)
    AlignedBuffer prefixBuf;
    Slice prefixSlice;
    size_t prefixLength = provider_->GetPrefixLength();
    if (prefixLength > 0) {
      prefixBuf.Alignment(underlying->GetRequiredBufferAlignment());
      prefixBuf.AllocateNewBuffer(prefixLength);
      if (!isNewFile) {
        // File already exists, read prefix
        status = underlying->Read(0, prefixLength, &prefixSlice, prefixBuf.BufferStart());
        if (!status.ok()) {
          return status;
        }
      } else {
        // File is new, initialize & write prefix 
        provider_->CreateNewPrefix(fname, prefixBuf.BufferStart(), prefixLength);
        prefixSlice = Slice(prefixBuf.BufferStart(), prefixLength);
        // Write prefix 
        status = underlying->Write(0, prefixSlice);
        if (!status.ok()) {
          return status;
        }
      }
    }
    // Create cipher stream
    std::unique_ptr<BlockAccessCipherStream> stream;
    status = provider_->CreateCipherStream(fname, options, prefixSlice, &stream);
    if (!status.ok()) {
      return status;
    }
    (*result) = std::unique_ptr<RandomRWFile>(new EncryptedRandomRWFile(underlying.release(), stream.release(), prefixLength));
    return Status::OK();
  }
    
    Status PosixSequentialFile::PositionedRead(uint64_t offset, size_t n,
                                           Slice* result, char* scratch) {
  assert(use_direct_io());
  assert(IsSectorAligned(offset, GetRequiredBufferAlignment()));
  assert(IsSectorAligned(n, GetRequiredBufferAlignment()));
  assert(IsSectorAligned(scratch, GetRequiredBufferAlignment()));
    }
    
      // Partial implementation of the Env interface.
  virtual Status NewSequentialFile(const std::string& fname,
                                   unique_ptr<SequentialFile>* result,
                                   const EnvOptions& soptions) override;
    
      // Read a key using the snapshot
  read_options.snapshot = snapshot;
  s = txn->GetForUpdate(read_options, 'abc', &value);
  assert(value == 'def');