
        
              it 'creates a new user' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: '12345678'
        click_on 'Create User'
        expect(page).to have_text('User 'usertest' was successfully created.')
        expect(page).to have_text('test@test.com')
      end
    
        it 'does not send previously configured receivers when the current agent does not support them' do
      select_agent_type('Website Agent scrapes')
      sleep 0.5
      select2('ZKCD', from: 'Receivers')
      select_agent_type('Email Agent')
      fill_in(:agent_name, with: 'No receivers')
      click_on 'Save'
      expect(page).to have_content('No receivers')
      agent = Agent.find_by(name: 'No receivers')
      expect(agent.receivers).to eq([])
    end
  end
end

    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
      desc 'Build all spree gems'
  task :build do
    pkgdir = File.expand_path('../pkg', __FILE__)
    FileUtils.mkdir_p pkgdir
    
            def update
          authorize! :update, @order, order_token
    
          @@adjustment_attributes = [
        :id, :source_type, :source_id, :adjustable_type, :adjustable_id,
        :originator_type, :originator_id, :amount, :label, :mandatory,
        :locked, :eligible, :created_at, :updated_at
      ]
    
        def _send_target(e)
      _send_keys(tmux_window_and_pane_target, e)
    end
    
        def initialize(window_yaml, index, project)
      first_key = window_yaml.keys.first
    
    describe Tmuxinator::Hooks::Project do
  let(:project) { FactoryBot.build(:project) }
    
      if pane_base_index = options.fetch(:pane_base_index) { 1 }
    standard_options << 'pane-base-index #{pane_base_index}'
  end
    
          def default_project(name)
        '#{directory}/#{name}.yml'
      end
    
          Hash[settings]
    end