
        
        module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
            class Listener < SubscriberMap
          def initialize(adapter, event_loop)
            super()
    
            attributes.flat_map do |key, value|
          if value.is_a?(Hash) && !table.has_column?(key)
            associated_predicate_builder(key).expand_from_hash(value)
          elsif table.associated_with?(key)
            # Find the foreign key when using queries such as:
            # Post.where(author: author)
            #
            # For polymorphic relationships, find the foreign key and type:
            # PriceEstimate.where(estimate_of: treasure)
            associated_table = table.associated_table(key)
            if associated_table.polymorphic_association?
              case value.is_a?(Array) ? value.first : value
              when Base, Relation
                value = [value] unless value.is_a?(Array)
                klass = PolymorphicArrayValue
              end
            end
    
    class ActionCable::Connection::AuthorizationTest < ActionCable::TestCase
  class Connection < ActionCable::Connection::Base
    attr_reader :websocket
    
      # Standard daemon things: become session leader, ignore SIGHUP, close stdin.
  Signal.trap('HUP', 'IGNORE')
  Process.setsid
  IO.new(0).close
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
        puts 'Downloading emojos from source... (#{source})'
    
          def bad_cookies
        @bad_cookies ||= []
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
      # Seed global randomization in this process using the `--seed` CLI option.
  # Setting this allows you to use `--seed` to deterministically reproduce
  # test failures related to randomization by passing the same `--seed` value
  # as the one that triggered the failure.
  Kernel.srand config.seed
    
      it 'should not leak changes to env' do
    klass    = described_class
    detector = Struct.new(:app) do
      def call(env)
        was = env.dup
        res = app.call(env)
        was.each do |k,v|
          next if env[k] == v
          fail 'env[#{k.inspect}] changed from #{v.inspect} to #{env[k].inspect}'
        end
        res
      end
    end