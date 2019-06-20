
        
            def require_local_account!
      redirect_to admin_account_path(@account.id) unless @account.local? && @account.user.present?
    end
    
      private
    
      def payload
    @_payload ||= request.body.read
  end
    
      def rate_limit_reset
    (request_time + reset_period_offset).iso8601(6)
  end
    
      included do
    before_action :set_user_activity
  end
    
    require 'active_support/core_ext/string/inflections'
require 'cocoapods/command/spec/create'
require 'cocoapods/command/spec/lint'
require 'cocoapods/command/spec/which'
require 'cocoapods/command/spec/cat'
require 'cocoapods/command/spec/edit'