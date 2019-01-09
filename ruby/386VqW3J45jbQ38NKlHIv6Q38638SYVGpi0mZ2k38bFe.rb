
        
                def preload_commit_authors
          # This also preloads the author of every commit. We're using 'lazy_author'
          # here since 'author' immediately loads the data on the first call.
          @pipeline.commit.try(:lazy_author)
        end
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
            # attributes - A hash containing the raw issue details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
    describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
  end
    
          it 'generates a DOT script' do
        expect(agents_dot(@agents)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1\];
            \k<bar2> \[label=bar2,style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3\];
          \}
          \z
        }x)
      end
    
          describe '#generate_diff' do
        it 'should check if the agent requires a service' do
          agent_diffs = services_scenario_import.agent_diffs
          basecamp_agent_diff = agent_diffs[0]
          expect(basecamp_agent_diff.requires_service?).to eq(true)
        end
    
    describe AgentRunner do
  context 'without traps' do
    before do
      stub.instance_of(Rufus::Scheduler).every
      stub.instance_of(AgentRunner).set_traps
      @agent_runner = AgentRunner.new
    end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
    describe AgentLog do
  describe 'validations' do
    before do
      @log = AgentLog.new(:agent => agents(:jane_website_agent), :message => 'The agent did something', :level => 3)
      expect(@log).to be_valid
    end
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end
