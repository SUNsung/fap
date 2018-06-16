
        
            if registration
      u2f.authenticate!(challenges, response, Base64.decode64(registration.public_key), registration.counter)
      registration.update(counter: response.counter)
      true
    end
  rescue JSON::ParserError, NoMethodError, ArgumentError, U2F::Error
    false
  end
end

    
          def merge!(other)
        other.each do |key, value|
          self[convert_key(key)] = value
        end
        self
      end
    
        def log_status(status)
      puts bold status
    end
    
      # Prepend all log lines with the following tags.
  # config.log_tags = [ :subdomain, :uuid ]
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
    When /^(?:|I )choose '([^']*)'$/ do |field|
  choose(field)
end
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
            def failure_message
          'Should have an attachment named #{@attachment_name}'
        end
    
            def failure_message
          'Attachment #{@attachment_name} should be required'
        end
    
      # Get list of styles saved on previous deploy (running rake paperclip:refresh:missing_styles)
  def self.get_registered_attachments_styles
    YAML.load_file(Paperclip.registered_attachments_styles_path)
  rescue Errno::ENOENT
    nil
  end
  private_class_method :get_registered_attachments_styles
    
        module Statements
      def add_attachment(table_name, *attachment_names)
        raise ArgumentError, 'Please specify attachment name in your add_attachment call in your migration.' if attachment_names.empty?