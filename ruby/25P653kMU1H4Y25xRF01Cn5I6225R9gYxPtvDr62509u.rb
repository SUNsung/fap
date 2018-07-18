
        
          class CachedFragment
    def initialize(json)
      @json = json
    end
    def as_json(*_args)
      @json
    end
  end
    
        REDIRECT_RGX = /http-equiv='refresh'/i
    NOT_FOUND_RGX = /<title>Not Found<\/title>/
    
        version 'Guide' do
      self.base_url = 'https://www.tensorflow.org/'
      self.root_path = 'get_started/get_started'
      self.initial_paths = %w(
        programmers_guide/reading_data
        tutorials/mandelbrot
        performance/performance_guide
        deploy/hadoop
        extend/architecture)
    
            a_split <=> b_split
      else
        a.casecmp(b)
      end
    end
  end
end

    
        def to_a
      @filters.dup
    end
    
      it 'does not copy constants defined in the singleton class' do
    class << @obj
      CLONE = :clone
    end
    
        # Returns the Sass/SCSS code for the media query list.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      queries.map {|q| q.to_src(options)}.join(', ')
    end
    
    class SinatraStaticServer < Sinatra::Base
    
        def generate(site)
      site.write_category_indexes
    end
    
      # Improved version of Liquid's truncate:
  # - Doesn't cut in the middle of a word.
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncate(input, length)
    if input.length > length && input[0..(length-1)] =~ /(.+)\b.+$/im
      $1.strip + ' &hellip;'
    else
      input
    end
  end