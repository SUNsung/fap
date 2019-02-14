
        
          // content::QuotaPermissionContext:
  void RequestQuotaPermission(const content::StorageQuotaParams& params,
                              int render_process_id,
                              const PermissionCallback& callback) override;
    
    #if defined(OS_LINUX)
typedef PowerObserverLinux PowerObserver;
#else
typedef base::PowerObserver PowerObserver;
#endif  // defined(OS_LINUX)
    
    bool URLRequestAboutJob::GetMimeType(std::string* mime_type) const {
  *mime_type = 'text/html';
  return true;
}
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
        Round(a, b, c, d, e, f, g, h, 0x27b70a85, w0 += sigma1(w14) + w9 + sigma0(w1));
    Round(h, a, b, c, d, e, f, g, 0x2e1b2138, w1 += sigma1(w15) + w10 + sigma0(w2));
    Round(g, h, a, b, c, d, e, f, 0x4d2c6dfc, w2 += sigma1(w0) + w11 + sigma0(w3));
    Round(f, g, h, a, b, c, d, e, 0x53380d13, w3 += sigma1(w1) + w12 + sigma0(w4));
    Round(e, f, g, h, a, b, c, d, 0x650a7354, w4 += sigma1(w2) + w13 + sigma0(w5));
    Round(d, e, f, g, h, a, b, c, 0x766a0abb, w5 += sigma1(w3) + w14 + sigma0(w6));
    Round(c, d, e, f, g, h, a, b, 0x81c2c92e, w6 += sigma1(w4) + w15 + sigma0(w7));
    Round(b, c, d, e, f, g, h, a, 0x92722c85, w7 += sigma1(w5) + w0 + sigma0(w8));
    Round(a, b, c, d, e, f, g, h, 0xa2bfe8a1, w8 += sigma1(w6) + w1 + sigma0(w9));
    Round(h, a, b, c, d, e, f, g, 0xa81a664b, w9 += sigma1(w7) + w2 + sigma0(w10));
    Round(g, h, a, b, c, d, e, f, 0xc24b8b70, w10 += sigma1(w8) + w3 + sigma0(w11));
    Round(f, g, h, a, b, c, d, e, 0xc76c51a3, w11 += sigma1(w9) + w4 + sigma0(w12));
    Round(e, f, g, h, a, b, c, d, 0xd192e819, w12 += sigma1(w10) + w5 + sigma0(w13));
    Round(d, e, f, g, h, a, b, c, 0xd6990624, w13 += sigma1(w11) + w6 + sigma0(w14));
    Round(c, d, e, f, g, h, a, b, 0xf40e3585, w14 += sigma1(w12) + w7 + sigma0(w15));
    Round(b, c, d, e, f, g, h, a, 0x106aa070, w15 += sigma1(w13) + w8 + sigma0(w0));
    
    static void secp256k1_ecdsa_recoverable_signature_load(const secp256k1_context* ctx, secp256k1_scalar* r, secp256k1_scalar* s, int* recid, const secp256k1_ecdsa_recoverable_signature* sig) {
    (void)ctx;
    if (sizeof(secp256k1_scalar) == 32) {
        /* When the secp256k1_scalar type is exactly 32 byte, use its
         * representation inside secp256k1_ecdsa_signature, as conversion is very fast.
         * Note that secp256k1_ecdsa_signature_save must use the same representation. */
        memcpy(r, &sig->data[0], 32);
        memcpy(s, &sig->data[32], 32);
    } else {
        secp256k1_scalar_set_b32(r, &sig->data[0], NULL);
        secp256k1_scalar_set_b32(s, &sig->data[32], NULL);
    }
    *recid = sig->data[64];
}
    
    static void CheckParseTorReplyMapping(std::string input, std::map<std::string,std::string> expected)
{
    BOOST_TEST_MESSAGE(std::string('CheckParseTorReplyMapping(') + input + ')');
    auto ret = ParseTorReplyMapping(input);
    BOOST_CHECK_EQUAL(ret.size(), expected.size());
    auto r_it = ret.begin();
    auto e_it = expected.begin();
    while (r_it != ret.end() && e_it != expected.end()) {
        BOOST_CHECK_EQUAL(r_it->first, e_it->first);
        BOOST_CHECK_EQUAL(r_it->second, e_it->second);
        r_it++;
        e_it++;
    }
}
    
    int UniValue::get_int() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int32_t retval;
    if (!ParseInt32(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
        // output element at index 2 (third element)
    std::cout << array.at(2) << '\n';
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');