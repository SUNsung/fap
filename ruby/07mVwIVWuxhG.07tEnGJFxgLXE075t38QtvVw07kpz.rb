
        
        def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    STDOUT.sync = true
    
            def stop
          # There is only one EventMachine instance per Ruby process so stopping
          # it here will stop the reactor thread we have running.
          EM.stop if EM.reactor_running?
          Jekyll.logger.debug 'LiveReload Server:', 'halted'
        end
    
      it 'allows to click on on the agent name in select2 tags' do
    visit new_agent_path
    select_agent_type('Website Agent scrapes')
    select2('SF Weather', from: 'Sources')
    click_on 'SF Weather'
    expect(page).to have_content 'Editing your WeatherAgent'
  end
    
      it 'shows the dry run pop up without previous events and selects the log tab when no event was created' do
    stub_request(:get, 'http://xkcd.com/').
      with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
      to_return(:status => 200, :body => '', :headers => {})
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
        it 'optionally supports treating values that start with '$' as raw JSONPath' do
      expect(Utils.interpolate_jsonpaths('$.there.world', payload)).to eq('$.there.world')
      expect(Utils.interpolate_jsonpaths('$.there.world', payload, :leading_dollarsign_is_jsonpath => true)).to eq('WORLD')
    end
  end
    
        it 'updates Agents' last_error_log_at when an error is logged' do
      AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 3, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at).to be_nil
    
        @opts = {
      'api_key' => '800deeaf-e285-9d62-bc90-j999c1973cc9',
      'path' => 'trackings'
    }
    
        def_delegators :@s, :scan_until, :skip_until, :string
    
        initialize_with { Tmuxinator::Project.new(file) }
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
    
      describe '.editor?' do
    context '$EDITOR is set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { 'vim' }
      end
    
        def rvm?
      yaml['rvm']
    end