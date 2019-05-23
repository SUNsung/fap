
        
                # Halt the machine. This method should gracefully shut down the
        # operating system. This method will cause `vagrant halt` and associated
        # commands to _block_, meaning that if the machine doesn't halt
        # in a reasonable amount of time, this method should just return.
        #
        # If when this method returns, the machine's state isn't 'powered_off,'
        # Vagrant will proceed to forcefully shut the machine down.
        def halt
          raise BaseError, _key: :unsupported_halt
        end
    
    module Vagrant
  module Plugin
    module V1
      # This is the superclass for all V1 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
            def initialize(env, config)
          @env    = env
          @config = config
        end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
        # To make sure we have the maximum compatibility
    # we will ignore theses gems and they won't be included in the pack
    IGNORE_GEMS_IN_PACK = %w(
      logstash-core
      logstash-core-plugin-api
      jar-dependencies
    )
    
        FileUtils.rm_rf(LogStash::Environment::CACHE_PATH)
    validate_cache_location
    archive_manager.extract(package_file, LogStash::Environment::CACHE_PATH)
    puts('Unpacked at #{LogStash::Environment::CACHE_PATH}')
    puts('The unpacked plugins can now be installed in local-only mode using bin/logstash-plugin install --local [plugin name]')
  end
    
      namespace :acceptance do
    desc 'Run all acceptance'
    task :all do
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/*_spec.rb']]))
    end
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end