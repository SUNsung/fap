
        
                if scanner.eos?
          end_pos = str.source_range.end_pos
          node = Tree::CssImportNode.new(str)
        else
          supports_parser = Sass::SCSS::Parser.new(scanner,
            @options[:filename], @options[:importer],
            @line, str.source_range.end_pos.offset)
          supports_condition = supports_parser.parse_supports_clause
    
        # The content passed to this environment. This is naturally only set
    # for mixin body environments with content passed in.
    #
    # @return {[Array<Sass::Tree::Node>, Environment]?} The content nodes and
    #   the lexical environment of the content block.
    def content
      @content || (@parent && @parent.content)
    end
    
          super
      input = @options[:input]
      if File.directory?(input)
        raise 'Error: '#{input.path}' is a directory (did you mean to use --recursive?)'
      end
      output = @options[:output]
      output = input if @options[:in_place]
      process_file(input, output)
    end
    
    get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
          def referrer(env)
        ref = env['HTTP_REFERER'].to_s
        return if !options[:allow_empty_referrer] and ref.empty?
        URI.parse(ref).host || Request.new(env).host
      rescue URI::InvalidURIError
      end
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          def page_dir
        @page_dir
      end
    
        def self.xtest(*args)
    end
    
        get '/pages'
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
        # Ensure path begins with a single leading slash
    def clean_path(path)
      if path
        (path[0] != '/' ? path.insert(0, '/') : path).gsub(/\/{2,}/, '/')
      end
    end
    
    run SinatraStaticServer

    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
        alias :empty? :empty_file?
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
        def make
      geometry = GeometryParser.new(geometry_string.strip).make
      geometry || raise(Errors::NotIdentifiedByImageMagickError.new)
    end
    
        module ClassMethods
      def attachment_definitions
        Paperclip::AttachmentRegistry.definitions_for(self)
      end
    end
  end
end

    
        # Returns the style, or the default style if nil is supplied.
    def style attachment, style_name
      style_name || attachment.default_style
    end
  end
end
