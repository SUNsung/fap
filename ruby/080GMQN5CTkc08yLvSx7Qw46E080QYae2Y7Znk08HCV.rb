
        
                # config[kramdown][syntax_higlighter] >
        #   config[kramdown][enable_coderay] >
        #   config[highlighter]
        # Where `enable_coderay` is now deprecated because Kramdown
        # supports Rouge now too.
        def highlighter
          return @highlighter if @highlighter
    
    require 'sass/engine'
require 'sass/plugin' if defined?(Merb::Plugins)
require 'sass/railtie'
require 'sass/features'

    
        # Transform
    #
    #     foo
    #       bar
    #         color: blue
    #       baz
    #         color: blue
    #
    # into
    #
    #     foo
    #       bar, baz
    #         color: blue
    #
    # @param root [Tree::Node] The parent node
    def fold_commas(root)
      prev_rule = nil
      root.children.map! do |child|
        unless child.is_a?(Tree::RuleNode)
          fold_commas(child) if child.is_a?(Tree::DirectiveNode)
          next child
        end
    
        attr_writer :caller
    attr_writer :content
    attr_writer :selector
    
        # @return [String] The error message
    def to_s
      @message
    end
    
        def open_file(filename, flag = 'r')
      return if filename.nil?
      flag = 'wb' if @options[:unix_newlines] && flag == 'w'
      file = File.open(filename, flag)
      return file unless block_given?
      yield file
      file.close
    end
    
        def process_file(input, output)
      input_path, output_path = path_for(input), path_for(output)
      if input_path
        @options[:from] ||=
          case input_path
          when /\.scss$/; :scss
          when /\.sass$/; :sass
          when /\.less$/; raise 'sass-convert no longer supports LessCSS.'
          when /\.css$/; :css
          end
      elsif @options[:in_place]
        raise 'Error: the --in-place option requires a filename.'
      end
    
          if @options[:update]
        Sass::Plugin.update_stylesheets(files)
        exit 1 if had_error
        return
      end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
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
    
          super
    end
    
    module Jekyll