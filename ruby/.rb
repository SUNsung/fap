    def []=(name, value)
      @cookies[name.to_s] = value
      @send_cookies[name.to_s] = true
    end
    
            # Opens a root-level ParamsScope, defining parameter coercions and
        # validations for the endpoint.
        # @yield instance context of the new scope
        def params(&block)
          Grape::Validations::ParamsScope.new(api: self, type: Hash, &block)
        end
    
            def fail_with_invalid_version_header!(message)
          raise Grape::Exceptions::InvalidVersionHeader
            .new(message, error_headers)
        end