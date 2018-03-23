
        
        /**
 * @name tess_acceptable_word
 *
 * @return true if the word is regarded as 'good enough'.
 * @param word_choice after context
 * @param raw_choice before context
 */
bool Tesseract::tess_acceptable_word(WERD_RES* word) {
  return getDict().AcceptableResult(word);
}
    
    
    {}

    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    
/**********************************************************************
 * QLSQ::add
 *
 * Add an element to the accumulator.
 **********************************************************************/
    
    class QRSequenceGenerator {
 public:
  // Object is initalized with the size of the output range.
  explicit QRSequenceGenerator(int N) : N_(N), next_num_(0) {
    num_bits_ = static_cast<int>(ceil(log(static_cast<double>(N)) / log(2.0)));
  }
    }
    
    /// Start an ExtensionManagerRunner thread.
Status startExtensionManager();
    
    /**
 * @brief Helper accessor/assignment alias class to support deprecated flags.
 *
 * This templated class wraps Flag::updateValue and Flag::getValue to 'alias'
 * a deprecated flag name as the updated name. The helper macro FLAG_ALIAS
 * will create a global variable instances of this wrapper using the same
 * Gflags naming scheme to prevent collisions and support existing callsites.
 */
template <typename T>
class FlagAlias {
 public:
  FlagAlias& operator=(T const& v) {
    Flag::updateValue(name_, boost::lexical_cast<std::string>(v));
    return *this;
  }
    }
    
    /**
 * @brief Getter for the current UNIX time.
 *
 * @return an int representing the amount of seconds since the UNIX epoch
 */
size_t getUnixTime();
    
      // Create the IOCTL (and more) device node.
  osquery.devfs = devfs_make_node(makedev(osquery.major_number, 0),
                                  DEVFS_CHAR,
                                  UID_ROOT,
                                  GID_WHEEL,
                                  0600,
                                  'osquery',
                                  0);
  if (osquery.devfs == NULL) {
    dbg_printf('Could not get a devfs entry!\n');
    goto error_exit;
  }
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
     protected:
  /*!
   * \brief to be implemented by subclass,
   * get next token, return EOF if end of file
   */
  virtual char GetChar(void) = 0;
  /*! \brief to be implemented by child, check if end of stream */
  virtual bool IsEnd(void) = 0;