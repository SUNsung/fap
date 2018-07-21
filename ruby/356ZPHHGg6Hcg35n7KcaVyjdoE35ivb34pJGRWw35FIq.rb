
        
                  External.require_with_graceful_fail 'jekyll-watch'
          watch_method = Jekyll::Watcher.method(:watch)
          if watch_method.parameters.size == 1
            watch_method.call(
              options
            )
          else
            watch_method.call(
              options, site
            )
          end
        end
      end
    end
  end
end

    
                  Jekyll.logger.info 'LiveReload address:',
                                 'http://#{opts['host']}:#{opts['livereload_port']}'
            end
          end
          @thread.abort_on_exception = true
        end
    
              @content_length = 0
          @livereload_added = false
    
          def output_ext(_ext)
        '.html'
      end
    
          def title
        Utils.slugify(@obj.data['slug'], :mode => 'pretty', :cased => true) ||
          Utils.slugify(@obj.basename_without_ext, :mode => 'pretty', :cased => true)
      end
    
      class CachedFragment
    def initialize(json)
      @json = json
    end
    def as_json(*_args)
      @json
    end
  end
    
          options[:only_patterns] = [/\Ad3[\-\w]+\z/, /\Ad3\/blob\/master\/changes\.md\z/i]
      options[:skip_patterns] = [/3\.x-api-reference/]
    
        version '1.6' do
      self.release = '1.6.5'
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
    
        version 'HashLink' do
      self.base_url = 'https://api.haxe.org/hl/'
    end
    
        options[:only] = BOOKS.map { |s| 'book.#{s}.html' }
    
          options[:only_patterns] = [
        /\Aget_started/,
        /\Aprogrammers_guide/,
        /\Atutorials/,
        /\Aperformance/,
        /\Adeploy/,
        /\Aextend/]
    end
    
        def initialize(*args)
      if args.empty?
        super(*Array.new(9))
      elsif args.length == 1 && args.first.is_a?(Hash)
        args.first.assert_valid_keys URI::Generic::COMPONENT
        super(*args.first.values_at(*URI::Generic::COMPONENT))
      else
        super
      end
    end
    
        def exit_deploy_because_of_exception(ex)
      warn t(:deploy_failed, ex: ex.message)
      invoke 'deploy:failed'
      exit(false)
    end
    
      desc 'Published'
  task :published do
  end