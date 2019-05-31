
        
            it 'returns a label 'Missing Gems' if a given agent has dependencies missing' do
      stub(@agent).dependencies_missing? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Missing Gems'
    end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
            it 'should add an error when no service is selected' do
          expect(services_scenario_import.import).to eq(false)
          expect(services_scenario_import.errors[:base].length).to eq(1)
        end
      end
    
    describe AgentRunner do
  context 'without traps' do
    before do
      stub.instance_of(Rufus::Scheduler).every
      stub.instance_of(AgentRunner).set_traps
      @agent_runner = AgentRunner.new
    end
    
          expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
      describe 'migrating the 'make_message' format' do
    it 'should work' do
      expect(LiquidMigrator.convert_make_message('<message>')).to eq('{{message}}')
      expect(LiquidMigrator.convert_make_message('<new.message>')).to eq('{{new.message}}')
      expect(LiquidMigrator.convert_make_message('Hello <world>. How is <nested.life>')).to eq('Hello {{world}}. How is {{nested.life}}')
    end
  end
    
      let :agent do
    Agents::WebsiteAgent.create!(
      user: users(:bob),
      name: 'xkcd',
      options: valid_options,
      keep_events_for: 2.days
    )
  end
    
        it 'should require access token' do
      @checker.options['user_credentials'] = nil
      expect(@checker).not_to be_valid
    end
  end
    
            # This contains all the guests and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :guests
    
              # Persist through the set of invalid methods
          this_invalid  = @__invalid_methods || Set.new
          other_invalid = other.instance_variable_get(:'@__invalid_methods') || Set.new
          result.instance_variable_set(:'@__invalid_methods', this_invalid + other_invalid)
    
            # Defines additional configuration keys to be available in the
        # Vagrantfile. The configuration class should be returned by a
        # block passed to this method. This is done to ensure that the class
        # is lazy loaded, so if your class inherits from any classes that
        # are specific to Vagrant 1.0, then the plugin can still be defined
        # without breaking anything in future versions of Vagrant.
        #
        # @param [String] name Configuration key.
        def self.config(name, scope=nil, &block)
          scope ||= :top
          components.configs[scope].register(name.to_sym, &block)
          nil
        end
    
            # This should return a hash of information that explains how to
        # SSH into the machine. If the machine is not at a point where
        # SSH is even possible, then `nil` should be returned.
        #
        # The general structure of this returned hash should be the
        # following:
        #
        #     {
        #       host: '1.2.3.4',
        #       port: '22',
        #       username: 'mitchellh',
        #       private_key_path: '/path/to/my/key'
        #     }
        #
        # **Note:** Vagrant only supports private key based authentication,
        # mainly for the reason that there is no easy way to exec into an
        # `ssh` prompt with a password, whereas we can pass a private key
        # via commandline.
        #
        # @return [Hash] SSH information. For the structure of this hash
        #   read the accompanying documentation for this method.
        def ssh_info
          nil
        end
    
    profile = Profile.new
# puts profile.generate
command = ['/usr/bin/sandbox-exec', '-p', profile.generate, profile.pod_bin, *ARGV]
exec(*command)

    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
    Then(/^the task fails$/) do
  expect(@success).to be_falsey
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
          def delete(key)
        values.delete(key)
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'