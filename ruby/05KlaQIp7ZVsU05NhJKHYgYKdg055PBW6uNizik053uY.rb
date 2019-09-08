
        
            def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
      private
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
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
    
          def initialize_from_record(record)
        @scope_name = Devise::Mapping.find_scope!(record)
        @resource   = instance_variable_set('@#{devise_mapping.name}', record)
      end
    
        def fullpath
      '/#{@path_prefix}/#{@path}'.squeeze('/')
    end
    
          accessors.each do |accessor|
        mod.class_eval <<-METHOD, __FILE__, __LINE__ + 1
          def #{accessor}
            if defined?(@#{accessor})
              @#{accessor}
            elsif superclass.respond_to?(:#{accessor})
              superclass.#{accessor}
            else
              Devise.#{accessor}
            end
          end
    
        it 'renders the body' do
      expect(mail.body.encoded).to match('You were mentioned by bob')
      expect(mail.body.encoded).to include 'The body of the foreign status'
    end
  end
    
        # Calculates min and max from length validations for numeric inputs
    b.optional :min_max
    
          def gateway_action(source, action, success_state)
        protect_from_connection_error do
          response = payment_method.send(action, money.amount_in_cents,
                                         source,
                                         gateway_options)
          handle_response(response, success_state, :failure)
        end
      end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def show
          @option_type = Spree::OptionType.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@option_type)
        end