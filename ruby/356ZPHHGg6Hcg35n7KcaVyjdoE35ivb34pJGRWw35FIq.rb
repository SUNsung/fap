
        
            Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
                scenario_import.merges = {
              '0' => {
                'name' => 'a new name',
                'schedule' => '6pm',
                'keep_events_for' => 2.days.to_i.to_s,
                'disabled' => 'true',
                'options' => weather_agent_options.merge('api_key' => 'foo').to_json
              }
            }
    
        it 'outputs control links to agents within the incoming set, but not outside it' do
      agents(:jane_rain_notifier_agent).control_targets = [agents(:jane_weather_agent), agents(:jane_basecamp_agent)]
      agents(:jane_rain_notifier_agent).save!
    
          Utils.sort_tuples!(tuples, orders)
      expect(tuples).to eq expected
    end
  end
    
      let :reverted_extract do
    old_extract
  end
    
          # Store the ID locally
      @id = value.nil? ? nil : value.to_s
    
        # Finds a machine where the UUID is prefixed by the given string.
    #
    # @return [Hash]
    def find_by_prefix(prefix)
      @machines.each do |uuid, data|
        return data.merge('id' => uuid) if uuid.start_with?(prefix)
      end
    
              # First determine the proper array of VMs.
          vms = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                # This is a regular expression name, so we convert to a regular
                # expression and allow that sort of matching.
                regex = Regexp.new(pattern)
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Environment] env Vagrant::Environment object of the
        #   environment that this configuration has been loaded into. This
        #   gives you convenient access to things like the the root path
        #   and so on.
        # @param [ErrorRecorder] errors
        def validate(env, errors)
        end
      end
    end
  end
end

    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Given(/^a task which executes as root$/) do
  TestApp.copy_task_to_test_app('spec/support/tasks/root.rake')
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          def echo?
        (options || {}).fetch(:echo, true)
      end
    end
  end
end

    
    MESSAGE
      end
    end
  end
end

    
          def fetch_primary(role)
        hosts = roles_for([role])
        hosts.find(&:primary) || hosts.first
      end