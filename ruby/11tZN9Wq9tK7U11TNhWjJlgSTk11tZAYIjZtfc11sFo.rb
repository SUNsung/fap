
        
              it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
              it 'uses oclint provided' do
            expect(result).to include(command)
          end
        end
      end
    end
  end
end

    
    module FastlaneCore
  class ConfigItem
    # [Symbol] the key which is used as command parameters or key in the fastlane tools
    attr_accessor :key
    
    # Here be monkey patches
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
          global_option('--verbose') { FastlaneCore::Globals.verbose = true }
    
            # Registers a callback to be called when a specific action sequence
        # is run. This allows plugin authors to hook into things like VM
        # bootup, VM provisioning, etc.
        #
        # @param [Symbol] name Name of the action.
        # @return [Array] List of the hooks for the given action.
        def self.action_hook(name, &block)
          # Get the list of hooks for the given hook name
          data[:action_hooks] ||= {}
          hooks = data[:action_hooks][name.to_sym] ||= []
    
            # This contains all the configuration plugins by scope.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :configs
    
              components.providers.register(name.to_sym) do
            [block.call, options]
          end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def create
    active_session = current_session
    
      def pinned_version
    Keg.new(path.resolved_path).version if pinned?
  end
end

    
    describe BuildEnvironment do
  alias_matcher :use_userpaths, :be_userpaths
    
              def serialize_resource(resource)
            resource_serializer.new(
              resource,
              include: resource_includes,
              sparse_fields: sparse_fields
            ).serializable_hash
          end
    
          def invalid_resource!(resource)
        @resource = resource
        render 'spree/api/errors/invalid_resource', status: 422
      end
    
            def find_line_item
          id = params[:id].to_i
          order.line_items.detect { |line_item| line_item.id == id } or
            raise ActiveRecord::RecordNotFound
        end
    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability, :read).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end