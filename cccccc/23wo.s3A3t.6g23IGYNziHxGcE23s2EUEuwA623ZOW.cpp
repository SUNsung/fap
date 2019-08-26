
        
        namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    
    {  // Now our default is high enough but field_float's override is too low.
  EXPECT_EQ(
      FieldComparator::DIFFERENT,
      comparator_.Compare(message_1_, message_2_, field_float, -1, -1, NULL));
  EXPECT_EQ(
      FieldComparator::SAME,
      comparator_.Compare(message_1_, message_2_, field_double, -1, -1, NULL));
}
    
    TEST(MessageDifferencerTest, RepeatedFieldMapTest_CustomMapKeyComparator) {
  protobuf_unittest::TestDiffMessage msg1;
  protobuf_unittest::TestDiffMessage msg2;
  // Treat 'item' as Map, using custom key comparator to determine if two
  // elements have the same key.
  protobuf_unittest::TestDiffMessage::Item* item = msg1.add_item();
  item->add_ra(6);
  item->add_ra(35);
  item->set_b('hello');
  item = msg2.add_item();
  item->add_ra(10);
  item->add_ra(21);
  item->set_b('hello');
  util::MessageDifferencer differencer;
  ValueProductMapKeyComparator key_comparator;
  differencer.TreatAsMapUsingKeyComparator(GetFieldDescriptor(msg1, 'item'),
                                           &key_comparator);
  std::string output;
  differencer.ReportDifferencesToString(&output);
  // Though the above two messages have different values for item.ra, they
  // are regarded as having the same key because 6 * 35 == 10 * 21. That's
  // how the key comparator determines if the two have the same key.
  // However, in value comparison, all fields of the message are taken into
  // consideration, so they are different because their item.ra fields have
  // different values using normal value comparison.
  EXPECT_FALSE(differencer.Compare(msg1, msg2));
  EXPECT_EQ(
      'modified: item[0].ra[0]: 6 -> 10\n'
      'modified: item[0].ra[1]: 35 -> 21\n',
      output);
  differencer.IgnoreField(GetFieldDescriptor(msg1, 'item.ra'));
  output.clear();
  // item.ra is ignored in value comparison, so the two messages equal.
  EXPECT_TRUE(differencer.Compare(msg1, msg2));
  EXPECT_EQ('ignored: item[0].ra\n', output);
}
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    void MapLiteTestUtil::SetMapFields(unittest::TestMapLite* message) {
  MapTestUtilImpl::SetMapFields<unittest::MapEnumLite,
                                unittest::MAP_ENUM_BAR_LITE,
                                unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
    TEST(StatusOr, TestAssignmentStatusOKConverting) {
  const int kI = 4;
  StatusOr<int>    source(kI);
  StatusOr<double> target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
  EXPECT_DOUBLE_EQ(source.ValueOrDie(), target.ValueOrDie());
}
    
    #include <google/protobuf/stubs/common.h>
#include <gtest/gtest.h>
    
        for (int i = 0; i < dataset.payload_size(); i++) {
      message->ParseFromString(dataset.payload(i));
      GogoDataStripper stripper;
      stripper.StripMessage(message);
      dataset.set_payload(i, message->SerializeAsString());
    }