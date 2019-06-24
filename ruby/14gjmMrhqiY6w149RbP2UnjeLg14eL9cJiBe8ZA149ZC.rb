
        
              it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
          select_agent_type('Scheduler Agent')
      fill_in(:agent_name, with: 'Test Scheduler Agent')
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
          context '#restart_dead_workers' do
        before do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
    
    describe AgentsExporter do
  describe '#as_json' do
    let(:name) { 'My set of Agents' }
    let(:description) { 'These Agents work together nicely!' }
    let(:guid) { 'some-guid' }
    let(:tag_fg_color) { '#ffffff' }
    let(:tag_bg_color) { '#000000' }
    let(:icon) { 'Camera' }
    let(:source_url) { 'http://yourhuginn.com/scenarios/2/export.json' }
    let(:agent_list) { [agents(:jane_weather_agent), agents(:jane_rain_notifier_agent)] }
    let(:exporter) { AgentsExporter.new(
      agents: agent_list, name: name, description: description,
      source_url: source_url, guid: guid, tag_fg_color: tag_fg_color,
      tag_bg_color: tag_bg_color, icon: icon) }