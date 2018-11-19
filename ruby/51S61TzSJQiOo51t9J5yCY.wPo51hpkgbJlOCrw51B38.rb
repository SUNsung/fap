
        
                if value.present?
          # We refresh the expiration time so frequently used keys stick
          # around, removing the need for querying the database as much as
          # possible.
          #
          # A key may be empty when we looked up a GitHub user (for example) but
          # did not find a matching GitLab user. In that case we _don't_ want to
          # refresh the TTL so we automatically pick up the right data when said
          # user were to register themselves on the GitLab instance.
          Redis::Cache.with { |redis| redis.expire(key, timeout) }
        end
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            # Builds a lfs_object
        def self.from_api_response(lfs_object)
          new({ oid: lfs_object[0], download_link: lfs_object[1] })
        end
    
                target 'Static' do
                use_frameworks!(false)
            end
            target 'Dynamic' do
                use_frameworks!(true)
            end
        end
    end
end
    
          ::Bundler.settings[:path] = Environment::BUNDLE_DIR
      ::Bundler.settings[:without] = options[:without].join(':')
      # in the context of Bundler.setup it looks like this is useless here because Gemfile path can only be specified using
      # the ENV, see https://github.com/bundler/bundler/blob/v1.8.3/lib/bundler/shared_helpers.rb#L103
      ::Bundler.settings[:gemfile] = Environment::GEMFILE_PATH
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
        def self.find_by_name_with_wildcards(pattern)
      re = transform_pattern_into_re(pattern)
      ::Gem::Specification.find_all.select do |specification|
        specification.name =~ re
      end
    end
    
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
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
      private
    
        context 'without a username / password' do
      let(:scheme) { 'myscheme' }
      let(:user) { nil }
      let(:password) { nil }
      let(:hostname) { 'myhostname' }
      let(:path) { '/my/path' }
      let(:uri_str) { '#{scheme}://#{hostname}#{path}' }
      let(:uri_hidden) { '#{scheme}://#{hostname}#{path}' }
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
            def authorize
          perform_payment_action(:authorize)
        end
    
            def destroy
          authorize! :destroy, taxonomy
          taxonomy.destroy
          respond_with(taxonomy, status: 204)
        end