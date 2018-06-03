
        
        def bottle_resolve_formula_names(bottle_file)
  receipt_file_path = bottle_receipt_path bottle_file
  receipt_file = Utils.popen_read('tar', '-xOzf', bottle_file, receipt_file_path)
  name = receipt_file_path.split('/').first
  tap = Tab.from_file_content(receipt_file, '#{bottle_file}/#{receipt_file_path}').tap
    
          def installed_gem_version(gem_name)
        Gem.loaded_specs[gem_name].version
      end
    
          private
    
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
    
        def self.clear
      instance.clear
    end
    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end