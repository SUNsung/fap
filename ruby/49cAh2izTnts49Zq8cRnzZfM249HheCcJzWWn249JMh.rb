
        
            it 'shows the dry run pop up without previous events and selects the events tab when a event was created' do
      open_dry_run_modal(agent)
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
    
        it 'returns a label 'Missing Gems' if a given agent has dependencies missing' do
      stub(@agent).dependencies_missing? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Missing Gems'
    end
    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
      let :old_template do
    {
      'url' => '{{url}}',
      'title' => '{{ title }}',
      'description' => '{{ hovertext }}',
      'comment' => '{{ comment }}'
    }
  end
    
        it 'cleans up old logs when there are more than log_length' do
      stub(AgentLog).log_length { 4 }
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 3')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 3')
    end
    
        @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => @opts)
    @checker.user = users(:bob)
    @checker.save!
  end
    
          event = Event.new
      event.agent = agents(:bob_rain_notifier_agent)
      event.payload = {
        'url' => 'http://xkcd.com',
        'link' => 'Random',
      }
      agent.receive([event])
    end
    
      def perform(project_id, user_id)
    project = Project.find(project_id)
    user = User.find(user_id)
    
          encrypted_token = Base64.decode64(value)
      Encryptor.decrypt(AES256_GCM_OPTIONS.merge(value: encrypted_token))
    end
  end
end

    
            [query, filters]
      end
    
          it { expect(presenter.can_update?).to eq(true) }
    end
    
              if windows?
            'C:/chef/backup'
          else
            '/var/chef/backup'
          end
        end
    
          # Ensure box attributes are set to original values in
      # case they were modified by the local box metadata
      config.vm.box = original_box
      config.vm.box_version = original_version
    
        it 'configures with the proper box version' do
      register_provider('foo')
    
                exit_status = true
            if Thread.current[:error]
              # We had an error, print the stack trace and exit immediately.
              exit_status = false
              error = Thread.current[:error]
              @logger.error(error.inspect)
              @logger.error(error.message)
              @logger.error(error.backtrace.join('\n'))
            end
    
            # Runs a script on a guest
        #
        # @param [Provisioners::Shell::Config] config A Shell provisioner config
        def run(config, on_error, exit_codes)
          if config.inline
            if Vagrant::Util::Platform.windows?
              cmd = config.inline
            else
              cmd = Shellwords.split(config.inline)
            end
    
      describe '#exec' do
    let(:ssh_info) {{
      host: 'localhost',
      port: 2222,
      username: 'vagrant',
      private_key_path: [private_key_path],
      compression: true,
      dsa_authentication: true
    }}
    
        # On Windows, we default to the USERPROFILE directory if it
    # is available. This is more compatible with Cygwin and sharing
    # the home directory across shells.
    if !path && ENV['USERPROFILE']
      path = '#{ENV['USERPROFILE']}/.vagrant.d'
    end
    
      describe '#index' do
    before do
      @message = alice.post(:status_message, text: 'hey', to: @alices_aspect.id)
    end
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
        # force a disk sync before running bundler
    gemfile.save
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
        after(:all) do
      logstash.uninstall
    end