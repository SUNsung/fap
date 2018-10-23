
        
        
    {  // Expand the box.
  *left = std::max(*left - padding, 0);
  *top = std::max(*top - padding, 0);
  right = std::min(right + padding, rect_width_);
  bottom = std::min(bottom + padding, rect_height_);
  Box* box = boxCreate(*left, *top, right - *left, bottom - *top);
  Pix* grey_pix = pixClipRectangle(original_img, box, nullptr);
  boxDestroy(&box);
  if (level == RIL_BLOCK || level == RIL_PARA) {
    // Clip to the block polygon as well.
    TBOX mask_box;
    Pix* mask = it_->block()->block->render_mask(&mask_box);
    // Copy the mask registered correctly into an image the size of grey_pix.
    int mask_x = *left - mask_box.left();
    int mask_y = *top - (pixGetHeight(original_img) - mask_box.top());
    int width = pixGetWidth(grey_pix);
    int height = pixGetHeight(grey_pix);
    Pix* resized_mask = pixCreate(width, height, 1);
    pixRasterop(resized_mask, std::max(0, -mask_x), std::max(0, -mask_y), width, height,
                PIX_SRC, mask, std::max(0, mask_x), std::max(0, mask_y));
    pixDestroy(&mask);
    pixDilateBrick(resized_mask, resized_mask, 2 * padding + 1,
                   2 * padding + 1);
    pixInvert(resized_mask, resized_mask);
    pixSetMasked(grey_pix, resized_mask, UINT32_MAX);
    pixDestroy(&resized_mask);
  }
  return grey_pix;
}
    
      /** Are we positioned at the same location as other? */
  bool PositionedAtSameWord(const PAGE_RES_IT* other) const;
    
     private:
  // The unique ID of this VC object.
  int my_id_;
  // Whether the parameter was changed_ and thus needs to be rewritten.
  bool changed_;
  // The actual ParamType of this VC object.
  ParamType param_type_;
    
      Status update(const std::string& source, const ParserConfig& config) override;
    
    #include 'osquery/config/parsers/prometheus_targets.h'
    
        // Construct a config map, the typical output from `Config::genConfig`.
    config_data_['awesome'] = content_;
    Config::get().reset();
    clearDecorations('awesome');
    
      ASSERT_TRUE(data.doc().HasMember('events'));
  ASSERT_TRUE(data.doc()['events'].HasMember('environment_variables'));
  ASSERT_TRUE(data.doc()['events']['environment_variables'].IsArray());
  for (const auto& var :
       data.doc()['events']['environment_variables'].GetArray()) {
    std::string value = var.GetString();
    EXPECT_TRUE(value == 'foo' || value == 'bar');
  }
    
    namespace osquery {
    }
    
    FLAG(bool,
     disable_distributed,
     true,
     'Disable distributed queries (default true)');
    
      SCRef GetSubscription(const std::string& path,
                        uint32_t mask = IN_ALL_EVENTS) {
    auto mc = createSubscriptionContext();
    mc->path = path;
    mc->mask = mask;
    return mc;
  }
    
    class DHTBucket;
class DHTPingReplyMessage;
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
      std::shared_ptr<DHTNode> localNode_;
    
    
    {} // namespace aria2
    
    bool DHTTokenTracker::validateToken(const std::string& token,
                                    const unsigned char* infoHash,
                                    const std::string& ipaddr,
                                    uint16_t port) const
{
  for (auto& elem : secret_) {
    if (generateToken(infoHash, ipaddr, port, elem) == token) {
      return true;
    }
  }
  return false;
}
    
    class DHTTokenTracker;
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
      void markBad(const std::string& hostname, const std::string& ipaddr,
               uint16_t port);