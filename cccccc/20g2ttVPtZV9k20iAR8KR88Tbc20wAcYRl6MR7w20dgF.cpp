
        
        
#ifdef __cplusplus
class GLUnurbs;
class GLUquadric;
class GLUtesselator;
#else
typedef struct GLUnurbs GLUnurbs;
typedef struct GLUquadric GLUquadric;
typedef struct GLUtesselator GLUtesselator;
#endif
    
      // skip leading whitespace and comments
  comment = gFalse;
  while (1) {
    if ((c = getChar()) == EOF) {
      buf[0] = '\0';
      *length = 0;
      return gFalse;
    }
    if (comment) {
      if (c == '\x0a' || c == '\x0d') {
	comment = gFalse;
      }
    } else if (c == '%') {
      comment = gTrue;
    } else if (specialChars[c] != 1) {
      break;
    }
  }
    
      // contents
  pageDict->lookupNF('Contents', &contents);
  if (!(contents.isRef() || contents.isArray() ||
	contents.isNull())) {
    error(-1, 'Page contents object (page %d) is wrong type (%s)',
	  num, contents.getTypeName());
    contents.free();
    goto err1;
  }
    
      Gfx *createGfx(OutputDev *out, double hDPI, double vDPI,
		 int rotate, GBool useMediaBox, GBool crop,
		 int sliceX, int sliceY, int sliceW, int sliceH,
		 GBool printing, Catalog *catalog,
		 GBool (*abortCheckCbk)(void *data),
		 void *abortCheckCbkData,
		 GBool (*annotDisplayDecideCbk)(Annot *annot, void *user_data),
		 void *annotDisplayDecideCbkData);
    
    class PageLabelInfo {
public:
  PageLabelInfo(Object *tree, int numPages);
  ~PageLabelInfo();
  GBool labelToIndex(GooString *label, int *index);
  GBool indexToLabel(int index, GooString *label);
    }
    
      // get sacle
  if (dict->lookup('SS', &obj)->isReal()) {
    scale = obj.getReal();
  }
  obj.free();
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2009 Carlos Garcia Campos <carlosgc@gnome.org>
// Copyright (C) 2010 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2011 William Bader <williambader@hotmail.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    void MediaParameters::parseMediaScreenParameters(Object* obj) {
  Object tmp;
    }
    
    
    {  Object encryptDict;
  XpdfSecurityHandler *xsh;
  void *docData;
  int permFlags;
  Guchar fileKey[16];
  int fileKeyLength;
  int encVersion;
  CryptAlgorithm encAlgorithm;
  GBool ok;
};
#endif // ENABLE_PLUGINS