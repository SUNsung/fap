
        
            // Define a new address (which should add to the address book successfully).
    QString new_address;
    
    /**
 * Changelog:
 * - March 2013, Diederik Huys:    original version
 * - November 2014, Pieter Wuille: updated to use Peter Dettman's parallel multiplication algorithm
 * - December 2014, Pieter Wuille: converted from YASM to GCC inline assembly
 */
    
        /* Create random point */
    random_scalar_order(&rand);
    secp256k1_scalar_get_b32(s_rand, &rand);
    CHECK(secp256k1_ec_pubkey_create(ctx, &point, s_rand) == 1);
    
        // Escapes
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\ Baz\'', {
            {'Foo', 'Bar Baz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\Baz\'', {
            {'Foo', 'BarBaz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\@Baz\'', {
            {'Foo', 'Bar@Baz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\\'Baz\' Spam=\'\\\'Eggs\\\'\'', {
            {'Foo', 'Bar\'Baz'},
            {'Spam', '\'Eggs\''},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\\\Baz\'', {
            {'Foo', 'Bar\\Baz'},
        });
    
      int timeout = -1;
  std::vector<int> to_add;
  std::vector<int> to_remove;
  for (;;) {
    int nevents;
    if (client_sessions.size() == 0)
      timeout = SHUTDOWN_TIMEOUT;
    SYSCHECK(nevents = poll(pollfds.data(), pollfds.size(), timeout));
    timeout = -1;
    if (nevents == 0 && client_sessions.size() == 0)
      break;
    }
    
      template <typename T>
  bool DoRunWithType() {
    const auto& data = Input(0);
    CAFFE_ENFORCE(data.ndim() == 1, 'data should be 1-D.');
    }
    
    template <typename T, class Context>
class FlexibleTopKGradientOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    workspace.FeedBlob('X', (np.random.uniform(-10, 10, (5,5))).astype(np.float32))
print('X before running op:', workspace.FetchBlob('X'))
workspace.RunOperatorOnce(op)
print('X after running op:', workspace.FetchBlob('X'))
    
    
    {} // namespace caffe2
    
    struct SrcLoc {
  SrcLoc()
    : start{0,0}
    , past{0,0}
  {}
    }
    
    void Assembler::sth(const Reg64& rt, MemoryRef m) {
  assertx(Reg64(-1) == m.r.index);  // doesn't support base+index
  EmitDForm(44, rn(rt), rn(m.r.base), m.r.disp);
}
    
       void EmitAForm(const uint8_t op,
                  const RegNumber rt,
                  const RegNumber ra,
                  const RegNumber rb,
                  const RegNumber bc,
                  const uint16_t xop,
                  const bool rc = 0) {
    }
    
    #include 'hphp/runtime/base/apc-object.h'
#include 'hphp/runtime/base/apc-array.h'
#include 'hphp/runtime/base/apc-stats.h'
#include 'hphp/runtime/base/object-data.h'
#include 'hphp/runtime/base/type-object.h'
#include 'hphp/runtime/ext/apc/ext_apc.h'
#include 'hphp/runtime/base/collections.h'
#include 'hphp/runtime/ext/collections/ext_collections-map.h'
#include 'hphp/runtime/ext/collections/ext_collections-set.h'
#include 'hphp/runtime/ext/collections/ext_collections-vector.h'
#include 'hphp/runtime/base/data-walker.h'
    
      /**
   * Use the Iterate method for iterating over options that are stored as
   * objects in runtime options (e.g. FilesMatch). This function iterates over
   * the settings passed as ini/hdf, calls back to, generally, the constructor
   * of the object in question.
   *
   * Note: For now, we are not `ini_get()` enabling these type of options as
   * it is not trivial to come up with a non-hacky and workable way to store
   * the data correctly. Also, as usual, Hdf takes priority.
   */
  static void Iterate(std::function<void (const IniSettingMap&,
                                          const Hdf&,
                                          const std::string&)> cb,
                      const IniSettingMap &ini, const Hdf& config,
                      const std::string &name, const bool prepend_hhvm = true);
    
    #include <string>
#include <utility>
#include <vector>
    
    
    {}
    
    
    {    if (memcmp(from_start, to_start, seg_len + 1)) {
      break;
    }
    from_start += seg_len + 1;
    to_start += seg_len + 1;
  }
    
    #include <dmlc/registry.h>
#include <functional>
#include <vector>
#include <utility>
#include <string>
#include './base.h'
#include './data.h'
#include './tree_model.h'
#include '../../src/common/host_device_vector.h'
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi_) {
    fi_.open(fname);
    if (fi_.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator() {
    fi_.close();
  }
    }
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
        void FreeTypeFont::SetPixelHeight(int pixel_height) 
    {
        // I'm not sure how to deal with font sizes properly.
        // As far as I understand, currently ImGui assumes that the 'pixel_height' is a maximum height of an any given glyph,
        // i.e. it's the sum of font's ascender and descender. Seems strange to me.
        FT_Size_RequestRec req;
        req.type = FT_SIZE_REQUEST_TYPE_REAL_DIM;
        req.width = 0;
        req.height = (uint32_t)pixel_height * 64;
        req.horiResolution = 0;
        req.vertResolution = 0;
        FT_Request_Size(FreetypeFace, &req);
    }
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        if (!g_pIB || g_IndexBufferSize < draw_data->TotalIdxCount)
    {
        if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
        g_IndexBufferSize = draw_data->TotalIdxCount + 10000;
        D3D10_BUFFER_DESC desc;
        memset(&desc, 0, sizeof(D3D10_BUFFER_DESC));
        desc.Usage = D3D10_USAGE_DYNAMIC;
        desc.ByteWidth = g_IndexBufferSize * sizeof(ImDrawIdx);
        desc.BindFlags = D3D10_BIND_INDEX_BUFFER;
        desc.CPUAccessFlags = D3D10_CPU_ACCESS_WRITE;
        if (ctx->CreateBuffer(&desc, NULL, &g_pIB) < 0)
            return;
    }