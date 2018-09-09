
        
        // static
mate::WrappableBase* BoxLayout::New(mate::Arguments* args,
                                    views::BoxLayout::Orientation orientation) {
  auto* layout = new BoxLayout(orientation);
  layout->InitWith(args->isolate(), args->GetThis());
  return layout;
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/native_browser_view.h'
#include 'native_mate/handle.h'
    
    void DownloadItem::SetSavePath(const base::FilePath& path) {
  save_path_ = path;
}
    
    namespace api {
    }
    
    #if !defined(__SSE4_1__)
// This code can't compile with '-msse4.1', so use dummy stubs.
    
      // Rounds the input up to a multiple of the given factor.
  static int Roundup(int input, int factor) {
    return (input + factor - 1) / factor * factor;
  }
    
    // Extracts and converts 8x32-bit results from result, adding the bias from wi
// and scaling by scales, before storing in *v. Note that wi, scales and v are
// expected to contain 8 consecutive elements or num_out if less.
inline void ExtractResults(__m256i& result, __m256i& shift_id,
                           const int8_t*& wi, const double*& scales,
                           int num_out, double*& v) {
  for (int out = 0; out < num_out; ++out) {
    int32_t res =
#ifndef _MSC_VER
        _mm256_extract_epi32(result, 0)
#else
        // Workaround MSVC's ICE
        // _mm256_extract_epi32(X, Y) == ((int32_t*)&X)[Y]
        ((int32_t*)&result)[0]
#endif
        ;
    *v++ = (static_cast<double>(res) / INT8_MAX + *wi++) * *scales++;
    // Rotate the results in int32_t units, so the next result is ready.
    result = _mm256_permutevar8x32_epi32(result, shift_id);
  }
}
    
    
    {  if (garbage_level != G_OK) {
    if (crunch_debug > 2) {
      tprintf('Potential garbage on \'%s\'\n',
              word->best_choice->unichar_string().string());
    }
    poor_indicator_count++;
  }
  return poor_indicator_count >= crunch_pot_indicators;
}
    
    #include <cstdint>  // for int16_t
    
      // Search the nearest neighbor of part in one vertical direction as defined in
  // search_bottom. It returns the neighbor found that major x overlap with it,
  // or nullptr when not found.
  ColPartition* SearchNNVertical(const bool search_bottom,
                                 const ColPartition* part);
    
    /**
 * Returns an image of the current object at the given level in greyscale
 * if available in the input. To guarantee a binary image use BinaryImage.
 * NOTE that in order to give the best possible image, the bounds are
 * expanded slightly over the binary connected component, by the supplied
 * padding, so the top-left position of the returned image is returned
 * in (left,top). These will most likely not match the coordinates
 * returned by BoundingBox.
 * If you do not supply an original image, you will get a binary one.
 * Use pixDestroy to delete the image after use.
 */
Pix* PageIterator::GetImage(PageIteratorLevel level, int padding,
                            Pix* original_img,
                            int* left, int* top) const {
  int right, bottom;
  if (!BoundingBox(level, left, top, &right, &bottom))
    return nullptr;
  if (original_img == nullptr)
    return GetBinaryImage(level);
    }
    
    template <typename T> class GenericVector;
    
    // A small event handler class to process incoming events to
// this window.
class PGEventHandler : public SVEventHandler {
  public:
   PGEventHandler(tesseract::Tesseract* tess) : tess_(tess) {
   }
   void Notify(const SVEvent* sve);
  private:
    tesseract::Tesseract* tess_;
};
    
        for (int fd: to_add)
      register_fd(fd);
    to_add.clear();
    
    
<details>