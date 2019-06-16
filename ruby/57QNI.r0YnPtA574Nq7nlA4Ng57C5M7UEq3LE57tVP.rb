
        
              def self.symbols
        type_klass::SET.symbols
      end
    end
  end
end

    
              # Register a new provisioner class only if a name was given
          data[:provisioners].register(name.to_sym, &block) if name != UNSET_VALUE
    
            # This contains all the registered provider capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :provider_capabilities
    
              # The plugin should be registered if we're setting a real name on it
          Plugin.manager.register(self) if name != UNSET_VALUE
    
            # Initialize the provider to represent the given machine.
        #
        # @param [Vagrant::Machine] machine The machine that this provider
        #   is responsible for.
        def initialize(machine)
        end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
    Given(/config stage file has line '(.*?)'/) do |line|
  TestApp.append_to_deploy_file(line)
end
    
          servers.add_role(name, hosts, options)
    end
    
            @response = (gets || '').chomp
      end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
        desc 'Generate a valid ssh-config'
    task :ssh_config do
      require 'json'
      # Loop until the Vagrant box finishes SSH bootstrap
      raw_ssh_config = Stud.try(50.times, LogStash::CommandExecutor::CommandError) do
          LogStash::VagrantHelpers.fetch_config.stdout.split('\n');
      end
      parsed_ssh_config = LogStash::VagrantHelpers.parse(raw_ssh_config)
      File.write('.vm_ssh_config', parsed_ssh_config.to_json)
    end
    
    default_vagrant_boxes = ( platform == 'all' ? config.platforms : config.filter_type(platform, {'experimental' => experimental}) )
    
        def options_config=(options_config)
      loaded_config = ConfigLoader.load_file(options_config)
      @options_config = ConfigLoader.merge_with_default(loaded_config,
                                                        options_config)
    end