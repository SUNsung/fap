
        
              # Returns an escaped version of +html+ without affecting existing escaped entities.
      #
      #   escape_once('1 < 2 &amp; 3')
      #   # => '1 &lt; 2 &amp; 3'
      #
      #   escape_once('&lt;&lt; Accept & Checkout')
      #   # => '&lt;&lt; Accept &amp; Checkout'
      def escape_once(html)
        ERB::Util.html_escape_once(html)
      end
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
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
    
      AUTH_HEADERS.each do |header|
    test 'successful authentication with #{header.downcase}' do
      @request.env[header] = encode_credentials('lifo')
      get :index
    
          debug { event.payload[:mail] }
    end
    
      def evernote_client
    EvernoteOAuth::Client.new(
      token:           evernote_oauth_token,
      consumer_key:    evernote_consumer_key,
      consumer_secret: evernote_consumer_secret,
      sandbox:         use_sandbox?
    )
  end
    
      def tumblr_consumer_key
    ENV['TUMBLR_OAUTH_KEY']
  end
    
      included do
    helper SortableTableHelper
  end
    
          respond_to do |format|
        if new_credentials.map(&:save).all?
          format.html { redirect_to user_credentials_path, notice: 'The file was successfully uploaded.'}
        else
          format.html { redirect_to user_credentials_path, notice: 'One or more of the uploaded credentials was not imported due to an error. Perhaps an existing credential had the same name?'}
        end
      end
    else
      redirect_to user_credentials_path, notice: 'No file was chosen to be uploaded.' 
    end
  end