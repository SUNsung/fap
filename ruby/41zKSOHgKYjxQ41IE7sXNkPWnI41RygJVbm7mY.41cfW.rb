
        
                def uid
          @uid ||= Gitlab::Utils.force_utf8(auth_hash.uid.to_s)
        end
    
          attr_reader :request
    
            def value_color
          case @status
          when 95..100 then STATUS_COLOR[:good]
          when 90..95 then STATUS_COLOR[:acceptable]
          when 75..90 then STATUS_COLOR[:medium]
          when 0..75 then STATUS_COLOR[:low]
          else
            STATUS_COLOR[:unknown]
          end
        end
      end
    end
  end
end

    
            def value_text
          STATUS_RENAME[@status.to_s] || @status.to_s
        end
    
    if RUBY_ENGINE == 'rbx'
  gem 'json'
  gem 'rubysl'
  gem 'rubysl-test-unit'
  gem 'erubi'
end
    
    task :test do
  ENV['LANG'] = 'C'
  ENV.delete 'LC_CTYPE'
end
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny