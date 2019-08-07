
        
          // Read ACK message from the other process. It might be blocked for a certain
  // timeout, to make sure the other process has enough time to return ACK.
  char buf[kMaxACKMessageLength + 1];
  ssize_t len = ReadFromSocket(socket.fd(), buf, kMaxACKMessageLength, timeout);
    
     private:
  base::FilePath save_path_;
  file_dialog::DialogSettings dialog_options_;
  download::DownloadItem* download_item_;
    
    void Notification::Close() {
  if (notification_) {
    notification_->Dismiss();
    notification_.reset();
  }
}
    
      device::mojom::WakeLock* GetWakeLock();
    
    
template <>
const char *
FloatAttribute::staticTypeName ()
{
    return 'float';
}
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    
    //----------------------------------------------------------
    // Default value, used to fill the slice when a file without
    // a channel that corresponds to this slice is read.
    //----------------------------------------------------------
    
    #endif /* GENERICOUTPUTFILE_H_ */

    
    
void
IStream::clear ()
{
    // empty
}
    
    #include 'ImfMultiPartInputFile.h'
    
    #ifndef IMFINPUTPARTDATA_H_
#define IMFINPUTPARTDATA_H_
    
    template <typename Dtype>
void HDF5DataLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  // Refuse transformation parameters since HDF5 is totally generic.
  CHECK(!this->layer_param_.has_transform_param()) <<
      this->type() << ' does not transform data.';
  // Read the source to parse the filenames.
  const string& source = this->layer_param_.hdf5_data_param().source();
  LOG(INFO) << 'Loading list of HDF5 filenames from: ' << source;
  hdf_filenames_.clear();
  std::ifstream source_file(source.c_str());
  if (source_file.is_open()) {
    std::string line;
    while (source_file >> line) {
      hdf_filenames_.push_back(line);
    }
  } else {
    LOG(FATAL) << 'Failed to open source file: ' << source;
  }
  source_file.close();
  num_files_ = hdf_filenames_.size();
  current_file_ = 0;
  LOG(INFO) << 'Number of HDF5 files: ' << num_files_;
  CHECK_GE(num_files_, 1) << 'Must have at least 1 HDF5 filename listed in '
    << source;
    }
    
      LayerParameter param;
  param.mutable_hdf5_output_param()->set_file_name(this->output_file_name_);
  // This code block ensures that the layer is deconstructed and
  //   the output hdf5 file is closed.
  {
    HDF5OutputLayer<Dtype> layer(param);
    layer.SetUp(this->blob_bottom_vec_, this->blob_top_vec_);
    EXPECT_EQ(layer.file_name(), this->output_file_name_);
    layer.Forward(this->blob_bottom_vec_, this->blob_top_vec_);
  }
  file_id = H5Fopen(this->output_file_name_.c_str(), H5F_ACC_RDONLY,
                          H5P_DEFAULT);
  ASSERT_GE(
    file_id, 0)<< 'Failed to open HDF5 file' <<
          this->input_file_name_;
    
    namespace caffe {
    }
    
    template <>
void hdf5_save_nd_dataset<float>(
    const hid_t file_id, const string& dataset_name, const Blob<float>& blob,
    bool write_diff) {
  int num_axes = blob.num_axes();
  hsize_t *dims = new hsize_t[num_axes];
  for (int i = 0; i < num_axes; ++i) {
    dims[i] = blob.shape(i);
  }
  const float* data;
  if (write_diff) {
    data = blob.cpu_diff();
  } else {
    data = blob.cpu_data();
  }
  herr_t status = H5LTmake_dataset_float(
      file_id, dataset_name.c_str(), num_axes, dims, data);
  CHECK_GE(status, 0) << 'Failed to make float dataset ' << dataset_name;
  delete[] dims;
}
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    #ifdef USE_CUDNN
#include 'caffe/layers/cudnn_conv_layer.hpp'
#include 'caffe/layers/cudnn_deconv_layer.hpp'
#include 'caffe/layers/cudnn_lcn_layer.hpp'
#include 'caffe/layers/cudnn_lrn_layer.hpp'
#include 'caffe/layers/cudnn_pooling_layer.hpp'
#include 'caffe/layers/cudnn_relu_layer.hpp'
#include 'caffe/layers/cudnn_sigmoid_layer.hpp'
#include 'caffe/layers/cudnn_softmax_layer.hpp'
#include 'caffe/layers/cudnn_tanh_layer.hpp'
#endif
    
    using std::min;
using std::max;
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_path, const string& db_backend) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
    int main(int argc, char** argv) {
  if (argc != 4) {
    printf('This script converts the MNIST dataset to the leveldb format used\n'
           'by caffe to train a siamese network.\n'
           'Usage:\n'
           '    convert_mnist_data input_image_file input_label_file '
           'output_db_file\n'
           'The MNIST dataset could be downloaded at\n'
           '    http://yann.lecun.com/exdb/mnist/\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(argv[1], argv[2], argv[3]);
  }
  return 0;
}
#else
int main(int argc, char** argv) {
  LOG(FATAL) << 'This example requires LevelDB; compile with USE_LEVELDB.';
}
#endif  // USE_LEVELDB

    
    
    { protected:
  shared_ptr<SyncedMemory> rand_vec_;
};
    
    #include 'db/dbformat.h'
#include 'leveldb/db.h'
    
    // Return the name of the old info log file for 'dbname'.
std::string OldInfoLogFileName(const std::string& dbname);
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number, uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != nullptr) {
    *tableptr = nullptr;
  }
    }
    
    namespace leveldb {
    }
    
    namespace leveldb {
    }
    
    TEST(WriteBatchTest, Corruption) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  WriteBatchInternal::SetSequence(&batch, 200);
  Slice contents = WriteBatchInternal::Contents(&batch);
  WriteBatchInternal::SetContents(&batch,
                                  Slice(contents.data(), contents.size() - 1));
  ASSERT_EQ(
      'Put(foo, bar)@200'
      'ParseError()',
      PrintContents(&batch));
}
    
      // Three-way comparison.  Returns value:
  //   <  0 iff '*this' <  'b',
  //   == 0 iff '*this' == 'b',
  //   >  0 iff '*this' >  'b'
  int compare(const Slice& b) const;
    
    namespace leveldb {
    }
    
    void BlockHandle::EncodeTo(std::string* dst) const {
  // Sanity check that all fields have been set
  assert(offset_ != ~static_cast<uint64_t>(0));
  assert(size_ != ~static_cast<uint64_t>(0));
  PutVarint64(dst, offset_);
  PutVarint64(dst, size_);
}
    
    // Return an iterator that provided the union of the data in
// children[0,n-1].  Takes ownership of the child iterators and
// will delete them when the result iterator is deleted.
//
// The result does no duplicate suppression.  I.e., if a particular
// key is present in K child iterators, it will be yielded K times.
//
// REQUIRES: n >= 0
Iterator* NewMergingIterator(const Comparator* comparator, Iterator** children,
                             int n);
    
        actual = DecodeFixed64(p);
    ASSERT_EQ(v + 0, actual);
    p += sizeof(uint64_t);
    
    namespace ImGuiFreeType
{
    // Hinting greatly impacts visuals (and glyph sizes).
    // When disabled, FreeType generates blurrier glyphs, more or less matches the stb's output.
    // The Default hinting mode usually looks good, but may distort glyphs in an unusual way.
    // The Light hinting mode generates fuzzier glyphs but better matches Microsoft's rasterizer.
    }
    
        for (int n = 0; n < 20; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);