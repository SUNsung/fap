
        
        namespace swift {
    }
    
      char *oldBegin = Begin;
  char *oldEnd = End;
  std::size_t oldSize = (std::size_t) (oldEnd - oldBegin);
    
      // Update the argument label and base name.
  argName = baseName.substr(startOfArgumentLabel);
  baseName = newBaseName;
    
    
    {    if (Finished) {
      std::string Output = 'Output placeholder\n';
      std::string Errors =
          P.second->SeparateErrors ? 'Error placeholder\n' : '';
      if (Finished(P.first, 0, Output, Errors, TaskProcessInformation(Pid),
                   P.second->Context) == TaskFinishedResponse::StopExecution)
        SubtaskFailed = true;
    }
  }
    
    
    {  // The length of the transcoded string in UTF-16 code points.
  Length = toPtr - &buffer[0];
  return Length;
}

    
    
    {  return GraphemeClusterBreakProperty::Other;
}
    
      /**
   * Returns orientation for the block the iterator points to.
   *   orientation, writing_direction, textline_order: see publictypes.h
   *   deskew_angle: after rotating the block so the text orientation is
   *                 upright, how many radians does one have to rotate the
   *                 block anti-clockwise for it to be level?
   *                   -Pi/4 <= deskew_angle <= Pi/4
   */
  void Orientation(tesseract::Orientation *orientation,
                   tesseract::WritingDirection *writing_direction,
                   tesseract::TextlineOrder *textline_order,
                   float *deskew_angle) const;
    
      // Find all editable parameters used within tesseract and create a
  // SVMenuNode tree from it.
  SVMenuNode *BuildListOfAllLeaves(tesseract::Tesseract *tess);
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    #include <dmlc/registry.h>
#include <functional>
#include <vector>
#include <utility>
#include <string>
#include './base.h'
#include './data.h'
#include './tree_model.h'
#include '../../src/common/host_device_vector.h'
    
        const size_t* begin = dmlc::BeginPtr(row_indices_);
    const size_t* end = dmlc::BeginPtr(row_indices_) + row_indices_.size();
    elem_of_each_node_.emplace_back(Elem(begin, end, 0));
  }
  // split rowset into two
  inline void AddSplit(unsigned node_id,
                       const std::vector<Split>& row_split_tloc,
                       unsigned left_node_id,
                       unsigned right_node_id) {
    const Elem e = elem_of_each_node_[node_id];
    const auto nthread = static_cast<bst_omp_uint>(row_split_tloc.size());
    CHECK(e.begin != nullptr);
    size_t* all_begin = dmlc::BeginPtr(row_indices_);
    size_t* begin = all_begin + (e.begin - all_begin);
    
    #if DMLC_ENABLE_STD_THREAD
namespace xgboost {
namespace data {
    }
    }
    
    #endif  // XGBOOST_OBJECTIVE_REGRESSION_LOSS_H_

    
    
    {
    {XGBOOST_REGISTER_TREE_UPDATER(TreePruner, 'prune')
.describe('Pruner that prune the tree according to statistics.')
.set_body([]() {
    return new TreePruner();
  });
}  // namespace tree
}  // namespace xgboost
