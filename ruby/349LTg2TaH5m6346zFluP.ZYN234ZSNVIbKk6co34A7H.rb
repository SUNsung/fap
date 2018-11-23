
        
              launch_event = builder.new_event(:launch)
      post_thread = client.post_event(launch_event)
      unless post_thread.nil?
        @threads << post_thread
      end
    end
    
        attr_accessor :collector
    
          context 'when specify log_path' do
        context 'when command is archive' do
          let(:command) { 'archive' }
          it '--log-path option is not present' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', log_path: 'bla.log')
              end').runner.execute(:test)
            end.to raise_error('Log path option is available only for 'build', 'bootstrap', and 'update' command.')
          end
        end
    
          context 'as string with spaces in name' do
        let(:path) { 'my file.txt' }
    
            allow(FastlaneCore::Helper).to receive(:backticks).with(allowed_command, print: FastlaneCore::Globals.verbose?)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_command, print: FastlaneCore::Globals.verbose?)
    
          def store_page?(page)
        page[:entries].present?
      end
    
        def type=(value)
      @type = value.try :strip
    end
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
        def additional_options
      {}
    end
    
        def process_response?(response)
      response.body.present?
    end
    
            if at_css('.api-type-label.module')
          at_css('h1').content = subpath.remove('api/')
        end
    
        # See {CapabilityHost#capability}
    def capability(*args)
      super
    rescue Errors::CapabilityNotFound => e
      raise Errors::GuestCapabilityNotFound,
        cap: e.extra_data[:cap],
        guest: name
    rescue Errors::CapabilityInvalid => e
      raise Errors::GuestCapabilityInvalid,
        cap: e.extra_data[:cap],
        guest: name
    end
    
              @registered.each do |plugin|
            result.merge!(plugin.guest.to_hash)
          end
    
      it 'sets the return value of the catch block to nil by default' do
    res = catch :blah do
      throw :blah
    end
    res.should == nil
  end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
        # Wraps the given string in terminal escapes
    # causing it to have the given color.
    # If terminal escapes aren't supported on this platform,
    # just returns the string instead.
    #
    # @param color [Symbol] The name of the color to use.
    #   Can be `:red`, `:green`, or `:yellow`.
    # @param str [String] The string to wrap in the given color.
    # @return [String] The wrapped string.
    def color(color, str)
      raise '[BUG] Unrecognized color #{color}' unless COLORS[color]
    
          def right_diff_line_number(id, line)
        if line =~ /^@@/
          m, ri                   = *line.match(/\+(\d+)/)
          @right_diff_line_number = ri.to_i
          @current_line_number    = @right_diff_line_number
          ret                     = '...'
        elsif line[0] == ?-
          ret = ' '
        elsif line[0] == ?+
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        else
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        end
        ret
      end
    end
  end
end

    
    
  test 'create pages within sub-directories' do
    post '/create', :content => 'big smelly creatures', :page => 'Orc',
         :path               => 'Mordor', :format => 'markdown', :message => 'oooh, scary'
    assert_equal 'http://example.org/Mordor/Orc', last_response.headers['Location']
    get '/Mordor/Orc'
    assert_match /big smelly creatures/, last_response.body
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    desc 'Update version number and gemspec'
task :bump do
  puts 'Updated version to #{bump_version}'
  # Execute does not invoke dependencies.
  # Manually invoke gemspec then validate.
  Rake::Task[:gemspec].execute
  Rake::Task[:validate].execute
end
    
      if cfg = options[:config]
    # If the path begins with a '/' it will be considered an absolute path,
    # otherwise it will be relative to the CWD
    cfg = File.join(Dir.getwd, cfg) unless cfg.slice(0) == File::SEPARATOR
    require cfg
  end