
        
              # Sets the expiration time of a key.
      #
      # raw_key - The key for which to change the timeout.
      # timeout - The new timeout.
      def self.expire(raw_key, timeout)
        key = cache_key_for(raw_key)
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
            # attributes - A hash containing the raw issue details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
      def update
    if subscription.verify(body, request.headers['HTTP_X_HUB_SIGNATURE'])
      ProcessingWorker.perform_async(@account.id, body.force_encoding('UTF-8'))
    end
    
      def update
    raise ActiveRecord::RecordNotFound if @web_subscription.nil?
    
      def set_locale
    I18n.locale = default_locale
    I18n.locale = current_user.locale if user_signed_in?
  rescue I18n::InvalidLocale
    I18n.locale = default_locale
  end
    
      def rate_limit_limit
    api_throttle_data[:limit].to_s
  end