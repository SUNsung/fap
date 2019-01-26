
        
              it 'deactivates an existing user' do
        visit admin_users_path
        expect(page).to have_no_text('inactive')
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/deactivate']').click
        expect(page).to have_text('inactive')
        users(:bob).reload
        expect(users(:bob)).not_to be_active
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
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
      context '#set_traps' do
    it 'sets traps for INT TERM and QUIT' do
      agent_runner = AgentRunner.new
      mock(Signal).trap('INT')
      mock(Signal).trap('TERM')
      mock(Signal).trap('QUIT')
      agent_runner.set_traps
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
      before(:each) do
    stub_request(:get, /events.json$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /projects.json$/).to_return(
      :body => JSON.dump([{name: 'test', id: 1234},{name: 'test1', id: 1235}]),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    stub_request(:get, /02:00$/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/basecamp.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    @valid_params = { :project_id => 6789 }
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
      it 'returns true when passed ?f if the argument is a regular file' do
    Kernel.test(?f, @file).should == true
  end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
    $redis = Redis.new
    
          def clear
        entries.clear
      end