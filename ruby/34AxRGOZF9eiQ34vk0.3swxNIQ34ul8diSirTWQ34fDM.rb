
        
            it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
        @scheduler = Rufus::Scheduler.new
    
        it 'should generate the correct projects url' do
      expect(@checker.send(:projects_url)).to eq('https://basecamp.com/12345/api/v1/projects.json')
    end