
        
            it 'opens the dry run modal even when clicking on the refresh icon' do
      visit edit_agent_path(agent)
      find('.agent-dry-run-button span.glyphicon').click
      expect(page).to have_text('Event to send (Optional)')
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
      describe '#values_at' do
    it 'returns arrays of matching values' do
      expect(Utils.values_at({ :foo => { :bar => :baz }}, 'foo.bar')).to eq(%w[baz])
      expect(Utils.values_at({ :foo => [ { :bar => :baz }, { :bar => :bing } ]}, 'foo[*].bar')).to eq(%w[baz bing])
      expect(Utils.values_at({ :foo => [ { :bar => :baz }, { :bar => :bing } ]}, 'foo[*].bar')).to eq(%w[baz bing])
    end
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end