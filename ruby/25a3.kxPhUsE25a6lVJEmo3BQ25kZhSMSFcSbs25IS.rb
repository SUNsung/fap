
        
            def register_lotus
      Lotus::Assets.sources << assets_path
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
          attr_reader :app, :options
    
          def bad_cookies
        @bad_cookies ||= []
      end
    
          expected_header = <<-END.chomp
rack.%2573ession=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
END
      expect(last_response.headers['Set-Cookie']).to eq(expected_header)
    end
  end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
        %w[/foo/bar /foo/bar/ / /.f /a.x].each do |path|
      it('does not touch #{path.inspect}') { expect(get(path).body).to eq(path) }
    end
    
          session = {:foo => :bar}
      get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'a'
      get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'b'
      expect(session[:foo]).to eq :bar
    end
    
      it 'should set the X-XSS-Protection for XHTML' do
    expect(get('/', {}, 'wants' => 'application/xhtml+xml').headers['X-XSS-Protection']).to eq('1; mode=block')
  end
    
    Dir[File.expand_path('../support/**/*.rb', __FILE__)].each { |f| require f }