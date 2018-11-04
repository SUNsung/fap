
        
        #include <BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.h>
#include <BulletCollision/CollisionDispatch/btCollisionCreateFunc.h>
#include <BulletCollision/CollisionDispatch/btCollisionDispatcher.h>
    
    
    {	resource_loader_dds = memnew(ResourceFormatDDS);
	ResourceLoader::add_resource_format_loader(resource_loader_dds);
}
    
    void register_etc_types() {
    }
    
    	jclass activityThread = env->FindClass('android/app/ActivityThread');
	jmethodID currentActivityThread = env->GetStaticMethodID(activityThread, 'currentActivityThread', '()Landroid/app/ActivityThread;');
	jobject at = env->CallStaticObjectMethod(activityThread, currentActivityThread);
	jmethodID getApplication = env->GetMethodID(activityThread, 'getApplication', '()Landroid/app/Application;');
	jobject context = env->CallObjectMethod(at, getApplication);
    
    MemoryPool::Alloc *MemoryPool::allocs = NULL;
MemoryPool::Alloc *MemoryPool::free_list = NULL;
uint32_t MemoryPool::alloc_count = 0;
uint32_t MemoryPool::allocs_used = 0;
Mutex *MemoryPool::alloc_mutex = NULL;
    
    
    {  SrcPos start;
  SrcPos past;
};
    
    //////////////////////////////////////////////////////////////////////
    
    
    {  bool ret = false;
  char buf1[8192];
  char buf2[sizeof(buf1)];
  int n1;
  while ((n1 = fread(buf1, 1, sizeof(buf1), f1))) {
    int toread = n1;
    int pos = 0;
    while (toread) {
      int n2 = fread(buf2 + pos, 1, toread, f2);
      if (n2 <= 0) {
        goto exit_false;
      }
      toread -= n2;
      pos += n2;
    }
    if (memcmp(buf1, buf2, n1) != 0) {
      goto exit_false;
    }
  }
  if (fread(buf2, 1, 1, f2) == 0) {
    ret = true;
  }
 exit_false:
  fclose(f2);
  fclose(f1);
  return ret;
}
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}
}