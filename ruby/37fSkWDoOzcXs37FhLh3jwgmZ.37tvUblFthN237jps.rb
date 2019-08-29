
        
            delegate :empty?, :blank?, to: :pages
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
          def inherited(subclass)
        super
    
        def request_all(urls, &block)
      if options[:rate_limit]
        if @@rate_limiter
          @@rate_limiter.limit = options[:rate_limit]
        else
          @@rate_limiter = RateLimiter.new(options[:rate_limit])
          Typhoeus.before(&@@rate_limiter.to_proc)
        end
      end
    
              if node['class'] && node['class'].include?('api-heading')
            node.name = 'h3'
            node.inner_html = '<code>#{node.inner_html}</code>'
          end
    
          INDEX = Set.new
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
    module Vagrant
  # This class provides a way to load and access the contents
  # of a Vagrantfile.
  #
  # This class doesn't actually load Vagrantfiles, parse them,
  # merge them, etc. That is the job of {Config::Loader}. This
  # class, on the other hand, has higher-level operations on
  # a loaded Vagrantfile such as looking up the defined machines,
  # loading the configuration of a specific machine/provider combo,
  # etc.
  class Vagrantfile
    # This is the configuration loaded as-is given the loader and
    # keys to #initialize.
    attr_reader :config
    
          def state
        state_id = nil
        state_id = :not_created if !@machine.id
    
          it 'enables agent forwarding options' do
        allow(Vagrant::Util::SafeExec).to receive(:exec).and_return(nil)
    
        # Update updates the given plugins, or every plugin if none is given.
    #
    # @param [Hash] plugins
    # @param [Array<String>] specific Specific plugin names to update. If
    #   empty or nil, all plugins will be updated.
    def update(plugins, specific, **opts)
      specific ||= []
      update = opts.merge({gems: specific.empty? ? true : specific})
      internal_install(plugins, update)
    end
    
      # Use Ruby Resolv in place of libc
  #
  # @return [boolean] enabled or not
  def self.enable_resolv_replace
    if ENV['VAGRANT_ENABLE_RESOLV_REPLACE']
      if !ENV['VAGRANT_DISABLE_RESOLV_REPLACE']
        begin
          require 'resolv-replace'
          true
        rescue
          false
        end
      else
        false
      end
    end
  end
    
      def test_trigonometric_functions
    assert_equal 0, CMath.asin(0)
    assert_equal 0, CMath.acos(1)
    assert_equal 0, CMath.atan(0)
    assert_equal 0, CMath.asinh(0)
    assert_equal 0, CMath.acosh(1)
    assert_equal 0, CMath.atanh(0)
    
        def test_nullbug1_y
      assert_compile 'nullbug1.y'
      assert_debugfile 'nullbug1.y', [0,0,0,0]
    end
    
        aliased = top_level.add_class RDoc::NormalClass, 'Aliased'
    cm      = top_level.add_class RDoc::NormalClass, 'Klass'
    section = cm.sections.first
    
    end
    
    class C2
  def b
  end
    
          class TestParameterEntity < self
        class TestValue < self
          def test_double_quote
            assert_equal([['%', 'name', 'value']], parse(<<-INTERNAL_SUBSET))
<!ENTITY % name 'value'>
            INTERNAL_SUBSET
          end
    
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
    
          # @param  [Pathname] framework
      #         The vendored framework to search into.
      # @return [Array<Pathname>] The paths of the headers included in the
      #         vendored framework.
      #
      def self.vendored_frameworks_headers(framework)
        headers_dir = vendored_frameworks_headers_dir(framework)
        Pathname.glob(headers_dir + '**/' + GLOB_PATTERNS[:public_header_files])
      end
    
        it 'adds NSPrincipalClass for OSX platform' do
      generator = Generator::InfoPlistFile.new('1.0.0', Platform.new(:osx, '10.8'), :appl)
      file = temporary_directory + 'Info.plist'
      generator.save_as(file)
      Xcodeproj::Plist.read_from_path(file).should == {
        'CFBundleDevelopmentRegion' => 'en',
        'CFBundleExecutable' => '${EXECUTABLE_NAME}',
        'CFBundleIdentifier' => '${PRODUCT_BUNDLE_IDENTIFIER}',
        'CFBundleInfoDictionaryVersion' => '6.0',
        'CFBundleName' => '${PRODUCT_NAME}',
        'CFBundlePackageType' => 'APPL',
        'CFBundleShortVersionString' => '1.0.0',
        'CFBundleSignature' => '????',
        'CFBundleVersion' => '${CURRENT_PROJECT_VERSION}',
        'NSPrincipalClass' => 'NSApplication',
      }
    end
    
            # @return [Xcodeproj::Project] the user's Xcode project
        #
        attr_reader :project
    
      context 'given a distribution without a META.* file' do
    it 'should package IPC::Session' do
      pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
          context 'and :python_package_name_prefix is set' do
        it 'should prefix the package name appropriately' do
          prefix = 'whoa'
          subject.attributes[:python_package_name_prefix] = prefix
          subject.input(example_dir)
          insist { subject.name } == '#{prefix}-example'
        end
      end
    end
    
    
  config.vm.define 'centos6' do |centos6|
    centos6.vm.box = 'puppetlabs/centos-6.6-64-puppet'
  end
    
    # This example uses the API to create a package from local files
# it also creates necessary init-scripts and systemd files so our executable can be used as a service
    
      option '--after-install', 'FILE',
    'A script to be run after package installation' do |val|
    File.expand_path(val) # Get the full path to the script
  end # --after-install
  option '--before-install', 'FILE',
    'A script to be run before package installation' do |val|
    File.expand_path(val) # Get the full path to the script
  end # --before-install
  option '--after-remove', 'FILE',
    'A script to be run after package removal' do |val|
    File.expand_path(val) # Get the full path to the script
  end # --after-remove
  option '--before-remove', 'FILE',
    'A script to be run before package removal' do |val|
    File.expand_path(val) # Get the full path to the script
  end # --before-remove
  option '--after-upgrade', 'FILE',
    'A script to be run after package upgrade. If not specified,\n' \
        '--before-install, --after-install, --before-remove, and \n' \
        '--after-remove will behave in a backwards-compatible manner\n' \
        '(they will not be upgrade-case aware).\n' \
        'Currently only supports deb, rpm and pacman packages.' do |val|
    File.expand_path(val) # Get the full path to the script
  end # --after-upgrade
  option '--before-upgrade', 'FILE',
    'A script to be run before package upgrade. If not specified,\n' \
        '--before-install, --after-install, --before-remove, and \n' \
        '--after-remove will behave in a backwards-compatible manner\n' \
        '(they will not be upgrade-case aware).\n' \
        'Currently only supports deb, rpm and pacman packages.' do |val|
    File.expand_path(val) # Get the full path to the script
  end # --before-upgrade
    
          scripts_path(filename).tap do |pkgscript|
        logger.info('Writing pkg script', :source => filename, :target => pkgscript)
        File.write(pkgscript, script(scriptname))
        # scripts are required to be executable
        File.chmod(0755, pkgscript)
      end
    end
  end # def write_scripts
    
      # KNOWN ISSUE:
  # If an un-matched bracket is used in valid bash, as in
  # `echo '{'`, this function will choke.
  # However, to cover this case basically
  # requires writing almost half a bash parser,
  # and it is a very small corner case.
  # Otherwise, this approach is very robust.
  def gobble_function(cons,prod)
    level = 1
    while level > 0
      line = cons.next
      # Not the best, but pretty good
      # short of writing an *actual* sh
      # parser
      level += line.count '{'
      level -= line.count '}'
      if level > 0
        prod.push(line.rstrip())
      else
        fine = line.sub(/\s*[}]\s*$/, '')
        if !(fine =~ /^\s*$/)
          prod.push(fine.rstrip())
        end
      end
    end
  end # def gobble_function
    
      private
  def input(command)
    platforms = [
      ::PleaseRun::Platform::Systemd.new('default'), # RHEL 7, Fedora 19+, Debian 8, Ubuntu 16.04
      ::PleaseRun::Platform::Upstart.new('1.5'), # Recent Ubuntus
      ::PleaseRun::Platform::Upstart.new('0.6.5'), # CentOS 6
      ::PleaseRun::Platform::Launchd.new('10.9'), # OS X
      ::PleaseRun::Platform::SYSV.new('lsb-3.1') # Ancient stuff
    ]
    pleaserun_attributes = [ 'chdir', 'user', 'group', 'umask', 'chroot', 'nice', 'limit_coredump',
                             'limit_cputime', 'limit_data', 'limit_file_size', 'limit_locked_memory',
                             'limit_open_files', 'limit_user_processes', 'limit_physical_memory', 'limit_stack_size',
                             'log_directory', 'log_file_stderr', 'log_file_stdout']
    
        def initialize(index, project, tab, *commands)
      @commands = commands
      @index = index
      @project = project
      @tab = tab
    end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      def commands_match
    @actual.commands == commands
  end
    
              it 'should call #start' do
            instance = instance_double(cli)
            expect(cli).to receive(:new).and_return(instance)
            expect(instance).to receive(:start).with(*args)
            subject
          end
        end
    
      describe '#directory' do
    context 'environment variable $TMUXINATOR_CONFIG non-blank' do
      it 'is $TMUXINATOR_CONFIG' do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return 'expected'
        allow(File).to receive(:directory?).and_return true
        expect(described_class.directory).to eq 'expected'
      end
    end