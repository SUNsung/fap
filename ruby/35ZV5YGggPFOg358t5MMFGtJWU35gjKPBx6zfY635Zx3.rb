
        
            it 'raises an exception when the version is commented-out in podspec' do
      test_content = '# s.version = '1.3.2''
      expect do
        Fastlane::Helper::PodspecHelper.new.parse(test_content)
      end.to raise_error('Could not find version in podspec content '#{test_content}'')
    end
    
          def self.services_mapping
        {
            access_wifi: 'access_wifi',
            app_group: 'app_group',
            apple_pay: 'apple_pay',
            associated_domains: 'associated_domains',
            auto_fill_credential: 'auto_fill_credential',
            data_protection: 'data_protection',
            game_center: 'game_center',
            health_kit: 'healthkit',
            home_kit: 'homekit',
            hotspot: 'hotspot',
            icloud: 'icloud',
            in_app_purchase: 'in_app_purchase',
            inter_app_audio: 'inter_app_audio',
            multipath: 'multipath',
            network_extension: 'network_extension',
            nfc_tag_reading: 'nfc_tag_reading',
            personal_vpn: 'personal_vpn',
            passbook: 'passbook',
            push_notification: 'push_notification',
            siri_kit: 'sirikit',
            vpn_configuration: 'vpn_conf',
            wallet: 'wallet',
            wireless_accessory: 'wireless_conf'
        }
      end
    
            mock_client_response(:get_builds_for_train, with: hash_including(train_version: '1.0')) do
          [
            {
              id: 1,
              appAdamId: 10,
              trainVersion: '1.0',
              uploadDate: '2017-01-01T12:00:00.000+0000',
              externalState: 'testflight.build.state.export.compliance.missing'
            }
          ]
        end
    
          it 'activates an existing user' do
        users(:bob).deactivate!
        visit admin_users_path
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/activate']').click
        expect(page).to have_no_text('inactive')
        users(:bob).reload
        expect(users(:bob)).to be_active
      end
    end
  end
end

    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'returns a FontAwesome icon element' do
      icon = icon_tag('fa-copy', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('i.fa.fa-copy.text-info')).to be_a Nokogiri::XML::Element
    end
  end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
    describe Agents::AftershipAgent do
  before do
    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end
    
            def set(key, value)
          pval = @properties[key]
          if pval.is_a?(Hash) && value.is_a?(Hash)
            pval.merge!(value)
          elsif pval.is_a?(Set) && value.is_a?(Set)
            pval.merge(value)
          elsif pval.is_a?(Array) && value.is_a?(Array)
            pval.concat value
          else
            @properties[key] = value
          end
        end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      it 'calls Hooks.commands_from' do
    expect(Tmuxinator::Hooks).to receive(:commands_from).
      with(kind_of(Tmuxinator::Project), hook_name).once
    project.send('hook_#{hook_name}')
  end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
          def generate_project_file(name, path)
        template = Tmuxinator::Config.default? ? :default : :sample
        content = File.read(Tmuxinator::Config.send(template.to_sym))
        erb = Erubis::Eruby.new(content).result(binding)
        File.open(path, 'w') { |f| f.write(erb) }
        path
      end