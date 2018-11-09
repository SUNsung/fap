
        
        
    {  DISALLOW_COPY_AND_ASSIGN(Base);
};
    
    
namespace nwapi {
    }
    
    void Menu::Destroy() {
}
    
    
    {}  // namespace nwapi

    
    void MenuItem::SetChecked(bool checked) {
  is_checked_ = checked;
  if (menu_)
    menu_->UpdateStates();
}
    
    
    {
} // namespace extensions
#endif

    
    
    {
    {			char      *lPr = (char *)malloc(MAX_PATH);
			char      *pR = (char *)malloc(MAX_PATH);
			size_t i;
			wcstombs_s(&i, lPr, (size_t)MAX_PATH,
				legacyUserAliasesPath, (size_t)MAX_PATH);
			wcstombs_s(&i, pR, (size_t)MAX_PATH,
				userAliasesPath, (size_t)MAX_PATH);
			rename(lPr, pR);
		}
	}
    
    
    {}  // namespace leveldb
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    int MemTable::KeyComparator::operator()(const char* aptr, const char* bptr)
    const {
  // Internal keys are encoded as length-prefixed strings.
  Slice a = GetLengthPrefixedSlice(aptr);
  Slice b = GetLengthPrefixedSlice(bptr);
  return comparator.Compare(a, b);
}
    
    #include 'db/skiplist.h'
#include <set>
#include 'leveldb/env.h'
#include 'port/port.h'
#include 'port/thread_annotations.h'
#include 'util/arena.h'
#include 'util/hash.h'
#include 'util/random.h'
#include 'util/testharness.h'
    
    // Entropy encoding (Huffman) utilities.
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    constexpr int kDefaultMemlimitMB = 6000; // in MB
    
    #include 'guetzli/jpeg_data.h'
    
    
    {}  // namespace guetzli

    
    bool EncodeDQT(const std::vector<JPEGQuantTable>& quant, JPEGOutput out) {
  int marker_len = 2;
  for (size_t i = 0; i < quant.size(); ++i) {
    marker_len += 1 + (quant[i].precision ? 2 : 1) * kDCTBlockSize;
  }
  std::vector<uint8_t> data(marker_len + 2);
  size_t pos = 0;
  data[pos++] = 0xff;
  data[pos++] = 0xdb;
  data[pos++] = marker_len >> 8;
  data[pos++] = marker_len & 0xff;
  for (size_t i = 0; i < quant.size(); ++i) {
    const JPEGQuantTable& table = quant[i];
    data[pos++] = (table.precision << 4) + table.index;
    for (int k = 0; k < kDCTBlockSize; ++k) {
      int val = table.values[kJPEGNaturalOrder[k]];
      if (table.precision) {
        data[pos++] = val >> 8;
      }
      data[pos++] = val & 0xff;
    }
  }
  return JPEGWrite(out, &data[0], pos);
}