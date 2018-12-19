
        
        begin
  error_pipe = UNIXSocket.open(ENV['HOMEBREW_ERROR_PIPE'], &:recv_io)
  error_pipe.fcntl(Fcntl::F_SETFD, Fcntl::FD_CLOEXEC)
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
      def migrate_formula_rename
    report[:R].each do |old_full_name, new_full_name|
      old_name = old_full_name.split('/').last
      next unless (dir = HOMEBREW_CELLAR/old_name).directory? && !dir.subdirs.empty?
    
        $Kernel_trace_var_global = nil
    $Kernel_trace_var_extra  = nil
  end
    
      if rss_url.nil?
    puts '#{name}: GETTING'
    rss_check_url = 'http://ajax.googleapis.com/ajax/services/feed/lookup?v=1.0&q=#{web_url}'
    uri = URI.parse(rss_check_url)
    response = JSON.parse(Net::HTTP.get(uri))
    rss_url = response['responseData']['url'] if response['responseData'] && response['responseData'].has_key?('url')
    
        def URIEncodeOctets(octets, result, index)
      if (@@hexCharCodeArray == 0)
        @@hexCharCodeArray = [48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
                              65, 66, 67, 68, 69, 70];
      end
      index = URIAddEncodedOctetToBuffer(octets[0], result, index);
      if (octets[1]);
        index = URIAddEncodedOctetToBuffer(octets[1], result, index)
      end
      if (octets[2]);
        index = URIAddEncodedOctetToBuffer(octets[2], result, index)
      end
      if (octets[3]);
        index = URIAddEncodedOctetToBuffer(octets[3], result, index)
      end
      return index;
    end
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
          private
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
        def possible_types
      MIME::Types.type_for(@filepath).collect(&:content_type)
    end
    
        # Returns the dot+extension of the file. e.g. '.jpg' for 'file.jpg'
    # If the style has a format defined, it will return the format instead
    # of the actual extension. If the extension is empty, no dot is added.
    def dotextension attachment, style_name
      ext = extension(attachment, style_name)
      ext.empty? ? ext : '.#{ext}'
    end