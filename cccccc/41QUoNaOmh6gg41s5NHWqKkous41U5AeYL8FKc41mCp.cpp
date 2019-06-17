
        
        
bool ZeroCopyOutputStream::WriteAliasedRaw(const void* /* data */,
                                           int /* size */) {
  GOOGLE_LOG(FATAL) << 'This ZeroCopyOutputStream doesn't support aliasing. '
                'Reaching here usually means a ZeroCopyOutputStream '
                'implementation bug.';
  return false;
}
    
    const Status Status::OK = Status();
const Status Status::CANCELLED = Status(error::CANCELLED, '');
const Status Status::UNKNOWN = Status(error::UNKNOWN, '');
    
    namespace google {
namespace protobuf {
namespace internal {
namespace {
    }
    }
    }
    }
    
    #endif  // GOOGLE_PROTOBUF_TEMPLATE_UTIL_H_

    
    
    {  // Yes || Yes == true.
  value = or_<true_, true_>::value;
  EXPECT_TRUE(value);
  // Yes || No == true.
  value = or_<true_, false_>::value;
  EXPECT_TRUE(value);
  // No || Yes == true.
  value = or_<false_, true_>::value;
  EXPECT_TRUE(value);
  // No || No == false.
  value = or_<false_, false_>::value;
  EXPECT_FALSE(value);
}
    
    namespace google {
namespace protobuf {
namespace util {
    }
    }
    }
    
      {
    // Read the existing address book.
    fstream input(argv[1], ios::in | ios::binary);
    if (!address_book.ParseFromIstream(&input)) {
      cerr << 'Failed to parse address book.' << endl;
      return -1;
    }
  }