
        
          class FeatureTopicUsers < Jobs::Base
    
      def regular?
    !staff?
  end
    
      def version
    object.metadata.version
  end
    
      def notification_setting_params
    allowed_fields = NotificationSetting::EMAIL_EVENTS.dup
    allowed_fields << :level
    params.require(:notification_setting).permit(allowed_fields)
  end
end

    
    FIRST     = -> l { LEFT[RIGHT[l]] }
IF        = -> b { b }
LEFT      = -> p { p[-> x { -> y { x } } ] }
RIGHT     = -> p { p[-> x { -> y { y } } ] }
IS_EMPTY  = LEFT
REST      = -> l { RIGHT[RIGHT[l]] }
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
    namespace :bower do