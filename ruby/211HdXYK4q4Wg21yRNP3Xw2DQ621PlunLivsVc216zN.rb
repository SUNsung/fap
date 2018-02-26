
        
                if Devise.activerecord51?
          def postpone_email_change?
            postpone = self.class.reconfirmable &&
              will_save_change_to_email? &&
              !@bypass_confirmation_postpone &&
              self.email.present? &&
              (!@skip_reconfirmation_in_callback || !self.email_in_database.nil?)
            @bypass_confirmation_postpone = false
            postpone
          end
        else
          def postpone_email_change?
            postpone = self.class.reconfirmable &&
              email_changed? &&
              !@bypass_confirmation_postpone &&
              self.email.present? &&
              (!@skip_reconfirmation_in_callback || !self.email_was.nil?)
            @bypass_confirmation_postpone = false
            postpone
          end
        end
    
          assert_email_not_sent do
        assert admin.confirm
      end
    end
  end
end

    
      # POST /resource/password
  def create
    self.resource = resource_class.send_reset_password_instructions(resource_params)
    yield resource if block_given?
    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
    module Jekyll
    
      # Returns a title cased string based on John Gruber's title case http://daringfireball.net/2008/08/title_case_update
  def titlecase(input)
    input.titlecase
  end
    
    
    
        def process_options(options_type, style) #:nodoc:
      all_options   = @options[options_type][:all]
      all_options   = all_options.call(instance)   if all_options.respond_to?(:call)
      style_options = @options[options_type][style]
      style_options = style_options.call(instance) if style_options.respond_to?(:call)
    
        # Returns the larger of the two dimensions
    def larger
      [height, width].max
    end
    
        # Returns a the attachment hash.  See Paperclip::Attachment#hash_key for
    # more details.
    def hash attachment=nil, style_name=nil
      if attachment && style_name
        attachment.hash_key(style_name)
      else
        super()
      end
    end
    
            def description
          'have an attachment named #{@attachment_name}'
        end
    
            def error_when_not_valid?
          @subject.send(@attachment_name).assign(nil)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}'].present?
        end