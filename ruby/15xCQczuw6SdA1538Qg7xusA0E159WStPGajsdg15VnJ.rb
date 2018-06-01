
        
          def complete_option(method)
    if self.respond_to? 'complete_#{method}'.to_sym
      self.send('complete_#{method}'.to_sym)
    end
  end
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end