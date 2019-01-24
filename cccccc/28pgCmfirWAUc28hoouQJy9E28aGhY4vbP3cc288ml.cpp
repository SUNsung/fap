
        
        struct CaffeDataParam : public dmlc::Parameter<CaffeDataParam> {
  /*! \brief protobuf text */
  ::caffe::LayerParameter prototxt;
  /*! \brief number of iterations per epoch */
  int num_examples;
  /*! \brief data mode */
  bool flat;
    }
    
        caffeOp_->SetUp(bot_blobs, top_blobs);
    CHECK_EQ(in_shape->size(), caffeOp_->blobs().size() + param_.num_data);
    // Initialize out shapes
    out_shape->clear();
    for (auto blob : top_blobs) {
      TShape tshape = caffe::Vector2TShape(blob->shape());
      out_shape->push_back(tshape);
    }
    
    
using namespace mxnet;
// http://www.64lines.com/jpeg-width-height
// Gets the JPEG size from the array of data passed to the function, file reference: http://www.obrador.com/essentialjpeg/headerinfo.htm
bool get_jpeg_size(const unsigned char* data, mx_uint data_size, mx_uint *width, mx_uint *height) {
  // Check for valid JPEG image
  mx_uint i = 0;  // Keeps track of the position within the file
  if (data[i] == 0xFF && data[i+1] == 0xD8 && data[i+2] == 0xFF && data[i+3] == 0xE0) {
    i += 4;
    // Check for valid JPEG header (null terminated JFIF)
    if (data[i+2] == 'J' && data[i+3] == 'F' && data[i+4] == 'I'
        && data[i+5] == 'F' && data[i+6] == 0x00) {
      // Retrieve the block length of the first block since
      // the first block will not contain the size of file
      uint16_t block_length = data[i] * 256 + data[i+1];
      while (i < data_size) {
        i+=block_length;  // Increase the file index to get to the next block
        if (i >= data_size) return false;  // Check to protect against segmentation faults
        if (data[i] != 0xFF) return false;  // Check that we are truly at the start of another block
        if (data[i+1] == 0xC0) {
          // 0xFFC0 is the 'Start of frame' marker which contains the file size
          // The structure of the 0xFFC0 block is quite simple
          // [0xFFC0][ushort length][uchar precision][ushort x][ushort y]
          *height = data[i+5]*256 + data[i+6];
          *width = data[i+7]*256 + data[i+8];
          return true;
        } else {
          i+=2;  // Skip the block marker
          block_length = data[i] * 256 + data[i+1];  // Go to the next block
        }
      }
      return false;  // If this point is reached then no size was found
    } else {
      return false;  // Not a valid JFIF string
    }
  } else {
    return false;  // Not a valid SOI header
  }
}
    
    
    {
    {}  // namespace io
}  // namespace mxnet

    
      void sendMessage();
    
      virtual bool isReply() const CXX11_OVERRIDE;
    
      const std::vector<std::shared_ptr<DHTNode>>& getNodes() const
  {
    return nodes_;
  }
    
    DHTSetup::DHTSetup() = default;
    
    class DownloadEngine;
class Command;
    
    
    {  virtual bool finished() = 0;
};
    
    const std::string DHTUnknownMessage::UNKNOWN('unknown');
    
    DNSCache::CacheEntry::CacheEntry(const std::string& hostname, uint16_t port)
    : hostname_(hostname), port_(port)
{
}