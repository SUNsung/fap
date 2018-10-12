
        
        # Sample contents
WITHOUT_LIQUID = <<-TEXT.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. Etiam bibendum magna et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
      url = File.dirname(url)
  url == FORWARD_SLASH ? url : '#{url}/'
end
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    When(%r!^I run git add .$!) do
  run_in_shell('git', 'add', '.', '--verbose')
end
    
              # This is too noisy even for --verbose, but uncomment if you need it for
          # a specific WebSockets issue.  Adding ?LR-verbose=true onto the URL will
          # enable logging on the client side.
          # em_opts[:debug] = true
    
            def initialize(config)
          @main_fallback_highlighter = config['highlighter'] || 'rouge'
          @config = config['kramdown'] || {}
          @highlighter = nil
          setup
        end
    
            if ARGV.git?
          puts 'This directory is now a git repo. Make your changes and then use:'
          puts '  git diff | pbcopy'
          puts 'to copy the diff to the clipboard.'
        end
    
      def find_internal_commands(directory)
    directory.children.reduce([]) do |cmds, f|
      cmds << f.basename.to_s.sub(/\.(?:rb|sh)$/, '') if f.file?
      cmds
    end
  end
end

    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
    [
 [Badge::NiceShare, 'Nice Share', BadgeType::Bronze, 25],
 [Badge::GoodShare, 'Good Share', BadgeType::Silver, 300],
 [Badge::GreatShare, 'Great Share', BadgeType::Gold, 1000],
].each do |id, name, level, count|
  Badge.seed do |b|
    b.id = id
    b.name = name
    b.badge_type_id = level
    b.multiple_grant = true
    b.target_posts = true
    b.show_posts = true
    b.query = BadgeQueries.sharing_badge(count)
    b.default_badge_grouping_id = BadgeGrouping::Community
    # don't trigger for now, its too expensive
    b.trigger = Badge::Trigger::None
    b.system = true
  end
end
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
            def self.normalize_dn(dn)
          ::Gitlab::Auth::LDAP::DN.new(dn).to_normalized_s
        rescue ::Gitlab::Auth::LDAP::DN::FormatError => e
          Rails.logger.info('Returning original DN \'#{dn}\' due to error during normalization attempt: #{e.message}')
    
          def user
        find_sessionless_user || find_user_from_warden
      end
    
          PRIVATE_TOKEN_HEADER = 'HTTP_PRIVATE_TOKEN'.freeze
      PRIVATE_TOKEN_PARAM = :private_token
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
                # Use the default provider if nothing else
            provider_to_use ||= @env.default_provider(machine: name)
    
            # This returns all registered provisioners.
        #
        # @return [Hash]
        def provisioners
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.provisioner)
            end
          end
        end
    
            # This method is called if the underlying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
      # The global load paths for Sass files. This is meant for plugins and
  # libraries to register the paths to their Sass stylesheets to that they may
  # be `@imported`. This load path is used by every instance of {Sass::Engine}.
  # They are lower-precedence than any load paths passed in via the
  # {file:SASS_REFERENCE.md#load_paths-option `:load_paths` option}.
  #
  # If the `SASS_PATH` environment variable is set,
  # the initial value of `load_paths` will be initialized based on that.
  # The variable should be a colon-separated list of path names
  # (semicolon-separated on Windows).
  #
  # Note that files on the global load path are never compiled to CSS
  # themselves, even if they aren't partials. They exist only to be imported.
  #
  # @example
  #   Sass.load_paths << File.dirname(__FILE__ + '/sass')
  # @return [Array<String, Pathname, Sass::Importers::Base>]
  def self.load_paths
    @load_paths ||= if ENV['SASS_PATH']
                      ENV['SASS_PATH'].split(Sass::Util.windows? ? ';' : ':')
                    else
                      []
                    end
  end
    
            exit 1
      end
      exit 0
      # rubocop:enable RescueException
    end
    
    PROFILE_ERB_TEMPLATE = <<-EOS
(version 1)
(debug allow)
    
        # @todo If a command is run inside another one some settings which where
    #       true might return false.
    #
    # @todo We should probably not even load colored unless needed.
    #
    # @todo Move silent flag to CLAide.
    #
    # @note It is important that the commands don't override the default
    #       settings if their flag is missing (i.e. their value is nil)
    #
    def initialize(argv)
      super
      config.silent = argv.flag?('silent', config.silent)
      config.verbose = self.verbose? unless verbose.nil?
      unless self.ansi_output?
        Colored2.disable!
        String.send(:define_method, :colorize) { |string, _| string }
      end
    end
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
    ```
Executable Path: #{actual_path}
```
EOS
      end
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
    World(RemoteCommandHelpers)

    
        def top_level_tasks
      if tasks_without_stage_dependency.include?(@top_level_tasks.first)
        @top_level_tasks
      else
        @top_level_tasks.unshift(ensure_stage.to_s)
      end
    end
    
    require 'bootstrap/environment'
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
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
    
          context 'when the plugin doesnt exist' do
        it 'fails to install and report an error' do
          command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-output-impossible-plugin')
          expect(command.stderr).to match(/Plugin not found, aborting/)
        end
      end
    end
  end
end

    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end