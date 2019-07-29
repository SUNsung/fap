
        
              @site.reader.read_directories('symlink-test')
      refute_equal [], @site.pages
      refute_equal [], @site.static_files
    end
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
            private
    
              stats = diff_stats_collection&.find_by_path(diff.new_path)
    
          subject.diff_files
    end
    
            def fetch_service_account_token
          Clusters::Gcp::Kubernetes::FetchKubernetesTokenService.new(
            platform.kubeclient,
            kubernetes_namespace.token_name,
            kubernetes_namespace.namespace
          ).execute
        end
      end
    end
  end
end

    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
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
    
      describe 'email' do
    before do
      ActionMailer::Base.deliveries.clear
    
        ActivityPub::DeliveryWorker.push_bulk(inboxes) do |inbox_url|
      [signed_payload, @account.id, inbox_url]
    end
    
      let(:user) { Fabricate(:user, filtered_languages: []) }
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
        def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
      describe 'predicates' do
    context 'in root position' do
      let(:pattern) { 'send_type?' }
      let(:ruby) { '1.inc' }
    
              #{close}
        RUBY
      end
    
      context 'when a variable is assigned ' \
          'in main body of begin with rescue but unreferenced' do
    it 'registers an offense' do
      expect_offense(<<~RUBY)
        begin
          do_something
          foo = true
          ^^^ Useless assignment to variable - `foo`.
        rescue
          do_anything
        end
      RUBY
    end
  end
    
          def on_send(node)
        rhs = extract_rhs(node)
    
        def self.cache_root(config_store)
      root = config_store.for('.').for_all_cops['CacheRootDirectory']
      root ||= if ENV.key?('XDG_CACHE_HOME')
                 # Include user ID in the path to make sure the user has write
                 # access.
                 File.join(ENV['XDG_CACHE_HOME'], Process.uid.to_s)
               else
                 File.join(ENV['HOME'], '.cache')
               end
      File.join(root, 'rubocop_cache')
    end
    
          # Checks whether this `block` literal belongs to a lambda.
      #
      # @return [Boolean] whether the `block` literal belongs to a lambda
      def lambda?
        send_node.method?(:lambda)
      end