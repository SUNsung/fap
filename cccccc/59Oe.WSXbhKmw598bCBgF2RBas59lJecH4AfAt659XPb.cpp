
        
          // Import private keys and certificates from PKCS #12 encoded
  // |data|, using the given |password|. If |is_extractable| is false,
  // mark the private key as unextractable from the module.
  // Returns a net error code on failure.
  int ImportFromPKCS12(PK11SlotInfo* slot_info,
                       const std::string& data,
                       const base::string16& password,
                       bool is_extractable,
                       net::ScopedCERTCertificateList* imported_certs);
    
    
    {}  // namespace mate

    
    
    {}  // namespace mate

    
    #include 'base/bind.h'
#include 'base/logging.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/task/post_task.h'
#include 'content/public/browser/browser_context.h'
#include 'content/public/browser/browser_task_traits.h'
#include 'content/public/browser/browser_thread.h'
#include 'content/public/browser/resource_context.h'
#include 'crypto/nss_util.h'
#include 'crypto/nss_util_internal.h'
#include 'net/base/net_errors.h'
#include 'net/cert/nss_cert_database.h'
#include 'net/cert/x509_certificate.h'
    
    // This set of templates invokes a base::Callback by converting the Arguments
// into native types. It relies on the function_template.h to provide helper
// templates.
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*()>& callback) {
  return callback.Run();
}
    
    // You can use mate::Handle on the stack to retain a mate::Wrappable object.
// Currently we don't have a mechanism for retaining a mate::Wrappable object
// in the C++ heap because strong references from C++ to V8 can cause memory
// leaks.
template <typename T>
class Handle {
 public:
  Handle() : object_(NULL) {}
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(WrappableBase);
};
    
    namespace {
const int kBufferSize = 4096;
}  // namespace
    
    namespace winrt::Microsoft::Terminal::Settings::implementation
{
    KeyChord::KeyChord(bool ctrl, bool alt, bool shift, int32_t vkey) :
        _modifiers{ (ctrl ? Settings::KeyModifiers::Ctrl : Settings::KeyModifiers::None) |
                    (alt ? Settings::KeyModifiers::Alt : Settings::KeyModifiers::None) |
                    (shift ? Settings::KeyModifiers::Shift : Settings::KeyModifiers::None) },
        _vkey{ vkey }
    {
    }
    }
    
    namespace Ui {
    class OpenURIDialog;
}
    
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 0));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 1));
    CHECK(secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 2));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 3));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    
    class FormatTest { };
    
    Status FaultInjectionTestEnv::DeleteFilesCreatedAfterLastDirSync() {
  // Because DeleteFile access this container make a copy to avoid deadlock
  mutex_.Lock();
  std::set<std::string> new_files(new_files_since_last_dir_sync_.begin(),
                                  new_files_since_last_dir_sync_.end());
  mutex_.Unlock();
  Status s;
  std::set<std::string>::const_iterator it;
  for (it = new_files.begin(); s.ok() && it != new_files.end(); ++it) {
    s = DeleteFile(*it);
  }
  return s;
}
    
      PyDescriptorPool* pool = cmessage::GetFactoryForMessage(self->parent)->pool;
  const FieldDescriptor* message_extension =
      pool->pool->FindExtensionByName(string(name, name_size));
  if (message_extension == NULL) {
    // Is is the name of a message set extension?
    const Descriptor* message_descriptor = pool->pool->FindMessageTypeByName(
        string(name, name_size));
    if (message_descriptor && message_descriptor->extension_count() > 0) {
      const FieldDescriptor* extension = message_descriptor->extension(0);
      if (extension->is_extension() &&
          extension->containing_type()->options().message_set_wire_format() &&
          extension->type() == FieldDescriptor::TYPE_MESSAGE &&
          extension->label() == FieldDescriptor::LABEL_OPTIONAL) {
        message_extension = extension;
      }
    }
  }
  if (message_extension == NULL) {
    Py_RETURN_NONE;
  }
    
    #include <Python.h>
    
    // Get a field from a message.
PyObject* GetFieldValue(CMessage* self,
                        const FieldDescriptor* field_descriptor);
// Sets the value of a scalar field in a message.
// On error, return -1 with an extension set.
int SetFieldValue(CMessage* self, const FieldDescriptor* field_descriptor,
                  PyObject* value);
    
    static void ReorderAttached(RepeatedCompositeContainer* self,
                            PyObject* child_list) {
  Message* message = self->parent->message;
  const Reflection* reflection = message->GetReflection();
  const FieldDescriptor* descriptor = self->parent_field_descriptor;
  const Py_ssize_t length = Length(reinterpret_cast<PyObject*>(self));
    }
    
    extern PyTypeObject RepeatedCompositeContainer_Type;
    
      if (arg == NULL) {
    ScopedPyObjectPtr py_index(PyLong_FromLong(index));
    return cmessage::DeleteRepeatedField(self->parent, field_descriptor,
                                         py_index.get());
  }
    
    
    {
    {
    {}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// To test the code generator, we actually use it to generate code for
// net/proto2/internal/unittest.proto, then test that.  This means that we
// are actually testing the parser and other parts of the system at the same
// time, and that problems in the generator may show up as compile-time errors
// rather than unittest failures, which may be surprising.  However, testing
// the output of the C++ generator directly would be very hard.  We can't very
// well just check it against golden files since those files would have to be
// updated for any small change; such a test would be very brittle and probably
// not very helpful.  What we really want to test is that the code compiles
// correctly and produces the interfaces we expect, which is why this test
// is written this way.
    
      // Returns the direction of the fitted line as a unit vector, using the
  // least mean squared perpendicular distance. The line runs through the
  // mean_point, i.e. a point p on the line is given by:
  // p = mean_point() + lambda * vector_fit() for some real number lambda.
  // Note that the result (0<=x<=1, -1<=y<=-1) is directionally ambiguous
  // and may be negated without changing its meaning, since a line is only
  // unique to a range of pi radians.
  // Modernists prefer to think of this as an Eigenvalue problem, but
  // Pearson had the simple solution in 1901.
  //
  // Note that this is equivalent to returning the Principal Component in PCA,
  // or the eigenvector corresponding to the largest eigenvalue in the
  // covariance matrix.
  FCOORD vector_fit() const;
    
        REJ & operator= (            //assign REJ
    const REJ & source) {        //from this
      flags1 = source.flags1;
      flags2 = source.flags2;
      return *this;
    }
    
    // Vector of IntKDPair.
class KDVector : public GenericVector<IntKDPair> {
  // TODO(rays) Add some code to manipulate a KDVector. For now there
  // is nothing and this class is effectively a specialization typedef.
};
    
    	while (true) {
    }
    
    		int intersections = _bvh_count_intersections(bvh, max_depth, max_alloc - 1, center, target, i);
    
    real_t PinJoint2D::get_softness() const {
    }
    
    void ScrollBar::_bind_methods() {
    }
    
    /*
Bullet Continuous Collision Detection and Physics Library
Copyright (c) 2003-2008 Erwin Coumans  http://continuousphysics.com/Bullet/
    
    	void _menu_option(int);
    
    #include 'editor/editor_node.h'
#include 'editor/editor_plugin.h'
#include 'scene/2d/collision_polygon_2d.h'
#include 'scene/2d/particles_2d.h'
#include 'scene/gui/box_container.h'
#include 'scene/gui/file_dialog.h'
    
    	Ref<NetworkedMultiplayerPeer> network_peer;
	int rpc_sender_id;
	Set<int> connected_peers;
	HashMap<NodePath, PathSentCache> path_send_cache;
	Map<int, PathGetCache> path_get_cache;
	int last_send_cache_id;
	Vector<uint8_t> packet_cache;
	Node *root_node;
	bool allow_object_decoding;
    
    
    {	return button_index;
}
    
    	Variant(const Array &p_array);
	Variant(const PoolVector<Plane> &p_array); // helper
	Variant(const PoolVector<uint8_t> &p_raw_array);
	Variant(const PoolVector<int> &p_int_array);
	Variant(const PoolVector<real_t> &p_real_array);
	Variant(const PoolVector<String> &p_string_array);
	Variant(const PoolVector<Vector3> &p_vector3_array);
	Variant(const PoolVector<Color> &p_color_array);
	Variant(const PoolVector<Face3> &p_face_array);
    
    	/* GI PROBE API */
    
    
    {                double statusValue = 1;
                auto status = ::CNTK::MakeSharedObject<::CNTK::NDArrayView>(::CNTK::DataType::Double, ::CNTK::NDShape{ 1 }, &statusValue, sizeof(double), ::CNTK::DeviceDescriptor::CPUDevice());
                std::vector<::CNTK::NDArrayViewPtr> aggregatedStatus{ status };
                m_communicator->AggregateInPlace(aggregatedStatus, m_communicator->Workers());
            }
    
            if (pass == ndlPassInitial)
        {
            // evaluate only scalar parameters
            vector<void*> params = EvaluateParameters(node, baseName, 0, parameter.size(), pass);
            size_t num_rows = ((NDLNode<ElemType>*) params[1])->GetScalar();
            size_t img_width = node->GetOptionalParameter('imageWidth', '0');
            size_t img_height = node->GetOptionalParameter('imageHeight', '0');
            size_t img_channels = node->GetOptionalParameter('imageChannels', '0');
            ImageLayoutKind imageLayoutKind = ImageLayoutKindFrom(node->GetOptionalParameter('imageLayout', 'HWC'));
    }
    
            for (const auto& name : group.first)
        {
            if (m_nameToNodeMap.find(name) == m_nameToNodeMap.end())
            {
                // could be deleted in the previous groups
                continue;
            }
    }
    
    template <class ElemType>
class ComputationNetworkBuilder
{
    typedef shared_ptr<ComputationNode<ElemType>> ComputationNodePtr;
    ComputationNetwork& net;
    ComputationNetworkBuilder();
    ComputationNetworkBuilder(const ComputationNetworkBuilder&);
    void operator=(const ComputationNetworkBuilder&);
    }
    
    template <class ElemType>
class UnaryElementWiseNode : public ComputationNode<ElemType>, public NumInputs<1>
{
    typedef ComputationNode<ElemType> Base;
    UsingComputationNodeMembers;
    }
    
            multiverso::MV_Barrier();
    
    template <class ElemType>
class V2SimpleDistGradAggregator : public IDistGradAggregator<ElemType>
{
    UsingIDistGradAggregatorMembers;
    ::CNTK::DistributedCommunicatorPtr m_communicator;
    NcclComm m_nccl;
    }
    
        inputBuffer[0].m_colIndices = { 0 };
    BOOST_REQUIRE_THROW(eval->ForwardPass(inputBuffer, outputBuffer), std::exception); // Empty input
    
        // Prepare header.
    const size_t c_evalNodes = 1;
    if (gradHeader == nullptr)
        gradHeader.reset(DistGradHeader::Create(c_evalNodes),
                         [](DistGradHeader* ptr) { DistGradHeader::Destroy(ptr); });
    gradHeader->numEvalNode = c_evalNodes;
    gradHeader->numSamples = sampleCount;
    gradHeader->numSamplesWithLabel = sampleCount;
    gradHeader->criterion = 0.0; // (not used here)
    for (size_t i = 0; i < c_evalNodes; i++)
        // Not used here, but at least one is required by aggregation.
        gradHeader->evalErrors[i] = std::make_pair<double, size_t>(0.0, 0);