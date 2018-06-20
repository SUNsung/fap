
        
            context 'only newlines' do
      let(:keywords) { 'One\nTwo\r\nThree\nFour Token\n' }
    
          it 'does set the output directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(output_directory: '/tmp')
          end').runner.execute(:test)
    
          it 'it increments all targets minor version major' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'major')
        end').runner.execute(:test)
    
        version '2' do
      self.release = '2.3.0'
      self.base_url = 'http://coffeescript.org/'
    
            return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
        def root?
      path == 'index'
    end
    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first if xml
  if existing_blog
    rss_url = existing_blog.attr('xmlUrl')
    puts '#{name}: ALREADY HAVE'
  end