
        
            it 'shows the dry run pop up with previous events and allows use previously received event' do
      emitter.events << Event.new(payload: {url: 'http://xkcd.com/'})
      agent.sources << emitter
      agent.options.merge!('url' => '', 'url_from_event' => '{{url}}')
      agent.save!
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
          it 'loads all workers' do
        workers = @agent_runner.send(:load_workers)
        expect(workers).to be_a(Hash)
        expect(workers.keys).to eq(['HuginnScheduler', 'DelayedJobWorker'])
      end
    
        it 'for the forenoon' do
      expect(@scheduler.send(:hour_to_schedule_name, 6)).to eq('6am')
    end
    
      describe 'migrating a hash' do
    it 'should convert every attribute' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'})).to eq(
                                  {'a' => '$.data', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should work with leading_dollarsign_is_jsonpath' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'}, leading_dollarsign_is_jsonpath: true)).to eq(
                                  {'a' => '{{data}}', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should use the corresponding *_path attributes when using merge_path_attributes'do
      expect(LiquidMigrator.convert_hash({'a' => 'default', 'a_path' => '$.data'}, {leading_dollarsign_is_jsonpath: true, merge_path_attributes: true})).to eq(
                                  {'a' => '{{data}}'}
      )
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_hash({'b' => 'This is <$.complex[2]>'}) }.
        to raise_error('JSONPath '$.complex[2]' is too complex, please check your migration.')
    end
  end
    
            new(sandbox, sandbox.root.to_s, pods_project, umbrella_targets_descriptions)
      end
    
            # Displays the state of each pod.
        #
        # @return [void]
        #
        def print
          states = %i(added deleted changed unchanged)
          lines(states).each do |line|
            UI.message(line, '', 2)
          end
        end
    
            # Initialize a new instance
        #
        # @param [Sandbox] sandbox @see #sandbox
        # @param [String] path @see #path
        # @param [Array<PodTarget>] pod_targets @see #pod_targets
        # @param [Hash{String=>Symbol}] build_configurations @see #build_configurations
        # @param [Array<Platform>] platforms @see #platforms
        # @param [String] object_version @see #object_version
        # @param [String] podfile_path @see #podfile_path
        #
        def initialize(sandbox, path, pod_targets, build_configurations, platforms,
                       object_version, podfile_path = nil, pod_target_subproject: false)
          @sandbox = sandbox
          @path = path
          @pod_targets = pod_targets
          @build_configurations = build_configurations
          @platforms = platforms
          @object_version = object_version
          @podfile_path = podfile_path
          @pod_target_subproject = pod_target_subproject
        end
    
          #-----------------------------------------------------------------------#
    
        it 'complains if wrong parameters' do
      lambda { run_command('lib', 'create') }.should.raise CLAide::Help
    end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
            if callable_without_parameters?(value_to_evaluate)
          super(key, assert_valid_later(key, value_to_evaluate), &nil)
        else
          assert_valid_now(key, value_to_evaluate)
          super
        end
      end
    
    
    {    if (pre.style.display == 'block') {
      pre.style.display = 'none';
      post.style.display = 'none';
      context.style.background = 'none';
    } else {
      pre.style.display = 'block';
      post.style.display = 'block';
      context.style.background = '#fffed9';
    }
  }
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
          # Parse through mail to get the from/sender headers
      mail = Mail.new(raw_message.split('\r\n\r\n', 2).first)
      from_headers = {'from' => mail.from, 'sender' => mail.sender}
      authenticated_domain = identity.server.find_authenticated_domain_from_headers(from_headers)
    
      rescue Acme::Client::Error => e
    @retries = 0
    if e.is_a?(Acme::Client::Error::BadNonce) && @retries < 5
      @retries += 1
      logger.info 'Bad nounce encountered. Retrying (#{@retries} of 5 attempts)'
      sleep 1
      verify
    else
      logger.info 'Error: #{e.class} (#{e.message})'
      return false
    end
  end
    
                    begin
                  if @fixed_result
                    result = @fixed_result
                  else
                    case queued_message.message.endpoint
                    when SMTPEndpoint
                      sender = cached_sender(Postal::SMTPSender, queued_message.message.recipient_domain, nil, :servers => [queued_message.message.endpoint])
                    when HTTPEndpoint
                      sender = cached_sender(Postal::HTTPSender, queued_message.message.endpoint)
                    when AddressEndpoint
                      sender = cached_sender(Postal::SMTPSender, queued_message.message.endpoint.domain, nil, :force_rcpt_to => queued_message.message.endpoint.address)
                    else
                      log '#{log_prefix} Invalid endpoint for route (#{queued_message.message.endpoint_type})'
                      queued_message.message.create_delivery('HardFail', :details => 'Invalid endpoint for route.')
                      queued_message.destroy
                      next
                    end
                    result = sender.send_message(queued_message.message)
                    if result.connect_error
                      @fixed_result = result
                    end
                  end
                end
    
      def new
    @ip_pool_rule = @server ? @server.ip_pool_rules.build : organization.ip_pool_rules.build
  end
    
        if time.nil?
      raise TimeUndetermined, 'Couldn't determine a suitable time from '#{string}''
    else
      time
    end
  end