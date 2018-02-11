
        
        
    {} // namespace swift
    
      // Overwrite the body of the existing TopLevelCodeDecl.
  TLCD->setBody(BraceStmt::create(Context,
                                  metavarBinding->getStartLoc(),
                                  ASTNode(metavarBinding),
                                  metavarBinding->getEndLoc(),
                                  /*implicit*/true));
    
    
llvm::Optional<ASTNode>
SyntaxASTMap::getNodeForSyntax(syntax::Syntax SyntaxNode) const {
  auto Found = SyntaxMap.find(SyntaxNode.Root);
  if (Found == SyntaxMap.end()) {
    return None;
  }
  return Found->getSecond();
}
    
    @interface ImmutableDataVerifier : NSData {
    ObjectBehaviorVerifier *_verifier;
    NSData *_data;
}
@property (readonly) ObjectBehaviorVerifier *verifier;
@end
    
      /// Suppress all warnings
  bool SuppressWarnings = false;
    
      using A = RepoAuthType::Array;
  using T = A::Tag;
  switch (ar.emptiness()) {
  case A::Empty::No:
    ret += 'N(';    // non-empty
    break;
  case A::Empty::Maybe:
    ret += '(';
    break;
  }
    
    namespace irgen {
    }
    
      bool operator==(Vconst other) const {
    return kind == other.kind &&
      ((isUndef && other.isUndef) || val == other.val);
  }
    
    bool HHVM_FUNCTION(mb_parse_str,
                   const String& encoded_string,
                   VRefParam result /* = null */) {
  php_mb_encoding_handler_info_t info;
  info.data_type              = PARSE_STRING;
  info.separator              = '&';
  info.force_register_globals = false;
  info.report_errors          = 1;
  info.to_encoding            = MBSTRG(current_internal_encoding);
  info.to_language            = MBSTRG(current_language);
  info.from_encodings         = MBSTRG(http_input_list);
  info.num_from_encodings     = MBSTRG(http_input_list_size);
  info.from_language          = MBSTRG(current_language);
    }
    
      // Cluster the blocks based on weights and sort the clusters.
  Clusterizer clusterizer(unit, scale);
  auto labels = clusterizer.getBlockList();
    
      /**
   * Destructor.
   */
  ~Server() override {}
    
      int max_node = numa_max_node();
  if (!max_node || max_node >= 32) return;
    
    ThriftBuffer::ThriftBuffer(int size,
                           VariableSerializer::Type sType /* = Serialize*/)
  : m_size(size), m_safe(false), m_serializerType(sType) {
  m_buf = (char *)malloc(m_size + 1);
  if (!m_buf) throwOutOfMemory();
  m_pEnd = m_buf + m_size;
  m_pSafe = m_pEnd - sizeof(int64_t) - 1;
  m_p = m_buf;
}
    
      switch (file_fsmagic(ms, inname, &sb, stream)) {
  case -1:    /* error */
    goto done;
  case 0:      /* nothing found */
    break;
  default:    /* matched it and printed type */
    rv = 0;
    goto done;
  }
    
    /*static*/ struct DataReaderHelpers
{
    template <class ElemType>
    static void NotifyChangedNodes(ComputationNetworkPtr net, StreamMinibatchInputs& inputMatrices)
    {
        // reader will have resized input node's m_value directly. Nodes must be notified to do necessary internal state updates from that.
        // TODO: This is a stopgap. SGD will at some point change from sets of matrices to sets of nodes. Then this will become much simpler.
        std::set<MatrixBasePtr> matrices;
        for (const auto& iter : inputMatrices)
            matrices.insert(iter.second.matrix);
        for (auto& node : net->FeatureNodes())
            if (matrices.find(node->As<ComputationNode<ElemType>>()->ValuePtr()) != matrices.end())
                node->NotifyFunctionValuesMBSizeModified();
        for (auto& node : net->LabelNodes())
            if (matrices.find(node->As<ComputationNode<ElemType>>()->ValuePtr()) != matrices.end())
                node->NotifyFunctionValuesMBSizeModified();
    }
    }
    
    private:
    // guess how many columns of this matrix will fit into the cache
    // This is a helper function for matrix matprod and variants.
    // Result also gets aligned to 4 because matprod benefits from it.
    size_t cacheablecols() const
    {
        // cache info for 48-core Dell:
        //  - L1: 64 K per core   --we want to fit in here!
        //  - L2: 512 K per core
        //  - L3: 10 MB total
    }
    
        bool transposeA = false, transposeB = false;
    float alpha = 0.3f;
    float beta = 0.0f;
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAdense, transposeB, beta, mC);
    Matrix<float>::MultiplyAndWeightedAdd(alpha, mB, transposeA, mAsparse, transposeB, beta, mD);
    
    void GranularGPUDataTransferer::WaitForSyncPointOnFetchStreamAsync()
{
    PrepareDevice(m_deviceId);
    cudaStreamWaitEvent(GetFetchStream(), m_syncEvent, 0 /*flags 'must be 0'*/) || 'cudaStreamWaitEvent failed';
}
    
    #include 'stdafx.h'
#include 'Basics.h'
#include 'Actions.h'
#include 'ComputationNetwork.h'
#include 'ComputationNode.h'
#include 'DataReader.h'
#include 'DataWriter.h'
#include 'SimpleNetworkBuilder.h'
#include 'Config.h'
#include 'ScriptableObjects.h'
    
    #pragma once
    
        // construct from a single float, copy to all components
    float4(float f)
        : v(_mm_load1_ps(&f))
    {
    }
    // float4 (float f) : v (_mm_set_ss (f)) {}  // code seems more complex than _mm_load1_ps()
    
    	bool genSend = method->BidiStreaming() || ServerOnlyStreaming(method);
	bool genRecv = method->BidiStreaming() || ClientOnlyStreaming(method);
	bool genSendAndClose = ClientOnlyStreaming(method);
    
    struct AttackerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_sword_attack_damage(int32_t sword_attack_damage) {
    fbb_.AddElement<int32_t>(Attacker::VT_SWORD_ATTACK_DAMAGE, sword_attack_damage, 0);
  }
  explicit AttackerBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AttackerBuilder &operator=(const AttackerBuilder &);
  flatbuffers::Offset<Attacker> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Attacker>(end);
    return o;
  }
};
    
    // An abstract interface representing a service.
struct Service : public CommentHolder {
  virtual ~Service() {}
    }
    
      // Get and test the `weapons` FlatBuffers's `vector`.
  std::string expected_weapon_names[] = { 'Sword', 'Axe' };
  short expected_weapon_damages[] = { 3, 5 };
  auto weps = monster->weapons();
  for (unsigned int i = 0; i < weps->size(); i++) {
    assert(weps->Get(i)->name()->str() == expected_weapon_names[i]);
    assert(weps->Get(i)->damage() == expected_weapon_damages[i]);
  }
  (void)expected_weapon_names;
  (void)expected_weapon_damages;