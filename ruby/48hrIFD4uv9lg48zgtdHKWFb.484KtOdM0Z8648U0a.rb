
        
              class << self
        attr_writer :controller_path
      end
    
          # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
            def redis_connection
          self.class.redis_connector.call(@server.config.cable)
        end
    
          def test_add_column_with_timestamp_type
        connection.create_table :testings do |t|
          t.column :foo, :timestamp
        end
    
        values = ActionView::LookupContext::DetailsKey.digest_caches.first.values
    assert_equal [ 'effc8928d0b33535c8a21d24ec617161' ], values
    assert_equal %w(david dingus), last_response.body.split.map(&:strip)
  end
    
          subscriptions = app.connections.first.subscriptions.send(:subscriptions)
      assert_not_equal 0, subscriptions.size, 'Missing EchoChannel subscription'
      channel = subscriptions.first[1]
      assert_called(channel, :unsubscribed) do
        c.close
        sleep 0.1 # Data takes a moment to process
      end
    
          env = Rack::MockRequest.env_for '/test', 'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket',
        'HTTP_HOST' => 'localhost', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
    
          # Internal hax = :(
      client = connection.websocket.send(:websocket)
      client.instance_variable_get('@stream').stub(:write, proc { raise 'foo' }) do
    
        def connect
      self.current_user = User.new 'lifo'
    end
  end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end