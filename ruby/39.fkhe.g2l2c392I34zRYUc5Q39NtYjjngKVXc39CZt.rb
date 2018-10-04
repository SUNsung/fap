
        
                  # Make sure we're only working with one VM if single target
          if options[:single_target] && vms.length != 1
            vm = @env.primary_vm
            raise Errors::MultiVMTargetRequired if !vm
            vms = [vm]
          end
    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && machines.length != 1
            @logger.debug('Using primary machine since single target')
            primary_name = @env.primary_machine_name
            raise Errors::MultiVMTargetRequired if !primary_name
            machines = [get_machine.call(primary_name)]
          end
    
            # This contains all the registered guest capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :guest_capabilities
    
              hook_name ||= ALL_ACTIONS
          components.action_hooks[hook_name.to_sym] << block
        end
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end
