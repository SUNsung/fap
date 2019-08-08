
        
        def global_require
  JSON.pretty_generate(DATA)
end
    
      def test_trigonometric_functions
    assert_equal 0, CMath.asin(0)
    assert_equal 0, CMath.acos(1)
    assert_equal 0, CMath.atan(0)
    assert_equal 0, CMath.asinh(0)
    assert_equal 0, CMath.acosh(1)
    assert_equal 0, CMath.atanh(0)
    
      it 'invokes seek method on the associated IO object' do
    # first, prepare the mock object:
    (obj = mock('io')).should_receive(:get_io).any_number_of_times.and_return(@io)
    def obj.read(args); get_io.read(args); end
    def obj.seek(pos, whence = 0)
      ScratchPad.record :seek
      get_io.seek(pos, whence)
    end
    
          it 'decrements pos' do
        @gz.ungetbyte 0x21
        @gz.pos.should == -1
      end
    end
    
    describe 'GzipWriter#write' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new ''.b
  end
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
            # Initialize a new instance
        #
        # @param  [Hash{Symbol=>String}] pods_by_state
        #         The name of the pods grouped by their state
        #         (`:added`, `:removed`, `:changed` or `:unchanged`).
        #
        def initialize(pods_by_state = nil)
          @added     = Set.new
          @deleted   = Set.new
          @changed   = Set.new
          @unchanged = Set.new
    
      autoload :AggregateTarget,           'cocoapods/target/aggregate_target'
  autoload :Command,                   'cocoapods/command'
  autoload :Deintegrator,              'cocoapods_deintegrate'
  autoload :Executable,                'cocoapods/executable'
  autoload :ExternalSources,           'cocoapods/external_sources'
  autoload :Installer,                 'cocoapods/installer'
  autoload :HooksManager,              'cocoapods/hooks_manager'
  autoload :PodTarget,                 'cocoapods/target/pod_target'
  autoload :Project,                   'cocoapods/project'
  autoload :Resolver,                  'cocoapods/resolver'
  autoload :Sandbox,                   'cocoapods/sandbox'
  autoload :Target,                    'cocoapods/target'
  autoload :Validator,                 'cocoapods/validator'
    
            # @return [Hash{String=>Symbol}] A hash representing all the user build
        #         configurations across all integration targets. Each key
        #         corresponds to the name of a configuration and its value to
        #         its type (`:debug` or `:release`).
        #
        attr_reader :build_configurations
    
          private