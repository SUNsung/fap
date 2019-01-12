  /// Retrieve the array of replacement types, which line up with the
  /// generic parameters.
  ///
  /// Note that the types may be null, for cases where the generic parameter
  /// is concrete but hasn't been queried yet.
  ArrayRef<Type> getReplacementTypes() const {
    return llvm::makeArrayRef(getTrailingObjects<Type>(),
                              getNumReplacementTypes());
  }
    
    char *DiverseListBase::addNewStorageSlow(std::size_t needed) {
  bool wasInline = isAllocatedInline();
    }
    
    #endif // SWIFT_IMPORTER_CFTYPEINFO_H

    
      // FIXME: Map over source ranges in the diagnostic.
  auto emitDiag = [&ctx, this](clang::FullSourceLoc clangNoteLoc,
                      clang::DiagnosticsEngine::Level clangDiagLevel,
                      StringRef message) {
    decltype(diag::error_from_clang) diagKind;
    switch (clangDiagLevel) {
    case clang::DiagnosticsEngine::Ignored:
      return;
    case clang::DiagnosticsEngine::Note:
      diagKind = diag::note_from_clang;
      break;
    case clang::DiagnosticsEngine::Remark:
      // FIXME: We don't handle remarks yet.
      return;
    case clang::DiagnosticsEngine::Warning:
      diagKind = diag::warning_from_clang;
      break;
    case clang::DiagnosticsEngine::Error:
    case clang::DiagnosticsEngine::Fatal:
      // FIXME: What happens after a fatal error in the importer?
      diagKind = diag::error_from_clang;
      break;
    }
    }
    
    char Mangle::getStandardTypeSubst(StringRef TypeName) {
#define STANDARD_TYPE(KIND, MANGLING, TYPENAME)      \
  if (TypeName == #TYPENAME) {                       \
    return #MANGLING[0];                             \
  }
    }
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    class MenuDelegate : public ui::SimpleMenuModel::Delegate {
 public:
  MenuDelegate(ObjectManager* object_manager);
  ~MenuDelegate() override;
    }
    
    namespace nwapi {
    }
    
        std::string error() const {
      return error_;
    }
    
      NwScreenStopMonitorFunction::NwScreenStopMonitorFunction() {}
    
    
    {}  // namespace tesseract.
    
      /// Get a clone/copy of the source image rectangle.
  /// The returned Pix must be pixDestroyed.
  /// This function will be used in the future by the page layout analysis, and
  /// the layout analysis that uses it will only be available with Leptonica,
  /// so there is no raw equivalent.
  Pix* GetPixRect();
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    // Class to hold a Pixa collection of debug images with captions and save them
// to a PDF file.
class DebugPixa {
 public:
  // TODO(rays) add another constructor with size control.
  DebugPixa() {
    pixa_ = pixaCreate(0);
    fonts_ = bmfCreate(nullptr, 14);
  }
  // If the filename_ has been set and there are any debug images, they are
  // written to the set filename_.
  ~DebugPixa() {
    pixaDestroy(&pixa_);
    bmfDestroy(&fonts_);
  }
    }
    
    // Thread compatible.
class CensusContext {
 public:
  CensusContext() : span_(::opencensus::trace::Span::BlankSpan()) {}
    }
    
    namespace grpc {
    }
    
      // Serializes a GrpcTraceContext into the provided buffer. Returns the number
  // of bytes serialized into the buffer. If the buffer is not of sufficient
  // size (it must be at least kGrpcTraceContextSize bytes) it will drop
  // everything and return 0 bytes serialized. Inlined for performance reasons.
  static size_t Encode(const GrpcTraceContext& tc, char* buf, size_t buf_size) {
    if (buf_size < kGrpcTraceContextSize) {
      return kEncodeDecodeFailure;
    }
    buf[kVersionIdOffset] = kVersionId;
    buf[kTraceIdOffset] = kTraceIdField;
    memcpy(&buf[kTraceIdOffset + 1], tc.trace_id,
           opencensus::trace::TraceId::kSize);
    buf[kSpanIdOffset] = kSpanIdField;
    memcpy(&buf[kSpanIdOffset + 1], tc.span_id,
           opencensus::trace::SpanId::kSize);
    buf[kTraceOptionsOffset] = kTraceOptionsField;
    memcpy(&buf[kTraceOptionsOffset + 1], tc.trace_options,
           opencensus::trace::TraceOptions::kSize);
    return kGrpcTraceContextSize;
  }
    
    // client cumulative
const ViewDescriptor& ClientSentBytesPerRpcCumulative() {
  const static ViewDescriptor descriptor =
      ViewDescriptor()
          .set_name('grpc.io/client/sent_bytes_per_rpc/cumulative')
          .set_measure(kRpcClientSentBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
    #include <grpc/impl/codegen/port_platform.h>
    
    /**
 * Factory method
 */
static Transliterator* RemoveTransliterator_create(const UnicodeString& /*ID*/,
                                                   Transliterator::Token /*context*/) {
    /* We don't need the ID or context. We just remove data */
    return new RemoveTransliterator();
}
    
    #endif

    
    ScriptSet &ScriptSet::parseScripts(const UnicodeString &scriptString, UErrorCode &status) {
    resetAll();
    if (U_FAILURE(status)) {
        return *this;
    }
    UnicodeString oneScriptName;
    for (int32_t i=0; i<scriptString.length();) {
        UChar32 c = scriptString.char32At(i);
        i = scriptString.moveIndex32(i, 1);
        if (!u_isUWhiteSpace(c)) {
            oneScriptName.append(c);
            if (i < scriptString.length()) {
                continue;
            }
        }
        if (oneScriptName.length() > 0) {
            char buf[40];
            oneScriptName.extract(0, oneScriptName.length(), buf, sizeof(buf)-1, US_INV);
            buf[sizeof(buf)-1] = 0;
            int32_t sc = u_getPropertyValueEnum(UCHAR_SCRIPT, buf);
            if (sc == UCHAR_INVALID_CODE) {
                status = U_ILLEGAL_ARGUMENT_ERROR;
            } else {
                this->set((UScriptCode)sc, status);
            }
            if (U_FAILURE(status)) {
                return *this;
            }
            oneScriptName.remove();
        }
    }
    return *this;
}
    
    
    {    useDaylight = (UBool)((startDay != 0) && (endDay != 0) ? TRUE : FALSE);
    if (useDaylight && dstSavings == 0) {
        dstSavings = U_MILLIS_PER_HOUR;
    }
    if (endDay != 0) {
        if (endMonth < UCAL_JANUARY || endMonth > UCAL_DECEMBER) {
            status = U_ILLEGAL_ARGUMENT_ERROR;
            return;
        }
        if (endTime < 0 || endTime > U_MILLIS_PER_DAY ||
            endTimeMode < WALL_TIME || endTimeMode > UTC_TIME) {
            status = U_ILLEGAL_ARGUMENT_ERROR;
            return;
        }
        if (endDayOfWeek == 0) {
            endMode = DOM_MODE;
        } else {
            if (endDayOfWeek > 0) {
                endMode = DOW_IN_MONTH_MODE;
            } else {
                endDayOfWeek = (int8_t)-endDayOfWeek;
                if (endDay > 0) {
                    endMode = DOW_GE_DOM_MODE;
                } else {
                    endDay = (int8_t)-endDay;
                    endMode = DOW_LE_DOM_MODE;
                }
            }
            if (endDayOfWeek > UCAL_SATURDAY) {
                status = U_ILLEGAL_ARGUMENT_ERROR;
                return;
            }
        }
        if (endMode == DOW_IN_MONTH_MODE) {
            if (endDay < -5 || endDay > 5) {
                status = U_ILLEGAL_ARGUMENT_ERROR;
                return;
            }
        } else if (endDay<1 || endDay > STATICMONTHLENGTH[endMonth]) {
            status = U_ILLEGAL_ARGUMENT_ERROR;
            return;
        }
    }
}
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or a negative value
     */
    static int32_t indexOrNegativeFromString(const UnicodeString &keyword);
    
    //eof

    
    namespace rocksdb {
    }
    
    using namespace rocksdb;
    
      // the number of deletion entries before compaction. Deletion entries
  // can disappear after compaction because they expired
  uint64_t num_input_deletion_records;
  // number of deletion records that were found obsolete and discarded
  // because it is not possible to delete any more keys with this entry
  // (i.e. all possible deletions resulting from it have been completed)
  uint64_t num_expired_deletion_records;