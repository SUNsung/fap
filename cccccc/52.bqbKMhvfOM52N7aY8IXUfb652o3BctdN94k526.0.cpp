
        
        template <bool C, typename T = void>
struct EnableIf {
    }
    
    bool GodotCollisionDispatcher::needsResponse(const btCollisionObject *body0, const btCollisionObject *body1) {
	if (body0->getUserIndex() == CASTED_TYPE_AREA || body1->getUserIndex() == CASTED_TYPE_AREA) {
		// Avoide area narrow phase
		return false;
	}
	return btCollisionDispatcher::needsResponse(body0, body1);
}

    
    	void set_param(PhysicsServer::HingeJointParam p_param, real_t p_value);
	real_t get_param(PhysicsServer::HingeJointParam p_param) const;
    
    #include 'joint_bullet.h'
    
    #ifndef RID_BULLET_H
#define RID_BULLET_H
    
    	jclass activityThread = env->FindClass('android/app/ActivityThread');
	jmethodID currentActivityThread = env->GetStaticMethodID(activityThread, 'currentActivityThread', '()Landroid/app/ActivityThread;');
	jobject at = env->CallStaticObjectMethod(activityThread, currentActivityThread);
	jmethodID getApplication = env->GetMethodID(activityThread, 'getApplication', '()Landroid/app/Application;');
	jobject context = env->CallObjectMethod(at, getApplication);
    
    	if (!zfile)
		return;
    
    namespace benchmark {
    }
    
    #include 'benchmark/benchmark.h'
    
      // Do not print iteration on bigO and RMS report
  if (!run.report_big_o && !run.report_rms) {
    Out << run.iterations;
  }
  Out << ',';
    
    #ifdef BENCHMARK_OS_EMSCRIPTEN
#include <emscripten.h>
#endif
    
          // regerror returns the number of bytes necessary to null terminate
      // the string, so we move that when assigning to error.
      CHECK_NE(needed, 0);
      error->assign(errbuf, needed - 1);
    
    #include <math.h>
    
    namespace guetzli {
    }