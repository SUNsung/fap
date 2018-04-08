void PartialRunMgr::PartialRunDone(int step_id, StatusCallback done,
                                   const Status& status) {
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    run_it->second->final_status.Update(status);
    if (!run_it->second->executor_done) {
      // If we found the partial_run, we set the final callback to call only
      // when the executor is completely done.
      run_it->second->final_callback = std::move(done);
      return;
    }
    callback_status = run_it->second->final_status;
  }
  // Otherwise we call the callback immediately.
  done(callback_status);
  mutex_lock l(mu_);
  step_id_to_partial_run_.erase(step_id);
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Helper macro to define a plugin ID. To be used only inside plugin
// implementation files. Works by 'reserving' an address/value (guaranteed to be
// unique) inside a process space.
#define PLUGIN_REGISTRY_DEFINE_PLUGIN_ID(ID_VAR_NAME) \
  namespace {                                         \
  int plugin_id_value;                                \
  }                                                   \
  const PluginId ID_VAR_NAME = &plugin_id_value;
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #endif  // TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_

    
    string VersionedComputationHandle::ToString() const {
  return tensorflow::strings::StrCat(handle.handle(), ':v', version);
}
    
    
    { private:
  Env* const env_;
  uint64 offset_;
  std::unique_ptr<RandomAccessFile> file_;
  std::unique_ptr<io::RecordReader> reader_;
  string compression_type_ = '';
};
    
    #if GOOGLE_CUDA
    
      /// The kind of message to send through the Objective-C runtime.
  enum class ObjCMessageKind {
    /// A normally-dispatched call.
    Normal,
    /// A call to a superclass method.
    Super,
    /// A call to a peer method.
    Peer
  };
    
    #include 'swift/Basic/LLVM.h'
#include 'llvm/ADT/ArrayRef.h'
#include 'llvm/ADT/StringRef.h'
    
    #endif // LLVM_SWIFT_AST_COMMENT_H
    
    namespace swift {
namespace syntax {
    }
    }
    
      /// Treat all warnings as errors
  bool WarningsAsErrors = false;
    
    
    {} // end namespace swift
    
    
    {
    {}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_RANDOM_H_
