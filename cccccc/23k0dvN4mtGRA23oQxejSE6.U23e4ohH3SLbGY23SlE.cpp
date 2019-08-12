
        
        TEST(Converter, ExternalInputs) {
  auto net = fakeNet();
    }
    
    OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
    // Possible normalization methods. Use NEGATIVE values as these also
// double up as markers for the last sub-classifier.
enum NormalizationMode {
  NM_BASELINE = -3,         // The original BL normalization mode.
  NM_CHAR_ISOTROPIC = -2,   // Character normalization but isotropic.
  NM_CHAR_ANISOTROPIC = -1  // The original CN normalization mode.
};
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
      if (reshape) {
    blob->Reshape(blob_dims);
  } else {
    if (blob_dims != blob->shape()) {
      // create shape string for error message
      ostringstream stream;
      int count = 1;
      for (int i = 0; i < blob_dims.size(); ++i) {
        stream << blob_dims[i] << ' ';
        count = count * blob_dims[i];
      }
      stream << '(' << count << ')';
      string source_shape_string = stream.str();
    }
    }
    
    template <typename Dtype>
void ClipLayer<Dtype>::Backward_cpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down,
    const vector<Blob<Dtype>*>& bottom) {
  if (propagate_down[0]) {
    const Dtype* bottom_data = bottom[0]->cpu_data();
    const Dtype* top_diff = top[0]->cpu_diff();
    Dtype* bottom_diff = bottom[0]->mutable_cpu_diff();
    const int count = bottom[0]->count();
    }
    }
    
      SolverParameter param_;
  int iter_;
  int current_step_;
  shared_ptr<Net<Dtype> > net_;
  vector<shared_ptr<Net<Dtype> > > test_nets_;
  vector<Callback*> callbacks_;
  vector<Dtype> losses_;
  Dtype smoothed_loss_;
    
    
    {  if (argc != 4) {
    gflags::ShowUsageWithFlagsRestrict(argv[0],
        'examples/mnist/convert_mnist_data');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3], db_backend);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB and LMDB; ' <<
  'compile with USE_LEVELDB and USE_LMDB.';
}
#endif  // USE_LEVELDB and USE_LMDB

    
    #endif  // CAFFE_DATA_TRANSFORMER_HPP_

    
    int OpenSSLTLSSession::tlsConnect(const std::string& hostname,
                                  TLSVersion& version,
                                  std::string& handshakeErr)
{
  handshakeErr = '';
  int ret;
  ret = handshake(version);
  if (ret != TLS_ERR_OK) {
    return ret;
  }
  if (tlsContext_->getSide() == TLS_CLIENT && tlsContext_->getVerifyPeer()) {
    // verify peer
    X509* peerCert = SSL_get_peer_certificate(ssl_);
    if (!peerCert) {
      handshakeErr = 'certificate not found';
      return TLS_ERR_ERROR;
    }
    std::unique_ptr<X509, decltype(&X509_free)> certDeleter(peerCert,
                                                            X509_free);
    long verifyResult = SSL_get_verify_result(ssl_);
    if (verifyResult != X509_V_OK) {
      handshakeErr = X509_verify_cert_error_string(verifyResult);
      return TLS_ERR_ERROR;
    }
    std::string commonName;
    std::vector<std::string> dnsNames;
    std::vector<std::string> ipAddrs;
    GENERAL_NAMES* altNames;
    altNames = reinterpret_cast<GENERAL_NAMES*>(
        X509_get_ext_d2i(peerCert, NID_subject_alt_name, nullptr, NULL));
    if (altNames) {
      std::unique_ptr<GENERAL_NAMES, decltype(&GENERAL_NAMES_free)>
          altNamesDeleter(altNames, GENERAL_NAMES_free);
      size_t n = sk_GENERAL_NAME_num(altNames);
      for (size_t i = 0; i < n; ++i) {
        const GENERAL_NAME* altName = sk_GENERAL_NAME_value(altNames, i);
        if (altName->type == GEN_DNS) {
          auto name = ASN1_STRING_get0_data(altName->d.ia5);
          if (!name) {
            continue;
          }
          size_t len = ASN1_STRING_length(altName->d.ia5);
          if (len == 0) {
            continue;
          }
          if (name[len - 1] == '.') {
            --len;
            if (len == 0) {
              continue;
            }
          }
          dnsNames.push_back(std::string(name, name + len));
        }
        else if (altName->type == GEN_IPADD) {
          const unsigned char* ipAddr = altName->d.iPAddress->data;
          if (!ipAddr) {
            continue;
          }
          size_t len = altName->d.iPAddress->length;
          ipAddrs.push_back(
              std::string(reinterpret_cast<const char*>(ipAddr), len));
        }
      }
    }
    X509_NAME* subjectName = X509_get_subject_name(peerCert);
    if (!subjectName) {
      handshakeErr = 'could not get X509 name object from the certificate.';
      return TLS_ERR_ERROR;
    }
    int lastpos = -1;
    while (1) {
      lastpos =
          X509_NAME_get_index_by_NID(subjectName, NID_commonName, lastpos);
      if (lastpos == -1) {
        break;
      }
      X509_NAME_ENTRY* entry = X509_NAME_get_entry(subjectName, lastpos);
      unsigned char* out;
      int outlen = ASN1_STRING_to_UTF8(&out, X509_NAME_ENTRY_get_data(entry));
      if (outlen < 0) {
        continue;
      }
      if (outlen == 0) {
        OPENSSL_free(out);
        continue;
      }
      if (out[outlen - 1] == '.') {
        --outlen;
        if (outlen == 0) {
          OPENSSL_free(out);
          continue;
        }
      }
      commonName.assign(&out[0], &out[outlen]);
      OPENSSL_free(out);
      break;
    }
    if (!net::verifyHostname(hostname, dnsNames, ipAddrs, commonName)) {
      handshakeErr = 'hostname does not match';
      return TLS_ERR_ERROR;
    }
  }
    }
    
    
    {  return ifAddrs;
}
    
      ~DHTRoutingTableSerializer();
    
        factory->setRoutingTable(routingTable.get());
    factory->setConnection(connection.get());
    factory->setMessageDispatcher(dispatcher.get());
    factory->setPeerAnnounceStorage(peerAnnounceStorage.get());
    factory->setTokenTracker(tokenTracker.get());
    factory->setLocalNode(localNode);
    factory->setBtRegistry(e->getBtRegistry().get());
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    DEFINE_bool(only_one_send, false, 'only send test.');
DEFINE_string(can_client_conf_file_a,
              'modules/canbus/conf/can_client_conf_a.pb.txt',
              'can client conf for client a');
DEFINE_string(can_client_conf_file_b,
              'modules/canbus/conf/can_client_conf_b.pb.txt',
              'can client conf for client b');
DEFINE_int64(agent_mutual_send_frames, 1000, 'Every agent send frame num');
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
    #include 'modules/common/status/status.h'
#include 'modules/common/util/factory.h'
#include 'modules/planning/common/reference_line_info.h'
#include 'modules/planning/common/speed_profile_generator.h'
#include 'modules/planning/reference_line/reference_line.h'
#include 'modules/planning/reference_line/reference_point.h'
#include 'modules/planning/scenarios/scenario.h'
#include 'modules/planning/scenarios/stage.h'
#include 'modules/planning/tasks/task.h'
    
    // drive with acceleration/deceleration
// acc:-7.0 ~ 5.0, unit:m/s^2
void GemController::Acceleration(double acc) {
  if (driving_mode() != Chassis::COMPLETE_AUTO_DRIVE &&
      driving_mode() != Chassis::AUTO_SPEED_ONLY) {
    AINFO << 'The current drive mode does not need to set acceleration.';
    return;
  }
  // None
}
    
    TEST_F(StageApproachingParkingSpotTest, Init) {
  StageApproachingParkingSpot stage_approaching_parking_spot(config_);
  EXPECT_EQ(stage_approaching_parking_spot.Name(),
            ScenarioConfig::StageType_Name(config_.stage_type()));
}
    
    
    {  std::vector<int> choreography_cpuset_;
  std::vector<int> pool_cpuset_;
};
    
    bool ChannelManager::Check(const RoleAttributes& attr) {
  RETURN_VAL_IF(!attr.has_channel_name(), false);
  RETURN_VAL_IF(!attr.has_channel_id(), false);
  RETURN_VAL_IF(!attr.has_id(), false);
  return true;
}