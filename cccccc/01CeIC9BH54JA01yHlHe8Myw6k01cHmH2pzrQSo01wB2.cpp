
        
        bool IsUrlArg(const base::CommandLine::CharType* arg) {
  // the first character must be a letter for this to be a URL
  auto c = *arg;
  if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
    for (auto* p = arg + 1; *p; ++p) {
      c = *p;
    }
    }
    }
    
    #endif  // ATOM_APP_UV_TASK_RUNNER_H_

    
    class RenderProcessPreferences
    : public mate::Wrappable<RenderProcessPreferences> {
 public:
  static mate::Handle<RenderProcessPreferences> ForAllWebContents(
      v8::Isolate* isolate);
    }
    
      ~TrackableObject() override { RemoveFromWeakMap(); }
    
    namespace atom {
    }
    
    namespace internal {
    }
    
    
    {}  // namespace tesseract.

    
      STRING lword_text;   // the UTF-8 text of the leftmost werd
  STRING rword_text;   // the UTF-8 text of the rightmost werd
    
    
// Returns the median value of the vector, given that the values are
// circular, with the given modulus. Values may be signed or unsigned,
// eg range from -pi to pi (modulus 2pi) or from 0 to 2pi (modulus 2pi).
// NOTE that the array is shuffled, but the time taken is linear.
// An assumption is made that most of the values are spread over no more than
// half the range, but wrap-around is accounted for if the median is near
// the wrap-around point.
// Cannot be a member of GenericVector, as it makes heavy used of LLSQ.
// T must be an integer or float/double type.
template<typename T> T MedianOfCircularValues(T modulus, GenericVector<T>* v) {
  LLSQ stats;
  T halfrange = static_cast<T>(modulus / 2);
  int num_elements = v->size();
  for (int i = 0; i < num_elements; ++i) {
    stats.add((*v)[i], (*v)[i] + halfrange);
  }
  bool offset_needed = stats.y_variance() < stats.x_variance();
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] += halfrange;
    }
  }
  int median_index = v->choose_nth_item(num_elements / 2);
  if (offset_needed) {
    for (int i = 0; i < num_elements; ++i) {
      (*v)[i] -= halfrange;
    }
  }
  return (*v)[median_index];
}
    
      /* Reject modes generated after NN_ACCEPT but before MM_ACCEPT */
  R_HYPHEN,        // TEMP Post NN dodgy hyphen or full stop
  R_DUBIOUS,       // TEMP Post NN dodgy chars
  R_NO_ALPHANUMS,  // TEMP No alphanumerics in word after NN
  R_MOSTLY_REJ,    // TEMP Most of word rejected so rej the rest
  R_XHT_FIXUP,     // TEMP Xht tests unsure
    
      // Fills in two ambiguity tables (replaceable and dangerous) with information
  // read from the ambigs file. An ambiguity table is an array of lists.
  // The array is indexed by a class id. Each entry in the table provides
  // a list of potential ambiguities which can start with the corresponding
  // character. For example the ambiguity 'rn -> m', would be located in the
  // table at index of unicharset.unichar_to_id('r').
  // In 1-1 ambiguities (e.g. s -> S, 1 -> I) are recorded in
  // one_to_one_definite_ambigs_. This vector is also indexed by the class id
  // of the wrong part of the ambiguity and each entry contains a vector of
  // unichar ids that are ambiguous to it.
  // encoder_set is used to encode the ambiguity strings, undisturbed by new
  // unichar_ids that may be created by adding the ambigs.
  void LoadUnicharAmbigs(const UNICHARSET& encoder_set,
                         TFile *ambigs_file, int debug_level,
                         bool use_ambigs_for_adaption, UNICHARSET *unicharset);
    
    #include 'errcode.h'
    
    #include <cmath>