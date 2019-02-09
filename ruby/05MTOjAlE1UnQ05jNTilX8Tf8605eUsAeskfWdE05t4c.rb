
        
              it 'works with single quote in rule name' do
        rule = 'CoveredSwitchStatementsDon'tNeedDefault'
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              enable_rules: [\'#{rule}\'],
              disable_rules: [\'#{rule}\']
            )
          end').runner.execute(:test)
    
          it 'passes an environment Hash' do
        expect_command({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
        Fastlane::Actions.sh({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
      end
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
    require_relative 'options'
require_relative 'runner'
    
      Rcov::RcovTask.new do |t|
    t.test_files = FileList[scope('test/**/*_test.rb')]
    t.rcov_opts << '-x' << ''^\/''
    if ENV['NON_NATIVE']
      t.rcov_opts << '--no-rcovrt'
    end
    t.verbose = true
  end
rescue LoadError; end
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
            if specs.size > 0
          specs
        else
          raise LogStash::PluginManager::PluginNotFoundError, 'Cannot find plugins matching: `#{plugin_pattern}`'
        end
      end.flatten
    end
    
            return nil
      end
    end
  end
end end end

    
      subject { described_class.new(source, pipeline_id, unordered_config_parts, settings) }
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
    
  config.vm.define 'centos6' do |centos6|
    centos6.vm.box = 'puppetlabs/centos-6.6-64-puppet'
  end
    
        logger.warn('Additional options: #{flags.join ' '}') if flags.size > 0
    logger.warn('Additional arguments: #{args.join ' '}') if args.size > 0
    
    # A rubygems package.
#
# This does not currently support 'output'
#
# The following attributes are supported:
#
# * :gem_bin_path
# * :gem_package_name_prefix
# * :gem_gem
class FPM::Package::Gem < FPM::Package
  # Flags '--foo' will be accessable  as attributes[:gem_foo]
  option '--bin-path', 'DIRECTORY', 'The directory to install gem executables'
  option '--package-prefix', 'NAMEPREFIX',
    '(DEPRECATED, use --package-name-prefix) Name to prefix the package ' \
    'name with.' do |value|
    logger = Cabin::Channel.get
    logger.warn('Using deprecated flag: --package-prefix. Please use ' \
                 '--package-name-prefix')
    value
  end
  option '--package-name-prefix', 'PREFIX', 'Name to prefix the package ' \
    'name with.', :default => 'rubygem'
  option '--gem', 'PATH_TO_GEM',
          'The path to the 'gem' tool (defaults to 'gem' and searches ' \
          'your $PATH)', :default => 'gem'
  option '--shebang', 'SHEBANG',
          'Replace the shebang in the executables in the bin path with a ' \
          'custom string', :default => nil
  option '--fix-name', :flag, 'Should the target package name be prefixed?',
    :default => true
  option '--fix-dependencies', :flag, 'Should the package dependencies be ' \
    'prefixed?', :default => true
  option '--env-shebang', :flag, 'Should the target package have the ' \
    'shebang rewritten to use env?', :default => true
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
        pear_cmd = 'pear -c #{config} remote-info #{input_package}'
    logger.info('Fetching package information', :package => input_package, :command => pear_cmd)
    name = %x{#{pear_cmd} | sed -ne '/^Package\s*/s/^Package\s*//p'}.chomp
    self.name = '#{attributes[:pear_package_name_prefix]}-#{name}'
    self.version = %x{#{pear_cmd} | sed -ne '/^Installed\s*/s/^Installed\s*//p'}.chomp
    self.description  = %x{#{pear_cmd} | sed -ne '/^Summary\s*/s/^Summary\s*//p'}.chomp
    logger.debug('Package info', :name => self.name, :version => self.version,
                  :description => self.description)
    
      def output(output_path)
    output_check(output_path)
    
        ::Dir.chdir staging_path do
      # Should create a package directory named by the package name.
      safesystem('pkgmk', '-o', '-f', '#{build_path}/Prototype', '-d', build_path)
    end
    
        # Write the scripts, too.
    write_scripts
    
      context 'expands plain buttons' do
    it 'finds selectors' do
      list = @buttons_list.join(', ')
      ruleset = 'content: #{list};'