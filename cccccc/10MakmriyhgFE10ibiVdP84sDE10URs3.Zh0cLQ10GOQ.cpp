
        
          // If the conforming type is a class, add a class-constrained 'Self'
  // parameter.
  if (covariantSelf) {
    auto paramTy = GenericTypeParamType::get(/*depth=*/0, /*index=*/0, ctx);
    builder.addGenericParameter(paramTy);
  }
    
            // Don't prune redundant type information from the base name if
        // there is a corresponding property (either singular or plural).
        StringRef removedText =
          name.substr(nameWordRevIter.base().getPosition(),
                      firstMatchingNameWordRevIter.base().getPosition());
        if (textMatchesPropertyName(removedText, allPropertyNames))
          return name;
    
    %# Ignore the following admonition; it applies to the resulting .cpp file only
//// Automatically Generated From UnicodeExtendedGraphemeClusters.cpp.gyb.
//// Do Not Edit Directly!
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
    
    
    {public:
  Darwin(const Driver &D, const llvm::Triple &Triple) : ToolChain(D, Triple) {}
  ~Darwin() = default;
  std::string sanitizerRuntimeLibName(StringRef Sanitizer,
                                      bool shared = true) const override;
};
    
    // Get render process host.
RenderProcessHost* GetRenderProcessHost() {
  RenderProcessHost* render_process_host = NULL;
  std::vector<Shell*> windows = Shell::windows();
  for (size_t i = 0; i < windows.size(); ++i) {
    if (!windows[i]->is_devtools()) {
      render_process_host = windows[i]->web_contents()->GetRenderProcessHost();
      break;
    }
  }
    }
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    MenuItem::~MenuItem() {
  Destroy();
}
    
    void MenuItem::SetLabel(const std::string& label) {
  label_ = label;
  gtk_menu_item_set_label(GTK_MENU_ITEM(menu_item_), label.c_str());
}
    
    void NwAppClearCacheFunction::OnBrowsingDataRemoverDone() {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
  run_loop_.Quit();
}
    
     protected:
  ~NwClipboardGetListSyncFunction() override;
    
    #include 'extensions/browser/extension_function.h'
    
    bool NwObjDestroyFunction::RunNWSync(base::ListValue* response, std::string* error) {
  int id = 0;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
    }
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    namespace tesseract {
    }
    
    #include 'paramsd.h'
#include <cstdio>            // for fclose, fopen, fprintf, sprintf, FILE
#include <cstdlib>           // for atoi, strtod
#include <cstring>           // for strcmp, strcspn, strlen, strncpy
#include <map>               // for map, _Rb_tree_iterator, map<>::iterator
#include <memory>            // for unique_ptr
#include <utility>           // for pair
#include 'genericvector.h'   // for GenericVector
#include 'params.h'          // for ParamsVectors, StringParam, BoolParam
#include 'scrollview.h'      // for SVEvent, ScrollView, SVET_POPUP
#include 'svmnode.h'         // for SVMenuNode
#include 'tesseractclass.h'  // for Tesseract
    
    
    {  // Restore the pointer to original blamer bundle and combine blamer
  // information recorded in the splits.
  if (orig_bb != nullptr) {
    orig_bb->JoinBlames(*word->blamer_bundle, *word2->blamer_bundle,
                        wordrec_debug_blamer);
    delete word->blamer_bundle;
    word->blamer_bundle = orig_bb;
  }
  word->SetupBoxWord();
  word->reject_map.initialise(word->box_word->length());
  delete word2;
}
    
     protected:
  /// Clone or other copy of the source Pix.
  /// The pix will always be PixDestroy()ed on destruction of the class.
  Pix*                 pix_;
    
      // Fits a line to the points, returning the fitted line as a pair of
  // points, and the upper quartile error.
  double Fit(ICOORD* pt1, ICOORD* pt2) {
    return Fit(0, 0, pt1, pt2);
  }
  // Fits a line to the points, ignoring the skip_first initial points and the
  // skip_last final points, returning the fitted line as a pair of points,
  // and the upper quartile error.
  double Fit(int skip_first, int skip_last, ICOORD* pt1, ICOORD* pt2);
    
      // Computes the maximum x and y value in the features.
  static void ComputeSize(const GenericVector<WordFeature>& features,
                          int* max_x, int* max_y);
  // Draws the features in the given window.
  static void Draw(const GenericVector<WordFeature>& features,
                   ScrollView* window);
    
      // Adds an element with a weight of 1.
  void add(double x, double y);
  // Adds an element with a specified weight.
  void add(double x, double y, double weight);
  // Adds a whole LLSQ.
  void add(const LLSQ& other);
  // Deletes an element with a weight of 1.
  void remove(double x, double y);
  int32_t count() const {  // no of elements
    return static_cast<int>(total_weight + 0.5);
  }
    
    namespace b2ConvexDecomp {
    }
    
    			if (fDecodedLength < 0.5f)
			{
				return 1.0f;
			}
			else if (fDecodedLength == 0.0f)
			{
				fDecodedX = 1.0f;
				fDecodedY = 0.0f;
				fDecodedZ = 0.0f;
			}
			else
			{
				fDecodedX /= fDecodedLength;
				fDecodedY /= fDecodedLength;
				fDecodedZ /= fDecodedLength;
			}
    
    //  16384 * sqrt(2) * sin(kPi/9) * 2 / 3
static const tran_high_t sinpi_1_9 = 5283;
static const tran_high_t sinpi_2_9 = 9929;
static const tran_high_t sinpi_3_9 = 13377;
static const tran_high_t sinpi_4_9 = 15212;
    
    
    {
    {}}
    
      // Can be used to generate or force a unimplemented opcode exception
  void unimplemented();
    
    #endif // HPHP_FILE_STREAM_WRAPPER_H

    
    req::ptr<Directory> GlobStreamWrapper::opendir(const String& path) {
  const char* prefix = 'glob://';
  const char* path_str = path.data();
  int path_len = path.length();
    }
    
    ///////////////////////////////////////////////////////////////////////////////