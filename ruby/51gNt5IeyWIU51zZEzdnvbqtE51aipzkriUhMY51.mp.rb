
        
                @disable_request_forgery_protection = false
        @allow_same_origin_as_host = true
      end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
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
    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
          module ClassMethods
        def tests(mailer)
          case mailer
          when String, Symbol
            self._mailer_class = mailer.to_s.camelize.constantize
          when Module
            self._mailer_class = mailer
          else
            raise NonInferrableMailerError.new(mailer)
          end
        end
    
    require 'active_support/testing/autorun'
require 'active_support/testing/method_call_assertions'
require 'action_mailer'
require 'action_mailer/test_case'
    
      def test_send_mail
    stub_any_instance(Mail::SMTP, instance: Mail::SMTP.new({})) do |instance|
      assert_called(instance, :deliver!) do
        with_translation 'de', email_subject: '[Anmeldung] Willkommen' do
          get '/test/send_mail'
          assert_equal 'Mail sent - Subject: [Anmeldung] Willkommen', @response.body
        end
      end
    end
  end
    
        mail_with_defaults do |format|
      format.html { render(inline: '<%= format_paragraph @text, 15, 1 %>') }
    end
  end
    
      private
    
      private
    
        def types
      const_get(:TYPES).map(&:constantize)
    end
    
      def evernote_oauth_token
    service && service.token
  end
end

    
      def destroy
    @user_credential = current_user.user_credentials.find(params[:id])
    @user_credential.destroy
    
      # PUT /resource/password
  def update
    self.resource = resource_class.reset_password_by_token(resource_params)
    yield resource if block_given?
    
          protected
    
          def merge!(other)
        other.each do |key, value|
          self[convert_key(key)] = value
        end
        self
      end
    
              @env.action_runner.run(Vagrant::Action.action_box_remove, {
            box_name:     argv[0],
            box_provider: options[:provider],
            box_version:  options[:version],
            force_confirm_box_remove: options[:force],
            box_remove_all_versions: options[:all],
          })
    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end