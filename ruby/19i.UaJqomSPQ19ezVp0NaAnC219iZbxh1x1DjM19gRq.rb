
        
          @release_paths = (1..count.to_i).map do
    TestApp.cap('deploy')
    stdout, _stderr = run_vagrant_command('readlink #{TestApp.current_path}')
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
            def call
          @validator.call
        end
      end
    end
  end
end
