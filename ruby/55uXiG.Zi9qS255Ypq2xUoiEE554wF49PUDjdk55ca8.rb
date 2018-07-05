
        
            # The full path to the directory containing the collection, with
    #   optional subpaths.
    #
    # *files - (optional) any other path pieces relative to the
    #           directory to append to the path
    #
    # Returns a String containing th directory name where the collection
    #   is stored on the filesystem.
    def collection_dir(*files)
      return directory if files.empty?
      site.in_source_dir(container, relative_directory, *files)
    end
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
            def webrick_opts(opts)
          opts = {
            :JekyllOptions      => opts,
            :DoNotReverseLookup => true,
            :MimeTypes          => mime_types,
            :DocumentRoot       => opts['destination'],
            :StartCallback      => start_callback(opts['detach']),
            :StopCallback       => stop_callback(opts['detach']),
            :BindAddress        => opts['host'],
            :Port               => opts['port'],
            :DirectoryIndex     => DIRECTORY_INDEX,
          }
    
        def renamed_key(old, new, config, _ = nil)
      if config.key?(old)
        Jekyll::Deprecator.deprecation_message 'The '#{old}' configuration' \
          ' option has been renamed to '#{new}'. Please update your config' \
          ' file accordingly.'
        config[new] = config.delete(old)
      end
    end
    
          def setup
        return if @setup ||= false
        unless (@parser = get_processor)
          Jekyll.logger.error 'Invalid Markdown processor given:', @config['markdown']
          Jekyll.logger.info '', 'Custom processors are not loaded in safe mode' if @config['safe']
          Jekyll.logger.error(
            '',
            'Available processors are: #{valid_processors.join(', ')}'
          )
          raise Errors::FatalException, 'Bailing out; invalid Markdown processor.'
        end
    
          def parse_content
        add_text @src.scan(%r!\A.*\n!)
      end
      define_parser(:content, %r!\A!)
    end
  end
end
    
          def html_pages
        @site_html_pages ||= @obj.pages.select do |page|
          page.html? || page.url.end_with?('/')
        end
      end
    
          options[:only_patterns] = [/\Agetting-started\//, /\Alayout\//, /\Acontent\//, /\Acomponents\//, /\Autilities\//, /\Amigration\//]
    end
    
          html_filters.push 'coffeescript/entries', 'coffeescript/clean_html', 'title'
    end
    
        options[:title] = false
    options[:root_title] = 'PHP: Hypertext Preprocessor'
    options[:skip_links] = ->(filter) { !filter.initial_page? }
    
        def as_json
      { entries: entries_as_json, types: types_as_json }
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def relative_path_to(url)
      url = self.class.parse(url)
      return unless origin == url.origin
    
    all_environments = [
    :development,
    :production,
    :test
]
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(\*\s+OK[^\n\r]*)/i,
      :login		=> /^CAPABILITY\s+LOGIN\s+([^\s]+)\s+([^\n\r]+)/i,
      :login_pass => /^CAPABILITY\s+OK\s+(Login[^\n\r]*)/i,
      :login_bad	=> /^CAPABILITY\s+BAD\s+(Login[^\n\r]*)/i,
      :login_fail => /^CAPABILITY\s+NO\s+(Login[^\n\r]*)/i
    }
  end
    
    # Sniffer class for GET URL's
class SnifferURL < BaseProtocolParser
  def register_sigs
    self.sigs = {
      :get		=> /^GET\s+([^\n]+)\s+HTTP\/\d\.\d/i,
      :webhost	=> /^HOST\:\s+([^\n\r]+)/i,
    }
  end
    
    
# replace the stuff
replaces.uniq!
replaces.each { |arr|
	#puts '%32s: %s -> %s' % arr
	asm.gsub!(arr[1], arr[2])
}
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
          # Get the publicly-visible URL for an imported file. This URL is used by
      # source maps to link to the source stylesheet. This may return `nil` to
      # indicate that no public URL is available; however, this will cause
      # sourcemap generation to fail if any CSS is generated from files imported
      # from this importer.
      #
      # If an absolute 'file:' URI can be produced for an imported file, that
      # should be preferred to returning `nil`. However, a URL relative to
      # `sourcemap_directory` should be preferred over an absolute 'file:' URI.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param sourcemap_directory [String, NilClass] The absolute path to a
      #   directory on disk where the sourcemap will be saved. If uri refers to
      #   a file on disk that's accessible relative to sourcemap_directory, this
      #   may return a relative URL. This may be `nil` if the sourcemap's
      #   eventual location is unknown.
      # @return [String?] The publicly-visible URL for this file, or `nil`
      #   indicating that no publicly-visible URL exists. This should be
      #   appropriately URL-escaped.
      def public_url(uri, sourcemap_directory)
        return if @public_url_warning_issued
        @public_url_warning_issued = true
        Sass::Util.sass_warn <<WARNING
WARNING: #{self.class.name} should define the #public_url method.
WARNING
        nil
      end
    
        # Returns the Sass/SCSS code for the media query.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      src = ''
      src << Sass::Media._interp_to_src(modifier, options)
      src << ' ' unless modifier.empty?
      src << Sass::Media._interp_to_src(type, options)
      src << ' and ' unless type.empty? || expressions.empty?
      src << expressions.map do |e|
        Sass::Media._interp_to_src(e, options)
      end.join(' and ')
      src
    end
    
    
module OctopressLiquidFilters