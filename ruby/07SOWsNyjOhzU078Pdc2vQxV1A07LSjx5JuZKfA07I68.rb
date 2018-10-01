
        
          # GET /resource/password/edit?reset_password_token=abcdef
  def edit
    self.resource = resource_class.new
    set_minimum_password_length
    resource.reset_password_token = params[:reset_password_token]
  end
    
          # The scope root url to be used when they're signed in. By default, it first
      # tries to find a resource_root_path, otherwise it uses the root_path.
      def signed_in_root_path(resource_or_scope)
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        router_name = Devise.mappings[scope].router_name
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def hostfilter
      ['--hosts HOSTS', '-z',
       'Run SSH commands only on matching hosts',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:host, value)
       end]
    end
    
          def built_in_scm_plugin_class_name
        'Capistrano::SCM::#{scm_name.to_s.capitalize}'
      end