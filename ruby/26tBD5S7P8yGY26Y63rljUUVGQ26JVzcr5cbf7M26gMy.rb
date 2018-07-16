
        
          attr_accessor :output_buffer
  attr_reader :request
    
        module Behavior
      extend ActiveSupport::Concern
    
      def redirect_to_new_record
    redirect_to Workshop.new(nil)
  end
    
              def add_channel(channel, on_success)
            @subscription_lock.synchronize do
              ensure_listener_running
              @subscribe_callbacks[channel] << on_success
              when_connected { send_command('subscribe', channel) }
            end
          end
    
            def test_spec_name_on_key_lookup
          spec = spec(:readonly, 'readonly' => { 'adapter' => 'sqlite3' })
          assert_equal 'readonly', spec.name
        end
    
    require 'active_record/relation/predicate_builder/association_query_value'
require 'active_record/relation/predicate_builder/polymorphic_array_value'

    
        bulb = car.bulbs.build
    assert_equal car.id, bulb.car_id
    
      scope :with_object, Class.new(Struct.new(:klass)) {
    def call
      klass.where(approved: true)
    end
  }.new(self)
    
          assert_equal 1, events.length
      assert_equal 'perform_action.action_cable', events[0].name
      assert_equal 'ActionCable::Channel::BaseTest::ChatChannel', events[0].payload[:channel_class]
      assert_equal :speak, events[0].payload[:action]
      assert_equal data, events[0].payload[:data]
    ensure
      ActiveSupport::Notifications.unsubscribe 'perform_action.action_cable'
    end
  end
    
      private
    def open_connection(server = nil)
      server ||= TestServer.new
    
            # Internal hax = :(
        client = connection.websocket.send(:websocket)
        rack_hijack_io = client.instance_variable_get('@stream').instance_variable_get('@rack_hijack_io')
        rack_hijack_io.stub(:write, proc { raise(closed_exception, 'foo') }) do
          assert_called(client, :client_gone) do
            client.write('boo')
          end
        end
        assert_equal [], connection.errors
      end
    end
  end
    
      test '#restart shuts down worker pool' do
    assert_called(@server.worker_pool, :halt) do
      @server.restart
    end
  end
    
            # Callback to overwrite if confirmation is required or not.
        def confirmation_required?
          !confirmed?
        end
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        on :queue_public_receive do |xml, legacy=false|
      Workers::ReceivePublic.perform_async(xml, legacy)
    end
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end
    
    module Capistrano
  module TaskEnhancements
    def before(task, prerequisite, *args, &block)
      prerequisite = Rake::Task.define_task(prerequisite, *args, &block) if block_given?
      Rake::Task[task].enhance [prerequisite]
    end
    
        # Fetch a var from the context
    # @param [Symbol] variable The variable to fetch
    # @param [Object] default  The default value if not found
    #
    def fetch(*args)
      context.fetch(*args)
    end
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end