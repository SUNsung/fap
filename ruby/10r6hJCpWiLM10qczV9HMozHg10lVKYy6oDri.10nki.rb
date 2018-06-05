
        
              # Need to experiment if this priority is the best one: rendered => output_buffer
      class RenderedViewsCollection
        def initialize
          @rendered_views ||= Hash.new { |hash, key| hash[key] = [] }
        end
    
          def initialize
        @log_tags = []
    
      test 'response parsing' do
    response = ActionDispatch::TestResponse.create(200, {}, '')
    assert_equal response.body, response.parsed_body
    
        assert_response :unauthorized
    assert_equal 'Authentication Failed\n', @response.body
    assert_equal 'Token realm='SuperSecret'', @response.headers['WWW-Authenticate']
  end
    
        # Helpers for creating and wrapping delivery behavior, used by DeliveryMethods.
    module ClassMethods
      # Provides a list of emails that have been delivered by Mail::TestMailer
      delegate :deliveries, :deliveries=, to: Mail::TestMailer
    
      def test_assert_select_email_multipart
    AssertMultipartSelectMailer.test(html: '<div><p>foo</p><p>bar</p></div>', text: 'foo bar').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
end

    
      test 'delivery method options can be overridden per mail instance' do
    default_options = { a: 'b' }
    ActionMailer::Base.add_delivery_method :optioned, MyOptionedDelivery, default_options
    overridden_options = { a: 'a' }
    mail_instance = DeliveryMailer.welcome(delivery_method: :optioned, delivery_method_options: overridden_options)
    assert_equal overridden_options, mail_instance.delivery_method.options
  end
    
    module Jekyll
  class Layout
    include Convertible
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?