
        
            class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
    default_vagrant_boxes = ( platform == 'all' ? config.platforms : config.filter_type(platform, {'experimental' => experimental}) )
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
              lambda do |corrector|
            swap_range(corrector, current_range, previous_range)
          end
        end
    
            def message_for_normal_block(variable, all_arguments)
          if all_arguments.none?(&:referenced?) &&
             !define_method_call?(variable)
            if all_arguments.count > 1
              'You can omit all the arguments if you don't care about them.'
            else
              'You can omit the argument if you don't care about it.'
            end
          else
            message_for_underscore_prefix(variable)
          end
        end