    def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
            css('.l-sub-section', '.alert', '.banner').each do |node|
          node.name = 'blockquote'
        end
    
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
    
              result
        end
    
                # If we have this machine in our index, load that.
            entry = @env.machine_index.get(name.to_s)
            if entry
              @env.machine_index.release(entry)
    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
    Given /^I run a rails generator to generate a '([^']*)' scaffold with '([^']*)'$/ do |model_name, attributes|
  step %[I successfully run `rails generate scaffold #{model_name} #{attributes}`]
end
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end