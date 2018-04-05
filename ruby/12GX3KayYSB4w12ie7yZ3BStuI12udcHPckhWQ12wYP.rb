
        
        
    {    # @include transition(#{border-color ease-in-out .15s, box-shadow ease-in-out .15s})
    # to
    # @include transition(border-color ease-in-out .15s, box-shadow ease-in-out .15s)
    def deinterpolate_vararg_mixins(scss)
      scss = scss.dup
      VARARG_MIXINS.each do |mixin|
        if scss.gsub! /(@include\s*#{Regexp.quote(mixin)})\(\s*\#\{([^}]+)\}\s*\)/, '\1(\2)'
          log_transform mixin
        end
      end
      scss
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
        def path_for(file)
      return file.path if file.is_a?(File)
      return file if file.is_a?(String)
    end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        def post_render(page)
      OctopressFilters::post_filter(page)
    end
  end
    
    describe 'border-color' do
  before(:all) do
    ParserSupport.parse_file('library/border-color')
  end
    
      context 'called with four styles' do
    it 'applies different styles to all sides' do
      rule = 'border-style: dotted groove ridge none'