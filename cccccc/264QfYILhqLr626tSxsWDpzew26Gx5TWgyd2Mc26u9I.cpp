
        
        HRESULT CreatePseudoConsoleAndPipes(HPCON* phPC, HANDLE* phPipeIn, HANDLE* phPipeOut)
{
    HRESULT hr{ E_UNEXPECTED };
    HANDLE hPipePTYIn{ INVALID_HANDLE_VALUE };
    HANDLE hPipePTYOut{ INVALID_HANDLE_VALUE };
    }
    
    const std::vector<UniValue>& UniValue::getValues() const
{
    if (typ != VOBJ && typ != VARR)
        throw std::runtime_error('JSON value is not an object or array as expected');
    return values;
}
    
    
    {    CRIPEMD160();
    CRIPEMD160& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CRIPEMD160& Reset();
};
    
      iter->SeekToLast();
  ASSERT_EQ(IterStatus(iter), 'c->vc');
  iter->Prev();
  ASSERT_EQ(IterStatus(iter), 'b->vb');
  iter->Prev();
  ASSERT_EQ(IterStatus(iter), 'a->va');
  iter->Prev();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
  iter->SeekToLast();
  ASSERT_EQ(IterStatus(iter), 'c->vc');
  iter->Next();
  ASSERT_EQ(IterStatus(iter), '(invalid)');
    
        Ptr<DenseOpticalFlow> algo = DISOpticalFlow::create(preset);
    
    class  FrameBuffer;
class  DeepFrameBuffer;
struct DeepSlice;
    
    class GenericInputFile
{
    public:
        IMF_EXPORT
        virtual ~GenericInputFile() {}
    }
    
    #include 'ImfNamespace.h'
    
    
class GenericOutputFile
{
    public:
        IMF_EXPORT
        virtual ~GenericOutputFile() {}
    }
    
    
    {
    {        if (m_hasDecimal)
        {
            // Change to new decimal pt
            m_base.value[m_decPtIndex] = m_decSymbol;
        }
    }
}
    
                if (m_fIntegerMode)
            {
                uint64_t w64Bits = rhs.ToUInt64_t();
                bool fMsb = (w64Bits >> (m_dwWordBitWidth - 1)) & 1;
    }
    
            CommandPNT = 84,
    
                    PRAT plnx = nullptr;
                DUPRAT(plnx, *px);
                lograt(&plnx, precision);
                mulrat(&plnx, iy, precision);
                if (rat_gt(plnx, rat_max_exp, precision) || rat_lt(plnx, rat_min_exp, precision))
                {
                    // Don't attempt exp of anything large or small.A
                    destroyrat(plnx);
                    destroyrat(iy);
                    destroyrat(pxint);
                    destroyrat(podd);
                    throw(CALC_E_DOMAIN);
                }
                destroyrat(plnx);
                ratpowi32(px, inty, precision);
                if ((inty & 1) == 0)
                {
                    sign = 1;
                }
                destroyrat(iy);
            }
            else
            {
                // power is a fraction
                if (sign == -1)
                {
                    // Need to throw an error if the exponent has an even denominator.
                    // As a first step, the numerator and denominator must be divided by 2 as many times as
                    //     possible, so that 2/6 is allowed.
                    // If the final numerator is still even, the end result should be positive.
                    PRAT pNumerator = nullptr;
                    PRAT pDenominator = nullptr;
                    bool fBadExponent = false;
    }
    
        while (rat_lt(*px, neg_rat_one, precision))
    {
        addrat(px, rat_one, precision);
        divrat(&fact, *px, precision);
    }
    
        DUPRAT(neg_pt_eight_five, pt_eight_five);
    neg_pt_eight_five->pp->sign *= -1;
    if (rat_gt(*px, pt_eight_five, precision) || rat_lt(*px, neg_pt_eight_five, precision))
    {
        PRAT ptmp = nullptr;
        DUPRAT(ptmp, (*px));
        mulrat(&ptmp, *px, precision);
        addrat(&ptmp, rat_one, precision);
        rootrat(&ptmp, rat_two, radix, precision);
        addrat(px, ptmp, precision);
        lograt(px, precision);
        destroyrat(ptmp);
    }
    else
    {
        CREATETAYLOR();
        xx->pp->sign *= -1;
    }
    
        DUPNUM(n2, num_one);
    
    // Declaration of the LiveRegionHost class.
// This class announces NarratorAnnouncements using the LiveRegionChanged event.
// This event is unreliable and should be deprecated in favor of the new
// RaiseNotification API in RS3.
    
            virtual bool IsHostAvailable();
        virtual INarratorAnnouncementHost ^ MakeHost();
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    class DHTRoutingTableSerializer {
private:
  int family_;
    }
    
      ~DHTSetup();
    
    class DHTTask;
    
    DNSCache::AddrEntry::AddrEntry(const AddrEntry& c) = default;
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // create values of different floating-point types
    float n_float = 42.23;
    float n_float_nan = 1.0f / 0.0f;
    double n_double = 23.42;
    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }