
        
          def teardown
    ActiveSupport.escape_html_entities_in_json = @old_escape_html_entities_in_json
  end
    
          delegate :lookup_context, to: :controller
      attr_accessor :controller, :output_buffer, :rendered
    
      test 'response parsing' do
    response = ActionDispatch::TestResponse.create(200, {}, '')
    assert_equal response.body, response.parsed_body
    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
          add_delivery_method :file, Mail::FileDelivery,
        location: defined?(Rails.root) ? '#{Rails.root}/tmp/mails' : '#{Dir.tmpdir}/mails'
    
    module ActionMailer
  # Implements the ActiveSupport::LogSubscriber for logging notifications when
  # email is delivered or received.
  class LogSubscriber < ActiveSupport::LogSubscriber
    # An email was delivered.
    def deliver(event)
      info do
        recipients = Array(event.payload[:to]).join(', ')
        'Sent mail to #{recipients} (#{event.duration.round(1)}ms)'
      end
    
      def test_assert_select_email
    assert_raise ActiveSupport::TestCase::Assertion do
      assert_select_email {}
    end
    
          # Topic may be hard deleted due to spam, no point complaining
      # we would have to look at the topics table id sequence to find cases
      # where this was called with an invalid id, no point really
      return unless topic.present?
    
        sidekiq_options queue: 'critical'
    
      def self.fragment_cache
    @cache ||= DistributedCache.new('am_serializer_fragment_cache')
  end
    
          it 'does set the source directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(source_directory: 'MyCoolApp')
          end').runner.execute(:test)
    
      belongs_to :status_message
  has_many :poll_answers, -> { order 'id ASC' }, dependent: :destroy
  has_many :poll_participations, dependent: :destroy
  has_one :author, through: :status_message
    
          rescue_from OpenIDConnect::HttpError do |e|
        http_error_page_as_json(e)
      end
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end
