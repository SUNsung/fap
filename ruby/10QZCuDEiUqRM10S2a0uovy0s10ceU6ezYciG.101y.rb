
        
            fill_in(:agent_options, with: '{
      'expected_receive_period_in_days': '2'
      'keep_event': 'false'
    }')
    expect(get_alert_text_from { click_on 'Save' }).to have_text('Sorry, there appears to be an error in your JSON input. Please fix it before continuing.')
  end
    
        it 'opens the dry run modal even when clicking on the refresh icon' do
      visit edit_agent_path(agent)
      find('.agent-dry-run-button span.glyphicon').click
      expect(page).to have_text('Event to send (Optional)')
    end
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
        it 'returns a FontAwesome icon element' do
      icon = icon_tag('fa-copy', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('i.fa.fa-copy.text-info')).to be_a Nokogiri::XML::Element
    end
  end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
        it 'work with set FAILED_JOBS_TO_KEEP env variable' do
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(-1)
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(0)
      expect(@keep.id).to eq(Delayed::Job.order(:failed_at)[0].id)
    end
    
        it 'always succeeds in sorting even if it finds pairs of incomparable objects' do
      time = Time.now
      tuples = [
        [2,   'a', time - 1],  # 0
        [1,   'b', nil],       # 1
        [1,   'b', time],      # 2
        ['2', nil, time],      # 3
        [1,   nil, time],      # 4
        [nil, 'a', time + 1],  # 5
        [2,   'a', time],      # 6
      ]
      orders = [true, false, true]
      expected = tuples.values_at(3, 6, 0, 4, 2, 1, 5)
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
    end