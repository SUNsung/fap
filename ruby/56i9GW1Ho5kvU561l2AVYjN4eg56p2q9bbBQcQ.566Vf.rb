
        
        describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
  end
    
          open_dry_run_modal(agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('http://xkcd.com/')
      end
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
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
        it 'should raise error when response has an error' do
      stub(HTTParty).post { {'error' => {'message' => 'Sample error'}} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Sample error/)
    end
  end
end

    
    ## -- Misc Configs -- ##
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end