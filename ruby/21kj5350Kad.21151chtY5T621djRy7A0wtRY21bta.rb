
        
          def test_redirect_with_status_hash
    get :redirect_with_status_hash
    assert_response 301
    assert_equal 'http://test.host/redirect/hello_world', redirect_to_url
  end
    
            def redis_connection
          self.class.redis_connector.call(@server.config.cable)
        end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
            names.each do |name|
          define_singleton_method(name) do
            instance.public_send(name)
          end
    
      def test_helper_for_nested_controller
    assert_equal 'hello: Iz guuut!',
      call_controller(Fun::GamesController, 'render_hello_world').last.body
  end
    
    class HttpTokenAuthenticationTest < ActionController::TestCase
  class DummyController < ActionController::Base
    before_action :authenticate, only: :index
    before_action :authenticate_with_request, only: :display
    before_action :authenticate_long_credentials, only: :show
    
      private
    def with_params_parsers(parsers = {})
      old_session = @integration_session
      original_parsers = ActionDispatch::Request.parameter_parsers
      ActionDispatch::Request.parameter_parsers = original_parsers.merge parsers
      reset!
      yield
    ensure
      ActionDispatch::Request.parameter_parsers = original_parsers
      @integration_session = old_session
    end
    
            mail.perform_deliveries    = perform_deliveries
        mail.raise_delivery_errors = raise_delivery_errors
      end
    end
    
      class AssertMultipartSelectMailer < ActionMailer::Base
    def test(options)
      mail subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>' do |format|
        format.text { render plain: options[:text] }
        format.html { render plain: options[:html] }
      end
    end
  end
    
        assert_equal(2, @logger.logged(:debug).size)
    assert_match(/BaseMailer#welcome: processed outbound mail in [\d.]+ms/, @logger.logged(:debug).first)
    assert_match(/Welcome/, @logger.logged(:debug).second)
  ensure
    BaseMailer.deliveries.clear
  end
    
          it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER]).to match(/cd .* && agvtool new-version -all 24 \&\& cd \-/)
      end
    end
  end
end

    
      def find_existing_status
    status   = status_from_uri(object_uri)
    status ||= Status.find_by(uri: @object['atomUri']) if @object['atomUri'].present?
    status
  end
    
        def find_local(username)
      find_remote(username, nil)
    end
    
      let(:payload) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'foo',
      type: 'Create',
      actor: ActivityPub::TagManager.instance.uri_for(actor),
      object: {
        id: 'bar',
        type: 'Note',
        content: 'Lorem ipsum',
      },
    }
  end
    
        it 'removes remote accounts from that domain' do
      expect(Account.find_remote('badguy666', 'evil.org').suspended?).to be true
    end
    
      # Extract the form
  res = '<form'
  form.attributes.each do |attr|
    res << ' #{attr[0]}='#{attr[1].gsub(''', '')}''
  end
  res << '> '
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
        # Hash access of interpolations. Included only for compatibility,
    # and is not intended for normal use.
    def self.[] name
      method(name)
    end
    
            def argument?
          ARGUMENT_DECLARATION_TYPES.include?(@declaration_node.type)
        end
    
            def immutable_literal?(node)
          return true if node.immutable_literal?