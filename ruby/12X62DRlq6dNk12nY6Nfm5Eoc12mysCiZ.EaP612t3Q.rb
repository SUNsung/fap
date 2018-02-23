
        
              # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
                  conn.subscribe('_action_cable_internal') do |on|
                on.subscribe do |chan, count|
                  @subscription_lock.synchronize do
                    if count == 1
                      @raw_client = original_client
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
          test 'when :except is specified, an after action is not triggered on that action' do
        @controller.process(:index)
        assert !@controller.instance_variable_defined?('@authenticated')
      end
    end
    
      def test_helper_proxy_config
    AllHelpersController.config.my_var = 'smth'
    
        def show
      self.response_body = 'show'
    end
  end
    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
          module ClassMethods
        # Attempt to find a user by its email. If a record is found, send new
        # confirmation instructions to it. If not, try searching for a user by unconfirmed_email
        # field. If no user is found, returns a new user with an email not found error.
        # Options must contain the user email
        def send_confirmation_instructions(attributes={})
          confirmable = find_by_unconfirmed_email_with_errors(attributes) if reconfirmable
          unless confirmable.try(:persisted?)
            confirmable = find_or_initialize_with_errors(confirmation_keys, attributes, :not_found)
          end
          confirmable.resend_confirmation_instructions if confirmable.persisted?
          confirmable
        end
    
      test 'should not confirm a user already confirmed' do
    user = create_user
    assert user.confirm
    assert_blank user.errors[:email]
    
        def translation_scope
      'devise.passwords'
    end
end

    
      def sign_in_params
    devise_parameter_sanitizer.sanitize(:sign_in)
  end
    
      protected
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
        def http_auth
      self.status = 401
      self.headers['WWW-Authenticate'] = %(Basic realm=#{Devise.http_authentication_realm.inspect}) if http_auth_header?
      self.content_type = request.format.to_s
      self.response_body = http_auth_body
    end
    
      included do |base|
    AgentRunner.register(base)
  end
    
      def tumblr_oauth_token_secret
    service.secret
  end
    
        @table_sort_info = {
      order: { attribute.to_sym => direction.to_sym },
      attribute: attribute,
      direction: direction
    }
  end
    
          if rails?
        register_rails_engine
      elsif lotus?
        register_lotus
      elsif sprockets?
        register_sprockets
      end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
      private
    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
      def virtual_tags
    object.mentions + object.tags + object.emojis
  end
    
          def handle_start_point_response(endpoint)
        _status, header, response = endpoint.call(request.env)
        if response.redirect?
          redirect_to header['Location']
        else
          save_params_and_render_consent_form(endpoint)
        end
      end
    
          def find
        client = Api::OpenidConnect::OAuthApplication.find_by(client_name: params[:client_name])
        if client
          render json: {client_id: client.client_id}
        else
          render json: {error: 'Client with name #{params[:client_name]} does not exist'}
        end
      end