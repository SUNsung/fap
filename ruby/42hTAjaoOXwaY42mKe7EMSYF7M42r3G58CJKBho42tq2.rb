
        
                # Execute a command on the remote machine. The exact semantics
        # of this method are up to the implementor, but in general the
        # users of this class will expect this to be a shell.
        #
        # This method gives you no way to write data back to the remote
        # machine, so only execute commands that don't expect input.
        #
        # @param [String] command Command to execute.
        # @yield [type, data] Realtime output of the command being executed.
        # @yieldparam [String] type Type of the output. This can be
        #   `:stdout`, `:stderr`, etc. The exact types are up to the
        #   implementor.
        # @yieldparam [String] data Data for the given output.
        # @return [Integer] Exit code of the command.
        def execute(command, opts=nil)
        end
    
            # Converts this configuration object to JSON.
        def to_json(*a)
          instance_variables_hash.to_json(*a)
        end
    
            def initialize(env, config)
          @env    = env
          @config = config
        end
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
              # Return the dummy object so that anything else works
          ::Vagrant::Config::V2::DummyConfig.new
        end
    
            # This returns all synced folder implementations.
        #
        # @return [Registry]
        def synced_folders
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.synced_folders)
            end
          end
        end
    
          def requires_authentication?
        Spree::Api::Config[:requires_authentication]
      end
    
            def new; end
    
            def destroy
          authorize! :destroy, @product_property
          @product_property.destroy
          respond_with(@product_property, status: 204)
        end
    
            private