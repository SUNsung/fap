
        
          included do
    validate :validate_type
  end
    
      def dry_run?
    !!@dry_run
  end
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
      def toggle_availability
    @service = current_user.services.find(params[:id])
    @service.toggle_availability!
    
      def import
    if params[:file]
      file = params[:file]
      content = JSON.parse(file.read)
      new_credentials = content.map do |hash|
        current_user.user_credentials.build(hash.slice('credential_name', 'credential_value', 'mode'))
      end
    
          html_filters.push 'bootstrap/entries_v4', 'bootstrap/clean_html_v4'
    
        # Downloaded from php.net/download-docs.php
    self.dir = '/Users/Thibaut/DevDocs/Docs/PHP'
    
        REDIRECT_RGX = /http-equiv='refresh'/i
    NOT_FOUND_RGX = /<title>Not Found<\/title>/
    
            css('.toplang', '#quickview', '.top').remove
    
    load './tasks/bower.rake'
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
      # Creates a delayed logger wrapping `inner`.
  #
  # @param inner [Sass::Logger::Base] The wrapped logger.
  def initialize(inner)
    self.log_level = inner.log_level
    @inner = inner
    @messages = []
  end
    
            p environment.var(name)
      else
        p Script::Parser.parse(text, @line, 0).perform(environment)
      end
    rescue Sass::SyntaxError => e
      puts 'SyntaxError: #{e.message}'
      if @options[:trace]
        e.backtrace.each do |line|
          puts '\tfrom #{line}'
        end
      end
    end
  end
end

    
        # The type of interpolation deprecation for this node.
    #
    # This can be `:none`, indicating that the node doesn't use deprecated
    # interpolation; `:immediate`, indicating that a deprecation warning should
    # be emitted as soon as possible; or `:potential`, indicating that a
    # deprecation warning should be emitted if the resulting string is used in a
    # way that would distinguish it from a list.
    #
    # @return [Symbol]
    attr_reader :deprecation
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        def processor(name) #:nodoc:
      @known_processors ||= {}
      if @known_processors[name.to_s]
        @known_processors[name.to_s]
      else
        name = name.to_s.camelize
        load_processor(name) unless Paperclip.const_defined?(name)
        processor = Paperclip.const_get(name)
        @known_processors[name.to_s] = processor
      end
    end