
        
          # Override prefixes to consider the scoped view.
  # Notice we need to check for the request due to a bug in
  # Action Controller tests that forces _prefixes to be
  # loaded before even having a request object.
  #
  # This method should be public as it is in ActionPack
  # itself. Changing its visibility may break other gems.
  def _prefixes #:nodoc:
    @_prefixes ||= if self.class.scoped_views? && request && devise_mapping
      ['#{devise_mapping.scoped_path}/#{controller_name}'] + super
    else
      super
    end
  end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
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
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
      def lease_seconds_or_default
    (params['hub.lease_seconds'] || 1.day).to_i.seconds
  end
    
      def show
    render_cached_json('api:v1:instances:activity:show', expires_in: 1.day) { activity }
  end
    
      def setting
    @_setting ||= ::Web::Setting.where(user: current_user).first_or_initialize(user: current_user)
  end
end

    
      included do
    before_action :authenticate_user!
    before_action :load_export
  end
    
              it 'does not split anything if the input quantity is garbage' do
            expect(order.shipments.first.stock_location.id).to eq(stock_location.id)
    
            def current
          @order = find_current_order
          if @order
            respond_with(@order, default_template: :show, locals: { root_object: @order })
          else
            head :no_content
          end
        end
    
              def remove_store_credit_service
            Spree::Api::Dependencies.storefront_checkout_remove_store_credit_service.constantize
          end
    
          def variant_attributes
        if @current_user_roles&.include?('admin')
          @@variant_attributes + [:cost_price]
        else
          @@variant_attributes
        end
      end
    end
  end
end
