
        
                    dstIdx += rleCount;
    
    
    {    return i->second;
}
    
    void GenericInputFile::readMagicNumberAndVersionField(OPENEXR_IMF_INTERNAL_NAMESPACE::IStream& is, int& version)
{
    //
    // Read the magic number and the file format version number.
    // Then check if we can read the rest of this file.
    //
    }
    
    #include <ImfBoxAttribute.h>
#include <ImfFloatAttribute.h>
#include <ImfTimeCodeAttribute.h>
#include <ImfChromaticitiesAttribute.h>
    
    #include 'ImfVersion.h'
#include 'ImfIO.h'
#include 'ImfXdr.h'
#include 'ImfHeader.h'
#include 'ImfNamespace.h'
#include 'ImfExport.h'
    
    
bool
IStream::isMemoryMapped () const
{
    return false;
}
    
    
    {    private:
        InputFile* file;
    // for internal use - give OutputFile and TiledOutputFile access to file for copyPixels
    friend void OutputFile::copyPixels(InputPart&);
    friend void TiledOutputFile::copyPixels(InputPart&);
    
};
    
    
    {};
    
    #include <ImfIntAttribute.h>
    
    template <typename Dtype>
void HDF5OutputLayer<Dtype>::SaveBlobs() {
  // TODO: no limit on the number of blobs
  LOG(INFO) << 'Saving HDF5 file ' << file_name_;
  CHECK_EQ(data_blob_.num(), label_blob_.num()) <<
      'data blob and label blob must have the same batch size';
  hdf5_save_nd_dataset(file_id_, HDF5_DATA_DATASET_NAME, data_blob_);
  hdf5_save_nd_dataset(file_id_, HDF5_DATA_LABEL_NAME, label_blob_);
  LOG(INFO) << 'Successfully saved ' << data_blob_.num() << ' rows';
}
    
        Dtype min = this->layer_param_.clip_param().min();
    Dtype max = this->layer_param_.clip_param().max();
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  // Figure out the dimensions
  const int axis = bottom[0]->CanonicalAxisIndex(
      this->layer_param_.inner_product_param().axis());
  const int new_K = bottom[0]->count(axis);
  CHECK_EQ(K_, new_K)
      << 'Input size incompatible with inner product parameters.';
  // The first 'axis' dimensions are independent inner products; the total
  // number of these is M_, the product over these dimensions.
  M_ = bottom[0]->count(0, axis);
  // The top shape will be the bottom shape with the flattened axes dropped,
  // and replaced by a single axis with dimension num_output (N_).
  vector<int> top_shape = bottom[0]->shape();
  top_shape.resize(axis + 1);
  top_shape[axis] = N_;
  top[0]->Reshape(top_shape);
  // Set up the bias multiplier
  if (bias_term_) {
    vector<int> bias_shape(1, M_);
    bias_multiplier_.Reshape(bias_shape);
    caffe_set(M_, Dtype(1), bias_multiplier_.mutable_cpu_data());
  }
}
    
      /// @brief Updates the network weights based on the diff values computed.
  void Update();
  /**
   * @brief Shares weight data of owner blobs with shared blobs.
   *
   * Note: this is called by Net::Init, and thus should normally not be
   * called manually.
   */
  void ShareWeights();
    
      // Invoked at specific points during an iteration
  class Callback {
   protected:
    virtual void on_start() = 0;
    virtual void on_gradients_ready() = 0;
    }
    
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
    
    #include <stdint.h>
#include <sys/stat.h>
    
    int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
      /// @brief Deprecated; use <code>Blob(const vector<int>& shape)</code>.
  explicit Blob(const int num, const int channels, const int height,
      const int width);
  explicit Blob(const vector<int>& shape);
    
                        // Get locale info for List Separator, eg. comma is used in many locales
                    wchar_t listSeparatorString[4] = L'';
                    result = ::GetLocaleInfoEx(
                        m_resolvedName.c_str(),
                        LOCALE_SLIST,
                        listSeparatorString,
                        static_cast<int>(std::size(listSeparatorString))); // Max length of the expected return value is 4
                    if (result == 0)
                    {
                        throw std::runtime_error('Unexpected error while getting locale info');
                    }
    
        Rational& Rational::operator^=(Rational const& rhs)
    {
        PRAT lhsRat = this->ToPRAT();
        PRAT rhsRat = rhs.ToPRAT();
        try
        {
            xorrat(&lhsRat, rhsRat, RATIONAL_BASE, RATIONAL_PRECISION);
            destroyrat(rhsRat);
        }
        catch (uint32_t error)
        {
            destroyrat(lhsRat);
            destroyrat(rhsRat);
            throw(error);
        }
    }
    
    #define CREATETAYLOR()                                                                                                                                         \
    PRAT xx = nullptr;                                                                                                                                         \
    PNUMBER n2 = nullptr;                                                                                                                                      \
    PRAT pret = nullptr;                                                                                                                                       \
    PRAT thisterm = nullptr;                                                                                                                                   \
    DUPRAT(xx, *px);                                                                                                                                           \
    mulrat(&xx, *px, precision);                                                                                                                               \
    createrat(pret);                                                                                                                                           \
    pret->pp = i32tonum(0L, BASEX);                                                                                                                            \
    pret->pq = i32tonum(0L, BASEX);
    
        Number::Number(PNUMBER p) noexcept
        : m_sign{ p->sign }
        , m_exp{ p->exp }
        , m_mantissa{}
    {
        m_mantissa.reserve(p->cdigit);
        copy(p->mant, p->mant + p->cdigit, back_inserter(m_mantissa));
    }
    
    
    {    m_historyItems.erase(m_historyItems.begin() + uIdx);
    return true;
}
    
            CalcInput(wchar_t decSymbol)
            : m_hasExponent(false)
            , m_hasDecimal(false)
            , m_decPtIndex(0)
            , m_decSymbol(decSymbol)
            , m_base()
            , m_exponent()
        {
        }
    
    
    {                Windows::UI::Xaml::Interop::IBindableObservableVector ^ observable =
                    dynamic_cast<Windows::UI::Xaml::Interop::IBindableObservableVector ^>(source);
                if (observable)
                {
                    observable->VectorChanged += ref new Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler(
                        this, &AlwaysSelectedCollectionView::OnSourceBindableVectorChanged);
                }
            }
    
    void LiveRegionHost::Announce(NarratorAnnouncement ^ announcement)
{
    if (m_host == nullptr)
    {
        m_host = ref new TextBlock();
        AutomationProperties::SetLiveSetting(m_host, AutomationLiveSetting::Assertive);
    }
    }
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetMaxDigitsReachedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::MaxDigitsReached, AutomationNotificationKind::Other, AutomationNotificationProcessing::ImportantMostRecent);
}
    
        ncclUniqueId ncclId = {};
    ncclResult_t res;
    
                float defaultHiddenActivity = node->GetOptionalParameter('defaultHiddenActivity', '0.1'); // TODO: parameter should be called 'defaultHiddenActivation'
    
        void Init(
        NDLBuilderImpl<ElemType>* executionEngine,
        const std::wstring& networkConfig,
        const std::string& configParams,
        const std::wstring& dumpFileName,
        DEVICEID_TYPE deviceId)
    {
        m_executionEngine = executionEngine;
        m_networkConfig = networkConfig;
        m_dumpFileName = dumpFileName;
        m_initialConfig = configParams;
        m_deviceId = deviceId;
        m_net = executionEngine->GetComputationNetwork();
    }
    
        // first try if a NetworkBuilder is present
    function<ComputationNetworkPtr(DEVICEID_TYPE)> createNetworkFn;
    bool gotIt = TryGetNetworkFactory<ConfigRecordType, ElemType>(config, createNetworkFn);
    if (gotIt)
    {
        // We have several ways to create a network.
        net = createNetworkFn(deviceId);
        if (outputNodeNames.size() > 0)
        {
            net->InvalidateCompiledNetwork();
            PatchOutputNodes(net, outputNodeNames, outputNodeNamesVector);
            net->CompileNetwork();
            // BUGBUG: This will generate double Validation output in the log
        }
    }
    else // no NetworkBuilder given: load from 'modelPath'
    {
        wstring modelPath = config(L'modelPath');
    }
    
    
    {    optimizer->InitMPI(MPIWrapper::GetInstance());
    optimizer->Train(net, deviceId, dataReader.get(), cvDataReader.get(), startEpoch, loadNetworkFromCheckpoint);
}
    
        // compile the BrainScript
    wstring bs = L'[\n';
    bs += L'include \'cntk.core.bs''; // start with including the standard macros
    
            // create pinned memory
        for (int i3 = 0; i3 < m_localBufferNum; ++i3)
            CUDA_CALL(cudaMallocHost((void **)&m_cpuAsyncBuffer[i3], sizeof(ElemType) * (m_totalModelSize), cudaHostAllocPortable));
    
    
    {            return retval;
        }
        // borrow DownCast function from ComputationNetwork
        ComputationNodePtr DownCast(ComputationNodeBasePtr inode)
        {
            ComputationNodePtr node = dynamic_pointer_cast<ComputationNode<ElemType>>(inode);
            if (!node)
                InvalidArgument('an ComputationNodeBasePtr of mismatching precision was passed');
            return node;
        }
    
      void Init() override;
  bool Poll(const std::shared_ptr<VelodyneScan> &scan) override;
    
    apollo::cyber::PyReader *pr = nullptr;
    
      NaviSpeedTsConstraints constraints;
  constraints.v_max = 20.0;
  constraints.v_preffered = 10.0;
  constraints.a_max = 4.0;
  constraints.a_preffered = 2.0;
  constraints.b_max = 5.0;
  constraints.b_preffered = 2.0;
  graph.UpdateConstraints(constraints);
    
      shift_cmd_65_ = dynamic_cast<Shiftcmd65*>(
      message_manager_->GetMutableProtocolDataById(Shiftcmd65::ID));
  if (shift_cmd_65_ == nullptr) {
    AERROR << 'Shiftcmd65 does not exist in the GemMessageManager!';
    return ErrorCode::CANBUS_ERROR;
  }
  turn_cmd_63_ = dynamic_cast<Turncmd63*>(
      message_manager_->GetMutableProtocolDataById(Turncmd63::ID));
  if (turn_cmd_63_ == nullptr) {
    AERROR << 'Turncmd63 does not exist in the GemMessageManager!';
    return ErrorCode::CANBUS_ERROR;
  }
  global_cmd_69_ = dynamic_cast<Globalcmd69*>(
      message_manager_->GetMutableProtocolDataById(Globalcmd69::ID));
  if (global_cmd_69_ == nullptr) {
    AERROR << 'Turncmd63 does not exist in the GemMessageManager!';
    return ErrorCode::CANBUS_ERROR;
  }
    
    
    {  for (const auto& stage_config : config_.stage_config()) {
    stage_config_map_[stage_config.stage_type()] = &stage_config;
  }
  for (int i = 0; i < config_.stage_type_size(); ++i) {
    auto stage_type = config_.stage_type(i);
    CHECK(common::util::ContainsKey(stage_config_map_, stage_type))
        << 'stage type : ' << ScenarioConfig::StageType_Name(stage_type)
        << ' has no config';
  }
  ADEBUG << 'init stage '
         << ScenarioConfig::StageType_Name(config_.stage_type(0));
  current_stage_ = CreateStage(*stage_config_map_[config_.stage_type(0)]);
}
    
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
    
    namespace apollo {
namespace prediction {
    }
    }
    
    int MultiCueObstacleTransformer::MatchTemplates(base::ObjectSubType sub_type,
                                                float *dimension_hwl) {
  const TemplateMap &kMinTemplateHWL =
      object_template_manager_->MinTemplateHWL();
  const TemplateMap &kMidTemplateHWL =
      object_template_manager_->MidTemplateHWL();
  const TemplateMap &kMaxTemplateHWL =
      object_template_manager_->MaxTemplateHWL();
    }
    
        swHashMap_del(hm, (char *) SW_STRL('willdel'));
    swHashMap_update(hm, (char *) SW_STRL('willupadte'), (void *) (9999 * 5555));
    
        m_adapter.setContext(m_ctx);
    
        private:
        void finish() { emit finished(); }
    
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
    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = ((rand() % 19999) + 1) * 37;
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_GT(ret, 0);
        lists.insert(key);
    }
    
    	err->has_error = 1;
	err->level = E_WARNING;
	spprintf(&err->msg, 0, 'error converting %s data (path: %s): %.*s',
			what_conv,
			path.s && *ZSTR_VAL(path.s) != '\0' ? ZSTR_VAL(path.s) : 'unavailable',
			user_msg_size, user_msg);
	err->should_free = 1;
    
                    if (0 != socketpair(AF_UNIX, SOCK_STREAM, 0, newpipe))
                {
                    php_swoole_fatal_error(E_WARNING, 'unable to create pipe %s', strerror(errno));
                    goto exit_fail;
                }