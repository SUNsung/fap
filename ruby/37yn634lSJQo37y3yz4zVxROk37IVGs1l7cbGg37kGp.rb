
        
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
    
          post_install_messages.compact.each do |message|
        PluginManager.ui.info(message)
      end
    
        if local_gems.size > 0
      if update_all?
        plugins_with_path = local_gems
      else
        plugins_with_path = plugins_arg & local_gems
      end
    
    platforms = PlatformConfig.new
    
    shared_examples 'logstash update' do |logstash|
  describe 'logstash-plugin update on #{logstash.hostname}' do
    before :each do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
    default_vagrant_boxes = ( platform == 'all' ? config.platforms : config.filter_type(platform, {'experimental' => experimental}) )
    
        def settings
      self
    end
    
      describe 'RedisScanner' do
    it 'returns identical to smembers' do
      test_obj = Object.new
      test_obj.extend(Sidekiq::RedisScanner)
      50.times do |i|
        Sidekiq.redis { |conn| conn.sadd('processes', 'test-process-#{i}') }
      end
      sscan = Sidekiq.redis { |c| test_obj.sscan(c, 'processes') }.sort!
      smembers = Sidekiq.redis { |c| c.smembers('processes') }.sort!
      assert_equal sscan.size, 50
      assert_equal sscan, smembers
    end
  end
    
        describe 'when the exception does not have a backtrace' do
      it 'does not fail' do
        exception = ExceptionHandlerTestException.new
        assert_nil exception.backtrace