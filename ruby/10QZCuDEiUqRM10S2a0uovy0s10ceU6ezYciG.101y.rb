
        
            def full_line_range(line)
      Sass::Source::Range.new(
        Sass::Source::Position.new(@line, to_parser_offset(line.offset)),
        Sass::Source::Position.new(@line, to_parser_offset(line.offset) + line.text.length),
        @options[:filename], @options[:importer])
    end