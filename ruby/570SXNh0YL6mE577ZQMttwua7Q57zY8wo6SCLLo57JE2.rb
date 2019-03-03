
        
          protected
    
    2) You are testing a Devise controller bypassing the router.
   If so, you can explicitly tell Devise which mapping to use:
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        alias :name :singular
    
            # Attempt to find a user by its reset_password_token to reset its
        # password. If a user is found and token is still valid, reset its password and automatically
        # try saving the record. If not user is found, returns a new user
        # containing an error in reset_password_token attribute.
        # Attributes must contain reset_password_token, password and confirmation
        def reset_password_by_token(attributes={})
          original_token       = attributes[:reset_password_token]
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, original_token)
    
    require 'devise/hooks/timeoutable'
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
      def update
    response, status = process_push_request
    render plain: response, status: status
  end
    
      def encoded_challenge
    HTMLEntities.new.encode(params['hub.challenge'])
  end
    
      private
    
      before_action :require_user!
    
      def default_locale
    if ENV['DEFAULT_LOCALE'].present?
      I18n.default_locale
    else
      request_locale || I18n.default_locale
    end
  end