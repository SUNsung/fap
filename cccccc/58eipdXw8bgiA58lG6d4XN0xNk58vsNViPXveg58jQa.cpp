
        
        // Finally, you can use INSTANTIATE_TEST_CASE_P to instantiate the test
// case with any set of parameters you want. Google Test defines a number
// of functions for generating test parameters. They return what we call
// (surprise!) parameter generators. Here is a  summary of them, which
// are all in the testing namespace:
//
//
//  Range(begin, end [, step]) - Yields values {begin, begin+step,
//                               begin+step+step, ...}. The values do not
//                               include end. step defaults to 1.
//  Values(v1, v2, ..., vN)    - Yields values {v1, v2, ..., vN}.
//  ValuesIn(container)        - Yields values from a C-style array, an STL
//  ValuesIn(begin,end)          container, or an iterator range [begin, end).
//  Bool()                     - Yields sequence {false, true}.
//  Combine(g1, g2, ..., gN)   - Yields all combinations (the Cartesian product
//                               for the math savvy) of the values generated
//                               by the N generators.
//
// For more details, see comments at the definitions of these functions below
// in this file.
//
// The following statement will instantiate tests from the FooTest test case
// each with parameter values 'meeny', 'miny', and 'moe'.
    
    
    {}  // namespace testing
    
      void depart() {
    if (link_.depart()) delete value_;
  }
    
    template <GTEST_1_TYPENAMES_(T)>
inline GTEST_1_TUPLE_(T) make_tuple(const T0& f0) {
  return GTEST_1_TUPLE_(T)(f0);
}
    
      void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }
    
    // Tests negative input.
TEST(IsPrimeTest, Negative) {
  // This test belongs to the IsPrimeTest test case.
    }
    
    
    { private:
  RowBlock<IndexType> out_;
  std::unique_ptr<Parser<IndexType> > parser_;
  uint32_t num_col_;
  std::vector<size_t> offset_;
  std::vector<IndexType> dense_index_;
  std::vector<xgboost::bst_float> dense_value_;
};
    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
          // Test write entire array
      std::vector<unsigned char> buffer(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
    
    SEXP XGDMatrixSliceDMatrix_R(SEXP handle, SEXP idxset) {
  SEXP ret;
  R_API_BEGIN();
  int len = length(idxset);
  std::vector<int> idxvec(len);
  for (int i = 0; i < len; ++i) {
    idxvec[i] = INTEGER(idxset)[i] - 1;
  }
  DMatrixHandle res;
  CHECK_CALL(XGDMatrixSliceDMatrix(R_ExternalPtrAddr(handle),
                                   BeginPtr(idxvec), len,
                                   &res));
  ret = PROTECT(R_MakeExternalPtr(res, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    
    {  /*! \brief push up temp */
  inline void PushTemp() {
    temp.Reserve(limit_size * 2);
    for (size_t l = 1; true; ++l) {
      this->InitLevel(l + 1);
      // check if level l is empty
      if (level[l].size == 0) {
        level[l].SetPrune(temp, limit_size);
        break;
      } else {
        // level 0 is actually temp space
        level[0].SetPrune(temp, limit_size);
        temp.SetCombine(level[0], level[l]);
        if (temp.size > limit_size) {
          // try next level
          level[l].size = 0;
        } else {
          // if merged record is still smaller, no need to send to next level
          level[l].CopyFrom(temp); break;
        }
      }
    }
  }
  /*! \brief get the summary after finalize */
  inline void GetSummary(SummaryContainer *out) {
    if (level.size() != 0) {
      out->Reserve(limit_size * 2);
    } else {
      out->Reserve(inqueue.queue.size());
    }
    inqueue.MakeSummary(out);
    if (level.size() != 0) {
      level[0].SetPrune(*out, limit_size);
      for (size_t l = 1; l < level.size(); ++l) {
        if (level[l].size == 0) continue;
        if (level[0].size == 0) {
          level[0].CopyFrom(level[l]);
        } else {
          out->SetCombine(level[0], level[l]);
          level[0].SetPrune(*out, limit_size);
        }
      }
      out->CopyFrom(level[0]);
    } else {
      if (out->size > limit_size) {
        temp.Reserve(limit_size);
        temp.SetPrune(*out, limit_size);
        out->CopyFrom(temp);
      }
    }
  }
  // used for debug, check if the sketch is valid
  inline void CheckValid(RType eps) const {
    for (size_t l = 1; l < level.size(); ++l) {
      level[l].CheckValid(eps);
    }
  }
  // initialize level space to at least nlevel
  inline void InitLevel(size_t nlevel) {
    if (level.size() >= nlevel) return;
    data.resize(limit_size * nlevel);
    level.resize(nlevel, Summary(nullptr, 0));
    for (size_t l = 0; l < level.size(); ++l) {
      level[l].data = dmlc::BeginPtr(data) + l * limit_size;
    }
  }
  // input data queue
  typename Summary::Queue inqueue;
  // number of levels
  size_t nlevel;
  // size of summary in each level
  size_t limit_size;
  // the level of each summaries
  std::vector<Summary> level;
  // content of the summary
  std::vector<Entry> data;
  // temporal summary, used for temp-merge
  SummaryContainer temp;
};
    
    
    {
    {      std::vector<LambdaPair> pairs;
      std::vector<ListEntry>  lst;
      std::vector< std::pair<bst_float, unsigned> > rec;
      bst_float sum_weights = 0;
      for (bst_omp_uint k = 0; k < ngroup; ++k) {
        sum_weights += info.GetWeight(k);
      }
      bst_float weight_normalization_factor = ngroup/sum_weights;
      const auto& labels = info.labels_.HostVector();
      #pragma omp for schedule(static)
      for (bst_omp_uint k = 0; k < ngroup; ++k) {
        lst.clear(); pairs.clear();
        for (unsigned j = gptr[k]; j < gptr[k+1]; ++j) {
          lst.emplace_back(preds_h[j], labels[j], j);
          gpair[j] = GradientPair(0.0f, 0.0f);
        }
        std::sort(lst.begin(), lst.end(), ListEntry::CmpPred);
        rec.resize(lst.size());
        for (unsigned i = 0; i < lst.size(); ++i) {
          rec[i] = std::make_pair(lst[i].label, i);
        }
        std::sort(rec.begin(), rec.end(), common::CmpFirst);
        // enumerate buckets with same label, for each item in the lst, grab another sample randomly
        for (unsigned i = 0; i < rec.size(); ) {
          unsigned j = i + 1;
          while (j < rec.size() && rec[j].first == rec[i].first) ++j;
          // bucket in [i,j), get a sample outside bucket
          unsigned nleft = i, nright = static_cast<unsigned>(rec.size() - j);
          if (nleft + nright != 0) {
            int nsample = param_.num_pairsample;
            while (nsample --) {
              for (unsigned pid = i; pid < j; ++pid) {
                unsigned ridx = std::uniform_int_distribution<unsigned>(0, nleft + nright - 1)(rnd);
                if (ridx < nleft) {
                  pairs.emplace_back(rec[ridx].second, rec[pid].second,
                      info.GetWeight(k) * weight_normalization_factor);
                } else {
                  pairs.emplace_back(rec[pid].second, rec[ridx+j-i].second,
                      info.GetWeight(k) * weight_normalization_factor);
                }
              }
            }
          }
          i = j;
        }
        // get lambda weight for the pairs
        this->GetLambdaWeight(lst, &pairs);
        // rescale each gradient and hessian so that the lst have constant weighted
        float scale = 1.0f / param_.num_pairsample;
        if (param_.fix_list_weight != 0.0f) {
          scale *= param_.fix_list_weight / (gptr[k + 1] - gptr[k]);
        }
        for (auto & pair : pairs) {
          const ListEntry &pos = lst[pair.pos_index];
          const ListEntry &neg = lst[pair.neg_index];
          const bst_float w = pair.weight * scale;
          const float eps = 1e-16f;
          bst_float p = common::Sigmoid(pos.pred - neg.pred);
          bst_float g = p - 1.0f;
          bst_float h = std::max(p * (1.0f - p), eps);
          // accumulate gradient and hessian in both pid, and nid
          gpair[pos.rindex] += GradientPair(g * w, 2.0f*w*h);
          gpair[neg.rindex] += GradientPair(-g * w, 2.0f*w*h);
        }
      }
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'map';
  }
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-object type
        json str = 'I am a string';
        str.at('the good') = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    int main()
{
    // create JSON array
    json array = {'first', '2nd', 'third', 'fourth'};
    }
    
        // create values of different floating-point types
    json::number_float_t v_ok = 3.141592653589793;
    json::number_float_t v_nan = NAN;
    json::number_float_t v_infinity = INFINITY;