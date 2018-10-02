
        
          it 'accepts a Float' do
    sleep(0.1).should be_close(0, 2)
  end
    
        path = Commands.path(cmd)
    
    module Homebrew
  module_function
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
    profile = Profile.new
# puts profile.generate
command = ['/usr/bin/sandbox-exec', '-p', profile.generate, profile.pod_bin, *ARGV]
exec(*command)

    
        # Checks that the lockfile exists.
    #
    # @raise  If the lockfile does not exists.
    #
    # @return [void]
    #
    def verify_lockfile_exists!
      unless config.lockfile
        raise Informative, 'No `Podfile.lock' found in the project directory, run `pod install'.'
      end
    end
    
          ::Bundler.settings[:path] = LogStash::Environment::BUNDLE_DIR
      ::Bundler.settings[:gemfile] = LogStash::Environment::GEMFILE_PATH
      ::Bundler.settings[:without] = options[:without].join(':')
      ::Bundler.settings[:force] = options[:force]
    
          explicit_plugins_specs = explicitly_declared_plugins_specs
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
    shared_examples 'logstash update' do |logstash|
  describe 'logstash-plugin update on #{logstash.hostname}' do
    before :each do
      logstash.install({:version => LOGSTASH_VERSION})
    end