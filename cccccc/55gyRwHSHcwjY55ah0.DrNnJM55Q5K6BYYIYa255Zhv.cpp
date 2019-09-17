
        
          void visitInitExistentialValueInst(InitExistentialValueInst *IEVI) {
    SGM.useConformancesFromType(IEVI->getFormalConcreteType());
    SGM.useConformancesFromObjectiveCType(IEVI->getFormalConcreteType());
    for (auto conformance : IEVI->getConformances())
      SGM.useConformance(conformance);
  }
    
      // Add any generic substitutions for the base class.
  Type baseSelfType = baseCalleeType->getSelfParameter().getType();
  if (auto metatypeType = baseSelfType->getAs<MetatypeType>())
    baseSelfType = metatypeType->getInstanceType();
    
    
    {  EXPECT_EQ(31u, vec.size());
  EXPECT_EQ(true, vec[0]);
  EXPECT_EQ(false, vec[1]);
  EXPECT_EQ(true, vec[30]);
}
    
    
// Crash due to a retain count overflow.
// FIXME: can't pass the object's address from InlineRefCounts without hacks
void swift::swift_abortRetainOverflow() {
  swift::fatalError(FatalErrorFlags::ReportBacktrace,
                    'Fatal error: Object was retained too many times');
}
    
      ASTContext &getASTContext() { return M.getASTContext(); }
    
    class MetadataSourceBuilder {
  std::vector<std::unique_ptr<const MetadataSource>> MetadataSourcePool;
public:
  using Source = const MetadataSource *;
    }
    
    class FieldDescriptorIterator
  : public std::iterator<std::forward_iterator_tag, FieldDescriptor> {
public:
  const void *Cur;
  const void * const End;
  FieldDescriptorIterator(const void *Cur, const void * const End)
    : Cur(Cur), End(End) {}
    }
    
    template <typename T> static T unwrap(llvm::Expected<T> value) {
  if (value)
    return std::move(value.get());
  llvm::errs() << 'swift-reflection-test error: ' << toString(value.takeError())
               << '\n';
  exit(EXIT_FAILURE);
}
    
      constexpr static KeyPathComponentHeader
  forStructComponentWithUnresolvedFieldOffset(bool isLet) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_StructTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_UnresolvedFieldOffsetPayload
      | isLetBit(isLet));
  }
  
  constexpr static KeyPathComponentHeader
  forClassComponentWithInlineOffset(bool isLet,
                                    unsigned offset) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_ClassTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | validateInlineOffset(offset)
      | isLetBit(isLet));
  }
    
    /// Flags for protocol context descriptors. These values are used as the
/// kindSpecificFlags of the ContextDescriptorFlags for the protocol.
class ProtocolContextDescriptorFlags : public FlagSet<uint16_t> {
  enum {
    /// Whether this protocol is class-constrained.
    HasClassConstraint = 0,
    HasClassConstraint_width = 1,
    }
    }
    
    		const int maxSamples = getBufferSamples();
		int samplesCount, count = 0;
		float **pcm;
		while ((samplesCount = vorbis_synthesis_pcmout(&m_vorbis->dspState, &pcm)))
		{
			const int toConvert = samplesCount <= maxSamples ? samplesCount : maxSamples;
			for (int c = 0; c < m_channels; ++c)
			{
				float *samples = pcm[c];
				for (int i = 0, j = c; i < toConvert; ++i, j += m_channels)
				{
					int sample = samples[i] * 32767.0f;
					if (sample > 32767)
						sample = 32767;
					else if (sample < -32768)
						sample = -32768;
					buffer[count + j] = sample;
				}
			}
			vorbis_synthesis_read(&m_vorbis->dspState, toConvert);
			count += toConvert;
		}
    
    	VorbisDecoder *m_vorbis;
	OpusDecoder *m_opus;
	int m_numSamples;
	int m_channels;
    
    class VideoTrack : public Track {
  VideoTrack(const VideoTrack&);
  VideoTrack& operator=(const VideoTrack&);
    }
    
      &_huff_book_line_1024x27_0sub0,
  &_huff_book_line_1024x27_1sub0,
  &_huff_book_line_1024x27_1sub1,
  &_huff_book_line_1024x27_2sub0,
  &_huff_book_line_1024x27_2sub1,
  &_huff_book_line_1024x27_3sub1,
  &_huff_book_line_1024x27_3sub2,
  &_huff_book_line_1024x27_3sub3,
  &_huff_book_line_1024x27_4sub1,
  &_huff_book_line_1024x27_4sub2,
  &_huff_book_line_1024x27_4sub3,
};
static const static_codebook*const _floor_2048x27_books[]={
  &_huff_book_line_2048x27_class1,
  &_huff_book_line_2048x27_class2,
  &_huff_book_line_2048x27_class3,
  &_huff_book_line_2048x27_class4,
    
    static const vorbis_mapping_template _mapres_template_16_stereo[3]={
  { _map_nominal, _res_16s_0 }, /* 0 */
  { _map_nominal, _res_16s_1 }, /* 1 */
  { _map_nominal, _res_16s_2 }, /* 2 */
};
    
    
/* MSVC inline assembly. 32 bit only; inline ASM isn't implemented in the
 * 64 bit compiler and doesn't work on arm. */
#if defined(_MSC_VER) && !defined(_WIN64) && \
      !defined(_WIN32_WCE) && !defined(_M_ARM)
#  define VORBIS_FPU_CONTROL
    
            friend Rational operator&(Rational lhs, Rational const& rhs);
        friend Rational operator|(Rational lhs, Rational const& rhs);
        friend Rational operator^(Rational lhs, Rational const& rhs);
    
        // Do not repeat app initialization when the Window already has content,
    // just ensure that the window is active
    if (rootFrame == nullptr)
    {
        // Create a Frame to act as the navigation context and associate it with
        // a SuspensionManager key
        rootFrame = ref new Frame();
    }
    
    //-----------------------------------------------------------------------------
//
//  FUNCTION: i32factnum
//
//  ARGUMENTS:
//              int32_t integer to factorialize.
//              int32_t integer representing base   of answer.
//              uint32_t integer for radix
//
//  RETURN: Factorial of input in radix PNUMBER form.
//
//  NOTE:  Not currently used.
//
//-----------------------------------------------------------------------------
    
        bool numChanged = false;
    
        spHistoryItem->historyItemVector.spTokens = tokens;
    spHistoryItem->historyItemVector.spCommands = commands;
    
    
    {
    {    private:
        std::vector<std::shared_ptr<HISTORYITEM>> m_historyItems;
        const size_t m_maxHistorySize;
    };
}

    
                // IObservableVector<Object^>
            event Windows::Foundation::Collections::VectorChangedEventHandler<Platform::Object^>^ VectorChanged
        {
            virtual WF::EventRegistrationToken add(Windows::Foundation::Collections::VectorChangedEventHandler<Platform::Object^>^ handler) = Windows::Foundation::Collections::IObservableVector<Platform::Object^>::VectorChanged::add
            {
                return m_vectorChanged += handler;
            }
            virtual void remove(WF::EventRegistrationToken token) = Windows::Foundation::Collections::IObservableVector<Platform::Object^>::VectorChanged::remove
            {
                m_vectorChanged -= token;
            }
        }
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetDisplayCopiedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::DisplayCopied, AutomationNotificationKind::ActionCompleted, AutomationNotificationProcessing::ImportantMostRecent);
}
    
    #if __linux__
#include <sys/mman.h>
#endif
    
    
    {    return retval;
}
#endif
    
    TEST(coroutine_base, create)
{
    long _cid;
    long cid = Coroutine::create([](void *arg)
    {
        *(long *) arg = Coroutine::get_current_cid();
    }, &_cid);
    }
    
            descriptors[ndesc].index = (int) nindex;