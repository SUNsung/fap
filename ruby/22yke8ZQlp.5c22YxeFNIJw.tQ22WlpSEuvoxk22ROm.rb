
        
            def has_been_uploaded?(url)
      not_implemented
    end
    
      def self.log_request(data)
    status = data[:status]
    track_view = data[:track_view]
    
          expect(group.name).to eq('testing')
      expect(group.users).to contain_exactly(admin, user)
      expect(group.allow_membership_requests).to eq(true)
      expect(group.membership_request_template).to eq('Testing')
    end
    
          let(:fake_jpg) do
        Rack::Test::UploadedFile.new(file_from_fixtures('fake.jpg'))
      end
    
          select_agent_type('Trigger Agent')
      fill_in(:agent_name, with: 'Test Trigger Agent')
    
        it 'returns a label 'Disabled' if a given agent is disabled' do
      stub(@agent).disabled? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Disabled'
    end
    
    describe DefaultScenarioImporter do
  let(:user) { users(:bob) }
  describe '.import' do
    it 'imports a set of agents to get the user going when they are first created' do
      mock(DefaultScenarioImporter).seed(is_a(User))
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      DefaultScenarioImporter.import(user)
    end
    
          it 'runs until stop is called' do
        mock.instance_of(Rufus::Scheduler).join
        Thread.new { while @agent_runner.instance_variable_get(:@running) != false do sleep 0.1; @agent_runner.stop end }
        @agent_runner.run
      end
    
          expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
    describe AgentLog do
  describe 'validations' do
    before do
      @log = AgentLog.new(:agent => agents(:jane_website_agent), :message => 'The agent did something', :level => 3)
      expect(@log).to be_valid
    end
    
              find_method_with_args(body_node, :system, 'cargo', 'build') do
            problem 'use \'cargo\', \'install\', \'--root\', prefix, \'--path\', \'.\''
          end
        end
      end
    end
    module FormulaAuditStrict
      class Text < FormulaCop
        def audit_formula(_node, _class_node, _parent_class_node, body_node)
          find_method_with_args(body_node, :go_resource) do
            problem '`go_resource`s are deprecated. Please ask upstream to implement Go vendoring'
          end
        end
      end
    end
  end
end

    
          # Version string (a pretty long one) of the CLT package.
      # Note, that different ways to install the CLTs lead to different
      # version numbers.
      def version
        if @version ||= detect_version
          ::Version.new @version
        else
          ::Version::NULL
        end
      end
    
        def fetch
      downloader.fetch
      @downloaded_path = downloader.cached_location
    rescue => e
      error = CaskError.new('Download failed on Cask '#{cask}' with message: #{e}')
      error.set_backtrace e.backtrace
      raise error
    end
    
          # For OS::Mac::Version compatability
      def requires_nehalem_cpu?
        Hardware.oldest_cpu(self) == :nehalem
      end
      # https://en.wikipedia.org/wiki/Nehalem_(microarchitecture)
      # Ensure any extra methods are also added to version/null.rb
      alias requires_sse4? requires_nehalem_cpu?
      alias requires_sse41? requires_nehalem_cpu?
      alias requires_sse42? requires_nehalem_cpu?
      alias requires_popcnt? requires_nehalem_cpu?
    end
  end
end

    
        return if fatals.empty?
    
    # The context in which a {Resource.stage} occurs. Supports access to both
# the {Resource} and associated {Mktemp} in a single block argument. The interface
# is back-compatible with {Resource} itself as used in that context.
class ResourceStageContext
  extend Forwardable
    
        def add_filter(filter=nil, &block)
      if block
        raise ArgumentError, 'Both a block and an object were given' if filter
    
            if Rake::Task.task_defined?('deploy:set_current_revision')
          before 'deploy:set_current_revision',
                 '#{scm_name}:set_current_revision'
        end
      end
      # rubocop:enable Style/GuardClause
    
          include Capistrano::ProcHelpers
    
        def self.format_pipeline_vertex_stats(stats, pipeline)
      return nil unless stats
      
      [:inputs, :filters, :outputs].flat_map do |section|
        format_pipeline_vertex_section_stats(stats[section], pipeline)
      end.select {|stats| !stats.nil?} # Ignore empty sections
    end
    
        FileUtils.rm_rf(LogStash::Environment::CACHE_PATH)
    validate_cache_location
    archive_manager.extract(package_file, LogStash::Environment::CACHE_PATH)
    puts('Unpacked at #{LogStash::Environment::CACHE_PATH}')
    puts('The unpacked plugins can now be installed in local-only mode using bin/logstash-plugin install --local [plugin name]')
  end
    
        let(:default_jars_location)    { File.join('vendor', 'jar-dependencies') }
    let(:default_runtime_location) { File.join(default_jars_location,'runtime-jars','*.jar') }
    let(:default_test_location)    { File.join(default_jars_location,'test-jars','*.jar') }
    
    
    suffix = ''
    excluder = nil
    if oss
      suffix= '-oss'
      excluder = oss_excluder
    end
    
      class Plugins < Node; end
  class Plugin < Node
    def expr
      jdsl.iPlugin(source_meta, plugin_type_enum, self.plugin_name, self.expr_attributes)
    end
    
                describe ''not'' do
              let(:expression) { '!(1 > 2)' }
    
        def self.package(plugins_args, target)
      OfflinePluginPackager.new(plugins_args, target).execute
    end
  end
end end

    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
    is_travis = ENV['TRAVIS_OS_NAME'] && !ENV['TRAVIS_OS_NAME'].empty?
    
          context 'the getter' do
        before do
          subject.send('#{item}=', value)
        end
        it 'returns the value set previously' do
          expect(subject.send(item)).to(be == value)
        end
      end
    end
  end
    
    # Set some attributes
package.name = 'my-service'
package.version = '1.0'
    
      # Removes the end-of-tar records from the given [target_path].
  # End of tar records are two contiguous empty tar records at the end of the file
  # Taken together, they comprise 1k of null data.
  def cut_tar_record(target_path)