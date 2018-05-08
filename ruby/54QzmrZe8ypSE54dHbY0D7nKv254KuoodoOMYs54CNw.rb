  setup do
    @old_escape_html_entities_in_json = ActiveSupport.escape_html_entities_in_json
    ActiveSupport.escape_html_entities_in_json = true
    @template = self
    @request = Class.new do
      def send_early_hints(links) end
    end.new
  end
    
    module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
      class TestInheritedMiddleware < TestMiddleware
    def setup
      @app = InheritedController.action(:index)
    end
  end
end

    
          # Adds a new delivery method through the given class using the given
      # symbol as alias and the default options supplied.
      #
      #   add_delivery_method :sendmail, Mail::Sendmail,
      #     location:  '/usr/sbin/sendmail',
      #     arguments: '-i'
      def add_delivery_method(symbol, klass, default_options = {})
        class_attribute(:'#{symbol}_settings') unless respond_to?(:'#{symbol}_settings')
        send(:'#{symbol}_settings=', default_options)
        self.delivery_methods = delivery_methods.merge(symbol.to_sym => klass).freeze
      end
    
      test 'does not perform deliveries if requested' do
    old_perform_deliveries = DeliveryMailer.perform_deliveries
    begin
      DeliveryMailer.perform_deliveries = false
      stub_any_instance(Mail::Message) do |instance|
        assert_not_called(instance, :deliver!) do
          DeliveryMailer.welcome.deliver_now
        end
      end
    ensure
      DeliveryMailer.perform_deliveries = old_perform_deliveries
    end
  end
    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end
    
    
  it 'should allow changing the nosniff-mode off' do
    mock_app do
      use Rack::Protection::XSSHeader, :nosniff => false
      run DummyApp
    end
    
      # Print the 10 slowest examples and example groups at the
  # end of the spec run, to help surface which specs are running
  # particularly slow.
  config.profile_examples = 10