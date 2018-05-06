
        
          def redirect_with_null_bytes
    redirect_to '\000/lol\r\nwat'
  end
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
    class ActiveSupport::TestCase
  include ActiveSupport::Testing::MethodCallAssertions
    
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
    
      def use_block_format
    @text = <<-TEXT
This is the
first     paragraph.
    
      # Do not fallback to assets pipeline if a precompiled asset is missed.
  config.assets.compile = false
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    load './tasks/bower.rake'
    
      def enough_poll_answers
    errors.add(:poll_answers, I18n.t('activerecord.errors.models.poll.attributes.poll_answers.not_enough_poll_answers')) if poll_answers.size < 2
  end
    
          def request_authorization_consent_form
        add_claims_to_scopes
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointStartPoint.new(current_user)
        handle_start_point_response(endpoint)
      end
    
          def handle_jwt_bearer(req)
        jwt_string = req['client_assertion']
        jwt = JSON::JWT.decode jwt_string, :skip_verification
        o_auth_app = Api::OpenidConnect::OAuthApplication.find_by(client_id: jwt['iss'])
        raise Rack::OAuth2::Server::Authorize::BadRequest(:invalid_request) unless o_auth_app
        public_key = fetch_public_key(o_auth_app, jwt)
        JSON::JWT.decode(jwt_string, JSON::JWK.new(public_key).to_key)
        req.update_param('client_id', o_auth_app.client_id)
        req.update_param('client_secret', o_auth_app.client_secret)
      end
    
          if @options[:recursive]
        process_directory
        return
      end
    
            def log_levels
          @log_levels ||= {}
        end
    
            attr_reader :node, :variable, :referenced, :references
        alias referenced? referenced
    
            def on_array(node)
          process(node, '%i', '%I', '%w', '%W')
        end
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
                  add_offense(condition)
            end