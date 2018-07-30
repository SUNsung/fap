
        
        namespace tensorflow {
namespace gtl {
    }
    }
    
    class DebugGraphDecorator : public DebugGraphDecoratorInterface {
 public:
  DebugGraphDecorator(const DebugOptions& debug_options)
      : debug_options_(debug_options) {}
  virtual ~DebugGraphDecorator() {}
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    
    {
    {    SetReaderFactory([this, compression_type, env]() {
      return new TFRecordReader(name(), compression_type, env);
    });
  }
};
    
    void leveldb_env_destroy(leveldb_env_t* env) {
  if (!env->is_default) delete env->rep;
  delete env;
}
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    static Slice TrimSpace(Slice s) {
  int start = 0;
  while (start < s.size() && isspace(s[start])) {
    start++;
  }
  int limit = s.size();
  while (limit > start && isspace(s[limit-1])) {
    limit--;
  }
  return Slice(s.data() + start, limit - start);
}
    
      // Create a slice that refers to d[0,n-1].
  Slice(const char* d, size_t n) : data_(d), size_(n) { }
    
    
    {} // namespace A2STR
    
    class AbstractHttpServerResponseCommand : public Command {
private:
  DownloadEngine* e_;
  std::shared_ptr<SocketCore> socket_;
  std::shared_ptr<HttpServer> httpServer_;
  Timer timeoutTimer_;
  bool readCheck_;
  bool writeCheck_;
    }
    
    
    {} // namespace aria2
    
    class AdaptiveFileAllocationIterator : public FileAllocationIterator {
private:
  std::unique_ptr<FileAllocationIterator> allocator_;
    }
    
    void AnnounceList::reconfigure(const std::string& url)
{
  std::deque<std::string> urls{url};
  tiers_.push_back(std::make_shared<AnnounceTier>(std::move(urls)));
  resetIterator();
}
    
    #endif // DOWNLOAD_EVENT_LISTENER_H

    
    private:
  TLSSessionSide side_;
  TLSVersion minTLSVer_;
  bool verifyPeer_;
  SecIdentityRef credentials_;
    
    class AsyncNameResolver;
class DownloadEngine;
class Command;
class Option;