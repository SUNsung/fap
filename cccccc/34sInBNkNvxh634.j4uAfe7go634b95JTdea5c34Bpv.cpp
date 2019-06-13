
        
          case psModePS:
    // rotate, translate, and scale page
    imgWidth = imgURX - imgLLX;
    imgHeight = imgURY - imgLLY;
    x1 = (int)floor(state->getX1());
    y1 = (int)floor(state->getY1());
    x2 = (int)ceil(state->getX2());
    y2 = (int)ceil(state->getY2());
    width = x2 - x1;
    height = y2 - y1;
    tx = ty = 0;
    // rotation and portrait/landscape mode
    if (rotate0 >= 0) {
      rotate = (360 - rotate0) % 360;
      landscape = gFalse;
    } else {
      rotate = (360 - state->getRotate()) % 360;
      if (rotate == 0 || rotate == 180) {
	if (width > height && width > imgWidth) {
	  rotate += 90;
	  landscape = gTrue;
	} else {
	  landscape = gFalse;
	}
      } else { // rotate == 90 || rotate == 270
	if (height > width && height > imgWidth) {
	  rotate = 270 - rotate;
	  landscape = gTrue;
	} else {
	  landscape = gFalse;
	}
      }
    }
    writePSFmt('%%PageOrientation: {0:s}\n',
	       landscape ? 'Landscape' : 'Portrait');
    writePS('pdfStartPage\n');
    if (rotate == 0) {
      imgWidth2 = imgWidth;
      imgHeight2 = imgHeight;
    } else if (rotate == 90) {
      writePS('90 rotate\n');
      ty = -imgWidth;
      imgWidth2 = imgHeight;
      imgHeight2 = imgWidth;
    } else if (rotate == 180) {
      writePS('180 rotate\n');
      imgWidth2 = imgWidth;
      imgHeight2 = imgHeight;
      tx = -imgWidth;
      ty = -imgHeight;
    } else { // rotate == 270
      writePS('270 rotate\n');
      tx = -imgHeight;
      imgWidth2 = imgHeight;
      imgHeight2 = imgWidth;
    }
    // shrink or expand
    if (xScale0 > 0 && yScale0 > 0) {
      xScale = xScale0;
      yScale = yScale0;
    } else if ((globalParams->getPSShrinkLarger() &&
	 (width > imgWidth2 || height > imgHeight2)) ||
	(globalParams->getPSExpandSmaller() &&
	 (width < imgWidth2 && height < imgHeight2))) {
      xScale = (double)imgWidth2 / (double)width;
      yScale = (double)imgHeight2 / (double)height;
      if (yScale < xScale) {
	xScale = yScale;
      } else {
	yScale = xScale;
      }
    } else {
      xScale = yScale = 1;
    }
    // deal with odd bounding boxes or clipping
    if (clipLLX0 < clipURX0 && clipLLY0 < clipURY0) {
      tx -= xScale * clipLLX0;
      ty -= yScale * clipLLY0;
    } else {
      tx -= xScale * x1;
      ty -= yScale * y1;
    }
    // center
    if (tx0 >= 0 && ty0 >= 0) {
      tx += rotate == 0 ? tx0 : ty0;
      ty += rotate == 0 ? ty0 : -tx0;
    } else if (globalParams->getPSCenter()) {
      if (clipLLX0 < clipURX0 && clipLLY0 < clipURY0) {
	tx += (imgWidth2 - xScale * (clipURX0 - clipLLX0)) / 2;
	ty += (imgHeight2 - yScale * (clipURY0 - clipLLY0)) / 2;
      } else {
	tx += (imgWidth2 - xScale * width) / 2;
	ty += (imgHeight2 - yScale * height) / 2;
      }
    }
    tx += rotate == 0 ? imgLLX : imgLLY;
    ty += rotate == 0 ? imgLLY : -imgLLX;
    if (tx != 0 || ty != 0) {
      writePSFmt('{0:.6g} {1:.6g} translate\n', tx, ty);
    }
    if (xScale != 1 || yScale != 1) {
      writePSFmt('{0:.6f} {1:.6f} scale\n', xScale, yScale);
    }
    if (clipLLX0 < clipURX0 && clipLLY0 < clipURY0) {
      writePSFmt('{0:.6g} {1:.6g} {2:.6g} {3:.6g} re W\n',
		 clipLLX0, clipLLY0, clipURX0 - clipLLX0, clipURY0 - clipLLY0);
    } else {
      writePSFmt('{0:d} {1:d} {2:d} {3:d} re W\n', x1, y1, x2 - x1, y2 - y1);
    }
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    GBool PageAttrs::readBox(Dict *dict, char *key, PDFRectangle *box) {
  PDFRectangle tmp;
  double t;
  Object obj1, obj2;
  GBool ok;
    }
    
      // Get the next object from the input stream.
  Object *getObj(Object *obj, Guchar *fileKey = NULL,
		 CryptAlgorithm encAlgorithm = cryptRC4, int keyLength = 0,
		 int objNum = 0, int objGen = 0);
  
  Object *getObj(Object *obj, Guchar *fileKey,
     CryptAlgorithm encAlgorithm, int keyLength,
     int objNum, int objGen, std::set<int> *fetchOriginatorNums);
    
    private:
    
      // Check the document's encryption.  If the document is encrypted,
  // this will first try <ownerPassword> and <userPassword> (in
  // 'batch' mode), and if those fail, it will attempt to request a
  // password from the user.  This is the high-level function that
  // calls the lower level functions for the specific security handler
  // (requesting a password three times, etc.).  Returns true if the
  // document can be opened (if it's unencrypted, or if a correct
  // password is obtained); false otherwise (encrypted and no correct
  // password).
  GBool checkEncryption(GooString *ownerPassword,
			GooString *userPassword);
    
      fileName = NULL;
  samplingRate = 0.0;
  channels = 1;
  bitsPerSample = 8;
  encoding = soundRaw;
    
      // Get the Splash object.
  Splash *getSplash() { return splash; }
    
    #ifndef STDINCACHELOADER_H
#define STDINCACHELOADER_H
    
        Rational result{ prat };
    destroyrat(prat);
    
            if (m_bInv
            && ((wParam == IDC_CHOP) || (wParam == IDC_SIN) || (wParam == IDC_COS) || (wParam == IDC_TAN) || (wParam == IDC_LN) || (wParam == IDC_DMS)
                || (wParam == IDC_DEGREES) || (wParam == IDC_SINH) || (wParam == IDC_COSH) || (wParam == IDC_TANH)))
        {
            m_bInv = false;
        }
    
            std::wstring value;
    
    #ifndef MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#define MXNET_KVSTORE_GRADIENT_COMPRESSION_H_
#include <dmlc/parameter.h>
#include <string>
#include <utility>
#include <vector>
#include 'mxnet/ndarray.h'
    
    // C callback that can be used by TVM to extract
// the WrapAsyncCall function.
extern 'C' MXNET_DLL int MXTVMBridge(TVMFunctionHandle pregister) {
  using tvm::runtime::PackedFunc;
  const PackedFunc& fregister =
      *static_cast<PackedFunc*>(pregister);
  fregister('WrapAsyncCall', PackedFunc(mxnet::WrapAsyncCall));
  return 0;
}
