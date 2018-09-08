
        
        # ----- Default: Testing ------
    
          if value.start_with?('(')
        parser = Sass::SCSS::Parser.new(value,
          @options[:filename], @options[:importer],
          @line, to_parser_offset(@offset))
        offset = line.offset + line.text.index('at-root').to_i - 1
        return Tree::AtRootNode.new(parser.parse_at_root_query)
      end
    
        def open_file(filename, flag = 'r')
      return if filename.nil?
      flag = 'wb' if @options[:unix_newlines] && flag == 'w'
      file = File.open(filename, flag)
      return file unless block_given?
      yield file
      file.close
    end
    
          opts.on('-F', '--from FORMAT',
        'The format to convert from. Can be css, scss, sass.',
        'By default, this is inferred from the input filename.',
        'If there is none, defaults to css.') do |name|
        @options[:from] = name.downcase.to_sym
        raise 'sass-convert no longer supports LessCSS.' if @options[:from] == :less
        unless [:css, :scss, :sass].include?(@options[:from])
          raise 'Unknown format for sass-convert --from: #{name}'
        end
      end
    
          Sass::Plugin.on_template_modified do |template|
        puts '>>> Change detected to: #{template}'
        STDOUT.flush
      end
      Sass::Plugin.on_template_created do |template|
        puts '>>> New template detected: #{template}'
        STDOUT.flush
      end
      Sass::Plugin.on_template_deleted do |template|
        puts '>>> Deleted template detected: #{template}'
        STDOUT.flush
      end