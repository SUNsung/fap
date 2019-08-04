
        
              app_file 'config/environments/test.rb', <<-RUBY
        Rails.application.configure do
          config.action_controller.allow_forgery_protection = true
          config.action_dispatch.show_exceptions = false
        end
      RUBY
    
    module ActiveSupport
  # = Notifications
  #
  # <tt>ActiveSupport::Notifications</tt> provides an instrumentation API for
  # Ruby.
  #
  # == Instrumenters
  #
  # To instrument an event you just need to do:
  #
  #   ActiveSupport::Notifications.instrument('render', extra: :information) do
  #     render plain: 'Foo'
  #   end
  #
  # That first executes the block and then notifies all subscribers once done.
  #
  # In the example above +render+ is the name of the event, and the rest is called
  # the _payload_. The payload is a mechanism that allows instrumenters to pass
  # extra information to subscribers. Payloads consist of a hash whose contents
  # are arbitrary and generally depend on the event.
  #
  # == Subscribers
  #
  # You can consume those events and the information they provide by registering
  # a subscriber.
  #
  #   ActiveSupport::Notifications.subscribe('render') do |name, start, finish, id, payload|
  #     name    # => String, name of the event (such as 'render' from above)
  #     start   # => Time, when the instrumented block started execution
  #     finish  # => Time, when the instrumented block ended execution
  #     id      # => String, unique ID for the instrumenter that fired the event
  #     payload # => Hash, the payload
  #   end
  #
  # Here, the +start+ and +finish+ values represent wall-clock time. If you are
  # concerned about accuracy, you can register a monotonic subscriber.
  #
  #   ActiveSupport::Notifications.monotonic_subscribe('render') do |name, start, finish, id, payload|
  #     name    # => String, name of the event (such as 'render' from above)
  #     start   # => Monotonic time, when the instrumented block started execution
  #     finish  # => Monotonic time, when the instrumented block ended execution
  #     id      # => String, unique ID for the instrumenter that fired the event
  #     payload # => Hash, the payload
  #   end
  #
  # The +start+ and +finish+ values above represent monotonic time.
  #
  # For instance, let's store all 'render' events in an array:
  #
  #   events = []
  #
  #   ActiveSupport::Notifications.subscribe('render') do |*args|
  #     events << ActiveSupport::Notifications::Event.new(*args)
  #   end
  #
  # That code returns right away, you are just subscribing to 'render' events.
  # The block is saved and will be called whenever someone instruments 'render':
  #
  #   ActiveSupport::Notifications.instrument('render', extra: :information) do
  #     render plain: 'Foo'
  #   end
  #
  #   event = events.first
  #   event.name      # => 'render'
  #   event.duration  # => 10 (in milliseconds)
  #   event.payload   # => { extra: :information }
  #
  # The block in the <tt>subscribe</tt> call gets the name of the event, start
  # timestamp, end timestamp, a string with a unique identifier for that event's instrumenter
  # (something like '535801666f04d0298cd6'), and a hash with the payload, in
  # that order.
  #
  # If an exception happens during that particular instrumentation the payload will
  # have a key <tt>:exception</tt> with an array of two elements as value: a string with
  # the name of the exception class, and the exception message.
  # The <tt>:exception_object</tt> key of the payload will have the exception
  # itself as the value:
  #
  #   event.payload[:exception]         # => ['ArgumentError', 'Invalid value']
  #   event.payload[:exception_object]  # => #<ArgumentError: Invalid value>
  #
  # As the earlier example depicts, the class <tt>ActiveSupport::Notifications::Event</tt>
  # is able to take the arguments as they come and provide an object-oriented
  # interface to that data.
  #
  # It is also possible to pass an object which responds to <tt>call</tt> method
  # as the second parameter to the <tt>subscribe</tt> method instead of a block:
  #
  #   module ActionController
  #     class PageRequest
  #       def call(name, started, finished, unique_id, payload)
  #         Rails.logger.debug ['notification:', name, started, finished, unique_id, payload].join(' ')
  #       end
  #     end
  #   end
  #
  #   ActiveSupport::Notifications.subscribe('process_action.action_controller', ActionController::PageRequest.new)
  #
  # resulting in the following output within the logs including a hash with the payload:
  #
  #   notification: process_action.action_controller 2012-04-13 01:08:35 +0300 2012-04-13 01:08:35 +0300 af358ed7fab884532ec7 {
  #      controller: 'Devise::SessionsController',
  #      action: 'new',
  #      params: {'action'=>'new', 'controller'=>'devise/sessions'},
  #      format: :html,
  #      method: 'GET',
  #      path: '/login/sign_in',
  #      status: 200,
  #      view_runtime: 279.3080806732178,
  #      db_runtime: 40.053
  #    }
  #
  # You can also subscribe to all events whose name matches a certain regexp:
  #
  #   ActiveSupport::Notifications.subscribe(/render/) do |*args|
  #     ...
  #   end
  #
  # and even pass no argument to <tt>subscribe</tt>, in which case you are subscribing
  # to all events.
  #
  # == Temporary Subscriptions
  #
  # Sometimes you do not want to subscribe to an event for the entire life of
  # the application. There are two ways to unsubscribe.
  #
  # WARNING: The instrumentation framework is designed for long-running subscribers,
  # use this feature sparingly because it wipes some internal caches and that has
  # a negative impact on performance.
  #
  # === Subscribe While a Block Runs
  #
  # You can subscribe to some event temporarily while some block runs. For
  # example, in
  #
  #   callback = lambda {|*args| ... }
  #   ActiveSupport::Notifications.subscribed(callback, 'sql.active_record') do
  #     ...
  #   end
  #
  # the callback will be called for all 'sql.active_record' events instrumented
  # during the execution of the block. The callback is unsubscribed automatically
  # after that.
  #
  # To record +started+ and +finished+ values with monotonic time,
  # specify the optional <tt>:monotonic</tt> option to the
  # <tt>subscribed</tt> method. The <tt>:monotonic</tt> option is set
  # to +false+ by default.
  #
  #   callback = lambda {|name, started, finished, unique_id, payload| ... }
  #   ActiveSupport::Notifications.subscribed(callback, 'sql.active_record', monotonic: true) do
  #     ...
  #   end
  #
  # === Manual Unsubscription
  #
  # The +subscribe+ method returns a subscriber object:
  #
  #   subscriber = ActiveSupport::Notifications.subscribe('render') do |*args|
  #     ...
  #   end
  #
  # To prevent that block from being called anymore, just unsubscribe passing
  # that reference:
  #
  #   ActiveSupport::Notifications.unsubscribe(subscriber)
  #
  # You can also unsubscribe by passing the name of the subscriber object. Note
  # that this will unsubscribe all subscriptions with the given name:
  #
  #   ActiveSupport::Notifications.unsubscribe('render')
  #
  # Subscribers using a regexp or other pattern-matching object will remain subscribed
  # to all events that match their original pattern, unless those events match a string
  # passed to `unsubscribe`:
  #
  #   subscriber = ActiveSupport::Notifications.subscribe(/render/) { }
  #   ActiveSupport::Notifications.unsubscribe('render_template.action_view')
  #   subscriber.matches?('render_template.action_view') # => false
  #   subscriber.matches?('render_partial.action_view') # => true
  #
  # == Default Queue
  #
  # Notifications ships with a queue implementation that consumes and publishes events
  # to all log subscribers. You can use any queue implementation you want.
  #
  module Notifications
    class << self
      attr_accessor :notifier
    
            attr_reader :symbol
    
          p = Sidekiq::Processor.new(mgr)
      JoeWorker.perform_async(1)
      q = Sidekiq::Queue.new
      assert_equal 1, q.size
    
      def new_manager(opts)
    Sidekiq::Manager.new(opts)
  end
    
        it 'calculates an average poll interval based on the number of known Sidekiq processes' do
      with_sidekiq_option(:average_scheduled_poll_interval, 10) do
        3.times do |i|
          Sidekiq.redis do |conn|
            conn.sadd('processes', 'process-#{i}')
            conn.hset('process-#{i}', 'info', nil)
          end
        end
    
          assert SomeScheduledWorker.perform_in(1.month, 'mike')
      job = ss.first
      assert job['created_at']
      refute job['enqueued_at']
    end
  end
    
          e = assert_raises ArgumentError do
        Sidekiq.on(:startp)
      end
      assert_match(/Invalid event name/, e.message)
      e = assert_raises ArgumentError do
        Sidekiq.on('startup')
      end
      assert_match(/Symbols only/, e.message)
      Sidekiq.on(:startup) do
        1 + 1
      end
    
    end
