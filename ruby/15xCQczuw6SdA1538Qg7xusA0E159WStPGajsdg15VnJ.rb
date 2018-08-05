
        
          def url_redirect_with_status_hash
    redirect_to('http://www.example.com', status: 301)
  end
    
          def initialize
        @log_tags = []
    
      validate do
    firm
  end
    
      class ChatChannel < BasicChannel
    attr_reader :room, :last_action
    after_subscribe :toggle_subscribed
    after_unsubscribe :toggle_subscribed
    
      test 'broadcasting_for with an object' do
    assert_equal 'Room#1-Campfire', ChatChannel.broadcasting_for(Room.new(1))
  end
    
      test 'disallow unknown args' do
    [ 'send_updates', Object.new, nil ].each do |invalid|
      e = assert_raise ArgumentError do
        ChatChannel.periodically invalid, every: 1
      end
      assert_match(/Expected a Symbol/, e.message)
    end
  end
    
      test 'subscription rejection' do
    subscriptions = Minitest::Mock.new
    subscriptions.expect(:remove_subscription, SecretChannel, [SecretChannel])
    
              wait_for_async
          assert_predicate connection.websocket, :alive?
        end
      end
    
    class ClientTest < ActionCable::TestCase
  WAIT_WHEN_EXPECTING_EVENT = 2
  WAIT_WHEN_NOT_EXPECTING_EVENT = 0.5
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
    module Sass::Exec
  # The `sass-convert` executable.
  class SassConvert < Base
    # @param args [Array<String>] The command-line arguments
    def initialize(args)
      super
      require 'sass'
      @options[:for_tree] = {}
      @options[:for_engine] = {:cache => false, :read_cache => true}
    end
    
            def log_levels
          @log_levels ||= {}
        end
    
        # @return [Boolean] Whether there was whitespace between `before` and `#{`
    attr_reader :whitespace_before
    }
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
      it 'comparison of Accept-Language header is not case sensitive' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'A'
    expect(session).not_to be_empty
  end
    
      # rspec-expectations config goes here. You can use an alternate
  # assertion/expectation library such as wrong or the stdlib/minitest
  # assertions if you prefer.
  config.expect_with :rspec do |expectations|
    # Enable only the newer, non-monkey-patching expect syntax.
    # For more details, see:
    #   - http://myronmars.to/n/dev-blog/2012/06/rspecs-new-expectation-syntax
    expectations.syntax = :expect
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