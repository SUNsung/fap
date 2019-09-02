
        
              def test_helpers_with_block
        @controller.process(:with_block)
        assert_equal 'Hello World', @controller.response_body
      end
    
        @mod = RDoc::NormalModule.new 'Mod'
  end
    
      def test_initialize
    assert_equal 'foo', @req.name
    
        push_history(5)
    invalid_indexes = [5, 6, 100, -6, -7, -100]
    invalid_indexes.each do |i|
      assert_raise(IndexError, NotImplementedError, 'index=<#{i}>') do
        Readline::HISTORY.delete_at(i)
      end
    end
    
    # skip over blogs that aren't found
unavailable = []
fast_forwards = [
  'Baidu Research',
  'Booking.com',
  'Fynd',
  'Graphcool',
  'LinkedIn',
  'Medallia',
  'OmniTI',
  'Paperless Post',
  'Pluralsight',
  'Prolific Interactive',
  'Quora',
  'Robert Elder Software',
  'Simple',
  'SlideShare',
  'SourceClear',
  'Viget',
  'Zalando',
  'Zapier',
  'Zynga',
  'Dave Beazley',
  'Edan Kwan',
  'Grzegorz Gajos',
  'Joe Armstrong',
  'Kai Hendry',
  'LiveOverflow'
]
    
            # Initialize a new instance from its attributes.
        #
        # @param [Array<Specification>] specs      @see #specs
        # @param [Array<Specification>] test_specs @see #test_specs
        # @param [Array<Specification>] app_specs  @see #app_specs
        # @param [Platform] platform               @see #platform
        # @param [Target::BuildType] build_type    @see #build_type
        #
        def initialize(specs, test_specs, app_specs, platform, build_type = Target::BuildType.static_library)
          @specs = specs
          @test_specs = test_specs
          @app_specs = app_specs
          @platform = platform
          @build_type = build_type
          @hash = [specs, platform, build_type].hash
        end
    
          # @return [Boolean] whether the target is built dynamically
      #
      def dynamic?
        linkage == :dynamic
      end
    
    def fixture_file_accessor(spec_or_name, platform = Pod::Platform.ios)
  spec = spec_or_name.is_a?(Pod::Specification) ? spec_or_name : fixture_spec(spec_or_name)
  path_list = Pod::Sandbox::PathList.new(spec.defined_in_file.dirname)
  Pod::Sandbox::FileAccessor.new(path_list, spec.consumer(platform))
end
    
    module Pod
  describe Generator::ModuleMap do
    before do
      spec = fixture_spec('banana-lib/BananaLib.podspec')
      @pod_target = PodTarget.new(config.sandbox, false, {}, [], Platform.ios, [spec], [fixture_target_definition])
      @gen = Generator::ModuleMap.new(@pod_target)
    end
    
            it 'checks resource paths are empty for dynamic frameworks' do
          @pod_target.stubs(:should_build?).returns(true)
          @pod_target.stubs(:build_type => Target::BuildType.dynamic_framework)
          @pod_target.stubs(:resource_paths).returns(['MyResources.bundle'])
          @target.stubs(:bridge_support_file).returns(nil)
          resource_paths_by_config = @target.resource_paths_by_config
          resource_paths_by_config['Debug'].should.be.empty
          resource_paths_by_config['Release'].should.be.empty
        end
    
            it 'allows specifying linkage' do
          BuildType.new(:linkage => :dynamic).should == BuildType.dynamic_library
        end
    
          # Store the result ready to return
      result = {:message_id => nil, :messages => {}}
      params.rcpt_to.uniq.each do |rcpt_to|
        message = identity.server.message_db.new_message
        message.rcpt_to = rcpt_to
        message.mail_from = params.mail_from
        message.raw_message = raw_message
        message.received_with_ssl = true
        message.scope = 'outgoing'
        message.domain_id = authenticated_domain.id
        message.credential_id = identity.id
        message.bounce = params.bounce ? 1 : 0
        message.save
        result[:message_id] = message.message_id if result[:message_id].nil?
        result[:messages][rcpt_to] = {:id => message.id, :token => message.token}
      end
      result
    end
  end
    
      config.after(:suite) do
    # Remove the global server after the suite has finished running and then
    # clean the database in case it left anything lying around.
    if defined?(GLOBAL_SERVER)
      GLOBAL_SERVER.destroy
      DatabaseCleaner.clean
    end
  end
    
      expansion(:headers) { o.headers }
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @domain = @server.domains.find_by_uuid!(params[:id])
    else
      params[:id] && @domain = organization.domains.find_by_uuid!(params[:id])
    end
  end
    
      def update
    if @ip_pool.update(safe_params)
      redirect_to_with_json [:edit, @ip_pool], :notice => 'IP Pool has been updated.'
    else
      render_form_errors 'edit', @ip_pool
    end
  end
    
      def get_messages(scope)
    if scope == 'held'
      options = {:where => {:held => 1}}
    else
      options = {:where => {:scope => scope, :spam => false}, :order => :timestamp, :direction => 'desc'}