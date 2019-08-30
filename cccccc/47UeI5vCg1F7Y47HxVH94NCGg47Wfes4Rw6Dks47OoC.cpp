
        
        TEST(ClusteredBitVector, AddAdd) {
  ClusteredBitVector vec;
  vec.add(8, 206);
  vec.add(17, 56854);
  EXPECT_EQ(25u, vec.size());
  EXPECT_EQ(true, vec[9]);
}
    
    KNOWN_STDLIB_TYPE_DECL(Encoder, ProtocolDecl, 1)
KNOWN_STDLIB_TYPE_DECL(Decoder, ProtocolDecl, 1)
KNOWN_STDLIB_TYPE_DECL(KeyedEncodingContainer, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(KeyedDecodingContainer, NominalTypeDecl, 1)
KNOWN_STDLIB_TYPE_DECL(RangeReplaceableCollection, ProtocolDecl, 1)
    
      uselocale(OldLocale);
    
    #ifndef SWIFT_REFLECTION_METADATASOURCEBUILDER_H
#define SWIFT_REFLECTION_METADATASOURCEBUILDER_H
    
      /// The required alignment of the first byte of an object of this
  /// type, expressed as a mask of the low bits that must not be set
  /// in the pointer.
  ///
  /// This representation can be easily converted to the 'alignof'
  /// result by merely adding 1, but it is more directly useful for
  /// performing dynamic structure layouts, and it grants an
  /// additional bit of precision in a compact field without needing
  /// to switch to an exponent representation.
  ///
  /// For example, if the type needs to be 8-byte aligned, the
  /// appropriate alignment mask should be 0x7.
  size_t getAlignmentMask() const {
    return (Data & AlignmentMask);
  }
  constexpr TargetValueWitnessFlags withAlignmentMask(size_t alignMask) const {
    return TargetValueWitnessFlags((Data & ~AlignmentMask) | alignMask);
  }
    
      /// Attempt to collect information from the given info chunk.
  ///
  /// \return true if collection was successful.
  template <bool Asserting>
  bool collect(StringRef value) {
#define check(CONDITION, COMMENT)            \
    do {                                     \
      if (!Asserting) {                      \
        if (!(CONDITION)) return false;      \
      } else {                               \
        assert((CONDITION) && COMMENT);      \
      }                                      \
    } while (false)
    }
    
    public:
  /// Retrieve the argument labels provided at the call site.
  ArrayRef<Identifier> getArgumentLabels() const {
    return { this->template getTrailingObjects<Identifier>(),
             asDerived().getNumArguments() };
  }
    
    /// <summary>
/// Invoked when Navigation to a certain page fails
/// </summary>
/// <param name='sender'>The Frame which failed navigation</param>
/// <param name='e'>Details about the navigation failure</param>
void App::OnNavigationFailed(Platform::Object ^ sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^ e)
{
    throw ref new FailureException('Failed to load Page ' + e->SourcePageType.Name);
}

    
    bool HorizontalNoOverflowStackPanel::ShouldPrioritizeLastItem()
{
    return false;
}
    
    inline constexpr auto IDS_DIVBYZERO = IDS_ERRORS_FIRST;
inline constexpr auto IDS_DOMAIN = IDS_ERRORS_FIRST + 1;
inline constexpr auto IDS_UNDEFINED = IDS_ERRORS_FIRST + 2;
inline constexpr auto IDS_POS_INFINITY = IDS_ERRORS_FIRST + 3;
inline constexpr auto IDS_NEG_INFINITY = IDS_ERRORS_FIRST + 4;
inline constexpr auto IDS_NOMEM = IDS_ERRORS_FIRST + 6;
inline constexpr auto IDS_TOOMANY = IDS_ERRORS_FIRST + 7;
inline constexpr auto IDS_OVERFLOW = IDS_ERRORS_FIRST + 8;
inline constexpr auto IDS_NORESULT = IDS_ERRORS_FIRST + 9;
inline constexpr auto IDS_INSUFFICIENT_DATA = IDS_ERRORS_FIRST + 10;
    
    // Used to strip trailing zeros, and prevent combinatorial explosions
bool stripzeroesnum(_Inout_ PNUMBER pnum, int32_t starting);