
        
        require 'vagrant/util/safe_puts'
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
            # Returns the internal data associated with this plugin. This
        # should NOT be called by the general public.
        #
        # @return [Hash]
        def self.data
          @data ||= {}
        end
    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && machines.length != 1
            @logger.debug('Using primary machine since single target')
            primary_name = @env.primary_machine_name
            raise Errors::MultiVMTargetRequired if !primary_name
            machines = [get_machine.call(primary_name)]
          end
    
            # This contains all the hosts and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :hosts
    
            # The logger for this class.
        LOGGER = Log4r::Logger.new('vagrant::plugin::v2::plugin')
    
          its(:env) { is_expected.to use_userpaths }
    end