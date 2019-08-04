
        
        // clear cache on the renderer side
IPC_MESSAGE_CONTROL0(ShellViewMsg_ClearCache)
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    namespace nwapi {
    }
    
        int menu_id;
    if (option.GetInteger('submenu', &menu_id))
      SetSubmenu(dispatcher_host()->GetApiObject<Menu>(menu_id));
    std::string key;
    if (option.GetString('key',&key)){
      enable_shortcut = true;
      std::string modifiers = '';
      option.GetString('modifiers',&modifiers);
      modifiers_mask = GdkModifierType(0);
      if (modifiers.size() != 0){
        if (modifiers.find('ctrl') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_CONTROL_MASK);
        }
        if (modifiers.find('alt') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_MOD1_MASK);
        }
        if (modifiers.find('super') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SUPER_MASK);
        }
        if (modifiers.find('meta') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_META_MASK);
        }
        
        if (modifiers.find('shift') != std::string::npos){
          modifiers_mask = GdkModifierType(modifiers_mask|GDK_SHIFT_MASK);
        }
    }
    }
    
    namespace extensions {
class AppWindowRegistry;
class ExtensionService;
    }
    
    NwClipboardSetListSyncFunction::~NwClipboardSetListSyncFunction() {
}
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
    NwObjCallObjectMethodAsyncFunction::NwObjCallObjectMethodAsyncFunction() {
}
    
    void NwDesktopCaptureMonitor::OnSourceRemoved(DesktopMediaList* list, int index) {
    std::unique_ptr<base::ListValue> args = nwapi::nw__screen::OnSourceRemoved::Create(index);
    DispatchEvent(
      events::HistogramValue::UNKNOWN, 
      nwapi::nw__screen::OnSourceRemoved::kEventName,
      std::move(args));
  }
    
    template <typename Dtype>
void SGDSolver<Dtype>::SnapshotSolverStateToHDF5(
    const string& model_filename) {
// This code is taken from https://github.com/sh1r0/caffe-android-lib
#ifdef USE_HDF5
  string snapshot_filename =
      Solver<Dtype>::SnapshotFilename('.solverstate.h5');
  LOG(INFO) << 'Snapshotting solver state to HDF5 file ' << snapshot_filename;
  hid_t file_hid = H5Fcreate(snapshot_filename.c_str(), H5F_ACC_TRUNC,
      H5P_DEFAULT, H5P_DEFAULT);
  CHECK_GE(file_hid, 0)
      << 'Couldn't open ' << snapshot_filename << ' to save solver state.';
  hdf5_save_int(file_hid, 'iter', this->iter_);
  hdf5_save_string(file_hid, 'learned_net', model_filename);
  hdf5_save_int(file_hid, 'current_step', this->current_step_);
  hid_t history_hid = H5Gcreate2(file_hid, 'history', H5P_DEFAULT, H5P_DEFAULT,
      H5P_DEFAULT);
  CHECK_GE(history_hid, 0)
      << 'Error saving solver state to ' << snapshot_filename << '.';
  for (int i = 0; i < history_.size(); ++i) {
    ostringstream oss;
    oss << i;
    hdf5_save_nd_dataset<Dtype>(history_hid, oss.str(), *history_[i]);
  }
  H5Gclose(history_hid);
  H5Fclose(file_hid);
// This code is taken from https://github.com/sh1r0/caffe-android-lib
#else
  LOG(FATAL) << 'SnapshotSolverStateToHDF5 requires hdf5;'
             << ' compile with USE_HDF5.';
#endif  // USE_HDF5
}
    
    NcclComm::NcclComm(int deviceId, const MPIWrapperPtr& mpi)
    : m_ncclComm(nullptr), m_stream(nullptr)
{
    if (deviceId == CPUDEVICE)
    {
        fprintf(stderr, 'NcclComm: disabled, at least one rank using CPU device\n');
        return;
    }
    }
    
                if (InputRef(1).Gradient().GetMatrixType() == SPARSE)
            {
                // we only support dense * sparse to have sparse gradient for input0, so if input1 has sparse gradient, switch to dense
                // this is a rare case and the performance is not optimized
                InputRef(1).Gradient().SwitchToMatrixType(DENSE, matrixFormatDense, !overwriteInputGradient);
            }
            InputRef(1).SetPreferredGradientMatrixType(DENSE);
    
    
    {    m_eval = nullptr; // pointer to an arbitrary eval structure
    // script for macro calls, need to expand the macro for each call
    // if it's not expanded the evalValue will be overwitten on multiple calls to a macro
    m_script = (copyMe.m_script) ? new NDLScript<ElemType>(*copyMe.m_script) : nullptr;
}
template <typename ElemType>
NDLScript<ElemType>::NDLScript(const NDLScript&& moveMe)
    : ConfigParser(move(moveMe))
{
    m_baseName      = move(moveMe.m_baseName);
    m_scriptString  = move(moveMe.m_scriptString);
    m_script        = move(moveMe.m_script);        // script lines in parsed node order, macros will have definition followed by body
    m_symbols       = move(moveMe.m_symbols);       // symbol table
    m_macroNode     = move(moveMe.m_macroNode);     // set when interpretting a macro definition
    m_noDefinitions = move(moveMe.m_noDefinitions); // no definitions can be made in this script, interpret all macro/function names as calls
    m_definingMacro = move(moveMe.m_definingMacro);
    m_children      = move(moveMe.m_children);      // child nodes. Note that m_script nodes may not be children of this object, they include macro nodes
    m_cn            = move(moveMe.m_cn);            // computation network to use for backup symbol lookup. Used for MEL where NDL and network nodes are mixed
}
    
        // ParseCall - parse the call syntax out into 'function' and variables
    // token - string containing the 'call'
    // return - Node pointer, the newly created node
    NDLNode<ElemType>* ParseCall(const std::string& token)
    {
        std::string nameFunction, params;
        NDLNode<ElemType>* ndlNode = CallStringParse(token, nameFunction, params);
    }
    
    
    {        return ival;
    }
//#if (SIZE_MAX != ULONG_MAX)     // on x64 GCC unsigned long == size_t, i.e. we'd get an ambigous declaration
#ifdef _MSC_VER // somehow the above check does not work on GCC/Cygwin, causing an ambiguous declaration
    operator unsigned long() const
    {
        return toulong();
    }
    
    #include <stdio.h>
#include <math.h>
#define EVAL_EXPORTS // creating the exports here
#include 'Eval.h'
#include 'Actions.h'
#include 'CNTKEval.h'
#include 'CPUMatrix.h' // for SetNumThreads()
#include 'SimpleOutputWriter.h'
#include 'NDLNetworkBuilder.h'
#ifdef LEAKDETECT
#include <vld.h> // leak detection
#endif
#include 'BestGpu.h'
#include 'InputAndParamNodes.h'
#include 'latticearchive.h'
#include <limits>
#include 'RecurrentNodes.h'
    
             virtual void OnEpochEnd(const std::list<ComputationNodeBasePtr>&    LearnableNodes,
                                    std::list<MatrixBasePtr>&                   smoothedGradients,
                                    size_t                                      samplesSinceLastSync 
                                    )
         {
             m_MAworkerStatus[m_myRank] = MAWorkerStatus::DataEnd;
             Timer syncPointTimer; syncPointTimer.Start(); 
             bool read2sync = UpdateWorkerStatus(MAWorkerStatus::DataEnd);
             syncPointTimer.Stop();
             m_perfReporter.OnArriveAtSyncPoint(syncPointTimer.ElapsedSeconds(), true);
             // assert(read2sync); 
             size_t totalSamplesProcessed = 0;
             float secondsOnCommunication = 0.0f; 
             if (read2sync)
             {
                 m_numSyncPerformed++;
                 ModelAggregationProcessing(samplesSinceLastSync, LearnableNodes, smoothedGradients, totalSamplesProcessed, secondsOnCommunication);
                 m_perfReporter.OnMAPerformed(samplesSinceLastSync, totalSamplesProcessed, secondsOnCommunication);
             }
             
             m_pMPI->WaitAll();             
             m_perfReporter.OnEpochEnd();
         }
    
        // a few more handy operations that occurred multiple times
    bool IsNan() const { return std::isnan(first); }
    EpochCriterion operator-(const EpochCriterion& other) const { return EpochCriterion(first - other.first, second - other.second); }
    void operator+=(const EpochCriterion& other) { first += other.first; second += other.second; }
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::const_reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create an array from std::unordered_set
    std::unordered_set<std::string> c_uset {'one', 'two', 'three', 'four', 'one'};
    json j_uset(c_uset); // only one entry for 'one' is used