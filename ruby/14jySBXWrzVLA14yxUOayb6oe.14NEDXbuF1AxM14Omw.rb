
        
        require 'action_view/helpers/tags/placeholderable'
    
            @lookup_context.formats = formats | @lookup_context.formats
      end
  end
end

    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
        def register_compass_extension
      ::Compass::Frameworks.register(
          'bootstrap',
          :version               => Bootstrap::VERSION,
          :path                  => gem_path,
          :stylesheets_directory => stylesheets_path,
          :templates_directory   => File.join(gem_path, 'templates')
      )
    end
    
      def save_file(path, content, mode='w')
    dir = File.dirname(path)
    FileUtils.mkdir_p(dir) unless File.directory?(dir)
    File.open(path, mode) { |file| file.write(content) }
  end
    
    module Sass
  module CacheStores
    # A backend for the Sass cache using the filesystem.
    class Filesystem < Base
      # The directory where the cached files will be stored.
      #
      # @return [String]
      attr_accessor :cache_location
    
        # Create a {Sass::Selector::CommaSequence}.
    #
    # @param seqs [Array<Sass::Selector::Sequence>]
    # @return [Sass::Selector::CommaSequence]
    def make_cseq(*seqs)
      Sass::Selector::CommaSequence.new(seqs)
    end
    
          def is_edit_page
        true
      end
    
          def base_url
        @base_url
      end
    
        assert_no_match /New/, last_response.body, ''New' link not blocked in pages template'
    
    def name
  @name ||= Dir['*.gemspec'].first.split('.').first
end
    
        post '/compare/*' do
      @file     = encodeURIComponent(params[:splat].first)
      @versions = params[:versions] || []
      if @versions.size < 2
        redirect to('/history/#{@file}')
      else
        redirect to('/compare/%s/%s...%s' % [
            @file,
            @versions.last,
            @versions.first]
                 )
      end
    end