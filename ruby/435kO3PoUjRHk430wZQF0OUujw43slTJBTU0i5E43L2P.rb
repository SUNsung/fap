
        
                true
      rescue Gitlab::Auth::AuthenticationError
        false
      end
    end
  end
end

    
          def rss_request?
        current_request.path.ends_with?('.atom') || current_request.format.atom?
      end
    
              @coverage.to_f.round(2)
        end
    
    group :production do
  gem 'uglifier'
  gem 'newrelic_rpm'
end
    
          news.each_with_index do |news, i|
        maker.items.new_item do |item|
          item.id = 'tag:devdocs.io,2014:News/#{settings.news.length - i}'
          item.title = news[1].split('\n').first.gsub(/<\/?[^>]*>/, '')
          item.description do |desc|
            desc.content = news[1..-1].join.gsub('\n', '<br>').gsub('href='/', 'href='https://devdocs.io/')
            desc.type = 'html'
          end
          item.updated = '#{news.first}T14:00:00Z'
          item.published = '#{news.first}T14:00:00Z'
          item.links.new_link do |link|
            link.rel = 'alternate'
            link.href = 'https://devdocs.io/'
            link.type = 'text/html'
          end
        end
      end
    end
    
        def inheritable_copy
      self.class.new @filters
    end
    
        def build_and_queue_request(url, options, &block)
      request = Request.new(url, request_options.merge(options))
      request.on_complete(&block) if block
      queue(request)
      request
    end
    
    module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
        def self.parse(url)
      return url if url.kind_of? self
      new(*PARSER.split(url), PARSER)
    end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
            css('.toc-close', '.naked-list').remove
      end
    
    group :development do
  cp_gem 'claide',                'CLAide'
  cp_gem 'cocoapods-core',        'Core'
  cp_gem 'cocoapods-deintegrate', 'cocoapods-deintegrate'
  cp_gem 'cocoapods-downloader',  'cocoapods-downloader'
  cp_gem 'cocoapods-plugins',     'cocoapods-plugins'
  cp_gem 'cocoapods-search',      'cocoapods-search'
  cp_gem 'cocoapods-stats',       'cocoapods-stats'
  cp_gem 'cocoapods-trunk',       'cocoapods-trunk'
  cp_gem 'cocoapods-try',         'cocoapods-try'
  cp_gem 'molinillo',             'Molinillo'
  cp_gem 'nanaimo',               'Nanaimo'
  cp_gem 'xcodeproj',             'Xcodeproj'
    
        export LANG=en_US.UTF-8
    \e[0m
    DOC
  end