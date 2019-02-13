
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    template <typename InType, typename OutType, typename Functor>
void BinaryUFunc(char** args, npy_intp* dimensions, npy_intp* steps,
                 void* data) {
  const char* i0 = args[0];
  const char* i1 = args[1];
  char* o = args[2];
  for (npy_intp k = 0; k < *dimensions; k++) {
    InType x = *reinterpret_cast<const InType*>(i0);
    InType y = *reinterpret_cast<const InType*>(i1);
    *reinterpret_cast<OutType*>(o) = Functor()(x, y);
    i0 += steps[0];
    i1 += steps[1];
    o += steps[2];
  }
}
    
      int type_num = -1;
  Status s =
      TF_DataType_to_PyArray_TYPE(static_cast<TF_DataType>(dtype), &type_num);
  if (!s.ok()) {
    return s;
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {
    {
    {
    {          std::transform(
            begin(inputs) + start, begin(inputs) + stop,
            retMem + start,
            func
          );
        }
      } catch (const std::runtime_error& e) {
        std::fprintf(stderr,
          'worker thread exited with exception: %s\n', e.what());
        failed = true;
      }
    }));
  }
    
    /*
 * Macro definition for EmitXOForm functions
 * Format:
 *  X(name,   arg3,  oe,  xop)
 *    name: function name
 *    arg3: ARG if needed, otherwise NONE to skip
 *    oe:   parameter value
 *    xop:  parameter value
 */
    
      void branchFar(CodeAddress c,
                 BranchConditions bc = BranchConditions::Always,
                 LinkReg lr = LinkReg::DoNotTouch,
                 ImmType immt = ImmType::TocOnly,
                 bool immMayChange = false) {
    Label l(c);
    l.branchFar(*this, bc, lr, immt, immMayChange);
  }
    
    private:
  APCCollection();
  ~APCCollection();
  static APCHandle::Pair WrapArray(APCHandle::Pair, CollectionType);
    
    std::string Config::IniName(const std::string& config,
                            bool prepend_hhvm /* = true */) {
  std::string out = '';
  if (prepend_hhvm) {
    out += 'hhvm.';
  }
  size_t idx = 0;
  for (auto& c : config) {
    // This is the first or last character
    if (idx == 0 || idx == config.length() - 1) {
      out += tolower(c);
    } else if (!isalpha(c)) {
      // Any . or _ or numeral is just output with no special behavior
      out += c;
    } else {
      if (isupper(c) && isupper(config[idx - 1 ]) && islower(config[idx + 1])) {
      // Handle something like 'SSLPort', and c = 'P', which will then put
      // the underscore between the 'L' and 'P'
        out += '_';
        out += tolower(c);
      } else if (islower(c) && isupper(config[idx + 1])) {
      // Handle something like 'PathDebug', and c = 'h', which will then put
      // the underscore between the 'h' and 'D'
        out += tolower(c);
        out += '_';
      } else {
      // Otherwise we just output as lower
        out += tolower(c);
      }
    }
    idx++;
  }
    }
    
      static std::string FormatNumber(const char* fmt, int64_t n);
  static std::string FormatSize(int64_t size);
  static std::string FormatTime(int64_t milliSeconds);
    
    
    {  // if the function was called via FCallBuiltin, we'll get a bogus name as
  // the stack frame will be wrong
  ActRec* ar = g_context->getStackFrame();
  const char* fn = (ar != nullptr)
    ? ar->func()->name()->data()
    : 'OPTIMIZED_BUILTIN';
  raise_warning('%s(%s): failed to open stream: '
                'wrapper does not support stream open',
                fn, filename.data());
  return nullptr;
}
    
    namespace HPHP {
    }
    
        /*virtual*/ Dictionary LearnerRMSProp::CreateCheckpoint() /*override*/
    {
        auto dict = LearnerBase::CreateCheckpoint();
        dict[smoothedCountKey] = m_smoothedCount;
        return dict;
    }
    
        template <typename ElementType>
    std::tuple<const void *, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers() const
    {
        return _SparseBlockColumnDataBuffers<ElementType, ElementType>();
    }
    
            if (sectionOffset.size() > m_maskShape.Rank())
            LogicError('NDMask::MaskSection: The sectionOffset dimensionality (%d) must be <= rank (%d) of 'this' mask.', (int)sectionOffset.size(), (int)m_maskShape.Rank());
    
    #include <chrono>
    
    
    {        assert(m_fd == -1);
        for (;;)
        {
            // opening a lock file
            int fd = open(m_fileName.c_str(), O_WRONLY | O_CREAT, 0666);
            if (fd < 0)
                RuntimeError('Acquire: Failed to open lock file %s: %s.', m_fileName.c_str(), strerror(errno));
            // locking it with the fcntl API
            memset(&m_lock, 0, sizeof(m_lock));
            m_lock.l_type = F_WRLCK;
            // BUG: fcntl call with F_SETLKW doesn't always reliably detect when lock is released
            // As a workaround, using alarm() for interupting fcntl if it waits more than 1 second
            setupTimeout(1);
            int r = fcntl(fd, wait ? F_SETLKW : F_SETLK, &m_lock);
            if (errno == EINTR)
            {
                sleep(1);
                // retrying in the case of signal or timeout
                close(fd);
                continue;
            }
            if (r != 0)
            {
                // acquire failed
                close(fd);
                umask(mask);
                return false;
            }
            // we own the exclusive lock on file descriptor, but we need to double-check
            // that the lock file wasn't deleted and/or re-created;
            // checking this by comparing inode numbers
            struct stat before, after;
            fstat(fd, &before);
            if (stat(m_fileName.c_str(), &after) != 0 || before.st_ino != after.st_ino)
            {
                // we have a race with 'unlink' call in Release()
                // our lock is held to the previous instance of the file;
                // this is not a problem, we just need to retry locking the new file
                close(fd);
                continue;
            }
            else
            {
                // lock acquired successfully
                m_fd = fd;
                umask(mask);
                return true;
            }
        }
    }
    
            // determine all indirect inputs of the specified outputs
        vector<ComputationNodeBasePtr> roots;
        for (let& outputNodeKV : outputNodes)
            roots.push_back(outputNodeKV.second);
        let allInputs = ComputationNodeBase::EnumerateNodes(roots);
    
    // -----------------------------------------------------------------------
// DiagTimesNode (vector representing the diagonal of a square matrix, data)
// Deprecated because can be implemented with ElementTimes.
// -----------------------------------------------------------------------
    
    
    {  bool abort_;
};
    
      auto it = publishers_.find(sub->pubType());
  if (it != publishers_.end()) {
    auto ret = it->second->subscribe(std::move(sub));
    if (ret.isError()) {
      return createError(Error::PublisherError,
                         'Calling subscribe() on publisher '' +
                             it->second->name() +
                             '' for subscription from request from '' +
                             sub->subscriber() + '' returned an error.',
                         ret.takeError());
    }
  } else {
    return createError(Error::UnknownPublisher,
                       'No registered publisher for bind request from '' +
                           sub->subscriber() + ''');
  }
    
    /**
 * @brief Interface between a ev2::Publisher and a subscriber
 *
 * @details A ev2::Subscription is the interface between a ev2::Publisher and a
 * subscriber interested in consuming events. It allows the subscriber to
 * register with the ev2::Publisher and define the subscription parameters
 * (e.g. the type of events it is interested on, advanced filters, etc) and
 * mediates the transfer of events from the ev2::Publisher to the subscriber
 * while allowing to decouple the two instances which only need to share a
 * pointer to the ev2::Subscription usually using an ev2::EventManager.
 *
 * The ev2::Subscription is meant to be specialized by each ev2::Publisher to
 * suit its needs, and therefore the basic interface is intentionally simple
 * providing only a basic mechanism for determining the publisher the
 * subscriber is interested on (which will be used by the ev2::EventManager to
 * route request to registered ev2::Publisher instances) and a mechanism to
 * query about the availability of new events. It says nothing about the way
 * events are passed around, buffered or otherwise managed and is up to the
 * ev2::Publisher to define those interfaces. Some basic interfaces accepting
 * parameterized event types are provided like the ev2::BufferedSubscription
 * which can be further specialized by the ev2::Publisher.
 */
class Subscription {
 public:
  /**
   * @brief Subscription constructor.
   *
   * @param subscriber Subscriber name used for logging.
   *
   * @param pub_type Type of publisher to register with, used by an
   * ev2::EventManager to route ev2::EventManager::bind() calls.
   */
  explicit Subscription(std::string subscriber, std::type_index pub_type);
  virtual ~Subscription() = default;
    }
    
    void NullSubscription::abort() {}
    
    
    {
    {
    {} // namespace
} // namespace table_tests
} // namespace osquery

    
      void __set_request(const ExtensionPluginRequest& val);
    
    
    {    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin('deregisterExtension', ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }
    
    
  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->status.read(iprot);
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->response.clear();
            uint32_t _size6;
            ::apache::thrift::protocol::TType _etype9;
            xfer += iprot->readListBegin(_etype9, _size6);
            this->response.resize(_size6);
            uint32_t _i10;
            for (_i10 = 0; _i10 < _size6; ++_i10)
            {
              {
                this->response[_i10].clear();
                uint32_t _size11;
                ::apache::thrift::protocol::TType _ktype12;
                ::apache::thrift::protocol::TType _vtype13;
                xfer += iprot->readMapBegin(_ktype12, _vtype13, _size11);
                uint32_t _i15;
                for (_i15 = 0; _i15 < _size11; ++_i15)
                {
                  std::string _key16;
                  xfer += iprot->readString(_key16);
                  std::string& _val17 = this->response[_i10][_key16];
                  xfer += iprot->readString(_val17);
                }
                xfer += iprot->readMapEnd();
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.response = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }
    
        //
    // Override
    //
    virtual Speed* clone() const override;
    virtual Speed* reverse() const override;
    virtual void startWithTarget(Node* target) override;
    virtual void stop() override;
    /**
     * @param dt in seconds.
     */
    virtual void step(float dt) override;
    /** Return true if the action has finished.
     *
     * @return Is true if the action has finished.
     */
    virtual bool isDone() const  override;
    
CC_CONSTRUCTOR_ACCESS:
    Speed();
    virtual ~Speed(void);
    /** Initializes the action. */
    bool initWithAction(ActionInterval *action, float speed);
    
    CallFuncN * CallFuncN::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CallFuncN();
    }
    
        virtual void startWithTarget(Node *target) override;
    
    virtual bool isDone() const override;
    /**
     * @param dt In seconds.
     */
    virtual void step(float dt) override;
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    
    /*
 * Update each tick
 * Time is the percentage of the way through the duration
 */
void PageTurn3D::update(float time)
{
    float tt = MAX(0, time - 0.25f);
    float deltaAy = (tt * tt * 500);
    float ay = -100 - deltaAy;
    
    float deltaTheta = sqrtf(time);
    float theta = deltaTheta > 0.5f ? (float)M_PI_2*deltaTheta : (float)M_PI_2*(1-deltaTheta);
    
    float rotateByYAxis = (2-time)* M_PI;
    
    float sinTheta = sinf(theta);
    float cosTheta = cosf(theta);
    
    for (int i = 0; i <= _gridSize.width; ++i)
    {
        for (int j = 0; j <= _gridSize.height; ++j)
        {
            // Get original vertex
            Vec3 p = getOriginalVertex(Vec2(i ,j));
            
            p.x -= getGridRect().origin.x;
            float R = sqrtf((p.x * p.x) + ((p.y - ay) * (p.y - ay)));
            float r = R * sinTheta;
            float alpha = asinf( p.x / R );
            float beta = alpha / sinTheta;
            float cosBeta = cosf( beta );
            
            // If beta > PI then we've wrapped around the cone
            // Reduce the radius to stop these points interfering with others
            if (beta <= M_PI)
            {
                p.x = ( r * sinf(beta));
            }
            else
            {
                // Force X = 0 to stop wrapped
                // points
                p.x = 0;
            }
    }
    }
    }
    
    ActionTween *ActionTween::clone() const
{
    return ActionTween::create(_duration, _key, _from, _to);
}
    
    class Texture2D;
class SpriteFrame;
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCAnimationCache.h'
#include '2d/CCSpriteFrameCache.h'
#include 'platform/CCFileUtils.h'