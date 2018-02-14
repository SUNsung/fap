
        
        class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
        def translation_scope
      'devise.unlocks'
    end
end

    
      # Specify an OmniAuth provider.
  #
  #   config.omniauth :github, APP_ID, APP_SECRET
  #
  def self.omniauth(provider, *args)
    config = Devise::OmniAuth::Config.new(provider, args)
    @@omniauth_configs[config.strategy_name.to_sym] = config
  end
    
            ActiveSupport.on_load(:action_controller) do
          if respond_to?(:helper_method)
            helper_method 'current_#{mapping}', '#{mapping}_signed_in?', '#{mapping}_session'
          end
        end
      end
    
          connection.execute(<<~SQL)
        CREATE OR REPLACE FUNCTION timestamp_id(table_name text)
        RETURNS bigint AS
        $$
          DECLARE
            time_part bigint;
            sequence_base bigint;
            tail bigint;
          BEGIN
            time_part := (
              -- Get the time in milliseconds
              ((date_part('epoch', now()) * 1000))::bigint
              -- And shift it over two bytes
              << 16);
    
    RSpec.describe ActivityPub::ProcessCollectionService do
  let(:actor) { Fabricate(:account, domain: 'example.com', uri: 'http://example.com/account') }
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
          class << self
        alias escape_url escape
        public :escape_html
      end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
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
    
        { # yes, this is ugly, feel free to change that
      '/..' => '/', '/a/../b' => '/b', '/a/../b/' => '/b/', '/a/.' => '/a/',
      '/%2e.' => '/', '/a/%2E%2e/b' => '/b', '/a%2f%2E%2e%2Fb/' => '/b/',
      '//' => '/', '/%2fetc%2Fpasswd' => '/etc/passwd'
    }.each do |a, b|
      it('replaces #{a.inspect} with #{b.inspect}') { expect(get(a).body).to eq(b) }
    end
    
      it 'should set the X-Content-Type-Options' do
    expect(get('/', {}, 'wants' => 'text/html').header['X-Content-Type-Options']).to eq('nosniff')
  end
    
      # Seed global randomization in this process using the `--seed` CLI option.
  # Setting this allows you to use `--seed` to deterministically reproduce
  # test failures related to randomization by passing the same `--seed` value
  # as the one that triggered the failure.
  Kernel.srand config.seed
    
            def should_be_unused?
          name.to_s.start_with?('_')
        end
    
      def render(source)
    template = File.read(source)
    renderer = ERB.new(template)
    context  = LogStash::PluginManager::RenderContext.new(options)
    renderer.result(context.get_binding)
  end
    
      def initialize(params={})
    super
    config_init(@params)
    register if respond_to?(:register)
    setup_multi_encode!
  end
    
      end