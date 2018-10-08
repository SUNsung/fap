
        
                unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
    group :app do
  gem 'rack'
  gem 'sinatra'
  gem 'sinatra-contrib'
  gem 'thin'
  gem 'sprockets'
  gem 'sprockets-helpers'
  gem 'erubi'
  gem 'browser'
  gem 'sass'
  gem 'coffee-script'
end
    
        def doc_index_urls
      docs.each_with_object [] do |slug, result|
        if doc = settings.docs[slug]
          result << File.join('', settings.docs_prefix, slug, 'index.json') + '?#{doc['mtime']}'
        end
      end
    end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
        module FixInternalUrlsBehavior
      def self.included(base)
        base.extend ClassMethods
      end
    
        def file_path_for(url)
      File.join self.class.dir, url.remove(base_url.to_s)
    end
    
          if options[:install]
        arguments << 'install'
        arguments << '--clean' if options[:clean]
        if options[:local]
          arguments << '--local'
          arguments << '--no-prune' # From bundler docs: Don't remove stale gems from the cache.
        end
      elsif options[:update]
        arguments << 'update'
        arguments << options[:update]
        arguments << '--local' if options[:local]
      elsif options[:clean]
        arguments << 'clean'
      elsif options[:package]
        arguments << 'package'
        arguments << '--all' if options[:all]
      end
    
      def execute
    # Turn off any jar dependencies lookup when running with `--local`
    ENV['JARS_SKIP'] = 'true' if local?
    
          it 'returns true if the pipeline is a system pipeline' do
        expect(subject.system?).to be_truthy
      end
    end