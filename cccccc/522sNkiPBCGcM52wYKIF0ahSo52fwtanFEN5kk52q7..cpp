
        
        
    {
    {    rph->Send(new ShellViewMsg_Open(path));
  }
}
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    void Menu::Remove(MenuItem* menu_item, int pos) {
  if (pos < 0 || pos >= (int)menu_items_.size()) return;
    }
    
          std::unique_ptr<SkBitmap> bitmap(new SkBitmap());
      if (data.type == TYPE_PNG &&
        !gfx::PNGCodec::Decode(reinterpret_cast<const unsigned char*>(decoded_str.c_str()), decoded_str.size(), bitmap.get())) {
        error_ = 'Failed to decode as PNG';
        return false;
      } else if (data.type == TYPE_JPEG) {
        std::unique_ptr<SkBitmap> tmp_bitmap = gfx::JPEGCodec::Decode(reinterpret_cast<const unsigned char*>(decoded_str.c_str()), decoded_str.size());
        if (tmp_bitmap == NULL) {
          error_ = 'Failed to decode as JPEG';
          return false;
        }
        bitmap = std::move(tmp_bitmap);
      }
    
    NwObjCallObjectMethodFunction::~NwObjCallObjectMethodFunction() {
}
    
        SECTION('operator[key] throws when given an invalid key') {
      REQUIRE_THROWS_WITH(cursor['foo'], StartsWith('No such key: 'foo''));
      REQUIRE_THROWS_WITH(cursor['bar'], StartsWith('No such key: 'bar''));
    }
    
    template <typename Parameters>
void assign_parameter(
    const Parameters& parameters,
    const char* name,
    torch::Tensor new_tensor) {
  auto parameter = parameters.at(name);
  parameter.set_requires_grad(false);
  parameter.flatten().copy_(new_tensor);
  parameter.set_requires_grad(true);
}
    
      bool RunOnDevice() override;
    
      if (dim_tensor1 == 1 && dim_tensor2 == 1) {
    return has_out ? at::native::dot_out(out, tensor1, tensor2) : tensor1.dot(tensor2);
  } else if (dim_tensor1 == 2 && dim_tensor2 == 1) {
    return has_out ? at::native::mv_out(out, tensor1, tensor2) : tensor1.mv(tensor2);
  } else if (dim_tensor1 == 1 && dim_tensor2 == 2) {
    return has_out ? at::native::mm_out(out, tensor1.unsqueeze(0), tensor2).squeeze_(0)
                   : tensor1.unsqueeze(0).mm(tensor2).squeeze_(0);
  } else if (dim_tensor1 == 2 && dim_tensor2 == 2) {
    return has_out ? at::native::mm_out(out, tensor1, tensor2) : tensor1.mm(tensor2);
  } else if (dim_tensor1 >= 3 && (dim_tensor2 == 1 || dim_tensor2 == 2)) {
    // optimization: use mm instead of bmm by folding tensor1's batch into
    // its leading matrix dimension.
    }
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/logging.h'
#include 'caffe2/core/operator.h'
#include 'caffe2/utils/math.h'
    
      EMatXf result_gt(5, 4);
  result_gt << 206.94953073, -30.71519157, 298.3876512, 245.44846569,
      143.8712194, -83.34289038, 291.50227513, 122.05339902, 177.43029521,
      198.66623633, 197.29527254, 229.70308414, 152.25190373, 145.43156421,
      388.21547899, 275.59425266, 5.06242193, 11.04094661, 67.32890274,
      270.68622005;
    
    namespace rpc {
    }
    
    namespace leveldb {
    }
    
    
    {  size_t read = 0;
  std::string read_data;
  while (read < kWriteSize) {
    ASSERT_OK(seq_file->Read(kWriteSize - read, &result, scratch));
    read_data.append(result.data(), result.size());
    read += result.size();
  }
  ASSERT_TRUE(write_data == read_data);
  delete seq_file;
  delete [] scratch;
}
    
    class FilterBlockReader {
 public:
 // REQUIRES: 'contents' and *policy must stay live while *this is live.
  FilterBlockReader(const FilterPolicy* policy, const Slice& contents);
  bool KeyMayMatch(uint64_t block_offset, const Slice& key);
    }
    
      // Check third filter (empty)
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'hello'));
    
    
    {  // Pick up remaining bytes
  switch (limit - data) {
    case 3:
      h += static_cast<unsigned char>(data[2]) << 16;
      FALLTHROUGH_INTENDED;
    case 2:
      h += static_cast<unsigned char>(data[1]) << 8;
      FALLTHROUGH_INTENDED;
    case 1:
      h += static_cast<unsigned char>(data[0]);
      h *= m;
      h ^= (h >> r);
      break;
  }
  return h;
}
    
    void Histogram::Merge(const Histogram& other) {
  if (other.min_ < min_) min_ = other.min_;
  if (other.max_ > max_) max_ = other.max_;
  num_ += other.num_;
  sum_ += other.sum_;
  sum_squares_ += other.sum_squares_;
  for (int b = 0; b < kNumBuckets; b++) {
    buckets_[b] += other.buckets_[b];
  }
}
    
    #include 'port/port.h'
#include 'port/thread_annotations.h'
    
    
    {}  // namespace leveldb
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
    class TLSConfigPlugin;
    
    /// Unlike checkChildProcessStatus, this will block until process exits.
static bool getProcessExitCode(osquery::PlatformProcess& process,
                               int& exitCode) {
  if (!process.isValid()) {
    return false;
  }
    }
    
    TEST_F(TablesTests, test_constraint_matching) {
  struct ConstraintList cl;
  // An empty constraint list has expectations.
  EXPECT_FALSE(cl.exists());
  EXPECT_FALSE(cl.exists(GREATER_THAN));
  EXPECT_TRUE(cl.notExistsOrMatches('some'));
    }
    
    
    {TEST_F(SyslogTests, test_csv_separator) {
  ASSERT_EQ(std::vector<std::string>({'', '', '', '', ''}), splitCsv(',,,,'));
  ASSERT_EQ(std::vector<std::string>({' ', ' ', ' ', ' ', ' '}),
            splitCsv(' , , , , '));
  ASSERT_EQ(std::vector<std::string>({'foo', 'bar', 'baz'}),
            splitCsv('foo,bar,baz'));
  ASSERT_EQ(std::vector<std::string>({'foo', 'bar', 'baz'}),
            splitCsv('\'foo\',\'bar\',\'baz\''));
  ASSERT_EQ(std::vector<std::string>({',foo,', ',bar', 'baz,'}),
            splitCsv('\',foo,\',\',bar\',\'baz,\''));
  ASSERT_EQ(std::vector<std::string>({',f\\oo,', ',ba\\'r', 'baz\\,'}),
            splitCsv('\',f\\oo,\',\',ba\\'r\',\'baz\\,\''));
  ASSERT_EQ(std::vector<std::string>({'\',f\\o\'o,', '\',ba\\'r', 'baz\\,\''}),
            splitCsv('\'\'\',f\\o\'\'o,\',\'\'\',ba\\'r\',\'baz\\,\'\'\''));
  ASSERT_EQ(std::vector<std::string>({'\',f\\ø\'o,', '\',bá\\'r', 'baz\\,\''}),
            splitCsv('\'\'\',f\\ø\'\'o,\',\'\'\',bá\\'r\',\'baz\\,\'\'\''));
}
}

    
    Status FirehoseLogForwarder::internalSetup() {
  if (FLAGS_aws_firehose_stream.empty()) {
    return Status(1,
                  'Stream name must be specified with --aws_firehose_stream');
  }
    }
    
    Status KinesisLoggerPlugin::logString(const std::string& s) {
  return forwarder_->logString(s);
}