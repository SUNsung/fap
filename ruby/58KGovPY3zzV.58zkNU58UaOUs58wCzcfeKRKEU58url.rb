
        
          def initialize(blob, variation_or_variation_key)
    @blob, @variation = blob, ActiveStorage::Variation.wrap(variation_or_variation_key)
  end
    
          def perform_action(data)
        find(data).perform_action ActiveSupport::JSON.decode(data['data'])
      end
    
          # Returns an escaped version of +html+ without affecting existing escaped entities.
      #
      #   escape_once('1 < 2 &amp; 3')
      #   # => '1 &lt; 2 &amp; 3'
      #
      #   escape_once('&lt;&lt; Accept & Checkout')
      #   # => '&lt;&lt; Accept &amp; Checkout'
      def escape_once(html)
        ERB::Util.html_escape_once(html)
      end
    
          # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
            def cast_value(value)
          case value
          when true then 1
          when false then 0
          else
            value.to_i rescue nil
          end
        end
    
      def test_helper_attr
    assert_nothing_raised { @controller_class.helper_attr :delegate_attr }
    assert_includes master_helper_methods, :delegate_attr
    assert_includes master_helper_methods, :delegate_attr=
  end
    
        test 'the middleware stack is exposed as 'middleware' in the controller' do
      result = @app.call(env_for('/'))
      assert_equal 'First!', result[1]['Middleware-Order']
    end
    
          debug { event.payload[:mail] }
    end
    
        class AdbHelper
      # Path to the adb binary
      attr_accessor :adb_path
    
          private
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      # POST /resource/password
  def create
    self.resource = resource_class.send_reset_password_instructions(resource_params)
    yield resource if block_given?
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
    require 'rack/test'
require 'action_controller/railtie'
require 'active_record'
require 'devise/rails/routes'
require 'devise/rails/warden_compat'
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
          alias default_reaction deny
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
          get '/?95df8d9bf5237ad08df3115ee74dcb10'
      expect(body).to eq('hi')
    end
    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end
    
      it 'should set the X-Content-Type-Options' do
    expect(get('/', {}, 'wants' => 'text/html').header['X-Content-Type-Options']).to eq('nosniff')
  end