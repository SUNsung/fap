
        
        #ifndef TESSERACT_ARCH_DOTPRODUCTSSE_H_
#define TESSERACT_ARCH_DOTPRODUCTSSE_H_
    
      // Computes matrix.vector v = Wu.
  // u is of size W.dim2() - 1 and the output v is of size W.dim1().
  // u is imagined to have an extra element at the end with value 1, to
  // implement the bias, but it doesn't actually have it.
  // Computes the base C++ implementation, if there are no partial_funcs_.
  // NOTE: The size of the input vector (u) must be padded using
  // RoundInputs above.
  // The input will be over-read to the extent of the padding. There are no
  // alignment requirements.
  void MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                       const GenericVector<double>& scales, const int8_t* u,
                       double* v) const;
    
      // Array holding scores for each orientation id [0,3].
  // Orientation ids [0..3] map to [0, 270, 180, 90] degree orientations of the
  // page respectively, where the values refer to the amount of clockwise
  // rotation to be applied to the page for the text to be upright and readable.
  float orientations[4];
  // Script confidence scores for each of 4 possible orientations.
  float scripts_na[4][kMaxNumberOfScripts];
    
    
    {
    {    if (amount[tag.string()] == 1) {
      other->AddChild(vc->GetName(), vc->GetId(), vc->GetValue().string(),
                      vc->GetDescription());
    } else {  // More than one would use this submenu -> create submenu.
      SVMenuNode* sv = mr->AddChild(tag.string());
      if ((amount[tag.string()] <= MAX_ITEMS_IN_SUBMENU) ||
          (amount[tag2.string()] <= 1)) {
        sv->AddChild(vc->GetName(), vc->GetId(),
                     vc->GetValue().string(), vc->GetDescription());
      } else {  // Make subsubmenus.
        SVMenuNode* sv2 = sv->AddChild(tag2.string());
        sv2->AddChild(vc->GetName(), vc->GetId(),
                      vc->GetValue().string(), vc->GetDescription());
      }
    }
  }
  return mr;
}
    
     private:
  // Gets the up to the first 3 prefixes from s (split by _).
  // For example, tesseract_foo_bar will be split into tesseract,foo and bar.
  void GetPrefixes(const char* s, STRING* level_one,
                   STRING* level_two, STRING* level_three);
    
    
    {  FileLock* lock;
  const std::string lockname = LockFileName(dbname);
  result = env->LockFile(lockname, &lock);
  if (result.ok()) {
    uint64_t number;
    FileType type;
    for (size_t i = 0; i < filenames.size(); i++) {
      if (ParseFileName(filenames[i], &number, &type) &&
          type != kDBLockFile) {  // Lock file will be deleted at end
        Status del = env->DeleteFile(dbname + '/' + filenames[i]);
        if (result.ok() && !del.ok()) {
          result = del;
        }
      }
    }
    env->UnlockFile(lock);  // Ignore error since state is already gone
    env->DeleteFile(lockname);
    env->DeleteDir(dbname);  // Ignore error in case dir contains other files
  }
  return result;
}
    
    void DBIter::SeekToFirst() {
  direction_ = kForward;
  ClearSavedValue();
  iter_->SeekToFirst();
  if (iter_->Valid()) {
    FindNextUserEntry(false, &saved_key_ /* temporary storage */);
  } else {
    valid_ = false;
  }
}
    
    void InternalKeyComparator::FindShortSuccessor(std::string* key) const {
  Slice user_key = ExtractUserKey(*key);
  std::string tmp(user_key.data(), user_key.size());
  user_comparator_->FindShortSuccessor(&tmp);
  if (tmp.size() < user_key.size() &&
      user_comparator_->Compare(user_key, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*key, tmp) < 0);
    key->swap(tmp);
  }
}
    
    
    {  ParsedInternalKey() { }  // Intentionally left uninitialized (for speed)
  ParsedInternalKey(const Slice& u, const SequenceNumber& seq, ValueType t)
      : user_key(u), sequence(seq), type(t) { }
  std::string DebugString() const;
};
    
    #include <stdio.h>
#include 'leveldb/dumpfile.h'
#include 'leveldb/env.h'
#include 'leveldb/status.h'
    
        if (type == kZeroType && length == 0) {
      // Skip zero length record without reporting any drops since
      // such records are produced by the mmap based writing code in
      // env_posix.cc that preallocates file regions.
      buffer_.clear();
      return kBadRecord;
    }
    
    
    {  // Write the header and the payload
  Status s = dest_->Append(Slice(buf, kHeaderSize));
  if (s.ok()) {
    s = dest_->Append(Slice(ptr, n));
    if (s.ok()) {
      s = dest_->Flush();
    }
  }
  block_offset_ += kHeaderSize + n;
  return s;
}
    
    Iterator* MemTable::NewIterator() {
  return new MemTableIterator(&table_);
}
    
        ALLEGRO_LOCKED_REGION *locked_img = al_lock_bitmap(img, al_get_bitmap_format(img), ALLEGRO_LOCK_WRITEONLY);
    if (!locked_img)
    {
        al_destroy_bitmap(img);
        return false;
    }
    memcpy(locked_img->data, pixels, sizeof(int)*width*height);
    al_unlock_bitmap(img);
    
    #include <s3eKeyboard.h>
#include <s3ePointer.h>
#include <IwGx.h>
    
        // Check for WSI support
    VkBool32 res;
    vkGetPhysicalDeviceSurfaceSupportKHR(g_PhysicalDevice, g_QueueFamily, wd->Surface, &res);
    if (res != VK_TRUE)
    {
        fprintf(stderr, 'Error no WSI support on physical device 0\n');
        exit(-1);
    }
    
        // Create the D3DDevice
    if (pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hwnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &g_pd3dDevice) < 0)
    {
        pD3D->Release();
        UnregisterClass(_T('ImGui Example'), wc.hInstance);
        return 0;
    }
    
        // Setup time step
    double current_time = glfwGetTime();
    io.DeltaTime = g_Time > 0.0 ? (float)(current_time - g_Time) : (float)(1.0f/60.0f);
    g_Time = current_time;