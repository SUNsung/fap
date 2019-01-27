
        
                  pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
          # The minimum number of requests we want to keep available.
      #
      # We don't use a value of 0 as multiple threads may be using the same
      # token in parallel. This could result in all of them hitting the GitHub
      # rate limit at once. The threshold is put in place to not hit the limit
      # in most cases.
      RATE_LIMIT_THRESHOLD = 50
    
          def action_name(env)
        if env[CONTROLLER_KEY]
          action_for_rails(env)
        elsif env[ENDPOINT_KEY]
          action_for_grape(env)
        end
      end
    
          it 'requires the passwords to match when changing them' do
        visit edit_admin_user_path(users(:bob))
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Update User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
    describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
          describe '#generate_diff' do
        it 'returns AgentDiff objects that include 'current' values from any agents that already exist' do
          agent_diffs = scenario_import.agent_diffs
          weather_agent_diff = agent_diffs[0]
          trigger_agent_diff = agent_diffs[1]
    
          context '#run_workers' do
        it 'runs all the workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
        end
    
      describe 'converting escaped JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('Weather looks like <$.conditions> according to the forecast at <$.pretty_date.time>')).to eq(
                                    'Weather looks like {{conditions}} according to the forecast at {{pretty_date.time}}'
      )
    end
    
      describe '#helpers' do
    it 'should return the correct request header' do
      expect(@checker.send(:request_options)).to eq({:headers => {'aftership-api-key' => '800deeaf-e285-9d62-bc90-j999c1973cc9', 'Content-Type'=>'application/json'}})
    end
    
        describe 'x' do
      it 'converts argument as a hexadecimal number' do
        format('%x', 196).should == 'c4'
      end
    
          def accepts?(env)
        session = session env
        set_token(session)
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end
