
        
          def parse(csp_string)
    csp_string.split(';').map do |policy|
      directive, *sources = policy.split
      [directive, sources]
    end.to_h
  end
end

    
        Extension.theme_extensions(theme_ids).each { |extension| builder << extension }
    Extension.plugin_extensions.each { |extension| builder << extension }
    builder << Extension.site_setting_extension
    
      def self.lookup(unhashed_token, opts = nil)
    mark_seen = opts && opts[:seen]
    
        query
  end
    
            Redis::Cache.with do |redis|
          redis.multi do |m|
            m.sadd(key, value)
            m.expire(key, timeout)
          end
        end
      end
    
          attr_reader :octokit
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
      # Full error reports are disabled and caching is turned on.
  config.consider_all_requests_local       = false
  config.action_controller.perform_caching = true