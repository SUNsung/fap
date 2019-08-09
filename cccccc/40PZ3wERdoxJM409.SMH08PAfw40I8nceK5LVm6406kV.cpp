
        
          CHROMEG_CALLBACK_1(GlobalMenuBarRegistrarX11,
                     void,
                     OnProxyCreated,
                     GObject*,
                     GAsyncResult*);
  CHROMEG_CALLBACK_1(GlobalMenuBarRegistrarX11,
                     void,
                     OnNameOwnerChanged,
                     GObject*,
                     GParamSpec*);
    
    Promise Promise::Create() {
  return Promise::Create(v8::Isolate::GetCurrent());
}
    
    #if defined(OS_WIN)
#include <windows.h>
#endif  // defined(OS_WIN)
    
    
    {}  // namespace electron
    
    #include <map>
    
      int num_words;
  TBOX lword_box;     // in normalized (horiz text rows) space
  TBOX rword_box;     // in normalized (horiz text rows) space
    
      // Computes all the cross product distances of the points perpendicular to
  // the given direction, ignoring distances outside of the give distance range,
  // storing the actual (signed) cross products in distances_.
  void ComputeConstrainedDistances(const FCOORD& direction,
                                   double min_dist, double max_dist);
    
      bool is_list_item;
    
    // Computes the Otsu threshold(s) for the given histogram.
// Also returns H = total count in histogram, and
// omega0 = count of histogram below threshold.
int OtsuStats(const int* histogram, int* H_out, int* omega0_out);
    
    #ifndef TESSERACT_CCUTIL_DOUBLEPTR_H_
#define TESSERACT_CCUTIL_DOUBLEPTR_H_
    
    // Specialization for a pair of ints in increasing order.
using IntKDPair = KDPairInc<int, int>;
    
      // Main worker method that retrieves the next number in the sequence.
  // Returns kInvalidVal if called more than N times after object initialization
  int GetVal() {
    const int kInvalidVal = -1;
    const int kMaxNaturalNumberValue = 1 << num_bits_;
    if (next_num_ >= kMaxNaturalNumberValue)
      return kInvalidVal;
    int n = next_num_;
    }
    
    // A UNICHARMAP stores unique unichars. Each of them is associated with one
// UNICHAR_ID.
class UNICHARMAP {
 public:
    }
    
    // Compute the distance between the given feature vector and the last
// Set feature vector.
double IntFeatureDist::DebugFeatureDistance(
    const GenericVector<int>& features) const {
  const int num_test_features = features.size();
  const double denominator = total_feature_weight_ + num_test_features;
  double misses = denominator;
  for (int i = 0; i < num_test_features; ++i) {
    const int index = features[i];
    const double weight = 1.0;
    INT_FEATURE_STRUCT f = feature_map_->InverseMapFeature(features[i]);
    tprintf('Testing feature weight %g:', weight);
    f.print();
    if (features_[index]) {
      // A perfect match.
      misses -= 2.0 * weight;
      tprintf('Perfect hit\n');
    } else if (features_delta_one_[index]) {
      misses -= 1.5 * weight;
      tprintf('-1 hit\n');
    } else if (features_delta_two_[index]) {
      // A near miss.
      misses -= 1.0 * weight;
      tprintf('-2 hit\n');
    } else {
      tprintf('Total miss\n');
    }
  }
  tprintf('Features present:');
  for (int i = 0; i < size_; ++i) {
    if (features_[i]) {
      INT_FEATURE_STRUCT f = feature_map_->InverseMapFeature(i);
      f.print();
    }
  }
  tprintf('\nMinus one features:');
  for (int i = 0; i < size_; ++i) {
    if (features_delta_one_[i]) {
      INT_FEATURE_STRUCT f = feature_map_->InverseMapFeature(i);
      f.print();
    }
  }
  tprintf('\nMinus two features:');
  for (int i = 0; i < size_; ++i) {
    if (features_delta_two_[i]) {
      INT_FEATURE_STRUCT f = feature_map_->InverseMapFeature(i);
      f.print();
    }
  }
  tprintf('\n');
  return misses / denominator;
}