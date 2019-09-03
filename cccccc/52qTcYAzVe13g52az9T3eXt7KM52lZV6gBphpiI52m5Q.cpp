
        
        class FastHufDecoder
{
  public:
    }
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    typedef std::vector<float>
    FloatVector;
    
    
FrameBuffer::ConstIterator
FrameBuffer::find (const char name[]) const
{
    return _map.find (name);
}
    
    OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_ENTER
    
    
class GenericOutputFile
{
    public:
        IMF_EXPORT
        virtual ~GenericOutputFile() {}
    }
    
    
//---------------------
// Template definitions
//---------------------
    
    
//
// DECODING TABLE BUILDING
//
    
    TEST_F(JsonObjectWriterTest, ObjectInList) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->StartList('')
      ->StartObject('')
      ->RenderString('field', 'value')
      ->EndObject()
      ->EndList();
  EXPECT_EQ('[{\'field\':\'value\'}]', CloseStreamAndGetString());
}
    
    TEST(StatusOr, TestPointerAssignmentStatusOk) {
  const int kI = 0;
  StatusOr<const int*> source(&kI);
  StatusOr<const int*> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_EQ(source.ValueOrDie(), target.ValueOrDie());
}
    
    namespace GOOGLE_NAMESPACE = google::protobuf::internal;
    
        if (dataset.message_name() == 'benchmarks.proto3.GoogleMessage1') {
      message = new benchmarks::proto3::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage1') {
      message = new benchmarks::proto2::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage2') {
      message = new benchmarks::proto2::GoogleMessage2;
    } else if (dataset.message_name() ==
        'benchmarks.google_message3.GoogleMessage3') {
      message = new benchmarks::google_message3::GoogleMessage3;
    } else if (dataset.message_name() ==
        'benchmarks.google_message4.GoogleMessage4') {
      message = new benchmarks::google_message4::GoogleMessage4;
    } else {
      std::cerr << 'Unknown message type: ' << dataset.message_name();
      exit(1);
    }
    
        for (int i = 0; i < dataset.payload_size(); i++) {
      message->ParseFromString(dataset.payload(i));
      Proto3DataStripper stripper;
      stripper.StripMessage(message);
      dataset.set_payload(i, message->SerializeAsString());
    }
    
        std::vector<std::pair<string,string>> option_pairs;
    ParseGeneratorParameter(parameter, &option_pairs);
    
    // ReadNextBox factors out the code to interpret a line of a box
// file so that applybox and unicharset_extractor interpret the same way.
// This function returns the next valid box file utf8 string and coords
// and returns true, or false on eof (and closes the file).
// It ignores the utf8 file signature ByteOrderMark (U+FEFF=EF BB BF), checks
// for valid utf-8 and allows space or tab between fields.
// utf8_str is set with the unichar string, and bounding box with the box.
// If there are page numbers in the file, it reads them all.
bool ReadNextBox(int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
// As ReadNextBox above, but get a specific page number. (0-based)
// Use -1 to read any page number. Files without page number all
// read as if they are page 0.
bool ReadNextBox(int target_page, int *line_number, FILE* box_file,
                 STRING* utf8_str, TBOX* bounding_box);
    
      // Returns the x,y means as an FCOORD.
  FCOORD mean_point() const;
    
    static STRING ParagraphJustificationToString(
    tesseract::ParagraphJustification justification) {
  switch (justification) {
    case JUSTIFICATION_LEFT:
      return 'LEFT';
    case JUSTIFICATION_RIGHT:
      return 'RIGHT';
    case JUSTIFICATION_CENTER:
      return 'CENTER';
    default:
      return 'UNKNOWN';
  }
}
    
      /* Reject modes generated after NN_ACCEPT but before MM_ACCEPT */
  R_HYPHEN,        // TEMP Post NN dodgy hyphen or full stop
  R_DUBIOUS,       // TEMP Post NN dodgy chars
  R_NO_ALPHANUMS,  // TEMP No alphanumerics in word after NN
  R_MOSTLY_REJ,    // TEMP Most of word rejected so rej the rest
  R_XHT_FIXUP,     // TEMP Xht tests unsure
    
    #include 'errcode.h'
    
      // Removes the MAXIMUM element of the heap. (MIN from a MAX heap.) If entry is
  // not nullptr, the element is copied into *entry, otherwise it is discarded.
  // Time = O(n). Returns false if the heap was already empty.
  bool PopWorst(Pair* entry) {
    int worst_index = IndexOfWorst();
    if (worst_index < 0) return false;  // It cannot be empty!
    // Extract the worst element from the heap, leaving a hole at worst_index.
    if (entry != nullptr)
      *entry = heap_[worst_index];
    int heap_size = heap_.size() - 1;
    if (heap_size > 0) {
      // Sift the hole upwards to match the last element of the heap_
      Pair hole_pair = heap_[heap_size];
      int hole_index = SiftUp(worst_index, hole_pair);
      heap_[hole_index] = hole_pair;
    }
    heap_.truncate(heap_size);
    return true;
  }
    
    // Displays classification as the given shape_id. Creates as many windows
// as it feels fit, using index as a guide for placement. Adds any created
// windows to the windows output and returns a new index that may be used
// by any subsequent classifiers. Caller waits for the user to view and
// then destroys the windows by clearing the vector.
int TessClassifier::DisplayClassifyAs(
    const TrainingSample& sample, Pix* page_pix, int unichar_id, int index,
    PointerVector<ScrollView>* windows) {
  int shape_id = unichar_id;
  // TODO(rays) Fix this so it works with both flat and real shapetables.
  //  if (GetShapeTable() != nullptr)
  //  shape_id = BestShapeForUnichar(sample, page_pix, unichar_id, nullptr);
  if (shape_id < 0) return index;
  if (UnusedClassIdIn(classify_->PreTrainedTemplates, shape_id)) {
    tprintf('No built-in templates for class/shape %d\n', shape_id);
    return index;
  }
  classify_->ShowBestMatchFor(shape_id, sample.features(),
                              sample.num_features());
  return index;
}
    
      if (obj->dictLookup('D', &tmp)->isArray()) {
    Array * dim = tmp.getArray();
    
    if (dim->getLength() >= 2) {
      Object dd;
      if (dim->get(0, &dd)->isInt()) {
	width = dd.getInt();
      }
      dd.free();
      if (dim->get(1, &dd)->isInt()) {
	height = dd.getInt();
      }
      dd.free();
    }
  }
  tmp.free();