
        
            expected = 'CREATE  INDEX `index_people_on_last_name`  ON `people` (`last_name`) '
    assert_equal expected, add_index(:people, :last_name, length: nil)
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for Apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for NGINX
    
    describe DefaultScenarioImporter do
  let(:user) { users(:bob) }
  describe '.import' do
    it 'imports a set of agents to get the user going when they are first created' do
      mock(DefaultScenarioImporter).seed(is_a(User))
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      DefaultScenarioImporter.import(user)
    end
    
        it 'should work with the human task agent' do
      valid_params = {
        'expected_receive_period_in_days' => 2,
        'trigger_on' => 'event',
        'hit' =>
          {
            'assignments' => 1,
            'title' => 'Sentiment evaluation',
            'description' => 'Please rate the sentiment of this message: '<$.message>'',
            'reward' => 0.05,
            'lifetime_in_seconds' => 24 * 60 * 60,
            'questions' =>
              [
                {
                  'type' => 'selection',
                  'key' => 'sentiment',
                  'name' => 'Sentiment',
                  'required' => 'true',
                  'question' => 'Please select the best sentiment value:',
                  'selections' =>
                    [
                      { 'key' => 'happy', 'text' => 'Happy' },
                      { 'key' => 'sad', 'text' => 'Sad' },
                      { 'key' => 'neutral', 'text' => 'Neutral' }
                    ]
                },
                {
                  'type' => 'free_text',
                  'key' => 'feedback',
                  'name' => 'Have any feedback for us?',
                  'required' => 'false',
                  'question' => 'Feedback',
                  'default' => 'Type here...',
                  'min_length' => '2',
                  'max_length' => '2000'
                }
              ]
          }
      }
      @agent = Agents::HumanTaskAgent.new(:name => 'somename', :options => valid_params)
      @agent.user = users(:jane)
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options['hit']['description']).to eq('Please rate the sentiment of this message: '{{message}}'')
    end
  end
end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
          context 'arrays' do
        it 'does not write a header' do
          @checker.options['with_header'] = 'false'
          event = Event.new(payload: { 'data' => ['value1', 'value2'] })
          event2 = Event.new(payload: { 'data' => ['value3', 'value4'] })
          expect { @checker.receive([event, event2])}.to change(Event, :count).by(1)
          expect(Event.last.payload).to eq('data' => '\'value1\',\'value2\'\n\'value3\',\'value4\'\n')
        end
    
        def check_single_uninstall_zap
      odebug 'Auditing single uninstall_* and zap stanzas'
    
              resource 'setuptools' do
          ^^^^^^^^^^^^^^^^^^^^^ Formulae using virtualenvs do not need a `setuptools` resource.
            url 'https://foo.com/foo.tar.gz'
            sha256 'db0904a28253cfe53e7dedc765c71596f3c53bb8a866ae50123320ec1a7b73fd'
          end
    
        return false if args[:after] && OS::Mac.version < args[:after]
    
      def initialize
    @resource = Resource.new
    @resources = {}
    @dependency_collector = DependencyCollector.new
    @bottle_specification = BottleSpecification.new
    @patches = []
    @options = Options.new
    @flags = ARGV.flags_only
    @deprecated_flags = []
    @deprecated_options = []
    @build = BuildOptions.new(Options.create(@flags), options)
    @compiler_failures = []
    @bottle_disable_reason = nil
  end
    
        # This can be compared to numerics, strings, or symbols
    # using the standard Ruby Comparable methods.
    def full_version
      @full_version ||= Version.new((ENV['HOMEBREW_MACOS_VERSION'] || ENV['HOMEBREW_OSX_VERSION']).chomp)
    end
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
        def quarantine
      return if @quarantine.nil?
      return unless Quarantine.available?
    
    class ActivityPub::Activity::Move < ActivityPub::Activity
  PROCESSING_COOLDOWN = 7.days.seconds
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
    require 'rails_helper'
    
    version = ['', 'ext/etc/'].find do |dir|
  begin
    break File.open(File.expand_path('../#{dir}/etc.c', __FILE__)) do |f|
      f.gets '\n#define RUBY_ETC_VERSION '
      f.gets[/'(.+)'/, 1]
    end
  rescue
    next
  end
end
    
      class C2
    def initialize(ary)
      @ary = ary
    end
    def _dump(s)
      @ary.clear
      'foo'
    end
  end
    
        ScratchPad.recorded.should == [49, 50, 51, 52, 53, 97, 98, 99, 100, 101]
  end
    
      it 'each chunk should have the same prefix' do
    @chunks.all? { |chunk| chunk =~ /\A0+\z/ }.should be_true
  end
    
            # @return [Array<Specification>] the test specs for the target
        #
        attr_reader :test_specs
    
            # Describes what makes each {PodVariant} distinct among the others.
        #
        # @return [Hash<PodVariant, String>]
        #
        def scope_suffixes
          return { variants.first => nil } if variants.count == 1
          Hash[scope_by_specs.map do |variant, scope|
            require 'digest'
            scope = Digest::MD5.hexdigest(scope)[0..7] if !scope.nil? && scope.length >= 50
            [variant, scope]
          end]
        end
    
              it 'adds Swift-specific build settings to the build settings' do
            @target.stubs(:requires_frameworks?).returns(true)
            @target.stubs(:uses_swift?).returns(true)
            @installer.send(:add_target).resolved_build_setting('SWIFT_OPTIMIZATION_LEVEL').should == {
              'Release' => '-O',
              'Debug' => '-Onone',
              'Test' => nil,
              'AppStore' => nil,
            }
            @installer.send(:add_target).resolved_build_setting('SWIFT_COMPILATION_MODE').should == {
              'Release' => 'wholemodule',
              'Debug' => nil,
              'Test' => nil,
              'AppStore' => nil,
            }
            @installer.send(:add_target).resolved_build_setting('SWIFT_ACTIVE_COMPILATION_CONDITIONS').should == {
              'Release' => nil,
              'Debug' => 'DEBUG',
              'Test' => nil,
              'AppStore' => nil,
            }
          end
    
        describe 'Pod targets' do
      before do
        @spec = fixture_spec('banana-lib/BananaLib.podspec')
        @target_definition = Podfile::TargetDefinition.new('Pods', nil)
        @target_definition.abstract = false
        @target_definition.set_platform(:ios, '10.0')
        file_accessor = fixture_file_accessor(@spec, Platform.ios)
        @pod_target = PodTarget.new(config.sandbox, false, {}, [], Platform.ios, [@spec], [@target_definition],
                                    [file_accessor])
        @target = AggregateTarget.new(config.sandbox, false, {}, [], Platform.ios, @target_definition,
                                      config.sandbox.root.dirname, nil, nil, 'Release' => [@pod_target], 'Debug' => [@pod_target])
      end
    
            it '#static_library' do
          BuildType.static_library.should == BuildType.new(:linkage => :static, :packaging => :library)
        end
    
            # Initialize a new instance
        #
        # @param [Sandbox] sandbox @see #sandbox
        # @param [Project] projects @see #project
        # @param [Hash<String, TargetInstallationResult>] pod_target_installation_results @see #pod_target_installation_results
        # @param [InstallationOptions] installation_options @see #installation_options
        #
        def initialize(sandbox, projects, pod_target_installation_results, installation_options)
          @sandbox = sandbox
          @projects = projects
          @pod_target_installation_results = pod_target_installation_results
          @installation_options = installation_options
        end