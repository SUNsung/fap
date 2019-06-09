
        
        require 'rack/test'
require 'action_controller/railtie'
require 'active_record'
require 'devise/rails/routes'
require 'devise/rails/warden_compat'
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          included do
        include Devise::Controllers::ScopedViews
      end
    
        # Create magic predicates for verifying what module is activated by this map.
    # Example:
    #
    #   def confirmable?
    #     self.modules.include?(:confirmable)
    #   end
    #
    def self.add_module(m)
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{m}?
          self.modules.include?(:#{m})
        end
      METHOD
    end
    
          def message
        'The following attribute(s) is (are) missing on your model: #{@attributes.join(', ')}'
      end
    end
    
          # Resets reset password token and send reset password instructions by email.
      # Returns the token sent in the e-mail.
      def send_reset_password_instructions
        token = set_reset_password_token
        send_reset_password_instructions_notification(token)
    
        private
    
        def set_report_note
      @report_note = ReportNote.find(params[:id])
    end
  end
end

    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      private
    
      private