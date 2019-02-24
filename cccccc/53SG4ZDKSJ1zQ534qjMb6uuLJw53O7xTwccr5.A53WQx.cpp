
        
          if (op_reg_data->shape_inference_fn == nullptr) {
    return errors::InvalidArgument(
        'No shape inference function exists for op '', node.op(),
        '', did you forget to define it?');
  }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  DCHECK(PyDict_Check(code_to_exc_type_map));
  PyObject* key;
  PyObject* value;
  Py_ssize_t pos = 0;
  while (PyDict_Next(code_to_exc_type_map, &pos, &key, &value)) {
    TF_Code code = static_cast<TF_Code>(PyLong_AsLong(key));
    singleton_->exc_types_[code] = value;
    // The exception classes should also have the lifetime of the process, but
    // incref just in case.
    Py_INCREF(value);
  }
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    class RandomAccessFile;
    
    
    {  tensorflow::DeviceNameUtils::ParsedName parsed_name;
  if (!tensorflow::DeviceNameUtils::ParseFullName(node_def.device(),
                                                  &parsed_name)) {
    LOG(WARNING) << 'Failed to parse device from node_def: '
                 << node_def.ShortDebugString();
    return '';
  }
  string class_name = '';
  tensorflow::FindKernelDef(tensorflow::DeviceType(parsed_name.type.c_str()),
                            node_def, nullptr /* kernel_def */, &class_name)
      .IgnoreError();
  return class_name;
}
    
    #include <functional>
#include <map>
    
    
    {    /* Cleanup */
    secp256k1_context_destroy(tctx);
}
    
        /* Check bad contexts and NULLs for recovery */
    ecount = 0;
    CHECK(secp256k1_ecdsa_recover(none, &recpubkey, &recsig, message) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_recover(sign, &recpubkey, &recsig, message) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(vrfy, &recpubkey, &recsig, message) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, &recsig, message) == 1);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recover(both, NULL, &recsig, message) == 0);
    CHECK(ecount == 3);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, NULL, message) == 0);
    CHECK(ecount == 4);
    CHECK(secp256k1_ecdsa_recover(both, &recpubkey, &recsig, NULL) == 0);
    CHECK(ecount == 5);
    
    #include <stdint.h>
#include <stdlib.h>
    
    		// intermediate encoding
		Mode			m_mode;
    
    
  typedef struct  AF_LatinAxisRec_
  {
    FT_Fixed         scale;
    FT_Pos           delta;
    }
    
    class Clipper : public virtual ClipperBase
{
public:
  Clipper(int initOptions = 0);
  bool Execute(ClipType clipType,
      Paths &solution,
      PolyFillType fillType = pftEvenOdd);
  bool Execute(ClipType clipType,
      Paths &solution,
      PolyFillType subjFillType,
      PolyFillType clipFillType);
  bool Execute(ClipType clipType,
      PolyTree &polytree,
      PolyFillType fillType = pftEvenOdd);
  bool Execute(ClipType clipType,
      PolyTree &polytree,
      PolyFillType subjFillType,
      PolyFillType clipFillType);
  bool ReverseSolution() { return m_ReverseOutput; };
  void ReverseSolution(bool value) {m_ReverseOutput = value;};
  bool StrictlySimple() {return m_StrictSimple;};
  void StrictlySimple(bool value) {m_StrictSimple = value;};
  //set the callback function for z value filling on intersections (otherwise Z is 0)
#ifdef use_xyz
  void ZFillFunction(ZFillCallback zFillFunc);
#endif
protected:
  virtual bool ExecuteInternal();
private:
  JoinList         m_Joins;
  JoinList         m_GhostJoins;
  IntersectList    m_IntersectList;
  ClipType         m_ClipType;
  typedef std::list<cInt> MaximaList;
  MaximaList       m_Maxima;
  TEdge           *m_SortedEdges;
  bool             m_ExecuteLocked;
  PolyFillType     m_ClipFillType;
  PolyFillType     m_SubjFillType;
  bool             m_ReverseOutput;
  bool             m_UsingPolyTree; 
  bool             m_StrictSimple;
#ifdef use_xyz
  ZFillCallback   m_ZFill; //custom callback 
#endif
  void SetWindingCount(TEdge& edge);
  bool IsEvenOddFillType(const TEdge& edge) const;
  bool IsEvenOddAltFillType(const TEdge& edge) const;
  void InsertLocalMinimaIntoAEL(const cInt botY);
  void InsertEdgeIntoAEL(TEdge *edge, TEdge* startEdge);
  void AddEdgeToSEL(TEdge *edge);
  bool PopEdgeFromSEL(TEdge *&edge);
  void CopyAELToSEL();
  void DeleteFromSEL(TEdge *e);
  void SwapPositionsInSEL(TEdge *edge1, TEdge *edge2);
  bool IsContributing(const TEdge& edge) const;
  bool IsTopHorz(const cInt XPos);
  void DoMaxima(TEdge *e);
  void ProcessHorizontals();
  void ProcessHorizontal(TEdge *horzEdge);
  void AddLocalMaxPoly(TEdge *e1, TEdge *e2, const IntPoint &pt);
  OutPt* AddLocalMinPoly(TEdge *e1, TEdge *e2, const IntPoint &pt);
  OutRec* GetOutRec(int idx);
  void AppendPolygon(TEdge *e1, TEdge *e2);
  void IntersectEdges(TEdge *e1, TEdge *e2, IntPoint &pt);
  OutPt* AddOutPt(TEdge *e, const IntPoint &pt);
  OutPt* GetLastOutPt(TEdge *e);
  bool ProcessIntersections(const cInt topY);
  void BuildIntersectList(const cInt topY);
  void ProcessIntersectList();
  void ProcessEdgesAtTopOfScanbeam(const cInt topY);
  void BuildResult(Paths& polys);
  void BuildResult2(PolyTree& polytree);
  void SetHoleState(TEdge *e, OutRec *outrec);
  void DisposeIntersectNodes();
  bool FixupIntersectionOrder();
  void FixupOutPolygon(OutRec &outrec);
  void FixupOutPolyline(OutRec &outrec);
  bool IsHole(TEdge *e);
  bool FindOwnerFromSplitRecs(OutRec &outRec, OutRec *&currOrfl);
  void FixHoleLinkage(OutRec &outrec);
  void AddJoin(OutPt *op1, OutPt *op2, const IntPoint offPt);
  void ClearJoins();
  void ClearGhostJoins();
  void AddGhostJoin(OutPt *op, const IntPoint offPt);
  bool JoinPoints(Join *j, OutRec* outRec1, OutRec* outRec2);
  void JoinCommonEdges();
  void DoSimplePolygons();
  void FixupFirstLefts1(OutRec* OldOutRec, OutRec* NewOutRec);
  void FixupFirstLefts2(OutRec* InnerOutRec, OutRec* OuterOutRec);
  void FixupFirstLefts3(OutRec* OldOutRec, OutRec* NewOutRec);
#ifdef use_xyz
  void SetZ(IntPoint& pt, TEdge& e1, TEdge& e2);
#endif
};
//------------------------------------------------------------------------------
    
      Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the 'Software'), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
    
        * Redistributions of source code must retain the above copyright notice,
       this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    
    
    {        template <typename ElementType>
        void Update(const Parameter& parameter, const NDArrayViewPtr& gradientValue, const NDArrayViewPtr& smoothedGradientValue, size_t trainingSampleCount) const;
    };
    
        NDMask::NDMask(const NDShape& shape, const DeviceDescriptor& device)
        : NDMask(shape, AllocateMatrix(shape, device))
    {
        if (shape.Rank() > 2)
            LogicError('NDMask instance shaped '%S' with more than 2 axes is currently unsupported.', shape.AsString().c_str());
    }
    
        void ProgressWriter::UpdateTest(size_t samples, const ValuePtr& accumulatedMetric)
    {
        m_test->Update(samples, nullptr, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> /*aggregateLoss*/, std::pair<double, double> aggregateMetric)
            {
                OnWriteTestUpdate(samples, updates, aggregateMetric);
            });
    }
    
            m_combinedTrainingFunction->Save(tempModelFile);
        std::wstring trainerStateCheckpointFilePath = GetTrainerStateCheckpointFilePath(modelFilePath);
        std::wstring tempCheckpointFile = trainerStateCheckpointFilePath + L'.tmp';
    
    #pragma once
    
    namespace CNTK
{
    struct VariableFields final : public std::enable_shared_from_this<VariableFields>
    {
        friend class CompositeFunction;
    }
    }
    
    
    {
    {
    {}}}

    
                // reshape Input(1)
            Input(1)->SetDims(TensorShape(dimsA), false);
            fprintf(stderr, '\n%ls %ls operation: For legacy compatibility, the sample layout of second input (%ls %ls operation) was patched to [%s] (from [%s])\n',
                NodeName().c_str(), OperationName().c_str(), Input(1)->NodeName().c_str(), Input(1)->OperationName().c_str(), string(Input(1)->GetSampleLayout()).c_str(), dimsBstring.c_str());
    
      void shutdown() {
    // Your implementation goes here
    printf('shutdown\n');
  }
    
    namespace osquery {
namespace tables {
    }
    }
    
    
    {
    {    std::ostringstream oss;
    std::copy(line.begin() + options_index,
              line.end(),
              std::ostream_iterator<std::string>(oss, ' '));
    r['options'] = oss.str();
    results.push_back(r);
  }
}
    
        // No need to check each individual software partition since they will
    // examined at the HW level below.
    if (devname.substr(devname.length() - 1).find_last_of('0123456789') !=
        std::string::npos) {
      return;
    }
    
    #include <vector>
    
    
    {  test_read_uri_ =
      'https://' + Flag::getValue('tls_hostname') + '/test_read_requests';
}
    
    class EbpfTracepoint final {
 public:
  EbpfTracepoint(EbpfTracepoint&&);
  EbpfTracepoint& operator=(EbpfTracepoint&&);
    }
    
    TEST_F(PerfOutputTests,
       impl_consumeWrappedMessagesFromCircularBuffer_without_wrapping) {
  using WrappedMessage = ebpf::PerfOutput<TestMessage>::WrappedMessage;
  auto const test_size = std::size_t{9};
  auto buf = std::vector<ebpf::impl::ByteType>(
      sizeof(WrappedMessage) * test_size + 128, 0);
  auto buf_ptr = &buf[0];
  for (std::size_t i = 0; i < test_size; ++i) {
    auto wrapped = WrappedMessage{};
    wrapped.msg.a_ = i + 1;
    wrapped.msg.b_ = i * 2 + 2;
    wrapped.msg.c_ = 'j';
    wrapped.msg.d_ = 'k';
    wrapped.size = sizeof(TestMessage);
    wrapped.header.type = PERF_RECORD_SAMPLE;
    wrapped.header.size = sizeof(WrappedMessage);
    auto const wrapped_ptr =
        reinterpret_cast<ebpf::impl::ByteType const*>(&wrapped);
    std::copy(wrapped_ptr, wrapped_ptr + sizeof(WrappedMessage), buf_ptr);
    buf_ptr += sizeof(WrappedMessage);
  }
  auto dst = std::vector<TestMessage>{};
  auto status =
      ebpf::impl::consumeWrappedMessagesFromCircularBuffer<WrappedMessage>(
          &buf[0],
          0,
          static_cast<std::size_t>(buf_ptr - &buf[0]),
          buf.size(),
          dst);
  ASSERT_FALSE(status.isError());
  ASSERT_EQ(dst.size(), test_size);
  for (std::size_t i = 0; i < test_size; ++i) {
    EXPECT_EQ(dst[i].a_, static_cast<int>(i + 1));
    EXPECT_EQ(dst[i].b_, static_cast<int>(i * 2 + 2));
    EXPECT_EQ(dst[i].c_, 'j');
    EXPECT_EQ(dst[i].d_, 'k');
  }
}
    
    void EnterExitJoiner::drop_stuck_events() {
  // As far as `table_` is relatively small we can afford to iterarte over it
  // once in a kCounterLimit events in order to clean it up.
  for (auto it = table_.begin(); it != table_.end();) {
    if (it->second.return_value < 0) {
      it = table_.erase(it);
    } else {
      it->second.return_value -= kCounterLimit;
      ++it;
    }
  }
}
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    int ClusterQualityInfo702::ambig_state(const std::uint8_t* bytes,
                                       int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 3);
    }
    
    int ObjectExtendedInfo60D::obstacle_class(const std::uint8_t* bytes,
                                          int32_t length) const {
  Byte t0(bytes + 3);
  int32_t x = t0.get_byte(0, 3);
    }
    
    #include 'modules/localization/msf/local_map/base_map/base_map_matrix.h'
    
    Eigen::MatrixXd SplineSegKernel::NthDerivativeKernel(
    const uint32_t n, const uint32_t num_params, const double accumulated_x) {
  if (n == 1) {
    return DerivativeKernel(num_params, accumulated_x);
  } else if (n == 2) {
    return SecondOrderDerivativeKernel(num_params, accumulated_x);
  } else if (n == 3) {
    return ThirdOrderDerivativeKernel(num_params, accumulated_x);
  } else {
    return Eigen::MatrixXd::Zero(num_params, num_params);
  }
}
    
    
    {  double length_2 = 50.0;
  const LaneGraph &lane_graph_2 =
      ObstacleClusters::GetLaneGraph(start_s, length_2, lane);
  EXPECT_EQ(1, lane_graph_2.lane_sequence_size());
  EXPECT_EQ(3, lane_graph_2.lane_sequence(0).lane_segment_size());
  EXPECT_EQ('l9', lane_graph_2.lane_sequence(0).lane_segment(0).lane_id());
  EXPECT_EQ('l18', lane_graph_2.lane_sequence(0).lane_segment(1).lane_id());
  EXPECT_EQ('l21', lane_graph_2.lane_sequence(0).lane_segment(2).lane_id());
}
    
    
    { protected:
  GemVehicleFactory gem_factory_;
};
    
    
    {    swHeap_free(pq);
}

    
    void Context::context_func(void *arg)
{
    Context* _this = (Context*) arg;
    _this->fn_(_this->private_data_);
    _this->end = true;
    _this->SwapOut();
}
    
    
    {
    {#if defined(USE_VALGRIND)
        VALGRIND_STACK_DEREGISTER(valgrind_stack_id);
#endif
        sw_free(stack_);
        stack_ = NULL;
    }
}
    
    #ifndef __HIREDIS_QT_H__
#define __HIREDIS_QT_H__
#include <QSocketNotifier>
#include '../async.h'
    
        Q_OBJECT
    
    
    {
    {        if (msg.timer)
        {
            swTimer_del(&SwooleG.timer, msg.timer);
        }
        if (msg.error || closed)
        {
            return nullptr;
        }
    }
    /**
     * pop data
     */
    void *data = data_queue.front();
    data_queue.pop();
    /**
     * notify producer
     */
    if (!producer_queue.empty())
    {
        Coroutine *co = pop_coroutine(PRODUCER);
        co->resume();
    }
    return data;
}
    
        cache.set('test', val);
    ASSERT_EQ(cache.get('test').get(), val.get());
    val.reset();
    ASSERT_EQ(dtor_num, 0);
    
    #include <unordered_map>
#include <list>
#include <utility>
#include <memory>
#include <time.h>
    
    #include <map>
#include <unordered_map>
    
    
    {    ASSERT_EQ(swThreadPool_free(&pool), SW_OK);
    ASSERT_EQ(result, N);
}

    
            [](void *arg)
        {
            auto result = CAres::resolve('www.swoole.com', AF_INET, 0.001);
            ASSERT_EQ(result, '');
        },
    
    #include <atomic>