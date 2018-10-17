
        
        def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
    module Jekyll
  module Converters
    class Markdown
      class KramdownParser
        CODERAY_DEFAULTS = {
          'css'               => 'style',
          'bold_every'        => 10,
          'line_numbers'      => 'inline',
          'line_number_start' => 1,
          'tab_width'         => 4,
          'wrap'              => 'div',
        }.freeze
    
      def <<(o)
    @settings << o
    self
  end
    
        # Many formulae include 'lib/charset.alias', but it is not strictly needed
    # and will conflict if more than one formula provides it
    observe_file_removal @f.lib/'charset.alias'
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
        # @param filter_platform: Filter, to only show the lanes of a given platform
    # @return an array of lanes (platform lane_name) to print them out to the user
    def available_lanes(filter_platform = nil)
      all = []
      lanes.each do |platform, platform_lanes|
        next if filter_platform && filter_platform.to_s != platform.to_s # skip actions that don't match
    
        def show_message
      UI.message('Sending anonymous analytics information')
      UI.message('Learn more at https://docs.fastlane.tools/#metrics')
      UI.message('No personal or sensitive data is sent.')
      UI.message('You can disable this by adding `opt_out_usage` at the top of your Fastfile')
    end
    
          it 'works with all parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /.*/,
              exclude_regex: /Test.m/,
              report_type: 'pmd',
              report_path: 'report_path.xml',
              max_priority_1: 10,
              max_priority_2: 20,
              max_priority_3: 30,
              thresholds: ['LONG_LINE=200', 'LONG_METHOD=200'],
              enable_rules: ['DoubleNegative', 'DeadCode'],
              disable_rules: ['GotoStatement', 'ShortVariableName'],
              list_enabled_rules: true,
              enable_clang_static_analyzer: true,
              enable_global_analysis: true,
              allow_duplicated_violations: true
            )
          end').runner.execute(:test)
    
            context 'when slather version is 2.4.2' do
          let(:version) { '2.4.2' }
          it 'configuration option is available' do
            expect(action.configuration_available?).to be_truthy
          end
        end
      end
    
            it 'escapes spaces in list of files to process' do
          file = 'path/to/my project/source code/AppDelegate.swift'
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
                files: ['#{file}']
            )
          end').runner.execute(:test)
    
        it 'returns a label 'Missing Gems' if a given agent has dependencies missing' do
      stub(@agent).dependencies_missing? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Missing Gems'
    end
    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
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
    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
      describe '.bulk_check' do
    before do
      @weather_agent_count = Agents::WeatherAgent.where(:schedule => 'midnight', :disabled => false).count
    end
    
          ::Gem.clear_paths
      ENV['GEM_HOME'] = ENV['GEM_PATH'] = Environment.logstash_gem_home
      ::Gem.paths = ENV
    
      require ARGV.shift
  exit_status = LogStash::Runner.run('bin/logstash', ARGV)
  exit(exit_status || 0)
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
    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end