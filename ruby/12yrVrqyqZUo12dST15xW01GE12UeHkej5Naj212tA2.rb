
        
            it 'shows the dry run pop up with previous events and allows use previously received event' do
      emitter.events << Event.new(payload: {url: 'http://xkcd.com/'})
      agent.sources << emitter
      agent.options.merge!('url' => '', 'url_from_event' => '{{url}}')
      agent.save!
    
          describe '#import' do
        it 'makes a new scenario for Bob' do
          expect {
            scenario_import.import(:skip_agents => true)
          }.to change { users(:bob).scenarios.count }.by(1)
    
        it 'optionally supports treating values that start with '$' as raw JSONPath' do
      expect(Utils.interpolate_jsonpaths('$.there.world', payload)).to eq('$.there.world')
      expect(Utils.interpolate_jsonpaths('$.there.world', payload, :leading_dollarsign_is_jsonpath => true)).to eq('WORLD')
    end
  end
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
      describe '#log_for_agent' do
    it 'creates AgentLogs' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(log).not_to be_new_record
      expect(log.agent).to eq(agents(:jane_website_agent))
      expect(log.outbound_event).to eq(events(:jane_website_agent_event))
      expect(log.message).to eq('some message')
      expect(log.level).to eq(4)
    end
    
      describe 'helpers' do
    it 'should generate a correct request options hash' do
      expect(@checker.send(:request_options)).to eq({headers: {'User-Agent' => 'Huginn - https://github.com/huginn/huginn', 'Authorization' => 'Bearer '1234token''}})
    end
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
      it 'sets a new csrf token for the session in env, even after a 'safe' request' do
    get('/', {}, {})
    expect(env['rack.session'][:csrf]).not_to be_nil
  end
    
        class << self
      def elastic_pack_base_uri
        env_url = ENV['LOGSTASH_PACK_URL']
        (env_url.nil? || env_url.empty?) ? DEFAULT_PACK_URL : env_url
      end
    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
      namespace :vm do
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end