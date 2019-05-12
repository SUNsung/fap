
        
                  # Reload so we have the latest data, then delete and save
          unlocked_reload
          @machines.delete(entry.id)
          unlocked_save
    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && vms.length != 1
            vm = @env.primary_vm
            raise Errors::MultiVMTargetRequired if !vm
            vms = [vm]
          end
    
            # Sets a human-friendly description of the plugin.
        #
        # @param [String] value Description of the plugin.
        # @return [String] Description of the plugin.
        def self.description(value=UNSET_VALUE)
          get_or_set(:description, value)
        end
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
            # This contains all the synced folder implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Integer>>]
        attr_reader :synced_folders
    
    module Vagrant
  module Plugin
    module V2
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
    module Vagrant
  module Plugin
    module V2
      # This is the superclass for all V2 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
      attr_accessor :t, :hit, :pl, :n
end
    
      def pod_prefix
    File.expand_path('../..', pod_bin)
  end
    
            def run
          print_version
          signal_end_of_output
          listen
        end