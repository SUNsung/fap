
        
        # puts '\nDone.'

    
        context 'creating new users' do
      it 'follow the 'new user' link' do
        visit admin_users_path
        click_on('New User')
        expect(page).to have_text('Create new User')
      end
    
        it 'shows the dry run pop up without previous events and selects the events tab when a event was created' do
      open_dry_run_modal(agent)
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
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
    
      describe '#nav_link' do
    it 'returns a nav link' do
      stub(self).current_page?('/things') { false }
      nav = nav_link('Things', '/things')
      a = Nokogiri(nav).at('li:not(.active) > a[href='/things']')
      expect(a.text.strip).to eq('Things')
    end
    
        it 'returns true if a ShellCommandAgent is present' do
      valid_parsed_data[:agents][0][:type] = 'Agents::ShellCommandAgent'
      expect(ScenarioImport.new(:data => valid_parsed_data.to_json)).to be_dangerous
    end
  end
    
            agent_runner.stop
      end
    end
    
      describe 'converting escaped JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('Weather looks like <$.conditions> according to the forecast at <$.pretty_date.time>')).to eq(
                                    'Weather looks like {{conditions}} according to the forecast at {{pretty_date.time}}'
      )
    end
    
      describe '#log_for_agent' do
    it 'creates AgentLogs' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(log).not_to be_new_record
      expect(log.agent).to eq(agents(:jane_website_agent))
      expect(log.outbound_event).to eq(events(:jane_website_agent_event))
      expect(log.message).to eq('some message')
      expect(log.level).to eq(4)
    end
    
        def filter_params
      params.permit(
        :domain_name
      )
    end
  end
end

    
      def hub_topic
    params['hub.topic']
  end
    
    RSpec::Matchers.define :have_path do |expected|
  match do |actual|
    await_condition { actual.current_path == expected }
  end
    
          it 'should not be catched when it is unexpected' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        allow(alice).to receive(:like!).and_raise('something')
        allow(@controller).to receive(:current_user).and_return(alice)
        expect { post :create, params: like_hash, format: :json }.to raise_error('something')
      end
    end
  end