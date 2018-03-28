
        
          nfs_setting = RUBY_PLATFORM =~ /darwin/ || RUBY_PLATFORM =~ /linux/
  config.vm.synced_folder '.', '/vagrant', id: 'vagrant-root'
    
      def clean_up_export_files
    Gitlab::Popen.popen(%W(find #{path} -not -path #{path} -mmin +#{mmin} -delete))
  end
end

    
            def log_level(name, options = {})
          if options[:prepend]
            level = log_levels.values.min
            level = level.nil? ? 0 : level - 1
          else
            level = log_levels.values.max
            level = level.nil? ? 0 : level + 1
          end
          log_levels.update(name => level)
          define_logger(name)
        end
    
      # Implemented by subclasses to hook into Capistrano's deployment flow using
  # using the `before` and `after` DSL methods. Note that `register_hooks` will
  # not be called if the user has opted-out of hooks when installing the plugin.
  #
  # Example:
  #
  #   def register_hooks
  #     after 'deploy:updated', 'my_plugin:do_something'
  #   end
  #
  def register_hooks; end