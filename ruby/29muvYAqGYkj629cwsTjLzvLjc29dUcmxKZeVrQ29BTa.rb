
        
            # If you've clearned the pin, use bumped_at, otherwise put it at the top
    def order_nocategory_with_pinned_sql
      -'CASE
        WHEN topics.pinned_globally
         AND (COALESCE(topics.pinned_at, '#{lowest_date}') > COALESCE(tu.cleared_pinned_at, '#{lowest_date}'))
          THEN topics.pinned_at + interval '9999 years'
          ELSE topics.bumped_at
       END DESC'
    end
    
      def self.write_cache!(date = nil)
    if date.nil?
      write_cache!(Time.now.utc)
      write_cache!(Time.now.utc.yesterday)
      return
    end
    
      def load_setting(name_arg, value, locale_defaults)
    name = name_arg.to_sym
    @defaults[DEFAULT_LOCALE.to_sym][name] = value
    
      module Deferrable
    
      def self.apply_headers(cors_origins, env, headers)
    origin = nil
    
      def set_cache_control_headers
    if Rails.env.development?
      response.headers['Last-Modified'] = Time.zone.now.httpdate
      immutable_for(1.second)
    else
      response.headers['Last-Modified'] = last_modified.httpdate if last_modified
      immutable_for(1.year)
    end
  end
end

    
      def log_later(data, host)
    Scheduler::Defer.later('Track view', _db = nil) do
      self.class.log_request_on_site(data, host)
    end
  end
    
              # topic must not be archived
          if post.topic&.archived
            raise StandardError.new I18n.t('poll.topic_must_be_open_to_toggle_status') if raise_errors
            return
          end
    
          def rate_limit_resets_in
        # We add a few seconds to the rate limit so we don't _immediately_
        # resume when the rate limit resets as this may result in us performing
        # a request before GitHub has a chance to reset the limit.
        octokit.rate_limit.resets_in + 5
      end
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
    class User < ActiveRecord::Base
  devise :database_authenticatable
end
    
              if mod.const_defined?('ClassMethods')
            class_mod = mod.const_get('ClassMethods')
            extend class_mod
    
          # Checks whether the user session has expired based on configured time.
      def timedout?(last_access)
        !timeout_in.nil? && last_access && last_access <= timeout_in.ago
      end
    
            @user.send_confirmation_instructions
      end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      included do
    before_action :set_locale
  end
    
        it 'rejects invalid jsfiddle link' do
      expect do
        generate_new_liquid('invalid_jsfiddle_link')
      end.to raise_error(StandardError)
    end