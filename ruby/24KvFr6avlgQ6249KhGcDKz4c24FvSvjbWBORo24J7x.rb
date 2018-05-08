        def view_rendered?(view, expected_locals)
          locals_for(view).any? do |actual_locals|
            expected_locals.all? { |key, value| value == actual_locals[key] }
          end
        end
      end
    
            adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
          # Overwrite this factory method for Redis connections if you want to use a different Redis library than the redis gem.
      # This is needed, for example, when using Makara proxies for distributed Redis.
      cattr_accessor :redis_connector, default: ->(config) do
        ::Redis.new(config.slice(:url, :host, :port, :db, :password))
      end
    
    module ActiveSupport
  # Abstract super class that provides a thread-isolated attributes singleton, which resets automatically
  # before and after each request. This allows you to keep all the per-request attributes easily
  # available to the whole system.
  #
  # The following full app-like example demonstrates how to use a Current class to
  # facilitate easy access to the global, per-request attributes without passing them deeply
  # around everywhere:
  #
  #   # app/models/current.rb
  #   class Current < ActiveSupport::CurrentAttributes
  #     attribute :account, :user
  #     attribute :request_id, :user_agent, :ip_address
  #
  #     resets { Time.zone = nil }
  #
  #     def user=(user)
  #       super
  #       self.account = user.account
  #       Time.zone    = user.time_zone
  #     end
  #   end
  #
  #   # app/controllers/concerns/authentication.rb
  #   module Authentication
  #     extend ActiveSupport::Concern
  #
  #     included do
  #       before_action :authenticate
  #     end
  #
  #     private
  #       def authenticate
  #         if authenticated_user = User.find_by(id: cookies.encrypted[:user_id])
  #           Current.user = authenticated_user
  #         else
  #           redirect_to new_session_url
  #         end
  #       end
  #   end
  #
  #   # app/controllers/concerns/set_current_request_details.rb
  #   module SetCurrentRequestDetails
  #     extend ActiveSupport::Concern
  #
  #     included do
  #       before_action do
  #         Current.request_id = request.uuid
  #         Current.user_agent = request.user_agent
  #         Current.ip_address = request.ip
  #       end
  #     end
  #   end
  #
  #   class ApplicationController < ActionController::Base
  #     include Authentication
  #     include SetCurrentRequestDetails
  #   end
  #
  #   class MessagesController < ApplicationController
  #     def create
  #       Current.account.messages.create(message_params)
  #     end
  #   end
  #
  #   class Message < ApplicationRecord
  #     belongs_to :creator, default: -> { Current.user }
  #     after_create { |message| Event.create(record: message) }
  #   end
  #
  #   class Event < ApplicationRecord
  #     before_create do
  #       self.request_id = Current.request_id
  #       self.user_agent = Current.user_agent
  #       self.ip_address = Current.ip_address
  #     end
  #   end
  #
  # A word of caution: It's easy to overdo a global singleton like Current and tangle your model as a result.
  # Current should only be used for a few, top-level globals, like account, user, and request details.
  # The attributes stuck in Current should be used by more or less all actions on all requests. If you start
  # sticking controller-specific attributes in there, you're going to create a mess.
  class CurrentAttributes
    include ActiveSupport::Callbacks
    define_callbacks :reset
    
    class HelpersTypoControllerTest < ActiveSupport::TestCase
  def setup
    @autoload_paths = ActiveSupport::Dependencies.autoload_paths
    ActiveSupport::Dependencies.autoload_paths = Array(HelpersTypoController.helpers_path)
  end
    
        test 'head :no_content (204) does not return any content' do
      content = body(HeadController.action(:no_content).call(Rack::MockRequest.env_for('/')))
      assert_empty content
    end
    
    class TestController < ActionController::Base
  def send_mail
    email = I18nTestMailer.mail_with_i18n_subject('test@localhost').deliver_now
    render plain: 'Mail sent - Subject: #{email.subject}'
  end
end
    
      def test_receive_is_notified
    fixture = File.read(File.expand_path('fixtures/raw_email', __dir__))
    TestMailer.receive(fixture)
    wait
    assert_equal(1, @logger.logged(:info).size)
    assert_match(/Received mail/, @logger.logged(:info).first)
    assert_equal(1, @logger.logged(:debug).size)
    assert_match(/Jamis/, @logger.logged(:debug).first)
  end
end

    
      included do
    scope :admins, -> { where(admin: true) }
    scope :moderators, -> { where(moderator: true) }
    scope :staff, -> { where('moderator or admin ') }
  end