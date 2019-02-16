
        
        /* Coin network-specific GUI style information */
class NetworkStyle
{
public:
    /** Get style associated with provided BIP70 network id, or 0 if not known */
    static const NetworkStyle *instantiate(const QString &networkId);
    }
    
    #ifndef SECP256K1_MODULE_ECDH_MAIN_H
#define SECP256K1_MODULE_ECDH_MAIN_H
    
    BOOST_AUTO_TEST_CASE(bip173_testvectors_valid)
{
    static const std::string CASES[] = {
        'A12UEL5L',
        'a12uel5l',
        'an83characterlonghumanreadablepartthatcontainsthenumber1andtheexcludedcharactersbio1tt5tgs',
        'abcdef1qpzry9x8gf2tvdw0s3jn54khce6mua7lmqqqxw',
        '11qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqc8247j',
        'split1checkupstagehandshakeupstreamerranterredcaperred2y9e3w',
        '?1ezyfcl',
    };
    for (const std::string& str : CASES) {
        auto ret = bech32::Decode(str);
        BOOST_CHECK(!ret.first.empty());
        std::string recode = bech32::Encode(ret.first, ret.second);
        BOOST_CHECK(!recode.empty());
        BOOST_CHECK(CaseInsensitiveEqual(str, recode));
    }
}
    
    /// Make type-agnostic format list from list of template arguments.
///
/// The exact return type of this function is an implementation detail and
/// shouldn't be relied upon.  Instead it should be stored as a FormatListRef:
///
///   FormatListRef formatList = makeFormatList( /*...*/ );
template<typename... Args>
detail::FormatListN<sizeof...(Args)> makeFormatList(const Args&... args)
{
    return detail::FormatListN<sizeof...(args)>(args...);
}
    
            WriteLE32(c + 0, x0);
        WriteLE32(c + 4, x1);
        WriteLE32(c + 8, x2);
        WriteLE32(c + 12, x3);
        WriteLE32(c + 16, x4);
        WriteLE32(c + 20, x5);
        WriteLE32(c + 24, x6);
        WriteLE32(c + 28, x7);
        WriteLE32(c + 32, x8);
        WriteLE32(c + 36, x9);
        WriteLE32(c + 40, x10);
        WriteLE32(c + 44, x11);
        WriteLE32(c + 48, x12);
        WriteLE32(c + 52, x13);
        WriteLE32(c + 56, x14);
        WriteLE32(c + 60, x15);
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    void FindAnnotationsOnPath(
    const GeneratedCodeInfo& info, const string& source_file,
    const std::vector<int>& path,
    std::vector<const GeneratedCodeInfo::Annotation*>* annotations) {
  for (int i = 0; i < info.annotation_size(); ++i) {
    const GeneratedCodeInfo::Annotation* annotation = &info.annotation(i);
    if (annotation->source_file() != source_file ||
        annotation->path_size() != path.size()) {
      continue;
    }
    int node = 0;
    for (; node < path.size(); ++node) {
      if (annotation->path(node) != path[node]) {
        break;
      }
    }
    if (node == path.size()) {
      annotations->push_back(annotation);
    }
  }
}
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    #include <vector>
    
      // File descriptor only needed if there are messages to use it.
  if (message_generators_.size() > 0) {
    std::map<string, string> vars;
    vars['root_class_name'] = root_class_name_;
    vars['package'] = file_->package();
    vars['objc_prefix'] = FileClassPrefix(file_);
    switch (file_->syntax()) {
      case FileDescriptor::SYNTAX_UNKNOWN:
        vars['syntax'] = 'GPBFileSyntaxUnknown';
        break;
      case FileDescriptor::SYNTAX_PROTO2:
        vars['syntax'] = 'GPBFileSyntaxProto2';
        break;
      case FileDescriptor::SYNTAX_PROTO3:
        vars['syntax'] = 'GPBFileSyntaxProto3';
        break;
    }
    printer->Print(vars,
        '#pragma mark - $root_class_name$_FileDescriptor\n'
        '\n'
        'static GPBFileDescriptor *$root_class_name$_FileDescriptor(void) {\n'
        '  // This is called by +initialize so there is no need to worry\n'
        '  // about thread safety of the singleton.\n'
        '  static GPBFileDescriptor *descriptor = NULL;\n'
        '  if (!descriptor) {\n'
        '    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();\n');
    if (vars['objc_prefix'].size() > 0) {
      printer->Print(
          vars,
          '    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@\'$package$\'\n'
          '                                                 objcPrefix:@\'$objc_prefix$\'\n'
          '                                                     syntax:$syntax$];\n');
    } else {
      printer->Print(
          vars,
          '    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@\'$package$\'\n'
          '                                                     syntax:$syntax$];\n');
    }
    printer->Print(
        '  }\n'
        '  return descriptor;\n'
        '}\n'
        '\n');
  }
    
    TEST(ObjCHelper, TextFormatDecodeData_ByteCodes) {
  TextFormatDecodeData decode_data;
    }
    
    bool ZipWriter::WriteDirectory() {
  uint16 num_entries = files_.size();
  uint32 dir_ofs = raw_output_->ByteCount();
    }
    
    float SafeDoubleToFloat(double value) {
  if (value > std::numeric_limits<float>::max()) {
    return std::numeric_limits<float>::infinity();
  } else if (value < -std::numeric_limits<float>::max()) {
    return -std::numeric_limits<float>::infinity();
  } else {
    return static_cast<float>(value);
  }
}
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    // Getter for the value.
STRING ParamContent::GetValue() const {
  STRING result;
  if (param_type_ == VT_INTEGER) {
    result.add_str_int('', *iIt);
  } else if (param_type_ == VT_BOOLEAN) {
    result.add_str_int('', *bIt);
  } else if (param_type_ == VT_DOUBLE) {
    result.add_str_double('', *dIt);
  } else if (param_type_ == VT_STRING) {
    if (((STRING) * (sIt)).string() != nullptr) {
      result = sIt->string();
    } else {
      result = 'Null';
    }
  }
  return result;
}
    
      /// Return true if we are processing the full image.
  bool IsFullImage() const {
    return rect_left_ == 0 && rect_top_ == 0 &&
           rect_width_ == image_width_ && rect_height_ == image_height_;
  }
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    // A simple class to provide a dynamic programming solution to a class of
// 1st-order problems in which the cost is dependent only on the current
// step and the best cost to that step, with a possible special case
// of using the variance of the steps, and only the top choice is required.
// Useful for problems such as finding the optimal cut points in a fixed-pitch
// (vertical or horizontal) situation.
// Skeletal Example:
// DPPoint* array = new DPPoint[width];
// for (int i = 0; i < width; i++) {
//   array[i].AddLocalCost(cost_at_i)
// }
// DPPoint* best_end = DPPoint::Solve(..., array);
// while (best_end != nullptr) {
//   int cut_index = best_end - array;
//   best_end = best_end->best_prev();
// }
// delete [] array;
class DPPoint {
 public:
  // The cost function evaluates the total cost at this (excluding this's
  // local_cost) and if it beats this's total_cost, then
  // replace the appropriate values in this.
  typedef int64_t (DPPoint::*CostFunc)(const DPPoint* prev);
    }
    
    namespace leveldb {
    }
    
      // Check for iterator errors
  Status s = input->status();
  const uint64_t current_entries = compact->builder->NumEntries();
  if (s.ok()) {
    s = compact->builder->Finish();
  } else {
    compact->builder->Abandon();
  }
  const uint64_t current_bytes = compact->builder->FileSize();
  compact->current_output()->file_size = current_bytes;
  compact->total_bytes += current_bytes;
  delete compact->builder;
  compact->builder = nullptr;
    
      // Per level compaction stats.  stats_[level] stores the stats for
  // compactions that produced data for the specified 'level'.
  struct CompactionStats {
    int64_t micros;
    int64_t bytes_read;
    int64_t bytes_written;
    }
    
     private:
  WritableFile* dest_;
  int block_offset_;       // Current offset in block
    
      // REQUIRES: External synchronization
  void WriteStep(Random* rnd) {
    const uint32_t k = rnd->Next() % K;
    const intptr_t g = current_.Get(k) + 1;
    const Key key = MakeKey(k, g);
    list_.Insert(key);
    current_.Set(k, g);
  }
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    template<typename Dtype>
void DelCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    delete v->at(i);
}
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_fieldentry.h
 * \brief Implement FieldEntry<caffe::LayerParameter>
 * \author Haoran Wang
 */
#ifndef PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
#define PLUGIN_CAFFE_CAFFE_FIELDENTRY_H_
    
    /*!
 * \brief Thread pool.
 */
class ThreadPool {
 public:
  /*! \brief Signal event upon destruction, even for exceptions (RAII) */
  struct SetReadyOnDestroy {
    explicit inline SetReadyOnDestroy(const std::shared_ptr<dmlc::ManualEvent>& event)
      : event_(event) {
    }
    inline ~SetReadyOnDestroy() {
      if (event_) {
        event_->signal();
      }
    }
    std::shared_ptr<dmlc::ManualEvent>  event_;
  };
    }
    
    Graph DetectInplaceAddTo(Graph g) {
  nnvm::StorageVector storage_id =
      g.MoveCopyAttr<nnvm::StorageVector>('storage_id');
  std::vector<int> storage_inplace_index =
      g.MoveCopyAttr<std::vector<int> >('storage_inplace_index');
  static const Op* ewise_plus_op = Op::Get('_grad_add');
  auto& idx = g.indexed_graph();
  // reference cont.
  std::vector<int> ref_count(idx.num_node_entries(), 0);
  std::vector<int> addto_entry(idx.num_node_entries(), 0);
  std::vector<int> skip_plus_node(idx.num_nodes(), 0);
    }
    
     private:
  void create() {
    CHECK(tensor_container_ == nullptr);
    CHECK_EQ(this->dev_mask(), mshadow::cpu::kDevMask);
    MSHADOW_TYPE_SWITCH(this->type_flag_, DType, {
        auto tensor_container = new mshadow::TensorContainer<mshadow::cpu, 1, DType>(false);
        tensor_container->Resize(mshadow::Shape1(shape_.Size()));
        dptr_ = tensor_container->dptr_;
        tensor_container_ = tensor_container;
    });
  }
  void resize() {
    MSHADOW_TYPE_SWITCH(this->type_flag_, DType, {
        auto tensor_container =
          (mshadow::TensorContainer<mshadow::cpu, 1, DType>*) tensor_container_;
        tensor_container->Resize(mshadow::Shape1(shape_.Size()));
    });
  }
  void release() {
    MSHADOW_TYPE_SWITCH(this->type_flag_, DType, {
        auto tensor_container =
          (mshadow::TensorContainer<mshadow::cpu, 1, DType>*) tensor_container_;
        delete tensor_container;
    });
  }
    
    namespace mxnet {
namespace io {
// iterator on image recordio
class PrefetcherIter : public IIterator<DataBatch> {
 public:
  explicit PrefetcherIter(IIterator<TBlobBatch>* base)
      : loader_(base), out_(nullptr) {}
    }
    }
    }
    
      virtual void PredictInteractionContributions(DMatrix* dmat,
                                   std::vector<bst_float>* out_contribs,
                                   const gbm::GBTreeModel& model,
                                   unsigned ntree_limit = 0,
                                   bool approximate = false) = 0;
    
      void InitTreesToUpdate() {
    if (trees_to_update.size() == 0u) {
      for (auto & tree : trees) {
        trees_to_update.push_back(std::move(tree));
      }
      trees.clear();
      param.num_trees = 0;
      tree_info.clear();
    }
  }
    
    /*!
 * \brief Quantile sketch use WQSummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType = unsigned>
class WQuantileSketch :
      public QuantileSketchTemplate<DType, RType, WQSummary<DType, RType> > {
};
    
      /* Fetch an individual column. This code should be used with XGBOOST_TYPE_SWITCH
     to determine type of bin id's */
  inline Column GetColumn(unsigned fid) const {
    Column c(type_[fid], &index_[boundary_[fid].index_begin], index_base_[fid],
             &row_ind_[boundary_[fid].row_ind_begin],
             boundary_[fid].index_end - boundary_[fid].index_begin);
    return c;
  }
    
    #include <atomic>
#include <cassert>
#include <ratio>
#include 'rocksdb/env.h'
    
    
    {}  // namespace rocksdb
    
      // Read a key in this transaction
  s = txn->Get(read_options, 'abc', &value);
  assert(s.IsNotFound());
    
      {
    std::string string_val;
    // If it cannot pin the value, it copies the value to its internal buffer.
    // The intenral buffer could be set during construction.
    PinnableSlice pinnable_val(&string_val);
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
    // If the value is not pinned, the internal buffer must have the value.
    assert(pinnable_val.IsPinned() || string_val == 'value');
  }
    
    class LDBCommandExecuteResult {
public:
  enum State {
    EXEC_NOT_STARTED = 0, EXEC_SUCCEED = 1, EXEC_FAILED = 2,
  };
    }
    
    using json = nlohmann::json;
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
    {    return nullptr;
}
    
    protected:
    /* center position */
    Vec2 _position;
    float _radius;
    unsigned int _waves;
    float _amplitude;
    float _amplitudeRate;
    
        /** 
     * Creates the action.
     *
     * @param duration Duration time, in seconds.
     * @param dstAngle In degreesCW.
     * @return An autoreleased RotateTo object.
     */
    static RotateTo* create(float duration, float dstAngle);
    
    /**
 @brief This action simulates a page turn from the bottom right hand corner of the screen.
 
 @details It's not much use by itself but is used by the PageTurnTransition.
         Based on an original paper by L Hong et al.
         http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
  
 @since v0.8.2
 */
class CC_DLL PageTurn3D : public Grid3DAction
{
public:
    /**
     * @js NA 
     */
    virtual GridBase* getGrid() override;
    }
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(ProgressTo);
};
    
        /** 
     * @brief Initializes the action with the number of jumps, the sin amplitude, the grid size and the duration.
     * @param duration Specify the duration of the JumpTiles3D action. It's a value in seconds.
     * @param gridSize Specify the size of the grid.
     * @param numberOfJumps Specify the jump tiles count.
     * @param amplitude Specify the amplitude of the JumpTiles3D action.
     * @return If the initialization success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int numberOfJumps, float amplitude);
    
    ActionTween *ActionTween::clone() const
{
    return ActionTween::create(_duration, _key, _from, _to);
}
    
    
    {    // update duration
    _totalDelayUnits++;
}
    
        this->updateBlendFunc();
    this->updateOpacityModifyRGB();
    
    
    {    //turn the result into simply polygon (AKA, fix overlap)
    
    //clamp into the specified rect
    ClipperLib::Clipper cl;
    cl.StrictlySimple(true);
    cl.AddPath(p->Contour, ClipperLib::ptSubject, true);
    //create the clipping rect
    ClipperLib::Path clamp;
    clamp.push_back(ClipperLib::IntPoint(0, 0));
    clamp.push_back(ClipperLib::IntPoint(rect.size.width/_scaleFactor * PRECISION, 0));
    clamp.push_back(ClipperLib::IntPoint(rect.size.width/_scaleFactor * PRECISION, rect.size.height/_scaleFactor * PRECISION));
    clamp.push_back(ClipperLib::IntPoint(0, rect.size.height/_scaleFactor * PRECISION));
    cl.AddPath(clamp, ClipperLib::ptClip, true);
    cl.Execute(ClipperLib::ctIntersection, out);
    
    std::vector<Vec2> outPoints;
    ClipperLib::PolyNode* p2 = out.GetFirst();
    while(p2->IsHole()){
        p2 = p2->GetNext();
    }
    for(const auto& pt : p2->Contour)
    {
        outPoints.push_back(Vec2(pt.X/PRECISION, pt.Y/PRECISION));
    }
    return outPoints;
}
    
    using namespace std;
    
            if(index == 0){
            left = head->next;
            return head;
        }
    
            stack<Command> stack;
        stack.push(Command('go', root));
        while(!stack.empty()){
            Command command = stack.top();
            stack.pop();
    }
    
        TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> res = Solution().preorderTraversal(root);
    print_vec(res);
    
            while(!output.empty()){
            res.push_back((output.top())->val);
            output.pop();
        }