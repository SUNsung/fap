
        
        #endif  // CONTENT_NW_SRC_API_APP_APP_H_
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
       void ExecuteCommand(int command_id, int event_flags) override;
    
    bool NwShellShowItemInFolderFunction::RunNWSync(base::ListValue* response, std::string* error) {
  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallStaticMethod(render_frame_host(), 'Shell', 'ShowItemInFolder', *args_);
  return true;
}
    
    // customize random engine.
void CustomGlobalRandomEngine::seed(CustomGlobalRandomEngine::result_type val) {
  // ignore the seed
}
    
      auto iter = p_fmat->RowIterator();
  iter->BeforeFirst();
  while (iter->Next()) {
     auto batch = iter->Value();
    #pragma omp parallel num_threads(nthread)
    {
      CHECK_EQ(nthread, omp_get_num_threads());
      auto tid = static_cast<unsigned>(omp_get_thread_num());
      unsigned begin = std::min(nstep * tid, ncol);
      unsigned end = std::min(nstep * (tid + 1), ncol);
      for (size_t i = 0; i < batch.Size(); ++i) { // NOLINT(*)
        size_t ridx = batch.base_rowid + i;
        SparsePage::Inst inst = batch[i];
        for (bst_uint j = 0; j < inst.length; ++j) {
          if (inst[j].index >= begin && inst[j].index < end) {
            sketchs[inst[j].index].Push(inst[j].fvalue, info.GetWeight(ridx));
          }
        }
      }
    }
  }
    
    #include <xgboost/base.h>
#include <xgboost/data.h>
#include <dmlc/threadediter.h>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
#include '../common/common.h'
#include './sparse_page_writer.h'
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    
    {}  // namespace
    
    #ifndef GUETZLI_JPEG_DATA_READER_H_
#define GUETZLI_JPEG_DATA_READER_H_
    
    #include 'guetzli/quality.h'
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
      uint64_t GetID() const { return id_; }
    
     private:
    // used for synchronisation in compare method
    std::unique_ptr<port::Mutex> mtx_compare;
    // used for synchronisation in findShortestSeparator method
    std::unique_ptr<port::Mutex> mtx_findShortestSeparator;
    std::unique_ptr<const char[]> m_name;
    jmethodID m_jCompareMethodId;
    jmethodID m_jFindShortestSeparatorMethodId;
    jmethodID m_jFindShortSuccessorMethodId;
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
/*
 * CoreServiceBase.h
 *
 *  Created on: 2013-6-20
 *      Author: yerungui
 */
    
    #endif

    
    ScopeJEnv::ScopeJEnv(JavaVM* jvm, jint _capacity)
    : vm_(jvm), env_(NULL), we_attach_(false), status_(0) {
    ASSERT(jvm);
    do {
        env_ = (JNIEnv*)pthread_getspecific(g_env_key);
        
        if (NULL != env_) {
            break;
        }
        
        status_ = vm_->GetEnv((void**) &env_, JNI_VERSION_1_6);
    }
    }
    
    