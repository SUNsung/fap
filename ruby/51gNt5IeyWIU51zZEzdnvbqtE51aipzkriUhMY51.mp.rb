
        
          test 'overriding has_many_attached methods works' do
    # attach blobs before messing with getter, which breaks `#attach`
    @user.highlights.attach create_blob(filename: 'funky.jpg'), create_blob(filename: 'wonky.jpg')
    
      setup do
    build_app
    add_to_config 'config.consider_all_requests_local = true'
    
    require 'test_helper'
require 'stubs/test_connection'
require 'stubs/room'
    
      setup do
    @user = User.new 'lifo'
    @connection = TestConnection.new(@user)
  end
    
            confirmation = { 'identifier' => '{id: 1}', 'type' => 'confirm_subscription' }
        connection.transmit(confirmation)
    
        def send_async(method, *args)
      send method, *args
    end
  end
    
          assert_not connection.connected
      assert_equal [], @server.connections
    end
  end
    
      test '#restart shuts down pub/sub adapter' do
    assert_called(@server.pubsub, :shutdown) do
      @server.restart
    end
  end
end

    
    class BroadcastingTest < ActionCable::TestCase
  test 'fetching a broadcaster converts the broadcasting queue to a string' do
    broadcasting = :test_queue
    server = TestServer.new
    broadcaster = server.broadcaster_for(broadcasting)
    
          it 'renders HTML' do
        expect(render(options, screenshots)).to match(/<html>/)
      end
    end
    
          def load_all_tasks
        self.tasks = []