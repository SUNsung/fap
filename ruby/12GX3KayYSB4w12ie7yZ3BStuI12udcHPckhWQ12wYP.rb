
        
            # This setting makes it so that network access from inside the vagrant guest
    # is able to resolve DNS using the hosts VPN connection.
    v.customize ['modifyvm', :id, '--natdnshostresolver1', 'on']
  end
    
          topic.feature_topic_users(args)
    end
    
    module Jobs
    
    BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
            return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        class << self
      attr_accessor :dir
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
          def html?(headers)
        return false unless header = headers.detect { |k,v| k.downcase == 'content-type' }
        options[:html_types].include? header.last[/^\w+\/\w+/]
      end
    end
  end
end

    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
        def assign_file_information
      instance_write(:file_name, cleanup_filename(@file.original_filename))
      instance_write(:content_type, @file.content_type.to_s.strip)
      instance_write(:file_size, @file.size)
    end
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
            def rejecting *types
          @rejected_types = types.flatten
          self
        end
    
    
    {  # Returns hash with styles missing from recent run of rake paperclip:refresh:missing_styles
  #   {
  #     :User => {:avatar => [:big]},
  #     :Book => {
  #       :cover => [:croppable]},
  #     }
  #   }
  def self.missing_attachments_styles
    current_styles = current_attachments_styles
    registered_styles = get_registered_attachments_styles