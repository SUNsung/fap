
        
        # Mimic how Jekyll's LiquidRenderer would process a non-static file, with
# some dummy payload
def always_liquid(content)
  Liquid::Template.error_mode = :warn
  Liquid::Template.parse(content, :line_numbers => true).render(
    'author' => 'John Doe',
    'title'  => 'FooBar'
  )
end
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
          #
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
            # attributes - A hash containing the raw issue details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            # Builds a new lfs_object using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          new(Representation.symbolize_hash(raw_hash))
        end
    
    ENV['RAILS_ENV'] = 'test'
    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
        def raise_because_imagemagick_missing
      raise Errors::CommandNotFoundError.new('Could not run the `identify` command. Please install ImageMagick.')
    end
  end
end
