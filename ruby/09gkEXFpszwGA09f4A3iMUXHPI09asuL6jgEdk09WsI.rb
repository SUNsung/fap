
        
            def log(message, options = {})
      return super unless dry_run?
      case options[:level] || 3
      when 0..2
        sev = Logger::DEBUG
      when 3
        sev = Logger::INFO
      else
        sev = Logger::ERROR
      end
    
      def validate_email_options
    errors.add(:base, 'subject and expected_receive_period_in_days are required') unless options['subject'].present? && options['expected_receive_period_in_days'].present?
    
      included do
    include Oauthable
    
      def load_event
    @event = current_user.events.find(params[:id])
  end
end

    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
        rake_tasks { load 'tasks/paperclip.rake' }
  end
    
          def check_validity!
        unless options.has_key?(:matches) || options.has_key?(:not)
          raise ArgumentError, 'You must pass in either :matches or :not to the validator'
        end
      end
    end