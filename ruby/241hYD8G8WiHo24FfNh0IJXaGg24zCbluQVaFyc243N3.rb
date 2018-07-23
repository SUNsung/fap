
        
          def test_escape_javascript
    assert_equal '', escape_javascript(nil)
    assert_equal %(This \\'thing\\' is really\\n netos\\'), escape_javascript(%(This 'thing' is really\n netos'))
    assert_equal %(backslash\\\\test), escape_javascript(%(backslash\\test))
    assert_equal %(dont <\\/close> tags), escape_javascript(%(dont </close> tags))
    assert_equal %(unicode &#x2028; newline), escape_javascript(%(unicode \342\200\250 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    assert_equal %(unicode &#x2029; newline), escape_javascript(%(unicode \342\200\251 newline).dup.force_encoding(Encoding::UTF_8).encode!)
    
          private
        def concise_options(options)
          if columns.size == options.size && options.values.uniq.size == 1
            options.values.first
          else
            options
          end
        end
    end
    
            assert_called(connection.websocket, :transmit) do
          @server.broadcast 'test_room_1', { foo: 'bar' }, { coder: DummyEncoder }
          wait_for_async
          wait_for_executor connection.server.worker_pool.executor
        end
      end
    end
    
      setup do
    @server = TestServer.new
    @server.config.allowed_request_origins = %w( http://rubyonrails.com )
  end
    
    require 'test_helper'
    
        def check_maruku(config)
      if config.fetch('markdown', 'kramdown').to_s.casecmp('maruku').zero?
        Jekyll.logger.abort_with 'Error:', 'You're using the 'maruku' ' \
          'Markdown processor, which has been removed as of 3.0.0. ' \
          'We recommend you switch to Kramdown. To do this, replace ' \
          '`markdown: maruku` with `markdown: kramdown` in your ' \
          '`_config.yml` file.'
      end
    end
    
        context 'minimal configuration' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' }
        }
      end
    
        def teardown
      begin
        if @test_pid
          Timeout.timeout(2) do
            Process.waitpid(@test_pid)
          end
        end
      rescue Timeout::Error
        Process.kill(:KILL, @test_pid) if @test_pid
      ensure
        @test_out&.close
      end
    end
    
      it 'accepts extra flags as a keyword argument and combine with a string mode' do
    lambda {
      File.open(@file, 'w', flags: File::EXCL) { }
    }.should raise_error(Errno::EEXIST)
    
        it 'does not normalize line endings in binary mode' do
      @io = new_io(@fname, 'wb')
      @io.write 'a\r\nb\r\nc'
      @io.close
      File.binread(@fname).should == 'a\r\nb\r\nc'
    end
  end
end

    
        ruby_version_is '2.5' do
      it 'returns nil if other can't be converted to a string' do
        'abc'.casecmp?(mock('abc')).should be_nil
      end
    end
  end
end

    
          it 'handles a hanging comma without curly braces' do
        specs.fooM3('abc', 123, abc: 123,).should == ['abc', 123, {abc: 123}]
        specs.fooM3('abc', 123, rbx: 'cool', specs: :fail_sometimes, non_sym: 1234,).should ==
          ['abc', 123, { rbx: 'cool', specs: :fail_sometimes, non_sym: 1234 }]
      end
    end
  end
    
        res = Net::HTTPClientError.new('1.0', '4xx', 'test response')
    ruby_version_is ''...'2.6' do
      res.error_type.should == Net::HTTPServerException
    end
    ruby_version_is '2.6' do
      res.error_type.should == Net::HTTPClientException
    end
    
          def to_yaml
        @pairs.to_yaml
      end
    
      return unless check_content
    
    desc 'copy dot files for deployment'
task :copydot, :source, :dest do |t, args|
  FileList['#{args.source}/**/.*'].exclude('**/.', '**/..', '**/.DS_Store', '**/._*').each do |file|
    cp_r file, file.gsub(/#{args.source}/, '#{args.dest}') unless File.directory?(file)
  end
end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
        def render(context)
      file_dir = (context.registers[:site].source || 'source')
      file_path = Pathname.new(file_dir).expand_path
      file = file_path + @file
    
    module Jekyll
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end