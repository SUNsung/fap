
        
                def tag_options(options, escape = true)
          return if options.blank?
          output = ''.dup
          sep    = ' '
          options.each_pair do |key, value|
            if TAG_PREFIXES.include?(key) && value.is_a?(Hash)
              value.each_pair do |k, v|
                next if v.nil?
                output << sep
                output << prefix_tag_option(key, k, v, escape)
              end
            elsif BOOLEAN_ATTRIBUTES.include?(key)
              if value
                output << sep
                output << boolean_tag_option(key)
              end
            elsif !value.nil?
              output << sep
              output << tag_option(key, value, escape)
            end
          end
          output unless output.empty?
        end
    
      def test_redirect_with_null_bytes
    get :redirect_with_null_bytes
    assert_response :redirect
    assert_equal 'http://test.host/lolwat', redirect_to_url
  end
    
              # Returns fully resolved connection, accepts hash, string or symbol.
          # Always returns a hash.
          #
          # == Examples
          #
          # Symbol representing current environment.
          #
          #   Resolver.new('production' => {}).resolve_connection(:production)
          #   # => {}
          #
          # One layer deep hash of connection values.
          #
          #   Resolver.new({}).resolve_connection('adapter' => 'sqlite3')
          #   # => { 'adapter' => 'sqlite3' }
          #
          # Connection URL.
          #
          #   Resolver.new({}).resolve_connection('postgresql://localhost/foo')
          #   # => { 'host' => 'localhost', 'database' => 'foo', 'adapter' => 'postgresql' }
          #
          def resolve_connection(spec)
            case spec
            when Symbol
              resolve_symbol_connection spec
            when String
              resolve_url_connection spec
            when Hash
              resolve_hash_connection spec
            end
          end
    
      class TestInheritedMiddleware < TestMiddleware
    def setup
      @app = InheritedController.action(:index)
    end
  end
end

    
          add_delivery_method :smtp, Mail::SMTP,
        address:              'localhost',
        port:                 25,
        domain:               'localhost.localdomain',
        user_name:            nil,
        password:             nil,
        authentication:       nil,
        enable_starttls_auto: true
    
            def enqueue_delivery(delivery_method, options = {})
          if processed?
            super
          else
            args = @mailer_class.name, @action.to_s, delivery_method.to_s, @params, *@args
            ActionMailer::Parameterized::DeliveryJob.set(options).perform_later(*args)
          end
        end
    end
    
    # Disable available locale checks to avoid warnings running the test suite.
I18n.enforce_available_locales = false
    
          topic.feature_topic_users(args)
    end
    
            # Checks whether the record requires any confirmation.
        def pending_any_confirmation
          if (!confirmed? || pending_reconfirmation?)
            yield
          else
            self.errors.add(:email, :already_confirmed)
            false
          end
        end
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
      module Controllers
    autoload :Helpers,        'devise/controllers/helpers'
    autoload :Rememberable,   'devise/controllers/rememberable'
    autoload :ScopedViews,    'devise/controllers/scoped_views'
    autoload :SignInOut,      'devise/controllers/sign_in_out'
    autoload :StoreLocation,  'devise/controllers/store_location'
    autoload :UrlHelpers,     'devise/controllers/url_helpers'
  end
    
            # Registers additional pushes to be available.
        #
        # @param [String] name Name of the push.
        # @param [Hash] options List of options for the push.
        def self.push(name, options=nil, &block)
          components.pushes.register(name.to_sym) do
            [block.call, options]
          end
    
          return nil if parent.nil?
    
        # Returns a representation of the query as an array of strings and
    # potentially {Sass::Script::Tree::Node}s (if there's interpolation in it).
    # When the interpolation is resolved and the strings are joined together,
    # this will be the string representation of this query.
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    def to_a
      Sass::Util.intersperse(queries.map {|q| q.to_a}, ', ').flatten
    end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'margin-top: 11px; ' +
                'margin-right: 12px; ' +
                'margin-left: 13px;'
      bad_rule = 'margin-bottom: null;'
    
          expect('.position-explicit').to have_ruleset(ruleset)
    end
  end