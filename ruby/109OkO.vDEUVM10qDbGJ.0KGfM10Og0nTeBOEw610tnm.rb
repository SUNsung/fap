          box_name     = argv[0]
          box_provider = argv[1].to_sym
          box_version  = argv[2]
    
          def add_claims_to_scopes
        return unless params[:claims]
        claims_json = JSON.parse(params[:claims])
        return unless claims_json
        claims_array = claims_json['userinfo'].try(:keys)
        return unless claims_array
        req = build_rack_request
        claims = claims_array.unshift(req[:scope]).join(' ')
        req.update_param('scope', claims)
      end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
        expect(get('/', {}, 'wants' => 'application/xhtml').headers['X-XSS-Protection']).to eq('1; mode=foo')
  end
    
        # Prevents you from mocking or stubbing a method that does not exist on
    # a real object. This is generally recommended.
    mocks.verify_partial_doubles = true
  end
    
      it 'allows passing on values in env' do
    klass    = described_class
    changer  = Struct.new(:app) do
      def call(env)
        env['foo.bar'] = 42
        app.call(env)
      end
    end
    detector = Struct.new(:app) do
      def call(env)
        app.call(env)
      end
    end
    
          def initialize_copy(copy)
        copy.instance_variable_set(:@entries, entries.dup)
      end
    
      puts '== Installing dependencies =='
  system 'gem install bundler --conservative'
  system 'bundle check || bundle install'
    
      # Debug mode disables concatenation and preprocessing of assets.
  # This option may cause significant delays in view rendering with a large
  # number of complex assets.
  config.assets.debug = true