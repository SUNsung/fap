
        
              spec['version'] = Bootstrap::VERSION
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
      # Force all access to the app over SSL, use Strict-Transport-Security, and use secure cookies.
  # config.force_ssl = true
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      def validate_target_file
    if File.exist?(target_file)
      if  delete_target_file?
        File.delete(target_file)
      else
        signal_error('Package creation cancelled, a previously generated package exist at location: #{target_file}, move this file to safe place and run the command again')
      end
    end
  end
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end