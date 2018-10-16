
        
            # The stdlib recorded in the install receipt is used during dependency
    # compatibility checks, so we only care about the stdlib that libraries
    # link against.
    keg.detect_cxx_stdlibs(:skip_executables => true)
  end
    
        def self.rm_DS_Store
      paths = Queue.new
      %w[Cellar Frameworks Library bin etc include lib opt sbin share var].
        map { |p| HOMEBREW_PREFIX/p }.each { |p| paths << p if p.exist? }
      workers = (0...Hardware::CPU.cores).map do
        Thread.new do
          begin
            while p = paths.pop(true)
              quiet_system 'find', p, '-name', '.DS_Store', '-delete'
            end
          rescue ThreadError # ignore empty queue error
          end
        end
      end
      workers.map(&:join)
    end
    
        @@remote_tap_formulae ||= Hash.new do |cache, key|
      user, repo = key.split('/', 2)
      tree = {}
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
    desc 'Run all tests'
task :test do
  test_cases = [
    {
      'env'   => {'MATHN' => 'true'},
      'tasks' => ['test:ruby', 'test:spec', :rubocop]
    },
    {
      'env'   => {'MATHN' => 'false'},
      'tasks' => ['test:ruby']
    }
  ]
    
        desc 'Run the unit specs'
    task :unit => 'fixture_tarballs:unpack' do
      sh unit_specs_command
    end
    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
    end
    
        # Checks that the podfile exists.
    #
    # @raise  If the podfile does not exists.
    #
    # @return [void]
    #
    def verify_podfile_exists!
      unless config.podfile
        raise Informative, 'No `Podfile' found in the project directory.'
      end
    end
    
          private