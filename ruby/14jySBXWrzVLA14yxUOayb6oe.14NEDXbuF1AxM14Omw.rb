
        
            brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
      no_protocol_file_contents = %r{https?:\\?/\\?/}
  details[:file] = details[:file].gsub(no_protocol_file_contents, '/')
  secure_details[:file] = secure_details[:file].gsub(no_protocol_file_contents, '/')
    
          def all_gem_names
        core_gem_names + plugin_gem_names
      end
    
          def stage_definitions
        stage_config_path.join('*.rb')
      end
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
      it 'accepts requests with the same Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    expect(session).not_to be_empty
  end
    
      it 'should not override the header if already set X-Content-Type-Options' do
    mock_app with_headers('X-Content-Type-Options' => 'sniff')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Content-Type-Options']).to eq('sniff')
  end
end
