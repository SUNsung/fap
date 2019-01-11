
        
        
    {}  // namespace tesseract.
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
    // Inserts a new box before the given index.
// Recomputes the bounding box.
void BoxWord::InsertBox(int index, const TBOX& box) {
  if (index < length_)
    boxes_.insert(box, index);
  else
    boxes_.push_back(box);
  length_ = boxes_.size();
  ComputeBoundingBox();
}
    
    // Solve the dynamic programming problem for the given array of points, with
// the given size and cost function.
// Steps backwards are limited to being between min_step and max_step
// inclusive.
// The return value is the tail of the best path.
DPPoint* DPPoint::Solve(int min_step, int max_step, bool debug,
                        CostFunc cost_func, int size, DPPoint* points) {
  if (size <= 0 || max_step < min_step || min_step >= size)
    return nullptr;  // Degenerate, but not necessarily an error.
  ASSERT_HOST(min_step > 0);  // Infinite loop possible if this is not true.
  if (debug)
    tprintf('min = %d, max=%d\n',
            min_step, max_step);
  // Evaluate the total cost at each point.
  for (int i = 0; i < size; ++i) {
    for (int offset = min_step; offset <= max_step; ++offset) {
      DPPoint* prev = offset <= i ? points + i - offset : nullptr;
      int64_t new_cost = (points[i].*cost_func)(prev);
      if (points[i].best_prev_ != nullptr && offset > min_step * 2 &&
          new_cost > points[i].total_cost_)
        break;  // Find only the first minimum if going over twice the min.
    }
    points[i].total_cost_ += points[i].local_cost_;
    if (debug) {
      tprintf('At point %d, local cost=%d, total_cost=%d, steps=%d\n',
              i, points[i].local_cost_, points[i].total_cost_,
              points[i].total_steps_);
    }
  }
  // Now find the end of the best path and return it.
  int best_cost = points[size - 1].total_cost_;
  int best_end = size - 1;
  for (int end = best_end - 1; end >= size - min_step; --end) {
    int cost = points[end].total_cost_;
    if (cost < best_cost) {
      best_cost = cost;
      best_end = end;
    }
  }
  return points + best_end;
}
    
            // (start, end) values in the current window to be reported.
        std::pair<double, double> m_loss;
        std::pair<double, double> m_metric;
        std::pair<size_t, size_t> m_samples;
        std::pair<size_t, size_t> m_updates;
    
            ValuePtr DeepClone(bool readOnly) const override
        {
            if (m_isPacked)
            {
                std::shared_ptr<Microsoft::MSR::CNTK::MBLayout> packedLayoutCopy;
                if (m_packedDataLayout)
                {
                    packedLayoutCopy = std::make_shared<Microsoft::MSR::CNTK::MBLayout>();
                    packedLayoutCopy->CopyFrom(m_packedDataLayout);
                }
                return MakeSharedObject<PackedValue>(m_sampleShape, m_sampleDynamicAxes, m_packedData->DeepClone(readOnly), packedLayoutCopy, readOnly);
            }
            else
                return Value::DeepClone(readOnly);
        }
    
    namespace CNTK
{
    Variable::Variable(const FunctionPtr& function)
        : Variable(function->Output())
    {
    }
    }
    
            // all cloned nodes' inputs must be redirected if they reference a node that has been cloned as well
        size_t numRelinks = 0; // (statistics: how many inputs have we relinked?)
        for (let& clonedNodesKV : clonedNodes)
        {
            let& node = clonedNodesKV.second;
            let& inputs2 = node->GetInputs();
            for (size_t i = 0; i < inputs2.size(); i++)
            {
                fprintf(stderr, '%ls.inputs[%d] = %ls (%d)', node->NodeName().c_str(), (int)i, inputs2[i]->NodeName().c_str(), (int)inputs2[i]->m_uniqueNumericId);
                let iter = clonedNodes.find(inputs2[i]);
                if (iter == clonedNodes.end())
                    continue;
                // input is also a cloned node: relink
                node->SetInput(i, iter->second);
                fprintf(stderr, ' ==>  %ls (%d)\n', inputs2[i]->NodeName().c_str(), (int)inputs2[i]->m_uniqueNumericId);
                numRelinks++;
            }
        }
    
    
    {        // see if our best match qualifies
        if (best < 3) { // fast path literals
            ++q;
        } else if (best > 2  &&  best <= 0x80    &&  dist <= 0x100) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out(0x80 + best-1);
            stb_out(dist-1);
        } else if (best > 5  &&  best <= 0x100   &&  dist <= 0x4000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out2(0x4000 + dist-1);       
            stb_out(best-1);
        } else if (best > 7  &&  best <= 0x100   &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x180000 + dist-1);     
            stb_out(best-1);
        } else if (best > 8  &&  best <= 0x10000 &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x100000 + dist-1);     
            stb_out2(best-1);
        } else if (best > 9                      &&  dist <= 0x1000000) {
            if (best > 65536) best = 65536;
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            if (best <= 0x100) {
                stb_out(0x06);
                stb_out3(dist-1);
                stb_out(best-1);
            } else {
                stb_out(0x04);
                stb_out3(dist-1);
                stb_out2(best-1);
            }
        } else {  // fallback literals if no match was a balanced tradeoff
            ++q;
        }
    }
    
        /// A structure that describe a glyph.
    struct GlyphInfo 
    {
        float Width;		// Glyph's width in pixels.
        float Height;		// Glyph's height in pixels.
        float OffsetX;		// The distance from the origin ('pen position') to the left of the glyph.
        float OffsetY;		// The distance from the origin to the top of the glyph. This is usually a value < 0.
        float AdvanceX;		// The distance from the origin to the origin of the next glyph. This is usually a value > 0.
    };
    
    struct IDirect3DDevice9;
    
    #ifdef _MSC_VER
#pragma warning (disable: 4505) // unreferenced local function has been removed (stb stuff)
#endif
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    // ============================================================================
// folly/test/GLogBenchmark.cpp                    relative  time/iter  iters/s
// ============================================================================
// skip_overhead                                               36.37ns   27.49M
// dev_null_log_overhead                                        2.61us  382.57K
// ============================================================================
    
    int main(int argc, char** argv) {
  folly::init(&argc, &argv);
  CHECK_GT(argc, 2);
  folly::compareBenchmarkResults(argv[1], argv[2]);
  return 0;
}

    
    template <class RNG, typename = void>
struct StateSize {
  // A sane default.
  using type = std::integral_constant<size_t, 512>;
};
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
    #include <folly/Portability.h>
#include <folly/compression/Compression.h>
    
    #include <folly/portability/GTest.h>