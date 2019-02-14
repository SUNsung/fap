
        
            it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
          it 'does not load workers specified in the :except option' do
        agent_runner = AgentRunner.new(except: HuginnScheduler)
        workers = agent_runner.send(:load_workers)
        expect(workers.keys).to eq(['DelayedJobWorker'])
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent)).to eq([@agent1])
    end
  end
end

    
      describe '#sort_tuples!' do
    let(:tuples) {
      time = Time.now
      [
        [2, 'a', time - 1],  # 0
        [2, 'b', time - 1],  # 1
        [1, 'b', time - 1],  # 2
        [1, 'b', time],      # 3
        [1, 'a', time],      # 4
        [2, 'a', time + 1],  # 5
        [2, 'a', time],      # 6
      ]
    }
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  if File.exist?(OUTPUT_FILENAME)
    xml = Nokogiri::XML(File.open(OUTPUT_FILENAME))
    existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first
    if existing_blog
      rss_url = existing_blog.attr('xmlUrl')
      puts '#{name}: ALREADY HAVE'
    end
  end
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
        def setup_filters
      @filters = cmdline_filters
      @filters += @custom_filters if @custom_filters
      @filters << Filter.new(:role, ENV['ROLES']) if ENV['ROLES']
      @filters << Filter.new(:host, ENV['HOSTS']) if ENV['HOSTS']
      fh = fetch_for(:filter, {}) || {}
      @filters << Filter.new(:host, fh[:hosts]) if fh[:hosts]
      @filters << Filter.new(:role, fh[:roles]) if fh[:roles]
      @filters << Filter.new(:host, fh[:host]) if fh[:host]
      @filters << Filter.new(:role, fh[:role]) if fh[:role]
    end
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end