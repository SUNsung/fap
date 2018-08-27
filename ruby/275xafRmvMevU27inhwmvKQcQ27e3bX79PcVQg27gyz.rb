
        
                def template
          @template ||= Coverage::Template.new(self)
        end
    
          def image_url
        raise NotImplementedError
      end
    
        def manifest_asset_urls
      @@manifest_asset_urls ||= [
        javascript_path('application', asset_host: false),
        stylesheet_path('application'),
        stylesheet_path('application-dark'),
        image_path('docs-1.png'),
        image_path('docs-1@2x.png'),
        image_path('docs-2.png'),
        image_path('docs-2@2x.png'),
        asset_path('docs.js')
      ]
    end
    
        def to_json
      JSON.generate(as_json)
    end
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
        def request_all(urls, &block)
      if options[:rate_limit]
        if @@rate_limiter
          @@rate_limiter.limit = options[:rate_limit]
        else
          @@rate_limiter = RateLimiter.new(options[:rate_limit])
          Typhoeus.before(&@@rate_limiter.to_proc)
        end
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