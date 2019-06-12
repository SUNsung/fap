
        
            http://www.apache.org/licenses/LICENSE-2.0
    
      for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // We define the PY_ARRAY_UNIQUE_SYMBOL in this .cc file and provide an
// ImportNumpy function to populate it.
#define TF_IMPORT_NUMPY
    
    #ifndef PyObject_HEAD
struct _object;
typedef _object PyObject;
#endif
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {
    {}  // namespace host
}  // namespace stream_executor

    
    using std::chrono::duration_cast;
    
    // This file contains declarations relating to kernel cache configuration
// parameters recognized by the StreamExecutor.
#ifndef TENSORFLOW_STREAM_EXECUTOR_KERNEL_CACHE_CONFIG_H_
#define TENSORFLOW_STREAM_EXECUTOR_KERNEL_CACHE_CONFIG_H_
    
    namespace caffe {
    }
    
      virtual inline const char* type() const { return 'Bias'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int MaxBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      virtual inline const char* type() const { return 'Convolution'; }
    
      Blob<int> offsets;
  Blob<int> src_strides_;
  Blob<int> dest_strides_;
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of DeConvolutionLayer.
 *        Fallback to DeConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates deconvolution through forward kernels for filtering and
 * bias plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
*/
template <typename Dtype>
class CuDNNDeconvolutionLayer : public DeconvolutionLayer<Dtype> {
 public:
  explicit CuDNNDeconvolutionLayer(const LayerParameter& param)
    : DeconvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
                          const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
                       const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNDeconvolutionLayer();
    }
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /* TessWinding */
#define GLU_TESS_WINDING_ODD               100130
#define GLU_TESS_WINDING_NONZERO           100131
#define GLU_TESS_WINDING_POSITIVE          100132
#define GLU_TESS_WINDING_NEGATIVE          100133
#define GLU_TESS_WINDING_ABS_GEQ_TWO       100134
    
    
    {    // put the inner array into the outer array
    writePSFmt('{0:d} array 1 index {1:d} 2 index put\n',
	       innerSize, outer);
    line = col = 0;
    writePS((char *)(useASCIIHex ? 'dup 0 <' : 'dup 0 <~'));
    for (;;) {
      do {
	c = str->getChar();
      } while (c == '\n' || c == '\r');
      if (c == (useASCIIHex ? '>' : '~') || c == EOF) {
	break;
      }
      if (c == 'z') {
	writePSChar(c);
	++col;
      } else {
	writePSChar(c);
	++col;
	for (i = 1; i <= (useASCIIHex ? 1 : 4); ++i) {
	  do {
	    c = str->getChar();
	  } while (c == '\n' || c == '\r');
	  if (c == (useASCIIHex ? '>' : '~') || c == EOF) {
	    break;
	  }
	  writePSChar(c);
	  ++col;
	}
      }
      if (c == (useASCIIHex ? '>' : '~') || c == EOF) {
	break;
      }
      // each line is: 'dup nnnnn <~...data...~> put<eol>'
      // so max data length = 255 - 20 = 235
      // chunks are 1 or 4 bytes each, so we have to stop at 232
      // but make it 225 just to be safe
      if (col > 225) {
	writePS((char *)(useASCIIHex ? '> put\n' : '~> put\n'));
	++line;
	if (line >= innerSize) break;
	writePSFmt((char *)(useASCIIHex ? 'dup {0:d} <' : 'dup {0:d} <~'), line);
	col = 0;
      }
    }
    if (c == (useASCIIHex ? '>' : '~') || c == EOF) {
      writePS((char *)(useASCIIHex ? '> put\n' : '~> put\n'));
      if (useRLE) {
	++line;
	writePSFmt('{0:d} <> put\n', line);
      } else {
	writePS('pop\n');
      }
      break;
    }
    writePS('pop\n');
    size -= innerSize;
  }
  writePS('pop\n');
  str->close();
    
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
    
      // Get direction
  PageTransitionDirection getDirection() { return direction; }
    
      XRef *xref;			// the xref table for this PDF file
  Lexer *lexer;			// input stream
  GBool allowStreams;		// parse stream objects?
  Object buf1, buf2;		// next two tokens
  int inlineImg;		// set when inline image data is encountered
    
    #include <config.h>
    
      //
  // Parse media clip data
  //
  if (obj->dictLookup('C', &tmp2)->isDict()) { // media clip
    hasClip = gTrue;
    if (tmp2.dictLookup('S', &tmp)->isName()) {
      if (!strcmp(tmp.getName(), 'MCD')) { // media clip data
        Object obj1, obj2;
	if (tmp2.dictLookup('D', &obj1)->isDict()) {
	  if (obj1.dictLookup('F', &obj2)->isString()) {
	    fileName = obj2.getString()->copy();
	  }
	  obj2.free();
	  if (obj1.dictLookup('EF', &obj2)->isDict()) {
	    Object embedded;
	    if (obj2.dictLookup('F', &embedded)->isStream()) {
	      isEmbedded = gTrue;
	      embeddedStream = embedded.getStream();
	      // 'copy' stream
	      embeddedStream->incRef();
	    }
	    embedded.free();
	  }
	  obj2.free();
    }
    }
    }
    }
    
    #include <config.h>
    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
    public:
  DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode);
    
      Time serializedTime_;
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}