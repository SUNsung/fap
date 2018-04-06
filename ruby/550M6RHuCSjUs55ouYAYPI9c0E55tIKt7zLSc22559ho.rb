
        
            def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end
    
            protected
    
            def failure_message
          'Attachment #{@attachment_name} should be required'
        end
    
            def lower_than_low?
          @low.nil? || !passes_validation_with_size(@low - 1)
        end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
          if app.config.respond_to?(:paperclip_defaults)
        Paperclip::Attachment.default_options.merge!(app.config.paperclip_defaults)
      end
    end
    
          def drop_attached_file(*args)
        ActiveSupport::Deprecation.warn 'Method `drop_attached_file` in the migration has been deprecated and will be replaced by `remove_attachment`.'
        remove_attachment(*args)
      end
    end
    
      TYPES = [ 'input', 'filter', 'output', 'codec' ]