
        
        #endif  // TESSERACT_CCMAIN_PARAGRAPHS_H_

    
    namespace tesseract  {
    }
    
    // Returns true if there were enough points at the last call to Fit or
// ConstrainedFit for the fitted points to be used on a badly fitted line.
bool DetLineFit::SufficientPointsForIndependentFit() const {
  return distances_.size() >= kMinPointsForErrorCount;
}
    
    #ifndef TESSERACT_CCUTIL_DOUBLEPTR_H_
#define TESSERACT_CCUTIL_DOUBLEPTR_H_
    
    // Vector of IntKDPair.
class KDVector : public GenericVector<IntKDPair> {
  // TODO(rays) Add some code to manipulate a KDVector. For now there
  // is nothing and this class is effectively a specialization typedef.
};
    
    /**----------------------------------------------------------------------------
          Include Files and Type Defines
----------------------------------------------------------------------------**/
#include 'host.h'
#include <stdio.h>
#include <math.h>