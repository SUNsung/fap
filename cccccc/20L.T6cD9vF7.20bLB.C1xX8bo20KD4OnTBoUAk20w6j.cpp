
        
        // ##########################################################
    
    
<details>
    
    REGISTER_CUDA_OPERATOR(LC3D, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LC3DGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    
    { private:
  // The collection of images to put in the PDF.
  Pixa* pixa_;
  // The fonts used to draw text captions.
  L_Bmf* fonts_;
};
    
    #endif  // THIRD_PARTY_TESSERACT_CCUTIL_DOUBLEPTR_H_

    
    /* NurbsCallback */
#define GLU_NURBS_ERROR                    100103
#define GLU_ERROR                          100103
#define GLU_NURBS_BEGIN                    100164
#define GLU_NURBS_BEGIN_EXT                100164
#define GLU_NURBS_VERTEX                   100165
#define GLU_NURBS_VERTEX_EXT               100165
#define GLU_NURBS_NORMAL                   100166
#define GLU_NURBS_NORMAL_EXT               100166
#define GLU_NURBS_COLOR                    100167
#define GLU_NURBS_COLOR_EXT                100167
#define GLU_NURBS_TEXTURE_COORD            100168
#define GLU_NURBS_TEX_COORD_EXT            100168
#define GLU_NURBS_END                      100169
#define GLU_NURBS_END_EXT                  100169
#define GLU_NURBS_BEGIN_DATA               100170
#define GLU_NURBS_BEGIN_DATA_EXT           100170
#define GLU_NURBS_VERTEX_DATA              100171
#define GLU_NURBS_VERTEX_DATA_EXT          100171
#define GLU_NURBS_NORMAL_DATA              100172
#define GLU_NURBS_NORMAL_DATA_EXT          100172
#define GLU_NURBS_COLOR_DATA               100173
#define GLU_NURBS_COLOR_DATA_EXT           100173
#define GLU_NURBS_TEXTURE_COORD_DATA       100174
#define GLU_NURBS_TEX_COORD_DATA_EXT       100174
#define GLU_NURBS_END_DATA                 100175
#define GLU_NURBS_END_DATA_EXT             100175
    
      void writePSChar(char c);
  void writePS(char *s);
  void writePSBuf(char *s, int len);
  void writePSFmt(const char *fmt, ...);
  void writePSString(GooString *s);
  void writePSName(char *s);
  GooString *filterPSLabel(GooString *label, GBool *needParens=0);
  void writePSTextLine(GooString *s);
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
// Copyright (C) 2008 Albert Astals Cid <aacid@kde.org>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
      Gfx *createGfx(OutputDev *out, double hDPI, double vDPI,
		 int rotate, GBool useMediaBox, GBool crop,
		 int sliceX, int sliceY, int sliceW, int sliceH,
		 GBool printing, Catalog *catalog,
		 GBool (*abortCheckCbk)(void *data),
		 void *abortCheckCbkData,
		 GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
		 void *annotDisplayDecideCbkData);
    
      // Get angle
  int getAngle() { return angle; }
    
    void PopplerCache::put(PopplerCacheKey *key, PopplerCacheItem *item)
{
  int movingStartIndex = lastValidCacheIndex + 1;
  if (lastValidCacheIndex == cacheSize - 1) {
    delete keys[lastValidCacheIndex];
    delete items[lastValidCacheIndex];
    movingStartIndex = cacheSize - 1;
  } else {
    lastValidCacheIndex++;
  }
  for (int i = movingStartIndex; i > 0; i--) {
    keys[i] = keys[i - 1];
    items[i] = items[i - 1];
  }
  keys[0] = key;
  items[0] = item;
}
    
      // Constructor.
  ProfileData ();
    
    GBool StandardSecurityHandler::authorize(void *authData) {
  GooString *ownerPassword, *userPassword;
    }
    
    
    {  GooString *ownerKey, *userKey;
  GooString *fileID;
  GBool ok;
};
    
    enum SoundKind {
  soundEmbedded,		// embedded sound
  soundExternal			// external sound
};
    
    public:
    
    static const UChar kSuperscriptPlusSign = 0x207A;
static const UChar kSuperscriptMinusSign = 0x207B;
    
    //----------------------------------------------------------------------------
//
//  ScriptSet implementation
//
//----------------------------------------------------------------------------
ScriptSet::ScriptSet() {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] = 0;
    }
}
    
    USearchAttributeValue SearchIterator::getAttribute(
                                          USearchAttribute  attribute) const
{
    switch (attribute) {
    case USEARCH_OVERLAP :
        return (m_search_->isOverlap == TRUE ? USEARCH_ON : USEARCH_OFF);
    case USEARCH_CANONICAL_MATCH :
        return (m_search_->isCanonicalMatch == TRUE ? USEARCH_ON : 
                                                                USEARCH_OFF);
    case USEARCH_ELEMENT_COMPARISON :
        {
            int16_t value = m_search_->elementComparisonType;
            if (value == USEARCH_PATTERN_BASE_WEIGHT_IS_WILDCARD || value == USEARCH_ANY_BASE_WEIGHT_IS_WILDCARD) {
                return (USearchAttributeValue)value;
            } else {
                return USEARCH_STANDARD_ELEMENT_COMPARISON;
            }
        }
    default :
        return USEARCH_DEFAULT;
    }
}
    
int32_t SearchIterator::getMatchedStart() const
{
    return m_search_->matchedIndex;
}
    
    
class U_I18N_API SharedDateFormatSymbols : public SharedObject {
public:
    SharedDateFormatSymbols(
            const Locale &loc, const char *type, UErrorCode &status)
            : dfs(loc, type, status) { }
    virtual ~SharedDateFormatSymbols();
    const DateFormatSymbols &get() const { return dfs; }
private:
    DateFormatSymbols dfs;
    SharedDateFormatSymbols(const SharedDateFormatSymbols &);
    SharedDateFormatSymbols &operator=(const SharedDateFormatSymbols &);
};
    
    #if !UCONFIG_NO_FORMATTING
    
    int main(int, char**)
{
    // Setup GLFW window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    }
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the example_glfw_opengl2/ folder**
// See imgui_impl_glfw.cpp for details.
    
            g_pSwapChain->Present(1, 0); // Present with vsync
        //g_pSwapChain->Present(0, 0); // Present without vsync
    
    
    {
    {
    {
    {                    // Bind texture, Draw
                    glBindTexture(GL_TEXTURE_2D, (GLuint)(intptr_t)pcmd->TextureId);
                    glDrawElements(GL_TRIANGLES, (GLsizei)pcmd->ElemCount, sizeof(ImDrawIdx) == 2 ? GL_UNSIGNED_SHORT : GL_UNSIGNED_INT, idx_buffer);
                }
            }
            idx_buffer += pcmd->ElemCount;
        }
    }
    
    #include <osquery/tables.h>
    
      // Start looping through starting at the first options
  // (so skip the exports)
  for (auto iter = line.begin() + options_index; iter != line.end(); ++iter) {
    if (iter->compare('-ro') == 0 || iter->compare('-o') == 0) {
      readonly = 1;
    }
  }
    
    class Killswitch : private boost::noncopyable {
 public:
  static const char* killswitch_;
  static const char* action_;
  static const char* isEnabled_;
  static const char* key_;
  static const char* refresh_;
    }
    
    // Sanity check integration test for iokit_registry
// Spec file: specs/darwin/iokit_registry.table
    
    // Sanity check integration test for kernel_modules
// Spec file: specs/linux/kernel_modules.table
    
    // Sanity check integration test for keychain_acls
// Spec file: specs/darwin/keychain_acls.table