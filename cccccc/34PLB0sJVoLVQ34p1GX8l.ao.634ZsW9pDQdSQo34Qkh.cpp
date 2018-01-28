#include 'guetzli/jpeg_data_reader.h'
    
    
    {}  // namespace guetzli
    
    #include <stdint.h>
    
    static const int kIQuantBits = 16;
// Output of the DCT is upscaled by 16.
static const int kDCTBits = kIQuantBits + 4;
static const int kBias = 0x80 << (kDCTBits - 8);
    
    #include 'guetzli/jpeg_data.h'
    
    // Builds jpeg-style Huffman lookup table from the given symbols.
// The symbols are in order of increasing bit lengths. The number of symbols
// with bit length n is given in counts[n] for each n >= 1.
// Returns the size of the lookup table.
int BuildJpegHuffmanTable(const int* counts, const int* symbols,
                          HuffmanTableEntry* lut);
    
    // Preprocesses U and V channel for better results after downsampling.