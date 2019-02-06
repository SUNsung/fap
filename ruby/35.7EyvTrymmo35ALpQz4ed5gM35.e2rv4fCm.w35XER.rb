
        
              command.args.each do |arg|
        arg_value = arg.value
        if arg.value_type.to_s.to_sym == :string_closure
          closure = proc { |string_value| closure_argument_value = string_value }
          arg_value = closure
        end
        parameter_map[arg.name.to_sym] = arg_value
      end
    
    # Here be monkey patches
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
        context '(de)activating users' do
      it 'does not show deactivation buttons for the current user' do
        visit admin_users_path
        expect(page).to have_no_css('a[href='/admin/users/#{users(:jane).id}/deactivate']')
      end
    
      describe '#nav_link' do
    it 'returns a nav link' do
      stub(self).current_page?('/things') { false }
      nav = nav_link('Things', '/things')
      a = Nokogiri(nav).at('li:not(.active) > a[href='/things']')
      expect(a.text.strip).to eq('Things')
    end
    
          it 'loads only the workers specified in the :only option' do
        agent_runner = AgentRunner.new(only: HuginnScheduler)
        workers = agent_runner.send(:load_workers)
        expect(workers.keys).to eq(['HuginnScheduler'])
        agent_runner.stop
      end
    
          expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
      describe '#check' do
    it 'should not emit events on its first run' do
      expect { @checker.check }.to change { Event.count }.by(0)
      expect(@checker.memory[:last_event]).to eq '2014-04-17T10:25:31.000+02:00'
    end
    it 'should check that initial run creates an event' do
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
    
        def inheritable_copy
      self.class.new @filters
    end
    
        def html?
      mime_type.include? 'html'
    end
    
          def mod
        return @mod if defined?(@mod)
        @mod = slug[/api\/([\w\-\.]+)\//, 1]
        @mod.remove! 'angular2.' if @mod
        @mod
      end
    end
  end
end

    
      url 'http://swupdl.adobe.com/updates/oobe/aam20/mac/AdobeLightroom-#{version.major}.0/#{version}/setup.dmg'
  name 'Adobe Photoshop Lightroom'
  homepage 'https://www.adobe.com/products/photoshop-lightroom.html'
    
      def target_file
    target_file = File.join(LogStash::Environment::LOGSTASH_HOME, 'plugins_package')
    '#{target_file}#{file_extension}'
  end
end

    
          # Pop out a single job and perform it
      def perform_one
        raise(EmptyQueueError, 'perform_one called with empty job queue') if jobs.empty?
        next_job = jobs.first
        Queues.delete_for(next_job['jid'], queue, self.to_s)
        process_job(next_job)
      end
    
    if defined?(::ActionDispatch::Request::Session) &&
    !::ActionDispatch::Request::Session.method_defined?(:each)
  # mperham/sidekiq#2460
  # Rack apps can't reuse the Rails session store without
  # this monkeypatch, fixed in Rails 5.
  class ActionDispatch::Request::Session
    def each(&block)
      hash = self.to_hash
      hash.each(&block)
    end
  end
end

    
            _render { content }
      end
    end
    
        def compile
      if pattern.match(NAMED_SEGMENTS_PATTERN)
        p = pattern.gsub(NAMED_SEGMENTS_PATTERN, '/\1(?<\2>[^$/]+)')