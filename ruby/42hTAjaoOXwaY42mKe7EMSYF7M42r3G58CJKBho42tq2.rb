
        
              GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(2)
      expect(limit_reached_for(user.id, dt)).to eq(true)
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def guests
          result = {}
    
            protected
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
                  # Create an environment for this location and yield the
              # machine in that environment. We silence warnings here because
              # Vagrantfiles often have constants, so people would otherwise
              # constantly (heh) get 'already initialized constant' warnings.
              begin
                env = entry.vagrant_env(
                  @env.home_path, ui_class: @env.ui_class)
              rescue Vagrant::Errors::EnvironmentNonExistentCWD
                # This means that this environment working directory
                # no longer exists, so delete this entry.
                entry = @env.machine_index.get(name.to_s)
                @env.machine_index.delete(entry) if entry
                raise
              end
    
            # Defines a capability for the given guest. The block should return
        # a class/module that has a method with the capability name, ready
        # to be executed. This means that if it is an instance method,
        # the block should return an instance of the class.
        #
        # @param [String] guest The name of the guest
        # @param [String] cap The name of the capability
        def self.guest_capability(guest, cap, &block)
          components.guest_capabilities[guest.to_sym].register(cap.to_sym, &block)
          nil
        end