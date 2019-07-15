
        
            def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          def _devise_route_context
        @_devise_route_context ||= send(Devise.available_router_name)
      end
    end
  end
end

    
            # Attempt to find a user by its email. If a record is found, send new
        # password instructions to it. If user is not found, returns a new user
        # with an email not found error.
        # Attributes must contain the user's email
        def send_reset_password_instructions(attributes={})
          recoverable = find_or_initialize_with_errors(reset_password_keys, attributes, :not_found)
          recoverable.send_reset_password_instructions if recoverable.persisted?
          recoverable
        end
    
            @id               = id
        @local_data_path  = raw['local_data_path']
        @name             = raw['name']
        @provider         = raw['provider']
        @state            = raw['state']
        @vagrantfile_name = raw['vagrantfile_name']
        @vagrantfile_path = raw['vagrantfile_path']
        # TODO(mitchellh): parse into a proper datetime
        @updated_at       = raw['updated_at']
        @extra_data       = raw['extra_data'] || {}
    
            def initialize
          # The action hooks hash defaults to []
          @action_hooks = Hash.new { |h, k| h[k] = [] }
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
    
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end