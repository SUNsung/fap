
        
                if name.start_with?('etc') || name.start_with?('core.stdc.')
          name.split('.')[0..2].join('.')
        elsif name.start_with?('ddmd')
          'ddmd'
        elsif name.start_with?('rt')
          'rt'
        else
          name.split('.')[0..1].join('.')
        end
      end
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        version '2' do
      self.release = '2.3.0'
      self.base_url = 'http://coffeescript.org/'
    
          options[:fix_urls] = ->(url) do
        url.sub! %r{/blob/master/readme.md}i, ''
        url
      end
    end
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
        def contains?(url, options = nil)
      !!subpath_to(url, options)
    end
    
        platform_is_not :windows do
      it 'expands a path when the default external encoding is ASCII-8BIT' do
        Encoding.default_external = Encoding::ASCII_8BIT
        path_8bit = [222, 173, 190, 175].pack('C*')
        File.expand_path( path_8bit, @rootdir).should == '#{@rootdir}' + path_8bit
      end
    end
    
      after :each do
    @file.close
    @readonly_file.close
    rm_r @filename
  end
    
    ruby_version_is '2.4' do
  describe 'String#casecmp? independent of case' do
    it 'returns true when equal to other' do
      'abc'.casecmp?('abc').should == true
      'abc'.casecmp?('ABC').should == true
    end
    
      it 'returns nil if no modifications were made' do
    a = '+++---111222???'
    a.swapcase!.should == nil
    a.should == '+++---111222???'
    
      ruby_version_is '2.4' do
    describe 'full Unicode case mapping' do
      it 'modifies self in place for all of Unicode with no option' do
        a = 'äöü'
        a.upcase!
        a.should == 'ÄÖÜ'
      end
    
      describe 'RSTRING_LEN' do
    it 'returns the size of the string' do
      @s.RSTRING_LEN('gumdrops').should == 8
    end
  end