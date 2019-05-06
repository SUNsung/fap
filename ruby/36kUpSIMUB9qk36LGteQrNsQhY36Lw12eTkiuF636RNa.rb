
        
        def gem_file
  '#{name}-#{Gem::Version.new(version)}.gem'
end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          # A single page of data and the corresponding page number.
      Page = Struct.new(:objects, :number)
    
          def expire_data_after_sign_in!
        # session.keys will return an empty array if the session is not yet loaded.
        # This is a bug in both Rack and Rails.
        # A call to #empty? forces the session to be loaded.
        session.empty?
        session.keys.grep(/^devise\./).each { |k| session.delete(k) }
      end
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          if options.has_key?(:only)
        @used_routes = self.routes & Array(options[:only]).map(&singularizer)
      elsif options[:skip] == :all
        @used_routes = []
      else
        @used_routes = self.routes - Array(options[:skip]).map(&singularizer)
      end
    end
    
    module Devise
  module Models
    # Rememberable manages generating and clearing token for remembering the user
    # from a saved cookie. Rememberable also has utility methods for dealing
    # with serializing the user into the cookie and back from the cookie, trying
    # to lookup the record based on the saved information.
    # You probably wouldn't use rememberable methods directly, they are used
    # mostly internally for handling the remember token.
    #
    # == Options
    #
    # Rememberable adds the following options in devise_for:
    #
    #   * +remember_for+: the time you want the user will be remembered without
    #     asking for credentials. After this time the user will be blocked and
    #     will have to enter their credentials again. This configuration is also
    #     used to calculate the expires time for the cookie created to remember
    #     the user. By default remember_for is 2.weeks.
    #
    #   * +extend_remember_period+: if true, extends the user's remember period
    #     when remembered via cookie. False by default.
    #
    #   * +rememberable_options+: configuration options passed to the created cookie.
    #
    # == Examples
    #
    #   User.find(1).remember_me!  # regenerating the token
    #   User.find(1).forget_me!    # clearing the token
    #
    #   # generating info to put into cookies
    #   User.serialize_into_cookie(user)
    #
    #   # lookup the user based on the incoming cookie information
    #   User.serialize_from_cookie(cookie_string)
    module Rememberable
      extend ActiveSupport::Concern
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
        def print_config_variables
      ['--print-config-variables', '-p',
       'Display the defined config variables before starting the deployment tasks.',
       lambda do |_value|
         Configuration.env.set(:print_config_variables, true)
       end]
    end
  end
end

    
        def cmdline_filters
      @cmdline_filters ||= []
    end
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
          def third_party_scm_name?
        !built_in_scm_name?
      end
    
    module Capistrano
  class Configuration
    # Decorates a Variables object to additionally perform an optional set of
    # user-supplied validation rules. Each rule for a given key is invoked
    # immediately whenever `set` is called with a value for that key.
    #
    # If `set` is called with a callable value or a block, validation is not
    # performed immediately. Instead, the validation rules are invoked the first
    # time `fetch` is used to access the value.
    #
    # A rule is simply a block that accepts two arguments: key and value. It is
    # up to the rule to raise an exception when it deems the value is invalid
    # (or just print a warning).
    #
    # Rules can be registered using the DSL like this:
    #
    #   validate(:my_key) do |key, value|
    #     # rule goes here
    #   end
    #
    class ValidatedVariables < SimpleDelegator
      include Capistrano::ProcHelpers
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug
    
        BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
        class << self
      def elastic_pack_base_uri
        env_url = ENV['LOGSTASH_PACK_URL']
        (env_url.nil? || env_url.empty?) ? DEFAULT_PACK_URL : env_url
      end
    
    class LogStash::PluginManager::Update < LogStash::PluginManager::Command
  REJECTED_OPTIONS = [:path, :git, :github]
  # These are local gems used by LS and needs to be filtered out of other plugin gems
  NON_PLUGIN_LOCAL_GEMS = ['logstash-core', 'logstash-core-plugin-api']
    
          def preference_field_tag(name, value, options)
        case options[:type]
        when :integer
          text_field_tag(name, value, preference_field_options(options))
        when :boolean
          hidden_field_tag(name, 0, id: '#{name}_hidden') +
            check_box_tag(name, 1, value, preference_field_options(options))
        when :string
          text_field_tag(name, value, preference_field_options(options))
        when :password
          password_field_tag(name, value, preference_field_options(options))
        when :text
          text_area_tag(name, value, preference_field_options(options))
        else
          text_field_tag(name, value, preference_field_options(options))
        end
      end
    
            within('.table-active-filters') do
          expect(page).to have_content('Start: 2018/01/01')
          expect(page).to have_content('Stop: 2018/06/30')
          expect(page).to have_content('Order: R100')
          expect(page).to have_content('Status: cart')
          expect(page).to have_content('Payment State: paid')
          expect(page).to have_content('Shipment State: pending')
          expect(page).to have_content('First Name Begins With: John')
          expect(page).to have_content('Last Name Begins With: Smith')
          expect(page).to have_content('Email: john_smith@example.com')
          expect(page).to have_content('SKU: BAG-00001')
          expect(page).to have_content('Promotion: Promo')
          expect(page).to have_content('Store: Spree Test Store')
          expect(page).to have_content('Channel: spree')
        end
      end
    end
  end
end

    
                  within_row(1) { click_icon 'split' }
              targetted_select2 stock_location2.name, from: '#s2id_item_stock_location'
              fill_in 'item_quantity', with: 2
    
      # Regression test for #4025
  context 'a shipment without a shipping method' do
    before do
      order.shipments.each do |s|
        # Deleting the shipping rates causes there to be no shipping methods
        s.shipping_rates.delete_all
      end
    end
    
        sh 'gem build spree.gemspec'
    mv 'spree-#{version}.gem', pkgdir
  end
    
              def order_token
            request.headers['X-Spree-Order-Token'] || params[:order_token]
          end
    
            def create
          variant = Spree::Variant.find(params[:line_item][:variant_id])
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
      end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end