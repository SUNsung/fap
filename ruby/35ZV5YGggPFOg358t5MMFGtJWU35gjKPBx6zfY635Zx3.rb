
        
                # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is installed. This should return true or false.
        #
        # If the provider is not installed and Vagrant determines it is
        # able to install this provider, then it will do so. Installation
        # is done by calling Environment.install_provider.
        #
        # If Environment.can_install_provider? returns false, then an error
        # will be shown to the user.
        def self.installed?
          # By default return true for backwards compat so all providers
          # continue to work.
          true
        end
    
          it 'allows closing brace on different line from multi-line element' do
        expect_no_offenses(construct(false, a, make_multi(multi), true))
      end
    
        def hidden_file_in_not_hidden_dir?(pattern, path)
      File.fnmatch?(
        pattern, path,
        File::FNM_PATHNAME | File::FNM_EXTGLOB | File::FNM_DOTMATCH
      ) && File.basename(path).start_with?('.') && !hidden_dir?(path)
    end
    
    module RuboCop
  module Cop
    module Style
      # This cop looks for uses of the *for* keyword, or *each* method. The
      # preferred alternative is set in the EnforcedStyle configuration
      # parameter. An *each* call with a block on a single line is always
      # allowed, however.
      #
      # @example EnforcedStyle: each (default)
      #   # bad
      #   def foo
      #     for n in [1, 2, 3] do
      #       puts n
      #     end
      #   end
      #
      #   # good
      #   def foo
      #     [1, 2, 3].each do |n|
      #       puts n
      #     end
      #   end
      #
      # @example EnforcedStyle: for
      #   # bad
      #   def foo
      #     [1, 2, 3].each do |n|
      #       puts n
      #     end
      #   end
      #
      #   # good
      #   def foo
      #     for n in [1, 2, 3] do
      #       puts n
      #     end
      #   end
      #
      class For < Cop
        include ConfigurableEnforcedStyle
        include RangeHelp
    
      desc 'Run RSpec in parallel with ASCII encoding'
  task :ascii_spec do
    sh('RUBYOPT='$RUBYOPT -E ASCII' rspec-queue spec/')
  end
end
    
          ::Gem.clear_paths
      ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
      ::Gem.paths = ENV
      # set BUNDLE_GEMFILE ENV before requiring bundler to avoid bundler recurse and load unrelated Gemfile(s).
      # in the context of calling Bundler::CLI this is not really required since Bundler::CLI will look at
      # Bundler.settings[:gemfile] unlike Bundler.setup. For the sake of consistency and defensive/future proofing, let's keep it here.
      ENV['BUNDLE_GEMFILE'] = LogStash::Environment::GEMFILE_PATH
    
      gem.files         = Dir.glob(['logstash-core-plugin-api.gemspec', 'lib/**/*.rb', 'spec/**/*.rb'])
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.name          = 'logstash-core-plugin-api'
  gem.require_paths = ['lib']
  gem.version       = LOGSTASH_CORE_PLUGIN_API
    
      describe '#system?' do
    context 'when the pipeline is a system pipeline' do
      let(:settings) { mock_settings({ 'pipeline.system' => true })}
    
              it 'successfully install the plugin when verification is disabled' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end