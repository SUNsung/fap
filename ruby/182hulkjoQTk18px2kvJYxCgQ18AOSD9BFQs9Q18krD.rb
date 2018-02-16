    def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        # --
    # NOTE: Pathutil#in_path? gets the realpath.
    # @param [<Anything>] entry the entry you want to validate.
    # Check if a path is outside of our given root.
    # --
    def symlink_outside_site_source?(entry)
      !Pathutil.new(entry).in_path?(
        site.in_source_dir
      )
    end
    
        # Initialize a new Layout.
    #
    # site - The Site.
    # base - The String path to the source.
    # name - The String filename of the post file.
    def initialize(site, base, name)
      @site = site
      @base = base
      @name = name
    
        We recommend using a MacTeX distribution: https://www.tug.org/mactex/
    
        # Many formulae include 'lib/charset.alias', but it is not strictly needed
    # and will conflict if more than one formula provides it
    observe_file_removal @f.lib/'charset.alias'
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
    ###
### main
###
    
        @posts_per_day = Post.where('created_at >= ?', Date.today - 21.days).group('DATE(created_at)').order('DATE(created_at) ASC').count
    @most_posts_within = @posts_per_day.values.max.to_f
    
    