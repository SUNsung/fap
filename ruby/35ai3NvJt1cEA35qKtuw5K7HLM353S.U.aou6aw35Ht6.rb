
        
          def recipients(payload = {})
    emails = interpolated(payload)['recipients']
    if emails.present?
      if emails.is_a?(String)
        [emails]
      else
        emails
      end
    else
      [user.email]
    end
  end
    
      def evernote_consumer_secret
    (config = Devise.omniauth_configs[:evernote]) && config.strategy.consumer_secret
  end
    
        def translation_scope
      'devise.confirmations'
    end
end

    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          def template_paths
        template_path = _prefixes.dup
        template_path.unshift '#{@devise_mapping.scoped_path}/mailer' if self.class.scoped_views?
        template_path
      end
    
        private
    
    (allow process-exec
  (literal
    '<%= pod_bin %>'
    '<%= ruby_bin %>'
  )
  (regex
<% prefixes.each do |prefix| %>
    #'^<%= prefix %>/*'
<% end %>
  )
)
    
          # @param  [Xcodeproj::Project] project
      #         The xcode project to generate a podfile for.
      #
      # @return [String] the text of the Podfile for the provided project
      #
      def podfile_template(project)
        podfile = ''
        podfile << 'project '#{@project_path}'\n\n' if @project_path
        podfile << <<-PLATFORM.strip_heredoc
          # Uncomment the next line to define a global platform for your project
          # platform :ios, '9.0'
        PLATFORM