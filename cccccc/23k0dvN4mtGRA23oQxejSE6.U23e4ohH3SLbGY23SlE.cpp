
        
        #endif  // CHROME_BROWSER_UI_VIEWS_FRAME_GLOBAL_MENU_BAR_REGISTRAR_X11_H_

    
    CallbackHolderBase::CallbackHolderBase(v8::Isolate* isolate)
    : v8_ref_(isolate, v8::External::New(isolate, this)) {
  v8_ref_.SetWeak(this, &CallbackHolderBase::FirstWeakCallback,
                  v8::WeakCallbackType::kParameter);
}
    
    bool Converter<PersistentDictionary>::FromV8(v8::Isolate* isolate,
                                             v8::Local<v8::Value> val,
                                             PersistentDictionary* out) {
  if (!val->IsObject())
    return false;
  *out = PersistentDictionary(isolate, v8::Local<v8::Object>::Cast(val));
  return true;
}
    
      // Updates the current user activity
  void UpdateCurrentActivity(const std::string& type,
                             const base::DictionaryValue& user_info);
    
    void AtomRenderFrameObserver::DidCreateScriptContext(
    v8::Handle<v8::Context> context,
    int world_id) {
  if (ShouldNotifyClient(world_id))
    renderer_client_->DidCreateScriptContext(context, render_frame_);
    }
    
    WebRequestNS::WebRequestNS(v8::Isolate* isolate,
                           AtomBrowserContext* browser_context) {
  Init(isolate);
  AttachAsUserData(browser_context);
}
    
      // Returns a fake result of fs.stat(path).
  v8::Local<v8::Value> Stat(v8::Isolate* isolate, const base::FilePath& path) {
    asar::Archive::Stats stats;
    if (!archive_ || !archive_->Stat(path, &stats))
      return v8::False(isolate);
    mate::Dictionary dict(isolate, v8::Object::New(isolate));
    dict.Set('size', stats.size);
    dict.Set('offset', stats.offset);
    dict.Set('isFile', stats.is_file);
    dict.Set('isDirectory', stats.is_directory);
    dict.Set('isLink', stats.is_link);
    return dict.GetHandle();
  }
    
    // static
void WrappableBase::FirstWeakCallback(
    const v8::WeakCallbackInfo<WrappableBase>& data) {
  WrappableBase* wrappable = data.GetParameter();
  wrappable->wrapper_.Reset();
  data.SetSecondPassCallback(SecondWeakCallback);
}
    
    // CertificateManagerModel is created on the UI thread. It needs a
// NSSCertDatabase handle (and on ChromeOS it needs to get the TPM status) which
// needs to be done on the IO thread.
//
// The initialization flow is roughly:
//
//               UI thread                              IO Thread
//
//   CertificateManagerModel::Create
//                  \--------------------------------------v
//                                CertificateManagerModel::GetCertDBOnIOThread
//                                                         |
//                                     GetNSSCertDatabaseForResourceContext
//                                                         |
//                               CertificateManagerModel::DidGetCertDBOnIOThread
//                  v--------------------------------------/
// CertificateManagerModel::DidGetCertDBOnUIThread
//                  |
//     new CertificateManagerModel
//                  |
//               callback
    
    // This function is a convenient way to create a handle from a raw pointer
// without having to write out the type of the object explicitly.
template <typename T>
mate::Handle<T> CreateHandle(v8::Isolate* isolate, T* object) {
  return mate::Handle<T>(object->GetWrapper(), object);
}
    
    #ifndef NATIVE_MATE_NATIVE_MATE_WRAPPABLE_H_
#define NATIVE_MATE_NATIVE_MATE_WRAPPABLE_H_
    
      // Clear any lock state during shutdown.
  void Cleanup();
    
      // Go through the data 10 times (5 batches).
  const int data_size = num_cols * height * width;
  for (int iter = 0; iter < 10; ++iter) {
    layer.Forward(this->blob_bottom_vec_, this->blob_top_vec_);
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    template <typename Dtype>
void Net<Dtype>::CopyTrainedLayersFromHDF5(const string& trained_filename) {
#ifdef USE_HDF5
  hid_t file_hid = H5Fopen(trained_filename.c_str(), H5F_ACC_RDONLY,
                           H5P_DEFAULT);
  CHECK_GE(file_hid, 0) << 'Couldn't open ' << trained_filename;
  hid_t data_hid = H5Gopen2(file_hid, 'data', H5P_DEFAULT);
  CHECK_GE(data_hid, 0) << 'Error reading weights from ' << trained_filename;
  int num_layers = hdf5_get_num_links(data_hid);
  for (int i = 0; i < num_layers; ++i) {
    string source_layer_name = hdf5_get_name_by_idx(data_hid, i);
    if (!layer_names_index_.count(source_layer_name)) {
      LOG(INFO) << 'Ignoring source layer ' << source_layer_name;
      continue;
    }
    int target_layer_id = layer_names_index_[source_layer_name];
    DLOG(INFO) << 'Copying source layer ' << source_layer_name;
    vector<shared_ptr<Blob<Dtype> > >& target_blobs =
        layers_[target_layer_id]->blobs();
    hid_t layer_hid = H5Gopen2(data_hid, source_layer_name.c_str(),
        H5P_DEFAULT);
    CHECK_GE(layer_hid, 0)
        << 'Error reading weights from ' << trained_filename;
    // Check that source layer doesn't have more params than target layer
    int num_source_params = hdf5_get_num_links(layer_hid);
    CHECK_LE(num_source_params, target_blobs.size())
        << 'Incompatible number of blobs for layer ' << source_layer_name;
    for (int j = 0; j < target_blobs.size(); ++j) {
      ostringstream oss;
      oss << j;
      string dataset_name = oss.str();
      int target_net_param_id = param_id_vecs_[target_layer_id][j];
      if (!H5Lexists(layer_hid, dataset_name.c_str(), H5P_DEFAULT)) {
        // Target param doesn't exist in source weights...
        if (param_owners_[target_net_param_id] != -1) {
          // ...but it's weight-shared in target, so that's fine.
          continue;
        } else {
          LOG(FATAL) << 'Incompatible number of blobs for layer '
              << source_layer_name;
        }
      }
      hdf5_load_nd_dataset(layer_hid, dataset_name.c_str(), 0, kMaxBlobAxes,
          target_blobs[j].get());
    }
    H5Gclose(layer_hid);
  }
  H5Gclose(data_hid);
  H5Fclose(file_hid);
#else
  LOG(FATAL) << 'CopyTrainedLayersFromHDF5 requires hdf5;'
             << ' compile with USE_HDF5.';
#endif  // USE_HDF5
}
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      bool DrawTrajectory(
      const Obstacle& obstacle, const LaneSequence& lane_sequence,
      const double lon_acceleration, const double total_time,
      const double period,
      std::vector<apollo::common::TrajectoryPoint>* trajectory_points);
    
    class GraphSegmentorTest : public testing::Test {
 protected:
  void SetUp() {
    edges_ = new Edge[10];
    edges_[0].w = 6.f;
    edges_[0].a = 1;
    edges_[0].b = 2;
    edges_[1].w = 1.f;
    edges_[1].a = 1;
    edges_[1].b = 3;
    edges_[2].w = 5.f;
    edges_[2].a = 1;
    edges_[2].b = 4;
    edges_[3].w = 5.f;
    edges_[3].a = 3;
    edges_[3].b = 2;
    edges_[4].w = 5.f;
    edges_[4].a = 3;
    edges_[4].b = 4;
    edges_[5].w = 3.f;
    edges_[5].a = 5;
    edges_[5].b = 2;
    edges_[6].w = 6.f;
    edges_[6].a = 3;
    edges_[6].b = 5;
    edges_[7].w = 4.f;
    edges_[7].a = 3;
    edges_[7].b = 0;
    edges_[8].w = 2.f;
    edges_[8].a = 4;
    edges_[8].b = 0;
    edges_[9].w = 6.f;
    edges_[9].a = 5;
    edges_[9].b = 0;
  }
    }
    
    #include <cmath>
    
    Status Rerouting::ApplyRule(Frame* const frame,
                            ReferenceLineInfo* const reference_line_info) {
  frame_ = frame;
  reference_line_info_ = reference_line_info;
  if (!ChangeLaneFailRerouting()) {
    return Status(common::PLANNING_ERROR,
                  'In un-successful lane change case, rerouting failed');
  }
  return Status::OK();
}
    
    class PathLaneBorrowDecider : public Decider {
 public:
  explicit PathLaneBorrowDecider(const TaskConfig& config);
    }
    
    using hdmap::HDMapUtil;
using hdmap::StopSignInfo;
using hdmap::StopSignInfoConstPtr;
    
    void TrafficLightProtectedScenario::RegisterStages() {
  if (!s_stage_factory_.Empty()) {
    s_stage_factory_.Clear();
  }
  s_stage_factory_.Register(
      ScenarioConfig::TRAFFIC_LIGHT_PROTECTED_APPROACH,
      [](const ScenarioConfig::StageConfig& config) -> Stage* {
        return new TrafficLightProtectedStageApproach(config);
      });
  s_stage_factory_.Register(
      ScenarioConfig::TRAFFIC_LIGHT_PROTECTED_INTERSECTION_CRUISE,
      [](const ScenarioConfig::StageConfig& config) -> Stage* {
        return new TrafficLightProtectedStageIntersectionCruise(config);
      });
}
    
    #include 'cyber/common/log.h'
#include 'modules/common/time/time.h'
#include 'modules/common/vehicle_state/vehicle_state_provider.h'
#include 'modules/planning/common/frame.h'
#include 'modules/planning/common/planning_context.h'
#include 'modules/planning/scenarios/traffic_light/unprotected_left_turn/stage_creep.h'
#include 'modules/planning/scenarios/traffic_light/unprotected_left_turn/stage_intersection_cruise.h'
    
    std::unique_ptr<Stage> TrafficLightUnprotectedRightTurnScenario::CreateStage(
    const ScenarioConfig::StageConfig& stage_config) {
  if (s_stage_factory_.Empty()) {
    RegisterStages();
  }
  auto ptr = s_stage_factory_.CreateObjectOrNull(stage_config.stage_type(),
                                                 stage_config);
  if (ptr) {
    ptr->SetContext(&context_);
  }
  return ptr;
}
    
    /* Sets addr by hostname, or by ip in string form (AF_INET)  */
int php_set_inet_addr(struct sockaddr_in *sin, char *string, Socket *php_sock) /* {{{ */
{
	struct in_addr tmp;
	struct hostent *host_entry;
    }
    }
    }
    }
    
        zend_execute(new_op_array, &retval);
    
            std::string addr1 = System::gethostbyname('www.baidu.com', AF_INET);
        ASSERT_NE(addr1, '');
    
    #include <iostream>
    
    static unordered_map<string, string> mime_map({
    { 'ez', 'application/andrew-inset' },
    { 'aw', 'application/applixware' },
    { 'atom', 'application/atom+xml' },
    { 'atomcat', 'application/atomcat+xml' },
    { 'atomsvc', 'application/atomsvc+xml' },
    { 'bdoc', 'application/bdoc' },
    { 'ccxml', 'application/ccxml+xml' },
    { 'cdmia', 'application/cdmi-capability' },
    { 'cdmic', 'application/cdmi-container' },
    { 'cdmid', 'application/cdmi-domain' },
    { 'cdmio', 'application/cdmi-object' },
    { 'cdmiq', 'application/cdmi-queue' },
    { 'cu', 'application/cu-seeme' },
    { 'mpd', 'application/dash+xml' },
    { 'davmount', 'application/davmount+xml' },
    { 'dbk', 'application/docbook+xml' },
    { 'dssc', 'application/dssc+der' },
    { 'xdssc', 'application/dssc+xml' },
    { 'ecma', 'application/ecmascript' },
    { 'emma', 'application/emma+xml' },
    { 'epub', 'application/epub+zip' },
    { 'exi', 'application/exi' },
    { 'pfr', 'application/font-tdpfr' },
    { 'woff', 'application/font-woff' },
    { 'geojson', 'application/geo+json' },
    { 'gml', 'application/gml+xml' },
    { 'gpx', 'application/gpx+xml' },
    { 'gxf', 'application/gxf' },
    { 'gz', 'application/gzip' },
    { 'hjson', 'application/hjson' },
    { 'stk', 'application/hyperstudio' },
    { 'ink', 'application/inkml+xml' },
    { 'inkml', 'application/inkml+xml' },
    { 'ipfix', 'application/ipfix' },
    { 'jar', 'application/java-archive' },
    { 'war', 'application/java-archive' },
    { 'ear', 'application/java-archive' },
    { 'ser', 'application/java-serialized-object' },
    { 'class', 'application/java-vm' },
    { 'js', 'application/javascript' },
    { 'mjs', 'application/javascript' },
    { 'json', 'application/json' },
    { 'map', 'application/json' },
    { 'json5', 'application/json5' },
    { 'jsonml', 'application/jsonml+json' },
    { 'jsonld', 'application/ld+json' },
    { 'lostxml', 'application/lost+xml' },
    { 'hqx', 'application/mac-binhex40' },
    { 'cpt', 'application/mac-compactpro' },
    { 'mads', 'application/mads+xml' },
    { 'webmanifest', 'application/manifest+json' },
    { 'mrc', 'application/marc' },
    { 'mrcx', 'application/marcxml+xml' },
    { 'ma', 'application/mathematica' },
    { 'nb', 'application/mathematica' },
    { 'mb', 'application/mathematica' },
    { 'mathml', 'application/mathml+xml' },
    { 'mbox', 'application/mbox' },
    { 'mscml', 'application/mediaservercontrol+xml' },
    { 'metalink', 'application/metalink+xml' },
    { 'meta4', 'application/metalink4+xml' },
    { 'mets', 'application/mets+xml' },
    { 'mods', 'application/mods+xml' },
    { 'm21', 'application/mp21' },
    { 'mp21', 'application/mp21' },
    { 'mp4s', 'application/mp4' },
    { 'm4p', 'application/mp4' },
    { 'doc', 'application/msword' },
    { 'docx', 'application/vnd.openxmlformats-officedocument.wordprocessingml.document' },
    { 'dot', 'application/msword' },
    { 'mxf', 'application/mxf' },
    { 'bin', 'application/octet-stream' },
    { 'dms', 'application/octet-stream' },
    { 'lrf', 'application/octet-stream' },
    { 'mar', 'application/octet-stream' },
    { 'so', 'application/octet-stream' },
    { 'dist', 'application/octet-stream' },
    { 'distz', 'application/octet-stream' },
    { 'pkg', 'application/octet-stream' },
    { 'bpk', 'application/octet-stream' },
    { 'dump', 'application/octet-stream' },
    { 'elc', 'application/octet-stream' },
    { 'deploy', 'application/octet-stream' },
    { 'exe', 'application/octet-stream' },
    { 'dll', 'application/octet-stream' },
    { 'deb', 'application/octet-stream' },
    { 'dmg', 'application/octet-stream' },
    { 'iso', 'application/octet-stream' },
    { 'img', 'application/octet-stream' },
    { 'msi', 'application/octet-stream' },
    { 'msp', 'application/octet-stream' },
    { 'msm', 'application/octet-stream' },
    { 'buffer', 'application/octet-stream' },
    { 'oda', 'application/oda' },
    { 'opf', 'application/oebps-package+xml' },
    { 'ogx', 'application/ogg' },
    { 'omdoc', 'application/omdoc+xml' },
    { 'onetoc', 'application/onenote' },
    { 'onetoc2', 'application/onenote' },
    { 'onetmp', 'application/onenote' },
    { 'onepkg', 'application/onenote' },
    { 'oxps', 'application/oxps' },
    { 'xer', 'application/patch-ops-error+xml' },
    { 'pdf', 'application/pdf' },
    { 'pgp', 'application/pgp-encrypted' },
    { 'asc', 'application/pgp-signature' },
    { 'sig', 'application/pgp-signature' },
    { 'prf', 'application/pics-rules' },
    { 'p10', 'application/pkcs10' },
    { 'p7m', 'application/pkcs7-mime' },
    { 'p7c', 'application/pkcs7-mime' },
    { 'p7s', 'application/pkcs7-signature' },
    { 'p8', 'application/pkcs8' },
    { 'ac', 'application/pkix-attr-cert' },
    { 'cer', 'application/pkix-cert' },
    { 'crl', 'application/pkix-crl' },
    { 'pkipath', 'application/pkix-pkipath' },
    { 'pki', 'application/pkixcmp' },
    { 'pls', 'application/pls+xml' },
    { 'ai', 'application/postscript' },
    { 'eps', 'application/postscript' },
    { 'ps', 'application/postscript' },
    { 'pskcxml', 'application/pskc+xml' },
    { 'raml', 'application/raml+yaml' },
    { 'rdf', 'application/rdf+xml' },
    { 'rif', 'application/reginfo+xml' },
    { 'rnc', 'application/relax-ng-compact-syntax' },
    { 'rl', 'application/resource-lists+xml' },
    { 'rld', 'application/resource-lists-diff+xml' },
    { 'rs', 'application/rls-services+xml' },
    { 'gbr', 'application/rpki-ghostbusters' },
    { 'mft', 'application/rpki-manifest' },
    { 'roa', 'application/rpki-roa' },
    { 'rsd', 'application/rsd+xml' },
    { 'rss', 'application/rss+xml' },
    { 'rtf', 'application/rtf' },
    { 'sbml', 'application/sbml+xml' },
    { 'scq', 'application/scvp-cv-request' },
    { 'scs', 'application/scvp-cv-response' },
    { 'spq', 'application/scvp-vp-request' },
    { 'spp', 'application/scvp-vp-response' },
    { 'sdp', 'application/sdp' },
    { 'setpay', 'application/set-payment-initiation' },
    { 'setreg', 'application/set-registration-initiation' },
    { 'shf', 'application/shf+xml' },
    { 'smi', 'application/smil+xml' },
    { 'smil', 'application/smil+xml' },
    { 'rq', 'application/sparql-query' },
    { 'srx', 'application/sparql-results+xml' },
    { 'gram', 'application/srgs' },
    { 'grxml', 'application/srgs+xml' },
    { 'sru', 'application/sru+xml' },
    { 'ssdl', 'application/ssdl+xml' },
    { 'ssml', 'application/ssml+xml' },
    { 'tei', 'application/tei+xml' },
    { 'teicorpus', 'application/tei+xml' },
    { 'tfi', 'application/thraud+xml' },
    { 'tsd', 'application/timestamped-data' },
    { 'vxml', 'application/voicexml+xml' },
    { 'wasm', 'application/wasm' },
    { 'wgt', 'application/widget' },
    { 'hlp', 'application/winhlp' },
    { 'wsdl', 'application/wsdl+xml' },
    { 'wspolicy', 'application/wspolicy+xml' },
    { 'xaml', 'application/xaml+xml' },
    { 'xdf', 'application/xcap-diff+xml' },
    { 'xenc', 'application/xenc+xml' },
    { 'xhtml', 'application/xhtml+xml' },
    { 'xht', 'application/xhtml+xml' },
    { 'xml', 'application/xml' },
    { 'xsl', 'application/xml' },
    { 'xsd', 'application/xml' },
    { 'rng', 'application/xml' },
    { 'dtd', 'application/xml-dtd' },
    { 'xop', 'application/xop+xml' },
    { 'xpl', 'application/xproc+xml' },
    { 'xslt', 'application/xslt+xml' },
    { 'xspf', 'application/xspf+xml' },
    { 'mxml', 'application/xv+xml' },
    { 'xhvml', 'application/xv+xml' },
    { 'xvml', 'application/xv+xml' },
    { 'xvm', 'application/xv+xml' },
    { 'yang', 'application/yang' },
    { 'yin', 'application/yin+xml' },
    { 'zip', 'application/zip' },
    { '*3gpp', 'audio/3gpp' },
    { 'adp', 'audio/adpcm' },
    { 'au', 'audio/basic' },
    { 'snd', 'audio/basic' },
    { 'mid', 'audio/midi' },
    { 'midi', 'audio/midi' },
    { 'kar', 'audio/midi' },
    { 'rmi', 'audio/midi' },
    { '*mp3', 'audio/mp3' },
    { 'm4a', 'audio/mp4' },
    { 'mp4a', 'audio/mp4' },
    { 'mpga', 'audio/mpeg' },
    { 'mp2', 'audio/mpeg' },
    { 'mp2a', 'audio/mpeg' },
    { 'mp3', 'audio/mpeg' },
    { 'm2a', 'audio/mpeg' },
    { 'm3a', 'audio/mpeg' },
    { 'oga', 'audio/ogg' },
    { 'ogg', 'audio/ogg' },
    { 'spx', 'audio/ogg' },
    { 's3m', 'audio/s3m' },
    { 'sil', 'audio/silk' },
    { 'wav', 'audio/wav' },
    { '*wav', 'audio/wave' },
    { 'weba', 'audio/webm' },
    { 'xm', 'audio/xm' },
    { 'ttc', 'font/collection' },
    { 'otf', 'font/otf' },
    { 'ttf', 'font/ttf' },
    { '*woff', 'font/woff' },
    { 'woff2', 'font/woff2' },
    { 'apng', 'image/apng' },
    { 'bmp', 'image/bmp' },
    { 'cgm', 'image/cgm' },
    { 'g3', 'image/g3fax' },
    { 'gif', 'image/gif' },
    { 'ief', 'image/ief' },
    { 'jp2', 'image/jp2' },
    { 'jpg2', 'image/jp2' },
    { 'jpeg', 'image/jpeg' },
    { 'jpg', 'image/jpeg' },
    { 'jpe', 'image/jpeg' },
    { 'jpm', 'image/jpm' },
    { 'jpx', 'image/jpx' },
    { 'jpf', 'image/jpx' },
    { 'ktx', 'image/ktx' },
    { 'png', 'image/png' },
    { 'sgi', 'image/sgi' },
    { 'svg', 'image/svg+xml' },
    { 'svgz', 'image/svg+xml' },
    { 'tiff', 'image/tiff' },
    { 'tif', 'image/tiff' },
    { 'webp', 'image/webp' },
    { 'disposition-notification', 'message/disposition-notification' },
    { 'u8msg', 'message/global' },
    { 'u8dsn', 'message/global-delivery-status' },
    { 'u8mdn', 'message/global-disposition-notification' },
    { 'u8hdr', 'message/global-headers' },
    { 'eml', 'message/rfc822' },
    { 'mime', 'message/rfc822' },
    { 'gltf', 'model/gltf+json' },
    { 'glb', 'model/gltf-binary' },
    { 'igs', 'model/iges' },
    { 'iges', 'model/iges' },
    { 'msh', 'model/mesh' },
    { 'mesh', 'model/mesh' },
    { 'silo', 'model/mesh' },
    { 'wrl', 'model/vrml' },
    { 'vrml', 'model/vrml' },
    { 'x3db', 'model/x3d+binary' },
    { 'x3dbz', 'model/x3d+binary' },
    { 'x3dv', 'model/x3d+vrml' },
    { 'x3dvz', 'model/x3d+vrml' },
    { 'x3d', 'model/x3d+xml' },
    { 'x3dz', 'model/x3d+xml' },
    { 'appcache', 'text/cache-manifest' },
    { 'manifest', 'text/cache-manifest' },
    { 'ics', 'text/calendar' },
    { 'ifb', 'text/calendar' },
    { 'coffee', 'text/coffeescript' },
    { 'litcoffee', 'text/coffeescript' },
    { 'css', 'text/css' },
    { 'csv', 'text/csv' },
    { 'html', 'text/html' },
    { 'htm', 'text/html' },
    { 'shtml', 'text/html' },
    { 'jade', 'text/jade' },
    { 'jsx', 'text/jsx' },
    { 'less', 'text/less' },
    { 'markdown', 'text/markdown' },
    { 'md', 'text/markdown' },
    { 'mml', 'text/mathml' },
    { 'n3', 'text/n3' },
    { 'txt', 'text/plain' },
    { 'text', 'text/plain' },
    { 'conf', 'text/plain' },
    { 'def', 'text/plain' },
    { 'list', 'text/plain' },
    { 'log', 'text/plain' },
    { 'in', 'text/plain' },
    { 'ini', 'text/plain' },
    { 'rtx', 'text/richtext' },
    { '*rtf', 'text/rtf' },
    { 'sgml', 'text/sgml' },
    { 'sgm', 'text/sgml' },
    { 'shex', 'text/shex' },
    { 'slim', 'text/slim' },
    { 'slm', 'text/slim' },
    { 'stylus', 'text/stylus' },
    { 'styl', 'text/stylus' },
    { 'tsv', 'text/tab-separated-values' },
    { 't', 'text/troff' },
    { 'tr', 'text/troff' },
    { 'roff', 'text/troff' },
    { 'man', 'text/troff' },
    { 'me', 'text/troff' },
    { 'ms', 'text/troff' },
    { 'ttl', 'text/turtle' },
    { 'uri', 'text/uri-list' },
    { 'uris', 'text/uri-list' },
    { 'urls', 'text/uri-list' },
    { 'vcard', 'text/vcard' },
    { 'vtt', 'text/vtt' },
    { '*xml', 'text/xml' },
    { 'yaml', 'text/yaml' },
    { 'yml', 'text/yaml' },
    { '3gp', 'video/3gpp' },
    { '3gpp', 'video/3gpp' },
    { '3g2', 'video/3gpp2' },
    { 'h261', 'video/h261' },
    { 'h263', 'video/h263' },
    { 'h264', 'video/h264' },
    { 'jpgv', 'video/jpeg' },
    { '*jpm', 'video/jpm' },
    { 'jpgm', 'video/jpm' },
    { 'mj2', 'video/mj2' },
    { 'mjp2', 'video/mj2' },
    { 'ts', 'video/mp2t' },
    { 'mp4', 'video/mp4' },
    { 'mp4v', 'video/mp4' },
    { 'mpg4', 'video/mp4' },
    { 'mpeg', 'video/mpeg' },
    { 'mpg', 'video/mpeg' },
    { 'mpe', 'video/mpeg' },
    { 'm1v', 'video/mpeg' },
    { 'm2v', 'video/mpeg' },
    { 'ogv', 'video/ogg' },
    { 'qt', 'video/quicktime' },
    { 'mov', 'video/quicktime' },
    { 'webm', 'video/webm' },
    // https://developer.mozilla.org/en-US/docs/Web/HTTP/Basics_of_HTTP/MIME_types/Complete_list_of_MIME_types
    { 'aac', 'audio/aac' },
    { 'abw', 'application/x-abiword' },
    { 'arc', 'application/octet-stream' },
    { 'avi', 'video/x-msvideo' },
    { 'azw', 'application/vnd.amazon.ebook' },
    { 'bz', 'application/x-bzip' },
    { 'bz2', 'application/x-bzip2' },
    { 'csh', 'application/x-csh' },
    { 'eot', 'application/vnd.ms-fontobject' },
    { 'es', 'application/ecmascript' },
    { 'ico', 'image/x-icon' },
    { 'mpkg', 'application/vnd.apple.installer+xml' },
    { 'odp', 'application/vnd.oasis.opendocument.presentation' },
    { 'ods', 'application/vnd.oasis.opendocument.spreadsheet' },
    { 'odt', 'application/vnd.oasis.opendocument.text' },
    { 'ppt', 'application/vnd.ms-powerpoint' },
    { 'pptx', 'application/vnd.openxmlformats-officedocument.presentationml.presentation' },
    { 'rar', 'application/x-rar-compressed' },
    { 'sh', 'application/x-sh' },
    { 'swf', 'application/x-shockwave-flash' },
    { 'tar', 'application/x-tar' },
    { 'vsd', 'application/vnd.visio' },
    { 'xls', 'application/vnd.ms-excel' },
    { 'xlsx', 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet' },
    { 'xul', 'application/vnd.mozilla.xul+xml' },
    { '7z', 'application/x-7z-compressed' }
});
    
        ret = swSocket_unix_sendto(fd1,sock2_path,test_data,strlen(test_data));
    ASSERT_GT(ret, 0);
    
        swSignal_add(SIGUSR1,NULL);
    swSignal_clear();