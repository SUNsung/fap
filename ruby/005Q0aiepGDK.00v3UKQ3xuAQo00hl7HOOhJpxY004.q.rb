
        
        require 'abstract_unit'
    
      test 'token_and_options returns correct token with quotes' do
    token = '\'quote\' pretty'
    actual = ActionController::HttpAuthentication::Token.token_and_options(sample_request(token)).first
    expected = token
    assert_equal(expected, actual)
  end
    
      class BareTest < ActiveSupport::TestCase
    test 'response body is a Rack-compatible response' do
      status, headers, body = BareController.action(:index).call(Rack::MockRequest.env_for('/'))
      assert_equal 200, status
      string = ''.dup
    
      class ActionsController < ActionController::Metal
    use MyMiddleware, only: :show
    middleware.insert_before MyMiddleware, ExclaimerMiddleware, except: :index
    
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
    
    require 'active_support/core_ext/kernel/reporting'
    
      def test_assert_select_email
    assert_raise ActiveSupport::TestCase::Assertion do
      assert_select_email {}
    end
    
    class AMLogSubscriberTest < ActionMailer::TestCase
  include ActiveSupport::LogSubscriber::TestHelper
    
          key = Spaceship::Portal::Key.create(name: 'New Key', apns: true, device_check: true, music_id: 'some-music-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('a-new-key-id')
    end
  end
    
            if params[:default_keychain]
          # if there is no default keychain - setting the original will fail - silent this error
          begin
            Actions.lane_context[Actions::SharedValues::ORIGINAL_DEFAULT_KEYCHAIN] = Fastlane::Actions.sh('security default-keychain', log: false).strip
          rescue
          end
          commands << Fastlane::Actions.sh('security default-keychain -s #{keychain_path}', log: false)
        end
    
            expect(result).to eq('git svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('git svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
          it 'properly removes new lines of the build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: '24\n', xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
      def complete_option(method)
    if self.respond_to? 'complete_#{method}'.to_sym
      self.send('complete_#{method}'.to_sym)
    end
  end
    
      def table_sort
    raise('You must call set_table_sort in any action using table_sort.') unless @table_sort_info.present?
    @table_sort_info[:order]
  end
    
      def destroy
    @event.destroy
    
      before_action :upgrade_warning, only: :index
    
    class DigestMailerWorker
  include Sidekiq::Worker
    
        def show
      render plain: 'show'
    end
  end
    
      def description
    strip_tags(object.site_description.presence || I18n.t('about.about_mastodon_html'))
  end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
            END_OF_OUTPUT_SIGNAL = '\n\r'.freeze
    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def print_info
          UI.puts '\nTo learn more about the template see `#{template_repo_url}`.'
          UI.puts 'To learn more about creating a new pod, see `#{CREATE_NEW_POD_INFO_URL}`.'
        end