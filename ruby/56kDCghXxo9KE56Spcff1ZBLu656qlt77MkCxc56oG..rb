
        
            def action_completed(action_name, status: nil, exception: nil)
      #  https://github.com/fastlane/fastlane/issues/11913
      # if exception.nil? || exception.fastlane_should_report_metrics?
      #   action_completion_context = FastlaneCore::ActionCompletionContext.context_for_action_name(action_name, args: ARGV, status: status)
      #   FastlaneCore.session.action_completed(completion_context: action_completion_context)
      # end
    end
    
    # Here be helper
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            # This contains all the registered guest capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :guest_capabilities
    
        # Checks if the given key is registered with the registry.
    #
    # @return [Boolean]
    def key?(key)
      @items.key?(key)
    end
    alias_method :has_key?, :key?
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def role_properties_for(names, &block)
      servers.role_properties_for(names, &block)
    end
    
          def add_roles(roles)
        Array(roles).each { |role| add_role(role) }
        self
      end
      alias roles= add_roles
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
      private
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end