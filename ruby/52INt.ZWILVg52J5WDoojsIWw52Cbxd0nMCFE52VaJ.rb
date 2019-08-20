
        
          it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        it 'outputs control links to agents within the incoming set, but not outside it' do
      agents(:jane_rain_notifier_agent).control_targets = [agents(:jane_weather_agent), agents(:jane_basecamp_agent)]
      agents(:jane_rain_notifier_agent).save!
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent)).to eq([@agent2])
    end
    
          @log.level = 4
      expect(@log).to be_valid
    
        context 'to configure' do
      let(:real_target) {
        Agents::TriggerAgent.create!(
          name: 'somename',
          options: {
            expected_receive_period_in_days: 2,
            rules: [
              {
                'type' => 'field<value',
                'value' => '200.0',
                'path' => 'price',
              }
            ],
            keep_event: 'true'
          },
          user: users(:bob)
        )
      }
    
        context 'serializing' do
      before(:each) do
        @checker.options['mode'] = 'serialize'
        @checker.options['data_path'] = '$.data'
        @checker.options['data_key'] = 'data'
      end
    
        def initial_page?
      root_page? || context[:initial_paths].include?(subpath)
    end
    
        private
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
        def initialize
      @pages = {}
    end
    
          def stub(path, &block)
        @stubs[path] = block
        @stubs
      end
    end
    
            css('pre').each do |node|
          node.content = node.content.strip
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
      let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
  let(:communicator) { VagrantTests::DummyCommunicator::Communicator.new(machine) }
  let(:config)  { double('config') }
    
        let(:network_settings) { {'NetworkSettings' => {'Bridge'=>'', 'SandboxID'=>'randomid', 'HairpinMode'=>false, 'LinkLocalIPv6Address'=>'', 'LinkLocalIPv6PrefixLen'=>0, 'Ports'=>{'443/tcp'=>nil, '80/tcp'=>nil}, 'SandboxKey'=>'/var/run/docker/netns/158b7024a9e4', 'SecondaryIPAddresses'=>nil, 'SecondaryIPv6Addresses'=>nil, 'EndpointID'=>'randomEndpointID', 'Gateway'=>'172.17.0.1', 'GlobalIPv6Address'=>'', 'GlobalIPv6PrefixLen'=>0, 'IPAddress'=>'127.0.0.1', 'IPPrefixLen'=>16, 'IPv6Gateway'=>'', 'MacAddress'=>'02:42:ac:11:00:02', 'Networks'=>{'bridge'=>{'IPAMConfig'=>nil, 'Links'=>nil, 'Aliases'=>nil, 'NetworkID'=>'networkIDVar', 'EndpointID'=>'endpointIDVar', 'Gateway'=>'127.0.0.1', 'IPAddress'=>'127.0.0.1', 'IPPrefixLen'=>16, 'IPv6Gateway'=>'', 'GlobalIPv6Address'=>'', 'GlobalIPv6PrefixLen'=>0, 'MacAddress'=>'02:42:ac:11:00:02', 'DriverOpts'=>nil}}}} }
    
          # This is a process-local mutex that can be used by parallel
      # providers to lock the host VM access.
      def host_vm_mutex
        @@host_vm_mutex
      end
    
      def new_machine(options)
    double('machine').tap do |m|
      allow(m).to receive(:provider_name).and_return(provider_name)
      allow(m).to receive(:provider_options).and_return(options)
      allow(m).to receive(:action) do |action, opts|
        lock.synchronize do
          called_actions << [m, action, opts]
        end
      end
    end
  end
    
        # Fallback to the default
    path ||= '~/.vagrant.d'
    
      let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
    
          expect(response).to redirect_to(settings_preferences_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
            let(:object_json) do
          {
            id: 'https://example.com/actor#bar',
            type: 'Note',
            content: 'Lorem ipsum',
            to: 'http://example.com/followers',
            attributedTo: 'https://example.com/actor',
          }
        end
    
      def save
    case action
    when 'unfollow'
      unfollow!
    when 'remove_from_followers'
      remove_from_followers!
    when 'block_domains'
      block_domains!
    when 'approve'
      approve!
    when 'reject'
      reject!
    end
  end
    
        @inboxes = [@status.mentions, @status.reblogs, @status.preloadable_poll.votes].flat_map do |relation|
      relation.includes(:account).map do |record|
        record.account.preferred_inbox_url if !record.account.local? && record.account.activitypub?
      end
    end
    
    class ActivityPub::UpdateDistributionWorker
  include Sidekiq::Worker
  include Payloadable
    
      before do
    sign_in user, scope: :user
  end
    
      let(:json) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'foo',
      type: 'Move',
      actor: old_account.uri,
      object: old_account.uri,
      target: new_account.uri,
    }.with_indifferent_access
  end
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false