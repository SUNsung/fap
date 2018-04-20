
        
        class TestResponseTest < ActiveSupport::TestCase
  def assert_response_code_range(range, predicate)
    response = ActionDispatch::TestResponse.new
    (0..599).each do |status|
      response.status = status
      assert_equal range.include?(status), response.send(predicate),
                   'ActionDispatch::TestResponse.new(#{status}).#{predicate}'
    end
  end
    
      class MyController < ActionController::Metal
    use BlockMiddleware do |config|
      config.configurable_message = 'Configured by block.'
    end
    use MyMiddleware
    middleware.insert_before MyMiddleware, ExclaimerMiddleware
    
    ActionMailer::LogSubscriber.attach_to :action_mailer

    
        module ClassMethods
      # Provide the parameters to the mailer in order to use them in the instance methods and callbacks.
      #
      #   InvitationsMailer.with(inviter: person_a, invitee: person_b).account_invitation.deliver_later
      #
      # See Parameterized documentation for full example.
      def with(params)
        ActionMailer::Parameterized::Mailer.new(self, params)
      end
    end
    
          included do
        class_attribute :_mailer_class
        setup :initialize_test_deliveries
        setup :set_expected_mail
        teardown :restore_test_deliveries
        ActiveSupport.run_load_hooks(:action_mailer_test_case, self)
      end
    
            def application_mailer_file_name
          @_application_mailer_file_name ||= if mountable_engine?
            'app/mailers/#{namespaced_path}/application_mailer.rb'
          else
            'app/mailers/application_mailer.rb'
          end
        end
    end
  end
end

    
      test 'non registered delivery methods raises errors' do
    DeliveryMailer.delivery_method = :unknown
    error = assert_raise RuntimeError do
      DeliveryMailer.welcome.deliver_now
    end
    assert_equal 'Invalid delivery method :unknown', error.message
  end
    
      teardown do
    I18n.locale = I18n.default_locale
  end
    
      # POST /resource/password
  def create
    self.resource = resource_class.send_reset_password_instructions(resource_params)
    yield resource if block_given?
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
        def initialize
      @pages = {}
    end
    
              entries << [name, node['id'], type]
        end
    
      def supported_object_type?
    SUPPORTED_TYPES.include?(@object['type'])
  end
    
                sequence_base := (
              'x' ||
              -- Take the first two bytes (four hex characters)
              substr(
                -- Of the MD5 hash of the data we documented
                md5(table_name ||
                  '#{SecureRandom.hex(16)}' ||
                  time_part::text
                ),
                1, 4
              )
            -- And turn it into a bigint
            )::bit(16)::bigint;
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
      def initial_state_params
    {
      settings: {},
      token: current_session&.token,
    }
  end
end

    
    RSpec.describe TagsController, type: :controller do
  render_views
    
      describe 'PUT #update' do
    it 'updates the user record' do
      put :update, params: { user: { locale: 'en', filtered_languages: ['es', 'fr', ''] } }
    
              if @address.update_attributes(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end