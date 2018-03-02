
        
        def site_configuration(overrides = {})
  build_configs({
    'source'      => source_dir,
    'destination' => dest_dir
  }, build_configs(overrides))
end
    
    require 'bundler/setup'
require 'json'
require 'stackprof'
require File.expand_path('../lib/jekyll', __dir__)
    
        # Gets/Sets the content of this layout.
    attr_accessor :content
    
        def self.cleanup_cellar
      Formula.installed.each do |formula|
        cleanup_formula formula
      end
    end
    
          # Find commands in Homebrew/dev-cmd
      if ARGV.homebrew_developer?
        puts
        puts 'Built-in development commands'
        puts_columns internal_development_commands
      end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        html_filters.push 'clean_local_urls'
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
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
    
      describe '#react' do
    it 'prevents attacks and warns about it' do
      io = StringIO.new
      mock_app do
        use Rack::Protection, :logger => Logger.new(io)
        run DummyApp
      end
      post('/', {}, 'rack.session' => {}, 'HTTP_ORIGIN' => 'http://malicious.com')
      expect(io.string).to match(/prevented.*Origin/)
    end