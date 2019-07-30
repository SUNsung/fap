
        
              def test_invert_remove_foreign_key_with_on_delete_on_update
        enable = @recorder.inverse_of :remove_foreign_key, [:dogs, :people, on_delete: :nullify, on_update: :cascade]
        assert_equal [:add_foreign_key, [:dogs, :people, on_delete: :nullify, on_update: :cascade]], enable
      end
    
        %w(SPATIAL FULLTEXT UNIQUE).each do |type|
      expected = 'ALTER TABLE `people` ADD #{type} INDEX `index_people_on_last_name`  (`last_name`)'
      assert_sql(expected) do
        ActiveRecord::Base.connection.change_table(:people, bulk: true) do |t|
          t.index :last_name, type: type
        end
      end
    end
    
          def self.delegate_to(klass)
        self.type_klass = klass
      end
    
          def get_device_type_with_simctl(device_names)
        return device_names if Helper.test?
    
              raise 'Device name must be 50 characters or less. \'#{name}\' has a #{name.length} character length.' if name.length > 50
    
            # Find target
        target = targets.find do |t|
          t.name == target_name
        end
        UI.user_error!('Cannot find target named '#{target_name}'') unless target
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :workspace,
                                       env_name: 'IPA_WORKSPACE',
                                       description: 'WORKSPACE Workspace (.xcworkspace) file to use to build app (automatically detected in current directory)',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :project,
                                       env_name: 'IPA_PROJECT',
                                       description: 'Project (.xcodeproj) file to use to build app (automatically detected in current directory, overridden by --workspace option, if passed)',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :configuration,
                                       env_name: 'IPA_CONFIGURATION',
                                       description: 'Configuration used to build',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :scheme,
                                       env_name: 'IPA_SCHEME',
                                       description: 'Scheme used to build app',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :clean,
                                       env_name: 'IPA_CLEAN',
                                       description: 'Clean project before building',
                                       optional: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :archive,
                                       env_name: 'IPA_ARCHIVE',
                                       description: 'Archive project after building',
                                       optional: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :destination,
                                       env_name: 'IPA_DESTINATION',
                                       description: 'Build destination. Defaults to current directory',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :embed,
                                       env_name: 'IPA_EMBED',
                                       description: 'Sign .ipa file with .mobileprovision',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :identity,
                                       env_name: 'IPA_IDENTITY',
                                       description: 'Identity to be used along with --embed',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :sdk,
                                       env_name: 'IPA_SDK',
                                       description: 'Use SDK as the name or path of the base SDK when building the project',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :ipa,
                                       env_name: 'IPA_IPA',
                                       description: 'Specify the name of the .ipa file to generate (including file extension)',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :xcconfig,
                                       env_name: 'IPA_XCCONFIG',
                                       description: 'Use an extra XCCONFIG file to build the app',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :xcargs,
                                       env_name: 'IPA_XCARGS',
                                       description: 'Pass additional arguments to xcodebuild when building the app. Be sure to quote multiple args',
                                       optional: true,
                                       type: :shell_string)
        ]
      end
    
      it 'asks to accept conflicts when the scenario was modified' do
    DefaultScenarioImporter.seed(user)
    agent = user.agents.where(name: 'Rain Notifier').first
    agent.options['expected_receive_period_in_days'] = 9001
    agent.save!
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This Scenario already exists in your system.')
    expect(page).to have_text('9001')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
          def check
        create_event :payload => {}
      end
    end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
    # Configure VAGRANT_CWD so that the tests never find an actual
# Vagrantfile anywhere, or at least this minimizes those chances.
ENV['VAGRANT_CWD'] = VAGRANT_TEST_CWD
    
      it 'provides the provider' do
    expect(subject.provider).to eq(provider)
  end
    
        # Returns whether or not we know how to install the provider with
    # the given name.
    #
    # @return [Boolean]
    def can_install_provider?(name)
      host.capability?(provider_install_key(name))
    end
    
      describe '#machine_index' do
    it 'returns a machine index' do
      expect(subject.machine_index).to be_kind_of(Vagrant::MachineIndex)
    end
    
    require 'log4r'
    
              triggers = filter_triggers(triggers, guest_name, type)
    
      let(:triggers) { VagrantPlugins::Kernel_V2::TriggerConfig.new }
  let(:hash_block) { {info: 'hi', run: {inline: 'echo 'hi''}} }
  let(:hash_block_two) { {warn: 'WARNING!!', run_remote: {inline: 'echo 'hi''}} }
    
        context 'when verify_host_key is true' do
      let(:ssh_info) {{
        host: 'localhost',
        port: 2222,
        username: 'vagrant',
        private_key_path: [private_key_path],
        verify_host_key: true
      }}
    
          it 'ensures recipient is not following sender' do
        expect(recipient.following?(sender)).to be false
      end
    end
  end
    
        map = map.sort { |a, b| a[0].size <=> b[0].size }.to_h
    
        it 'removes the following relation between user and target user' do
      expect(user.account.following?(other_account)).to be false
    end
    
        it 'renders the headers' do
      expect(mail.subject).to eq('bob favourited your status')
      expect(mail.to).to eq([receiver.email])
    end
    
      it 'does not notify when sender is muted with hide_notifications' do
    recipient.mute!(sender, notifications: true)
    is_expected.to_not change(Notification, :count)
  end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
      # fetch data
  fields = {
    :authors => `git shortlog -sn`.force_encoding('utf-8').scan(/[^\d\s].*/),
    :email   => ['mail@zzak.io', 'konstantin.haase@gmail.com'],
    :files   => %w(License README.md Rakefile Gemfile rack-protection.gemspec) + Dir['lib/**/*']
  }
    
          def report(env)
        warn env, 'attack reported by #{self.class}'
        env[options[:report_key]] = true
      end
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end