
        
            def is_question?(key)
      value = fetch_for(key, nil)
      !value.nil? && value.is_a?(Question)
    end
    
            def roles
          @roles ||= Set.new
        end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad