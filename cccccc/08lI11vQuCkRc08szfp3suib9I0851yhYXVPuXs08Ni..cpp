
        
        	STARTUPINFO si = { 0 };
    
    
    {/**
 * @brief Start a file carve of the given paths
 *
 * @return A status returning if the carves were started successfully
 */
Status carvePaths(const std::set<std::string>& paths);
} // namespace osquery

    
    TEST_F(DecoratorsConfigParserPluginTests, test_decorators_run_interval) {
  // Prevent loads from executing.
  FLAGS_disable_decorators = true;
  Config::get().update(config_data_);
    }
    
      // Generate content to update/add to the config.
  std::string content;
  auto s = readFile(kTestDataPath + 'test_parse_items.conf', content);
  EXPECT_TRUE(s.ok());
  std::map<std::string, std::string> config;
  config['awesome'] = content;
    
    
    {  c.reset();
}
    
    TEST_F(ProcessTests, test_getpid) {
  int pid = -1;
    }
    
      // Test operator lower bounds.
  EXPECT_FALSE(cl2.matches(0));
  EXPECT_FALSE(cl2.matches(1));
    
        Row r;
    r['example_text'] = 'example';
    r['example_integer'] = INTEGER(1);
    
    
    {    a->autorelease();
    return a;
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
        /** Adds a frame with an image filename. Internally it will create a SpriteFrame and it will add it.
     * The frame will be added with one 'delay unit'.
     * Added to facilitate the migration from v0.8 to v0.9.
     * @param filename The path of SpriteFrame.
     */
    void addSpriteFrameWithFile(const std::string& filename);
    /**
     * @deprecated. Use addSpriteFrameWithFile() instead.
     @js NA
     */
    CC_DEPRECATED_ATTRIBUTE void addSpriteFrameWithFileName(const std::string& filename){ addSpriteFrameWithFile(filename);}
    
    Texture2D * AtlasNode::getTexture() const
{
    return _textureAtlas->getTexture();
}
    
    /** @brief AtlasNode is a subclass of Node that implements the RGBAProtocol and TextureProtocol protocol.
 * It knows how to render a TextureAtlas object.
 * If you are going to render a TextureAtlas consider subclassing AtlasNode (or a subclass of AtlasNode).
 * All features from Node are valid, plus the following features:
 * - opacity and RGB colors.
 */
class CC_DLL AtlasNode : public Node, public TextureProtocol
{    
public:
	/** creates a AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render.
     *
     * @param filename The path of Atlas file.
     * @param tileWidth The width of the item.
     * @param tileHeight The height of the item.
     * @param itemsToRender The quantity of items to render.
     */
	static AtlasNode * create(const std::string& filename, int tileWidth, int tileHeight, int itemsToRender);
    }