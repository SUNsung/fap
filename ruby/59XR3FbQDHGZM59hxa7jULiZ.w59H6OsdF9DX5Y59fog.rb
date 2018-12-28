
        
            if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
      # Sets flash message if is_flashing_format? equals true
  def set_flash_message!(key, kind, options = {})
    if is_flashing_format?
      set_flash_message(key, kind, options)
    end
  end
    
          ROUTES[module_name] = key
    end
    
          generate_helpers!(Devise::URL_HELPERS)
    
          # Configure default email options
      def devise_mail(record, action, opts = {}, &block)
        initialize_from_record(record)
        mail headers_for(action, opts), &block
      end
    
      def update
    response, status = process_push_request
    render plain: response, status: status
  end
    
        data = {
      alerts: {
        follow: alerts_enabled,
        favourite: alerts_enabled,
        reblog: alerts_enabled,
        mention: alerts_enabled,
      },
    }
    
    class Api::Web::SettingsController < Api::Web::BaseController
  respond_to :json