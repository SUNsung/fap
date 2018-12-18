
        
          def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def properties
        @properties ||= Properties.new
      end
    
            value_to_evaluate = block || value
    
          def string_to_code(string)
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
    desc 'Build and install'
task :install => :build do
  sh 'gem install --local --no-ri --no-rdoc pkg/#{name}-#{version}.gem'
end
    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
      s.test_files = s.files.select { |path| path =~ /^test\/test_.*\.rb/ }
end

    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
        def fire_event(event, options={})
      reverse = options[:reverse]
      reraise = options[:reraise]