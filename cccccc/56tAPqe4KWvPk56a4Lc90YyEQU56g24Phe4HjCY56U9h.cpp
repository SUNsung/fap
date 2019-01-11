
        
        namespace atom {
    }
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(Net);
};
    
    #if defined(OS_LINUX)
void PowerMonitor::BlockShutdown() {
  PowerObserverLinux::BlockShutdown();
}
    
    #include 'atom/browser/api/trackable_object.h'
#include 'atom/browser/lib/power_observer.h'
#include 'base/compiler_specific.h'
#include 'native_mate/handle.h'
#include 'ui/base/idle/idle.h'
    
    
    {}  // namespace atom
    
      gfx::Point GetCursorScreenPoint();
  display::Display GetPrimaryDisplay();
  std::vector<display::Display> GetAllDisplays();
  display::Display GetDisplayNearestPoint(const gfx::Point& point);
  display::Display GetDisplayMatching(const gfx::Rect& match_rect);
    
    namespace mate {
    }
    
    #include 'atom/browser/atom_quota_permission_context.h'
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
      // There is an update available and it is being downloaded
  virtual void OnUpdateAvailable() {}
    
    namespace grpc {
    }
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CONTEXT_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CONTEXT_H
    
    bool ProtoServerReflectionPlugin::has_sync_methods() const {
  if (reflection_service_) {
    return reflection_service_->has_synchronous_methods();
  }
  return false;
}
    
    #ifndef GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
#define GRPC_SRC_CPP_SERVER_LOAD_REPORTER_GET_CPU_STATS_H
    
    #endif

    
    
    {
    {}}
    
         // GP Register cannot be greater than 31
     assert(static_cast<uint32_t>(rb) < 32);
     assert(static_cast<uint32_t>(ra) < 32);
     assert(static_cast<uint32_t>(rb) < 32);
    
        if (!semi) {
      // only media type (type/subtype,data)
      ssize_t media_len = comma - data;
      meta_len -= media_len;
      data += media_len;
    } else if (slash && slash < semi) {
      // media type + param (type/subtype;param,data)
      ssize_t media_len = semi - data;
      meta_len -= media_len;
      data += media_len;
    } else {
      // no media type (;base64,data)
      if (semi != data // ex. foo;base64,data
          || meta_len != sizeof(';base64') - 1 // ex. ;something,data
          || memcmp(data, ';base64',
                    sizeof(';base64') - 1)) { // ex. ;base65,data
          raise_warning('rfc2397: invalid meta data');
          return nullptr;
        }
    }
    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
    
    {    // If the -c option is specified without a -n, php behavior is to
    // load the default ini/hdf
    auto cb = [&newargv] (const char *filename) {
      newargv.push_back('-c');
      newargv.push_back(filename);
    };
    add_default_config_files_globbed(DEFAULT_CONFIG_DIR '/php*.ini', cb);
    add_default_config_files_globbed(DEFAULT_CONFIG_DIR '/config*.hdf', cb);
  }
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    template<typename F>
void logPerfWarningImpl(folly::StringPiece event, int64_t priority,
                        int64_t rate, F fillCols) {
  auto const effectiveRate = rate * RuntimeOption::EvalPerfWarningSampleRate;
  if (effectiveRate > std::numeric_limits<uint32_t>::max()) return;
  if (!StructuredLog::coinflip(effectiveRate)) return;
    }
    
    #include 'unicode/messagepattern.h'
#include 'unicode/rbnf.h'
#include 'unicode/selfmt.h'
#include 'unicode/uchar.h'
#include 'unicode/ucnv_err.h'
#include 'unicode/umsg.h'
#include 'unicode/ustring.h'
#include 'unicode/utypes.h'
#include 'cmemory.h'
#include 'messageimpl.h'
#include 'patternprops.h'
#include 'selfmtimpl.h'
#include 'uassert.h'
#include 'ustrfmt.h'
#include 'util.h'
#include 'uvector.h'
    
    #include 'unicode/format.h'
#include 'unicode/locid.h'
#include 'unicode/parseerr.h'
#include 'unicode/utypes.h'
#include 'uvector.h'
#include 'hash.h'
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    #ifndef __SHARED_NUMBERFORMAT_H__
#define __SHARED_NUMBERFORMAT_H__
    
    #endif

    
    void 
SimpleTimeZone::setEndRule(int32_t month, int32_t dayOfMonth, 
                           int32_t time, TimeMode mode, UErrorCode& status)
{
    setEndRule(month, dayOfMonth, 0, time, mode, status);
}
    
    UnicodeSet *SimpleDateFormatStaticSets::getIgnorables(UDateFormatField fieldIndex)
{
    UErrorCode status = U_ZERO_ERROR;
    umtx_initOnce(gSimpleDateFormatStaticSetsInitOnce, &smpdtfmt_initSets, status);
    if (U_FAILURE(status)) {
        return NULL;
    }
    
    switch (fieldIndex) {
        case UDAT_YEAR_FIELD:
        case UDAT_MONTH_FIELD:
        case UDAT_DATE_FIELD:
        case UDAT_STANDALONE_DAY_FIELD:
        case UDAT_STANDALONE_MONTH_FIELD:
            return gStaticSets->fDateIgnorables;
            
        case UDAT_HOUR_OF_DAY1_FIELD:
        case UDAT_HOUR_OF_DAY0_FIELD:
        case UDAT_MINUTE_FIELD:
        case UDAT_SECOND_FIELD:
        case UDAT_HOUR1_FIELD:
        case UDAT_HOUR0_FIELD:
            return gStaticSets->fTimeIgnorables;
            
        default:
            return gStaticSets->fOtherIgnorables;
    }
}
    
    static const UChar gZero[] = { 0x7A, 0x65, 0x72, 0x6F };
static const UChar gOne[] = { 0x6F, 0x6E, 0x65 };
static const UChar gTwo[] = { 0x74, 0x77, 0x6F };
static const UChar gFew[] = { 0x66, 0x65, 0x77 };
static const UChar gMany[] = { 0x6D, 0x61, 0x6E, 0x79 };
static const UChar gOther[] = { 0x6F, 0x74, 0x68, 0x65, 0x72 };
    
    /**
 * Implement UnicodeReplacer
 */
void StringReplacer::addReplacementSetTo(UnicodeSet& toUnionTo) const {
    UChar32 ch;
    for (int32_t i=0; i<output.length(); i+=U16_LENGTH(ch)) {
    ch = output.char32At(i);
    UnicodeReplacer* r = data->lookupReplacer(ch);
    if (r == NULL) {
        toUnionTo.add(ch);
    } else {
        r->addReplacementSetTo(toUnionTo);
    }
    }
}