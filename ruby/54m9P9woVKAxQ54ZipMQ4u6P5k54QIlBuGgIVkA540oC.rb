
        
        gem 'rails', '~> 5.2'
gem 'omniauth', '~> 1.3'
gem 'oauth2'
gem 'omniauth-oauth2'
gem 'rdoc'
    
      def translation_scope
    'devise.sessions'
  end
    
      end
end
    
    module Devise
  module Controllers
    # Those helpers are convenience methods added to ApplicationController.
    module Helpers
      extend ActiveSupport::Concern
      include Devise::Controllers::SignInOut
      include Devise::Controllers::StoreLocation
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          opts[:format] = request_format unless skip_format?