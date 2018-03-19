
        
          /// \c true if comments are allowed. Default: \c true.
  bool allowComments_;
    
    bool OurReader::decodeString(Token& token, std::string& decoded) {
  decoded.reserve(token.end_ - token.start_ - 2);
  Location current = token.start_ + 1; // skip '''
  Location end = token.end_ - 1;       // do not include '''
  while (current != end) {
    Char c = *current++;
    if (c == ''')
      break;
    else if (c == '\\') {
      if (current == end)
        return addError('Empty escape sequence in string', token, current);
      Char escape = *current++;
      switch (escape) {
      case ''':
        decoded += ''';
        break;
      case '/':
        decoded += '/';
        break;
      case '\\':
        decoded += '\\';
        break;
      case 'b':
        decoded += '\b';
        break;
      case 'f':
        decoded += '\f';
        break;
      case 'n':
        decoded += '\n';
        break;
      case 'r':
        decoded += '\r';
        break;
      case 't':
        decoded += '\t';
        break;
      case 'u': {
        unsigned int unicode;
        if (!decodeUnicodeCodePoint(token, current, end, unicode))
          return false;
        decoded += codePointToUTF8(unicode);
      } break;
      default:
        return addError('Bad escape sequence in string', token, current);
      }
    } else {
      decoded += c;
    }
  }
  return true;
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace cpp {
    }
    }
    }
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_PRIMITIVE_FIELD_H__
    
    #include <string>
    
    
    {  if (argc != 4) {
    printf('This script converts the CIFAR dataset to the leveldb format used\n'
           'by caffe to perform classification.\n'
           'Usage:\n'
           '    convert_cifar_data input_folder output_folder db_type\n'
           'Where the input folder should contain the binary batch files.\n'
           'The CIFAR dataset could be downloaded at\n'
           '    http://www.cs.toronto.edu/~kriz/cifar.html\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(string(argv[1]), string(argv[2]), string(argv[3]));
  }
  return 0;
}

    
      virtual inline const char* type() const { return 'AbsVal'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of SigmoidLayer.
 */
template <typename Dtype>
class CuDNNSigmoidLayer : public SigmoidLayer<Dtype> {
 public:
  explicit CuDNNSigmoidLayer(const LayerParameter& param)
      : SigmoidLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSigmoidLayer();
    }
    
    #include <vector>
    
        HHVM_FE(fb_setprofile);
    HHVM_FE(xhprof_frame_begin);
    HHVM_FE(xhprof_frame_end);
    HHVM_FE(xhprof_enable);
    HHVM_FE(xhprof_disable);
    HHVM_FE(xhprof_network_enable);
    HHVM_FE(xhprof_network_disable);
    HHVM_FE(xhprof_sample_enable);
    HHVM_FE(xhprof_sample_disable);
    
    /*
 * Timing execution of block of codes.
 */
struct Timer {
  enum Type {
    WallTime,
    SystemCPU,
    UserCPU,
    TotalCPU,
  };
  enum ReportType {
    Log,
    Stderr,
    Trace,
  };
  enum Who {
    Self = RUSAGE_SELF,
    Children = RUSAGE_CHILDREN,
#ifdef RUSAGE_THREAD
    Thread = RUSAGE_THREAD,
#endif
  };
    }
    
      void finish() {
    markAsFinished();
  }
    
    
    {}
    
    #endif

    
    SrcKey NormalizedInstruction::nextSk() const {
  return source.advanced(m_unit);
}
    
    /**
 * DataBlock is a simple bump-allocating wrapper around a chunk of memory, with
 * basic tracking for unused memory and a simple interface to allocate it.
 *
 * Memory is allocated from the end of the block unless specifically allocated
 * using allocInner.
 *
 * Unused memory can be freed using free(). If the memory is at the end of the
 * block, the frontier will be moved back.
 *
 * Free memory is coalesced and allocation is done by best-fit.
 */
struct DataBlock {
  DataBlock() = default;
    }
    
    #include 'hphp/vixl/a64/instructions-a64.h'
#include 'hphp/vixl/a64/assembler-a64.h'
    
    extern JSClass  *jsb_cocos2d_NavMeshObstacle_class;
extern JSObject *jsb_cocos2d_NavMeshObstacle_prototype;
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic'', nullptr);
        return 0;
    }
#endif
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
        argc = lua_gettop(tolua_S) - 1;
    
        virtual void DrawTransform(const b2Transform& xf);
    
    	b2Body* m_groundBody;
	b2AABB m_worldAABB;
	ContactPoint m_points[k_maxContactPoints];
	int32 m_pointCount;
	DestructionListener m_destructionListener;
	GLESDebugDraw m_debugDraw;
	int32 m_textLine;
	b2World* m_world;
	b2Body* m_bomb;
	b2MouseJoint* m_mouseJoint;
	b2Vec2 m_bombSpawnPoint;
	bool m_bombSpawning;
	b2Vec2 m_mouseWorld;
	int32 m_stepCount;
    
    #pragma once
    
    path executable_path() {
  return read_symlink('/proc/self/exe');
}
    
    /**
 * Check whether 'path' starts with 'prefix'.
 * That is, if prefix has n path elements, then the first n elements of
 * path must be the same as prefix.
 *
 * There is a special case if prefix ends with a slash:
 * /foo/bar/ is not a prefix of /foo/bar, but both /foo/bar and /foo/bar/
 * are prefixes of /foo/bar/baz.
 */
bool starts_with(const path& p, const path& prefix);
    
    namespace folly {
    }
    
    TEST(AsyncIO, ManyAsyncDataPollable) {
  {
    std::vector<TestSpec> v;
    for (int i = 0; i < 1000; i++) {
      v.push_back({off_t(kAlign * i), kAlign});
    }
    testReads(v, AsyncIO::POLLABLE);
  }
}
    
    /**
 * A helper class for creating an AsyncFileWriter or ImmediateFileWriter based
 * on log handler options settings.
 *
 * This is used by StreamHandlerFactory and FileHandlerFactory.
 */
class FileWriterFactory {
 public:
  bool processOption(StringPiece name, StringPiece value);
  std::shared_ptr<LogWriter> createWriter(File file);
    }
    
      auto basename = message.getFileBaseName();
  auto headerFormatter = folly::format(
      '{}{:02d}{:02d} {:02d}:{:02d}:{:02d}.{:06d} {:5d} {}:{}] ',
      getGlogLevelName(message.getLevel())[0],
      ltime.tm_mon + 1,
      ltime.tm_mday,
      ltime.tm_hour,
      ltime.tm_min,
      ltime.tm_sec,
      usecs.count(),
      message.getThreadID(),
      basename,
      message.getLineNumber());
    
      // Make sure the inherit flag is always off for the root logger.
  if (!parent_) {
    inherit = false;
  }
  auto newValue = static_cast<uint32_t>(level);
  if (inherit) {
    newValue |= FLAG_INHERIT;
  }
    
    void LogConfig::update(const LogConfig& other) {
  // Update handlerConfigs_ with all of the entries from the other LogConfig.
  // Any entries already present in our handlerConfigs_ are replaced wholesale.
  for (const auto& entry : other.handlerConfigs_) {
    if (entry.second.type.hasValue()) {
      // This is a complete LogHandlerConfig that should be inserted
      // or completely replace an existing handler config with this name.
      auto result = handlerConfigs_.insert(entry);
      if (!result.second) {
        result.first->second = entry.second;
      }
    } else {
      // This config is updating an existing LogHandlerConfig rather than
      // completely replacing it.
      auto iter = handlerConfigs_.find(entry.first);
      if (iter == handlerConfigs_.end()) {
        throw std::invalid_argument(to<std::string>(
            'cannot update configuration for unknown log handler \'',
            entry.first,
            '\''));
      }
      iter->second.update(entry.second);
    }
  }
    }
    
    
    {    for (const auto& item : options->items()) {
      if (!item.first.isString()) {
        // This shouldn't really ever happen.
        // We deserialize the json with allow_non_string_keys set to False.
        throw LogConfigParseError{to<string>(
            'unexpected data type for option of handler \'',
            handlerName,
            '\': got ',
            dynamicTypename(item.first),
            ', expected string')};
      }
      if (!item.second.isString()) {
        throw LogConfigParseError{to<string>(
            'unexpected data type for option \'',
            item.first.asString(),
            '\' of handler \'',
            handlerName,
            '\': got ',
            dynamicTypename(item.second),
            ', expected a string')};
      }
      config.options[item.first.asString()] = item.second.asString();
    }
  }
    
    
    {} // namespace folly
