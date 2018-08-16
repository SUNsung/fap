
        
                            if callbacks = @subscribe_callbacks[chan]
                      next_callback = callbacks.shift
                      @event_loop.post(&next_callback) if next_callback
                      @subscribe_callbacks.delete(chan) if callbacks.empty?
                    end
                  end
                end
    
      attr_accessor :throw_on_save
  before_save do
    throw :abort if throw_on_save
  end
    
      test 'notification for transmit_subscription_rejection' do
    begin
      events = []
      ActiveSupport::Notifications.subscribe 'transmit_subscription_rejection.action_cable' do |*args|
        events << ActiveSupport::Notifications::Event.new(*args)
      end
    
          @channel.perform_action('action' => :secret_action)
      assert_equal 1, @connection.transmissions.size
    end
    
        test 'user supplied callbacks are run through the worker pool' do
      run_in_eventmachine do
        connection = open_connection
        receive(connection, command: 'subscribe', channel: UserCallbackChannel.name, identifiers: { id: 1 })
    
    require 'action_cable/subscription_adapter/redis'