
        
              def releases(*args)
        each_object(:releases, *args)
      end
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
              page.objects.each do |object|
            next if already_imported?(object)
    
              hash = {
            iid: issue.number,
            title: issue.title,
            description: issue.body,
            milestone_number: issue.milestone&.number,
            state: issue.state == 'open' ? :opened : :closed,
            assignees: issue.assignees.map do |u|
              Representation::User.from_api_response(u)
            end,
            label_names: issue.labels.map(&:name),
            author: user,
            created_at: issue.created_at,
            updated_at: issue.updated_at,
            pull_request: issue.pull_request ? true : false
          }
    
          private
    
        assert_equal({
      'hello' => 'world',
      'key' => 'value',
      'other_key' => 'other_value',
      'obtained' => 'via_to_ary',
    }, obj.to_h(:hello, :world) {|k, v| [k.to_s, v.to_s]})
    
          open('sjis.txt', 'w:sjis:utf-8', xml: :attr) {|f|
        f.print '\u4E02' # U+4E02 is 0x3021 in JIS X 0212
      }
      content = File.read('sjis.txt', :mode=>'rb:ascii-8bit')
      assert_equal('\'&#x4E02;\''.force_encoding('ascii-8bit'), content)
    
    untrace_var :$x
    
    # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
        desc 'Halt all VM's involved in the acceptance test round'
    task :halt, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
        context 'with TMUXINATOR_CONFIG environment' do
      before do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return 'TMUXINATOR_CONFIG'
      end
      it 'is only [$TMUXINATOR_CONFIG] if set' do
        allow(File).to receive(:directory?).and_return true