
        
              get :render_with_object_location
      assert_equal 'http://www.nextangle.com/customers/1', @response.headers['Location']
    end
  end
    
      def test_browser_check_with_any_any
    @request.accept = 'application/json, application/xml'
    get :json_xml_or_html
    assert_equal 'JSON', @response.body
    
    class RenderersTest < ActionController::TestCase
  class XmlRenderable
    def to_xml(options)
      options[:root] ||= 'i-am-xml'
      '<#{options[:root]}/>'
    end
  end
  class JsonRenderable
    def as_json(options = {})
      hash = { a: :b, c: :d, e: :f }
      hash.except!(*options[:except]) if options[:except]
      hash
    end
    
          def subscribed(callback, pattern = nil, monotonic: false, &block)
        subscriber = notifier.subscribe(pattern, callback, monotonic: monotonic)
        yield
      ensure
        unsubscribe(subscriber)
      end
    
          # @return [String, Nil] the dSYM path, if one exists
      #
      attr_reader :dsym_path
    
            # @return [Hash<String, TargetInstallationResult>] pod_target_installation_results
        #         Hash of pod target name to installation results.
        #
        attr_reader :pod_target_installation_results
    
        # @return [Config] the current config instance creating one if needed.
    #
    def self.instance
      @instance ||= new
    end
    
        it 'sets the Pods group\'s location path to ${PODS_ROOT}' do
      XCConfigIntegrator.integrate(@pod_bundle, [@target])
      @project['Pods'].path.should.equal @pod_bundle.relative_pods_root_path.to_s
    end
    
            # Initialize a new instance.
        #
        # @param [Sandbox] sandbox @see #sandbox
        # @param [Hash{String => TargetInstallationResult}] aggregate_target_installation_results @see #aggregate_target_installation_results
        # @param [Hash{String => TargetInstallationResult}] pod_target_installation_results @see #pod_target_installation_results
        # @param [ProjectMetadataCache] metadata_cache @see #metadata_cache
        #
        def initialize(sandbox, aggregate_target_installation_results, pod_target_installation_results, metadata_cache)
          @sandbox = sandbox
          @aggregate_target_installation_results = aggregate_target_installation_results
          @pod_target_installation_results = pod_target_installation_results
          @metadata_cache = metadata_cache
        end
    
      module Generator
    autoload :Acknowledgements,        'cocoapods/generator/acknowledgements'
    autoload :Markdown,                'cocoapods/generator/acknowledgements/markdown'
    autoload :Plist,                   'cocoapods/generator/acknowledgements/plist'
    autoload :BridgeSupport,           'cocoapods/generator/bridge_support'
    autoload :Constant,                'cocoapods/generator/constant'
    autoload :CopyResourcesScript,     'cocoapods/generator/copy_resources_script'
    autoload :DummySource,             'cocoapods/generator/dummy_source'
    autoload :EmbedFrameworksScript,   'cocoapods/generator/embed_frameworks_script'
    autoload :FileList,                'cocoapods/generator/file_list'
    autoload :Header,                  'cocoapods/generator/header'
    autoload :InfoPlistFile,           'cocoapods/generator/info_plist_file'
    autoload :ModuleMap,               'cocoapods/generator/module_map'
    autoload :PrefixHeader,            'cocoapods/generator/prefix_header'
    autoload :UmbrellaHeader,          'cocoapods/generator/umbrella_header'
    autoload :AppTargetHelper,         'cocoapods/generator/app_target_helper'
  end