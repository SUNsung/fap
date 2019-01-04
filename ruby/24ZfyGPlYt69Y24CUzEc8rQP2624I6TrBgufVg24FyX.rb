
        
          # Controllers inheriting DeviseController are advised to override this
  # method so that other controllers inheriting from them would use
  # existing translations.
  def translation_scope
    'devise.#{controller_name}'
  end
    
    class BugTest < ActionDispatch::IntegrationTest
  include Rack::Test::Methods
  include Warden::Test::Helpers
    
          def _devise_route_context
        @_devise_route_context ||= send(Devise.available_router_name)
      end
    end
  end
end

    
          selected_modules = modules.map(&:to_sym).uniq.sort_by do |s|
        Devise::ALL.index(s) || -1  # follow Devise::ALL order
      end