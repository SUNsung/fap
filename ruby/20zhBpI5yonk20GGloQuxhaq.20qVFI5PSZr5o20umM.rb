
        
              def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
      def test_file_open_permissions
    Dir.mktmpdir(__method__.to_s) do |tmpdir|
      tmp = File.join(tmpdir, 'x')
      File.open(tmp, :mode     => IO::RDWR | IO::CREAT | IO::BINARY,
                     :encoding => Encoding::ASCII_8BIT) do |x|
    
          assert_equal(false, set < klass[1,2,3], klass.name)
      assert_equal(true, set < klass[1,2,3,4], klass.name)
    
      it 'decodes past whitespace bytes when passed the '*' modifier' do
    [ ['a b c',    ['a b c']],
      ['a\fb c',   ['a\fb c']],
      ['a\nb c',   ['a\nb c']],
      ['a\rb c',   ['a\rb c']],
      ['a\tb c',   ['a\tb c']],
      ['a\vb c',   ['a\vb c']],
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
end
    
        exit_loop = true
    
          it 'selects using the string when a hosts filter is present' do
        dsl.set :filter, hosts: 'server.local'
        SSHKit::Coordinator.expects(:new).with(['server.local']).returns(@coordinator)
        dsl.on('server.local')
      end
    
      def capture_io
    require 'stringio'
    
      context 'with custom session key' do
    it 'denies requests with duplicate session cookies' do
      mock_app do
        use Rack::Protection::CookieTossing, :session_key => '_session'
        run DummyApp
      end
    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
      it 'accepts a session without changes to tracked parameters' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session
    get '/', {}, 'rack.session' => session
    expect(session[:foo]).to eq(:bar)
  end
    
    
  it 'should set the X-Content-Type-Options for other content types' do
    expect(get('/', {}, 'wants' => 'application/foo').header['X-Content-Type-Options']).to eq('nosniff')
  end
    
    module Jekyll