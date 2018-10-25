
        
        group :test do
  gem 'omniauth-facebook'
  gem 'omniauth-openid'
  gem 'webrat', '0.7.3', require: false
  gem 'mocha', '~> 1.1', require: false
end
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      # GET /resource/password/new
  def new
    self.resource = resource_class.new
  end
    
      # Email regex used to validate email formats. It asserts that there are no
  # @ symbols or whitespaces in either the localpart or the domain, and that
  # there is a single @ symbol separating the localpart and the domain.
  mattr_accessor :email_regexp
  @@email_regexp = /\A[^@\s]+@[^@\s]+\z/
    
    module Devise
  module Controllers
    # Those helpers are convenience methods added to ApplicationController.
    module Helpers
      extend ActiveSupport::Concern
      include Devise::Controllers::SignInOut
      include Devise::Controllers::StoreLocation
    
              path
        end
      end
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end