
        
          def short_type
    @short_type ||= type.split('::').pop
  end
    
      def recipients(payload = {})
    emails = interpolated(payload)['recipients']
    if emails.present?
      if emails.is_a?(String)
        [emails]
      else
        emails
      end
    else
      [user.email]
    end
  end
    
          _form_configurable_fields[name] = options
    end
    
        # Optional
    #   Use this method the gracefully stop your agent but make sure the run method return, or
    #   terminate the thread.
    def stop; end
  end
end
=end
module LongRunnable
  extend ActiveSupport::Concern
    
          html_filters.push 'bootstrap/entries_v4', 'bootstrap/clean_html_v4'
    
        version '1.5' do
      self.release = '1.5.3'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
    
        def parse(response)
      unless response.url == root_url || self.class.version == 'Guide'
        response.body.sub!(/<nav class='devsite-nav-responsive-sidebar.+?<\/nav>/m, '')
        response.body.gsub!(/<li class='devsite-nav-item'>.+?<\/li>/m, '')
      end
    
        def to_a
      @filters.dup
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
                # Register the handler if this is our first callback.
            Signal.trap('INT') { fire_callbacks } if registered.length == 1
          end
        end
    
            # Success, exit status 0
        0
      end
    end
  end
end

    
      def start_url
    '/web/timelines/home'
  end