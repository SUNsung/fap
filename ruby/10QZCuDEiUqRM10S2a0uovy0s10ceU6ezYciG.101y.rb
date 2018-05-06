
        
          class FeatureTopicUsers < Jobs::Base
    
      def cache_fragment(name)
    ApplicationSerializer.fragment_cache[name] ||= yield
  end
end

    
      def evernote_oauth_token
    service && service.token
  end
end

    
      def destroy_failed
    Delayed::Job.where.not(failed_at: nil).delete_all
    
          def handle_prompt_none
        if params[:prompt] == 'none'
          if user_signed_in?
            handle_prompt_with_signed_in_user
          else
            handle_params_error('login_required', 'User must already be logged in when `prompt` is `none`')
          end
        else
          handle_params_error('invalid_request', 'The 'none' value cannot be used with any other prompt value')
        end
      end