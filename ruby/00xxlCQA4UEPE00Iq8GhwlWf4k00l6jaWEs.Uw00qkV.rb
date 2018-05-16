
        
              def initialize(*)
        super
        @listener = nil
        @redis_connection_for_broadcasts = nil
      end
    
            def test_spec_name_with_inline_config
          spec = spec('adapter' => 'sqlite3')
          assert_equal 'primary', spec.name, 'should default to primary id'
        end
      end
    end
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
    
        # Access the message attachments list.
    def attachments
      mailer.attachments
    end
    
        class MessageDelivery < ActionMailer::MessageDelivery # :nodoc:
      def initialize(mailer_class, action, params, *args)
        super(mailer_class, action, *args)
        @params = params
      end
    
        groups
  end
end

    
        def types
      const_get(:TYPES).map(&:constantize)
    end
    
        begin
      raise '#{short_type} does not support dry-run' unless can_dry_run?
      readonly!
      @dry_run_started_at = Time.zone.now
      @dry_run_logger.info('Dry Run started')
      if event
        raise 'This agent cannot receive an event!' unless can_receive_events?
        receive([event])
      else
        check
      end
      @dry_run_logger.info('Dry Run finished')
    rescue => e
      @dry_run_logger.info('Dry Run failed')
      error 'Exception during dry-run. #{e.message}: #{e.backtrace.join('\n')}'
    end
    
        if options['recipients'].present?
      emails = options['recipients']
      emails = [emails] if emails.is_a?(String)
      unless emails.all? { |email| email =~ Devise.email_regexp || email =~ /\{/ }
        errors.add(:base, ''when provided, 'recipients' should be an email address or an array of email addresses')
      end
    end
  end
    }
    
      def tumblr_consumer_key
    ENV['TUMBLR_OAUTH_KEY']
  end
    
      private
    
        def entries_as_json
      @entries.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
        def to_a
      @filters.dup
    end
    
            css('.bs-docs-sidenav > li').each do |node|
          link = node.at_css('a')
          name = link.content
          next if IGNORE_ENTRIES.include?(name)
    
          next if path.symlink? || path.directory?
    
        previous_tag = ARGV.named.first
    previous_tag ||= Utils.popen_read(
      'git', '-C', HOMEBREW_REPOSITORY, 'tag', '--list', '--sort=-version:refname'
    ).lines.first.chomp
    odie 'Could not find any previous tags!' unless previous_tag
    
      def merge(*args)
    @settings.merge(*args)
    self
  end