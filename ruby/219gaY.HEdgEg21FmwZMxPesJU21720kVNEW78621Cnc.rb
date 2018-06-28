
        
        require 'test_helper'
require 'database/setup'
    
                        case action
                    when :listen
                      pg_conn.exec('LISTEN #{pg_conn.escape_identifier channel}')
                      @event_loop.post(&callback) if callback
                    when :unlisten
                      pg_conn.exec('UNLISTEN #{pg_conn.escape_identifier channel}')
                    when :shutdown
                      throw :shutdown
                    end
                  end
    
        def connect
      @connected = true
    end
    
      def validate_evernote_options
    unless evernote_consumer_key.present? &&
      evernote_consumer_secret.present? &&
      evernote_oauth_token.present?
      errors.add(:base, 'Evernote ENV variables and a Service are required')
    end
  end
    
          # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end