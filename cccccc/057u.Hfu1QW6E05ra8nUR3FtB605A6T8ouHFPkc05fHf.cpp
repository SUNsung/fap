
        
        Optional<PlatformKind> swift::platformFromString(StringRef Name) {
  if (Name == '*')
    return PlatformKind::none;
  return llvm::StringSwitch<Optional<PlatformKind>>(Name)
#define AVAILABILITY_PLATFORM(X, PrettyName) .Case(#X, PlatformKind::X)
#include 'swift/AST/PlatformKinds.def'
      .Case('macOS', PlatformKind::OSX)
      .Case('macOSApplicationExtension', PlatformKind::OSXApplicationExtension)
      .Default(Optional<PlatformKind>());
}
    
      // Construct a generic signature builder by collecting the constraints
  // from the requirement and the context of the conformance together,
  // because both define the capabilities of the requirement.
  GenericSignatureBuilder builder(ctx);
    
    
    {  return false;
}
    
    void
swift::trimLeadingWhitespaceFromLines(StringRef RawText,
                                      unsigned WhitespaceToTrim,
                                      SmallVectorImpl<StringRef> &OutLines) {
  SmallVector<StringRef, 8> Lines;
    }
    
    
    {      ExecutingTasks.push(PidTaskPair(Pid, std::move(T)));
    }
    
    StringRef swift::unicode::extractFirstExtendedGraphemeCluster(StringRef S) {
  // Extended grapheme cluster segmentation algorithm as described in Unicode
  // Standard Annex #29.
  if (S.empty())
    return StringRef();
    }
    
    
    {  return forInvalid();
}
    
    public:
    explicit TransactionDescDialog(const QModelIndex &idx, QWidget *parent = 0);
    ~TransactionDescDialog();
    
        /* Construct and verify corresponding public key. */
    CHECK(secp256k1_ec_seckey_verify(ctx, privkey) == 1);
    CHECK(secp256k1_ec_pubkey_create(ctx, &pubkey, privkey) == 1);
    
    #include <boost/test/unit_test.hpp>
    
        // Escapes
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\ Baz\'', {
            {'Foo', 'Bar Baz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\Baz\'', {
            {'Foo', 'BarBaz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\@Baz\'', {
            {'Foo', 'Bar@Baz'},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\\'Baz\' Spam=\'\\\'Eggs\\\'\'', {
            {'Foo', 'Bar\'Baz'},
            {'Spam', '\'Eggs\''},
        });
    CheckParseTorReplyMapping(
        'Foo=\'Bar\\\\Baz\'', {
            {'Foo', 'Bar\\Baz'},
        });
    
            template<typename T>
        explicit FormatArg(const T& value)
            : m_value(static_cast<const void*>(&value)),
            m_formatImpl(&formatImpl<T>),
            m_toIntImpl(&toIntImpl<T>)
        { }
    
    int UniValue::get_int() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int32_t retval;
    if (!ParseInt32(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    
    {    BOOST_CHECK(v.setNull());
    BOOST_CHECK(v.isNull());
}