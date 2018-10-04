
        
        def bottle_receipt_path(bottle_file)
  Utils.popen_read('/usr/bin/tar', '-tzf', bottle_file, '*/*/INSTALL_RECEIPT.json').chomp
end
    
      def merge(*args)
    @settings.merge(*args)
    self
  end
    
            next unless path.file?
        file = path
    
      def internal_development_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'dev-cmd'
  end
    
            # This clears out all the registered plugins. This is only used by
        # unit tests and should not be called directly.
        def reset!
          @registered.clear
        end
    
    module Vagrant
  module Plugin
    module V1
      # This is the superclass for all V1 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
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