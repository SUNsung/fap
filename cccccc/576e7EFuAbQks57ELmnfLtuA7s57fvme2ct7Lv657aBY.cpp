
        
        
    {  return 0;
}
    
    void ReversePolygon(float32* x, float32* y, int n);
    
    #ifndef B2_TRIANGLE_H
#define B2_TRIANGLE_H
    
    	struct RawImage
	{
		int uiExtendedWidth;
		int uiExtendedHeight;
		unsigned int uiEncodingBitsBytes;
		std::shared_ptr<unsigned char> paucEncodingBits;
	};
    
    // Constants and Macros used by all idct/dct functions
#define DCT_CONST_BITS 14
#define DCT_CONST_ROUNDING  (1 << (DCT_CONST_BITS - 1))
    
      The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.
    
      All rights reserved.
    
    /* a32 + (b32 * (c32 >> 16)) >> 16 */
#undef silk_SMLAWT
#define silk_SMLAWT(a, b, c) ((a) + silk_SMULWT(b, c))
    
            friend Rational operator<<(Rational lhs, Rational const& rhs);
        friend Rational operator>>(Rational lhs, Rational const& rhs);
    
    void CBinaryCommand::Accept(_In_ ISerializeCommandVisitor& commandVisitor)
{
    commandVisitor.Visit(*this);
}
    
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
    
    void SortFilterProxyModel::setSortOrder(Qt::SortOrder order)
{
    QSortFilterProxyModel::sort(0, order);
}