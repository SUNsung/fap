
        
            context 'action launch' do
      let(:launch_context) do
        FastlaneCore::ActionLaunchContext.new(
          action_name: action_name,
          p_hash: p_hash,
          platform: 'ios',
          fastlane_client_language: fastlane_client_language
        )
      end
    
            tag = options[:tag] || '#{options[:grouping]}/#{lane_name}/#{options[:prefix]}#{options[:build_number]}#{options[:postfix]}'
        message = options[:message] || '#{tag} (fastlane)'
    
            message = '#{tag} (fastlane)'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
            expect(result[3]).to start_with('security set-keychain-settings')
        expect(result[3]).to include('-t 600')
        expect(result[3]).to include('-l')
        expect(result[3]).to include('-u')
        expect(result[3]).to include('~/Library/Keychains/test.keychain')
      end
    end
  end
end

    
          it 'handles the exclude_dirs parameter with multiple  elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle', 'Packages/'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle --exclude-dir Packages/')
      end
    end
  end
end

    
          describe 'validation' do
        it 'raises an exception if the data type is not as expected' do
          config_item = FastlaneCore::ConfigItem.new(key: :foo,
                                                     description: 'foo',
                                                     type: Float)
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
        def translation_scope
      'devise.confirmations'
    end
end

    
      def translation_scope
    'devise.sessions'
  end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
      if respond_to?(:helper_method)
    helpers = %w(resource scope_name resource_name signed_in_resource
                 resource_class resource_params devise_mapping)
    helper_method(*helpers)
  end
    
      # Defines which key will be used when recovering the password for an account
  mattr_accessor :reset_password_keys
  @@reset_password_keys = [:email]
    
                def current_#{group_name}(favourite=nil)
              mappings = #{mappings}
              mappings.unshift mappings.delete(favourite.to_sym) if favourite
              mappings.each do |mapping|
                current = warden.authenticate(scope: mapping)
                return current if current
              end
              nil
            end
    
          def expire_data_after_sign_in!
        # session.keys will return an empty array if the session is not yet loaded.
        # This is a bug in both Rack and Rails.
        # A call to #empty? forces the session to be loaded.
        session.empty?
        session.keys.grep(/^devise\./).each { |k| session.delete(k) }
      end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
        def javascripts_path
      File.join assets_path, 'javascripts'
    end
    
        def pos
      byte_to_str_pos @s.pos
    end
    
    # The module that contains everything Sass-related:
#
# * {Sass::Engine} is the class used to render Sass/SCSS within Ruby code.
# * {Sass::Plugin} is interfaces with web frameworks (Rails and Merb in particular).
# * {Sass::SyntaxError} is raised when Sass encounters an error.
# * {Sass::CSS} handles conversion of CSS to Sass.
#
# Also see the {file:SASS_REFERENCE.md full Sass reference}.
module Sass
  class << self
    # @private
    attr_accessor :tests_running
  end
    
        # Whether path is likely to be meant as the destination
    # in a source:dest pair.
    def probably_dest_dir?(path)
      return false unless path
      return false if colon_path?(path)
      Sass::Util.glob(File.join(path, '*.s[ca]ss')).empty?
    end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
    ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
Gem.use_paths(LogStash::Environment.logstash_gem_home)
    
          explicit_plugins_specs.each do |spec|
        packet_gem.add(spec.name)
      end
    
          include_examples('safe URI', :exclude_password_specs => true)
    end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
            def inventory_unit_params
          params.require(:inventory_unit).permit(permitted_inventory_unit_attributes)
        end
      end
    end
  end
end

    
            def order_id
          super || params[:id]
        end
      end
    end
  end
end

    
            def create
          @order.validate_payments_attributes([payment_params])
          @payment = @order.payments.build(payment_params)
          if @payment.save
            respond_with(@payment, status: 201, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@return_authorization)
        end
    
            def create
          @order = Spree::Order.find_by!(number: params.fetch(:shipment).fetch(:order_id))
          authorize! :read, @order
          authorize! :create, Shipment
          quantity = params[:quantity].to_i
          @shipment = @order.shipments.create(stock_location_id: params.fetch(:stock_location_id))
    
            def scope
          @stock_location.stock_movements.accessible_by(current_ability, :read)
        end