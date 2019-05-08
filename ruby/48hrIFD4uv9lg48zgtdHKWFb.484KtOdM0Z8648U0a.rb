
        
            if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
    1) You forgot to wrap your route inside the scope block. For example:
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
              path
        end
      end
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
          if options.has_key?(:only)
        @used_routes = self.routes & Array(options[:only]).map(&singularizer)
      elsif options[:skip] == :all
        @used_routes = []
      else
        @used_routes = self.routes - Array(options[:skip]).map(&singularizer)
      end
    end
    
          # Resets reset password token and send reset password instructions by email.
      # Returns the token sent in the e-mail.
      def send_reset_password_instructions
        token = set_reset_password_token
        send_reset_password_instructions_notification(token)
    
      private
    
      def organization
    @organization ||= current_user.organizations_scope.find_by_permalink!(params[:org_permalink])
  end
    
        organization.organization_users.where(:user => @user).destroy_all
    redirect_to_with_json [organization, :users], :notice => '#{@user.name} has been removed from this organization'
  end