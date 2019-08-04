
        
        namespace xla {
namespace gpu {
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    { private:
  const std::vector<BufferAllocation::Slice> tuple_element_buffers_;
  const BufferAllocation::Slice dest_buffer_;
};
    
    Example 1:
  DATA  = [1, 2, 3, 4, 5, 6, 7, 8]
  RANGES = [
    [
      [2, 4],
      [0, 2],
    ],
    [
      [0, 0],
      [6, 2],
    ]
  ]
  lengths = [4, 2]
  OUTPUT[0] = [[3, 4, 5, 6], [0, 0, 0, 0]]
  OUTPUT[1] = [[1, 2], [7, 8]]
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
    String ResourceFormatLoaderVideoStreamGDNative::get_resource_type(const String &p_path) const {
	String el = p_path.get_extension().to_lower();
	if (VideoDecoderServer::get_instance()->get_extensions().has(el))
		return 'VideoStreamGDNative';
	return '';
}

    
    	operator Variant() const;
    
    	for (int i = 0; i < connected_sources.size(); i++) {
		MIDIEndpointRef source = connected_sources[i];
		MIDIPortDisconnectSource(port_in, source);
	}
	connected_sources.clear();
    
    	Vector<MIDIEndpointRef> connected_sources;
    
    
    {	MIDIDriverWinMidi();
	virtual ~MIDIDriverWinMidi();
};
    
    #include 'db/builder.h'
    
    
    {}  // namespace leveldb
    
    // WriteBatchInternal provides static methods for manipulating a
// WriteBatch that we don't want in the public WriteBatch interface.
class WriteBatchInternal {
 public:
  // Return the number of entries in the batch.
  static int Count(const WriteBatch* batch);
    }
    
    class Slice;
    
      // Add an element that should not be reflected in the iterator.
  ASSERT_OK(db->Put(write_options, '25', 'cd'));
    
    #endif  // STORAGE_LEVELDB_TABLE_MERGER_H_

    
    
    {  // - DSC comments must be printable ASCII; control chars and
  //   backslashes have to be escaped (we do cheap Unicode-to-ASCII
  //   conversion by simply ignoring the high byte)
  // - lines are limited to 255 chars (we limit to 200 here to allow
  //   for the keyword, which was emitted by the caller)
  // - lines that start with a left paren are treated as <text>
  //   instead of <textline>, so we escape a leading paren
  if (s->getLength() >= 2 &&
      (s->getChar(0) & 0xff) == 0xfe &&
      (s->getChar(1) & 0xff) == 0xff) {
    i = 3;
    step = 2;
  } else {
    i = 0;
    step = 1;
  }
  for (j = 0; i < s->getLength() && j < 200; i += step) {
    c = s->getChar(i) & 0xff;
    if (c == '\\') {
      writePS('\\\\');
      j += 2;
    } else if (c < 0x20 || c > 0x7e || (j == 0 && c == '(')) {
      writePSFmt('\\{0:03o}', c);
      j += 4;
    } else {
      writePSChar(c);
      ++j;
    }
  }
  writePS('\n');
}

    
    void PSTokenizer::consumeChar() {
  charBuf = -1;
}
    
      // Return a list of annots. Ownership is transferred to the caller.
  Annots *getAnnots(Catalog *catalog);
    
    class PageLabelInfo {
public:
  PageLabelInfo(Object *tree, int numPages);
  ~PageLabelInfo();
  GBool labelToIndex(GooString *label, int *index);
  GBool indexToLabel(int index, GooString *label);
    }
    
    //------------------------------------------------------------------------
// PageTransition
//------------------------------------------------------------------------
    
    
    {  // clip
  if (haveCSPattern || (render & 4)) {
    if ((path = font->getGlyphPath(code))) {
      path->offset((SplashCoord)x, (SplashCoord)y);
      if (textClipPath) {
	textClipPath->append(path);
	delete path;
      } else {
	textClipPath = path;
      }
    }
  }
}
    
      // Destructor.
  virtual ~SplashOutputDev();