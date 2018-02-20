
        
        
    {    def replace_escaping(less)
      less = less.gsub(/~'([^']+)'/, '\1').gsub(/~'([^']+)'/, '\1') # Get rid of ~'' escape
      less.gsub!(/\$\{([^}]+)\}/, '$\1') # Get rid of @{} escape
      less.gsub!(/'([^'\n]*)(\$[\w\-]+)([^'\n]*)'/, ''\1#{\2}\3'') # interpolate variable in string, e.g. url('$file-1x') => url('#{$file-1x}')
      less.gsub(/(\W)e\(%\('?([^']*)'?\)\)/, '\1\2') # Get rid of e(%('')) escape
    end
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
    begin
  require 'escape_utils'
rescue LoadError
end
    
      context 'with custom session key' do
    it 'denies requests with duplicate session cookies' do
      mock_app do
        use Rack::Protection::CookieTossing, :session_key => '_session'
        run DummyApp
      end
    
            post '/', :file => Rack::Test::UploadedFile.new(temp_file.path), :other => '<bar>'
        expect(body).to eq('_escaped_params_tmp_file\nhello world\n&lt;bar&gt;')
      ensure
        File.unlink(temp_file.path)
      end
    end
  end
end

    
      it 'passes errors through if :reaction => :report is used' do
    mock_app do
      use Rack::Protection, :reaction => :report
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['protection.failed'].to_s]] }
    end
    
      it 'accepts requests with a changing Version header'do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_VERSION' => '1.0'
    get '/', {}, 'rack.session' => session, 'HTTP_VERSION' => '1.1'
    expect(session[:foo]).to eq(:bar)
  end
end

    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random
    
            private
    
        def self.each_definition(&block)
      instance.each_definition(&block)
    end
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} cannot be between #{@low} and #{@high} bytes'
        end
        alias negative_failure_message failure_message_when_negated