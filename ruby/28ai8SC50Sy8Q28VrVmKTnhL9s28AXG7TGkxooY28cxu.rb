
        
          test 'should be active when confirmation sent at is not overpast' do
    swap Devise, allow_unconfirmed_access_for: 5.days do
      Devise.allow_unconfirmed_access_for = 5.days
      user = create_user
    
        initializer 'devise.omniauth', after: :load_config_initializers, before: :build_middleware_stack do |app|
      Devise.omniauth_configs.each do |provider, config|
        app.middleware.use config.strategy_class, *config.args do |strategy|
          config.strategy = strategy
        end
      end
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
    group :test do
  gem 'omniauth-facebook'
  gem 'omniauth-openid'
  gem 'webrat', '0.7.3', require: false
  gem 'mocha', '~> 1.1', require: false
end
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
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
    
    
end

    
      when '6.1.2'
    __NR_execve      = 7
    __NR_getpeername = 205
    __NR_accept      = 232
    __NR_listen      = 235
    __NR_bind        = 237
    __NR_socket      = 238
    __NR_connect     = 239
    __NR_close       = 272
    __NR_kfcntl      = 635
    
          def save_params_and_render_consent_form(endpoint)
        @o_auth_application = endpoint.o_auth_application
        @response_type = endpoint.response_type
        @redirect_uri = endpoint.redirect_uri
        @scopes = endpoint.scopes
        save_request_parameters
        @app = UserApplicationPresenter.new @o_auth_application, @scopes
        render :new
      end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end
    
            p environment.var(name)
      else
        p Script::Parser.parse(text, @line, 0).perform(environment)
      end
    rescue Sass::SyntaxError => e
      puts 'SyntaxError: #{e.message}'
      if @options[:trace]
        e.backtrace.each do |line|
          puts '\tfrom #{line}'
        end
      end
    end
  end
end

    
        # Returns the Rails.env constant.
    def rails_env attachment, style_name
      Rails.env
    end
    
      class Railtie < Rails::Railtie
    initializer 'paperclip.insert_into_active_record' do |app|
      ActiveSupport.on_load :active_record do
        Paperclip::Railtie.insert
      end