
        
        class IntSimdMatrixTest : public ::testing::Test {
 protected:
  // Makes a random weights matrix of the given size.
  GENERIC_2D_ARRAY<int8_t> InitRandom(int no, int ni) {
    GENERIC_2D_ARRAY<int8_t> a(no, ni, 0);
    for (int i = 0; i < no; ++i) {
      for (int j = 0; j < ni; ++j) {
        a(i, j) = static_cast<int8_t>(random_.SignedRand(INT8_MAX));
      }
    }
    return a;
  }
  // Makes a random input vector of the given size, with rounding up.
  std::vector<int8_t> RandomVector(int size, const IntSimdMatrix& matrix) {
    int rounded_size = matrix.RoundInputs(size);
    std::vector<int8_t> v(rounded_size, 0);
    for (int i = 0; i < size; ++i) {
      v[i] = static_cast<int8_t>(random_.SignedRand(INT8_MAX));
    }
    return v;
  }
  // Makes a random scales vector of the given size.
  GenericVector<double> RandomScales(int size) {
    GenericVector<double> v(size, 0.0);
    for (int i = 0; i < size; ++i) {
      v[i] = 1.0 + random_.SignedRand(1.0);
    }
    return v;
  }
  // Tests a range of sizes and compares the results against the base_ version.
  void ExpectEqualResults(IntSimdMatrix* matrix) {
    for (int num_out = 1; num_out < 130; ++num_out) {
      for (int num_in = 1; num_in < 130; ++num_in) {
        GENERIC_2D_ARRAY<int8_t> w = InitRandom(num_out, num_in + 1);
        matrix->Init(w);
        std::vector<int8_t> u = RandomVector(num_in, *matrix);
        GenericVector<double> scales = RandomScales(num_out);
        std::vector<double> base_result(num_out);
        base_.MatrixDotVector(w, scales, u.data(), base_result.data());
        std::vector<double> test_result(num_out);
        matrix->MatrixDotVector(w, scales, u.data(), test_result.data());
        for (int i = 0; i < num_out; ++i)
          EXPECT_FLOAT_EQ(base_result[i], test_result[i]) << 'i=' << i;
      }
    }
  }
    }
    
    /***********************************************************************
 *              ELIST::assign_to_sublist
 *
 *  The list is set to a sublist of another list.  'This' list must be empty
 *  before this function is invoked.  The two iterators passed must refer to
 *  the same list, different from 'this' one.  The sublist removed is the
 *  inclusive list from start_it's current position to end_it's current
 *  position.  If this range passes over the end of the source list then the
 *  source list has its end set to the previous element of start_it.  The
 *  extracted sublist is unaffected by the end point of the source list, its
 *  end point is always the end_it position.
 **********************************************************************/
    
      // Sets up the network for training. Initializes weights using weights of
  // scale `range` picked according to the random number generator `randomizer`.
  // Returns the number of weights initialized.
  int InitWeights(float range, TRand* randomizer) override;
  // Recursively searches the network for softmaxes with old_no outputs,
  // and remaps their outputs according to code_map. See network.h for details.
  int RemapOutputs(int old_no, const std::vector<int>& code_map) override;
    
    #if defined(_WIN32)
#if defined(MINGW)
// workaround for stdlib.h with -std=c++11 for _splitpath and _MAX_FNAME
#undef __STRICT_ANSI__
#endif  // MINGW
#include <fcntl.h>
#include <io.h>
#else
#include <dirent.h>
#include <libgen.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#endif  // _WIN32
    
      // PAGE
  n = snprintf(buf, sizeof(buf),
               '%ld 0 obj\n'
               '<<\n'
               '  /Type /Page\n'
               '  /Parent %ld 0 R\n'
               '  /MediaBox [0 0 %.2f %.2f]\n'
               '  /Contents %ld 0 R\n'
               '  /Resources\n'
               '  <<\n'
               '    %s'
               '    /ProcSet [ /PDF /Text /ImageB /ImageI /ImageC ]\n'
               '    /Font << /f-0-0 %ld 0 R >>\n'
               '  >>\n'
               '>>\n'
               'endobj\n',
               obj_,
               2L,  // Pages object
               width, height,
               obj_ + 1,  // Contents object
               xobject,   // Image object
               3L);       // Type0 Font
  if (n >= sizeof(buf)) return false;
  pages_.push_back(obj_);
  AppendPDFObject(buf);
    
      ParseArgs(argc, argv, &lang, &image, &outputbase, &datapath, &list_langs,
            &print_parameters, &vars_vec, &vars_values, &arg_i, &pagesegmode,
            &enginemode);
    
    namespace tesseract {
    }
    
      // Gather font id statistics.
  for (page_res_it.restart_page(); page_res_it.word() != nullptr;
       page_res_it.forward()) {
    word = page_res_it.word();
    if (word->fontinfo != nullptr) {
      doc_fonts.add(word->fontinfo->universal_id, word->fontinfo_id_count);
    }
    if (word->fontinfo2 != nullptr) {
      doc_fonts.add(word->fontinfo2->universal_id, word->fontinfo_id2_count);
    }
  }
  int16_t doc_font;               // modal font
  int8_t doc_font_count;          // modal font
  find_modal_font(&doc_fonts, &doc_font, &doc_font_count);
  if (doc_font_count == 0)
    return;
  // Get the modal font pointer.
  const FontInfo* modal_font = nullptr;
  for (page_res_it.restart_page(); page_res_it.word() != nullptr;
       page_res_it.forward()) {
    word = page_res_it.word();
    if (word->fontinfo != nullptr && word->fontinfo->universal_id == doc_font) {
      modal_font = word->fontinfo;
      break;
    }
    if (word->fontinfo2 != nullptr && word->fontinfo2->universal_id == doc_font) {
      modal_font = word->fontinfo2;
      break;
    }
  }
  ASSERT_HOST(modal_font != nullptr);
    
        // Search if any blob can be merged into blob. If found, then we mark all
    // these blobs as BSTT_SKIP.
    BLOBNBOX_C_IT blob_it2 = blob_it;
    bool found = false;
    while (!blob_it2.at_last()) {
      BLOBNBOX* nextblob = blob_it2.forward();
      const TBOX& nextblob_box = nextblob->bounding_box();
      if (nextblob_box.left() >= blob_box.right()) {
        break;
      }
      const float kWidthR = 0.4, kHeightR = 0.3;
      bool xoverlap = blob_box.major_x_overlap(nextblob_box),
          yoverlap = blob_box.y_overlap(nextblob_box);
      float widthR = static_cast<float>(
          MIN(nextblob_box.width(), blob_box.width())) /
          MAX(nextblob_box.width(), blob_box.width());
      float heightR = static_cast<float>(
          MIN(nextblob_box.height(), blob_box.height())) /
          MAX(nextblob_box.height(), blob_box.height());
    }
    
    namespace osquery {
namespace tables {
    }
    }
    
     protected:
  /**
   * @brief Initialize the logger with the name of the binary and any status
   * logs generated between program launch and logger start.
   *
   * The logger initialization is called once CLI flags have been parsed, the
   * registry items are constructed, extension routes broadcasted and extension
   * plugins discovered (as a logger may be an extension plugin) and the config
   * has been loaded (which may include additional CLI flag-options).
   *
   * All of these actions may have generated VERBOSE, INFO, WARNING, or ERROR
   * logs. The internal logging facility, Glog, collects these intermediate
   * status logs and a customized log sink buffers them until the active
   * osquery logger's `init` method is called.
   *
   * @param binary_name The string name of the process (argv[0]).
   * @param log The set of status (INFO, WARNING, ERROR) logs generated before
   * the logger's `init` method was called.
   */
  virtual void init(const std::string& binary_name,
                    const std::vector<StatusLogLine>& log) = 0;
    
    Status FilesystemConfigPlugin::genPack(const std::string& name,
                                       const std::string& value,
                                       std::string& pack) {
  if (name == '*') {
    // The config requested a multi-pack.
    std::vector<std::string> paths;
    resolveFilePattern(value, paths);
    }
    }
    
      ASSERT_EQ(0U, geteuid());
    
    
    {  val = getEnvVar('GTEST_OSQUERY');
  EXPECT_FALSE(val);
  EXPECT_FALSE(val.is_initialized());
}
    
    namespace osquery {
    }
    
    
    {    _state = EXPECTS_CRASH_DUMP_END;
    return 0;
}
    
    #include <vector>
#include <string>
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    public:
  AbstractProxyRequestCommand(cuid_t cuid, const std::shared_ptr<Request>& req,
                              const std::shared_ptr<FileEntry>& fileEntry,
                              RequestGroup* requestGroup, DownloadEngine* e,
                              const std::shared_ptr<Request>& proxyRequest,
                              const std::shared_ptr<SocketCore>& s);
    
    namespace aria2 {
    }
    
      CFRef<CFDataRef> data(SecCertificateCopyData(ref.get()));
  if (!data) {
    A2_LOG_ERROR('Failed to get a data!');
    return false;
  }
    
    private:
  TLSSessionSide side_;
  TLSVersion minTLSVer_;
  bool verifyPeer_;
  SecIdentityRef credentials_;