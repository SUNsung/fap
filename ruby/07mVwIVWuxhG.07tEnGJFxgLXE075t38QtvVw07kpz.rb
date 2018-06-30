
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    # You can also do other things. Examples:
# https://github.com/tmm1/stackprof/blob/master/bin/stackprof
report = StackProf::Report.new(Marshal.load(IO.binread(PROF_OUTPUT_FILE)))
report.print_text(
  options[:sort],
  options[:limit],
  options[:select_files],
  options[:reject_files],
  options[:select_names],
  options[:reject_names]
)
    
    class EmbeddedPatch
  attr_writer :owner
  attr_reader :strip
    
        def default_formula(_val = nil)
      odisabled 'Requirement.default_formula'
    end
    
        # Returns the CSS for the media query.
    #
    # @return [String]
    def to_css
      css = ''
      css << resolved_modifier
      css << ' ' unless resolved_modifier.empty?
      css << resolved_type
      css << ' and ' unless resolved_type.empty? || expressions.empty?
      css << expressions.map do |e|
        # It's possible for there to be script nodes in Expressions even when
        # we're converting to CSS in the case where we parsed the document as
        # CSS originally (as in css_test.rb).
        e.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.to_sass : c.to_s}.join
      end.join(' and ')
      css
    end
    
        # Returns a string literal with the given contents.
    #
    # @param string [String]
    # @return string [Sass::Script::Tree::Literal]
    def string_literal(string)
      Literal.new(Sass::Script::Value::String.new(string, :string))
    end
  end
end

    
        i0, s0 = index, []
    if has_terminal?('if', false, index)
      r1 = instantiate_node(SyntaxNode,input, index...(index + 2))
      @index += 2
    else
      terminal_parse_failure('if')
      r1 = nil
    end
    s0 << r1
    if r1
      r2 = _nt__
      s0 << r2
      if r2
        r3 = _nt_condition
        s0 << r3
        if r3
          r4 = _nt__
          s0 << r4
          if r4
            if has_terminal?('{', false, index)
              r5 = instantiate_node(SyntaxNode,input, index...(index + 1))
              @index += 1
            else
              terminal_parse_failure('{')
              r5 = nil
            end
            s0 << r5
            if r5
              r6 = _nt__
              s0 << r6
              if r6
                s7, i7 = [], index
                loop do
                  i8, s8 = index, []
                  r9 = _nt_branch_or_plugin
                  s8 << r9
                  if r9
                    r10 = _nt__
                    s8 << r10
                  end
                  if s8.last
                    r8 = instantiate_node(SyntaxNode,input, i8...index, s8)
                    r8.extend(If0)
                  else
                    @index = i8
                    r8 = nil
                  end
                  if r8
                    s7 << r8
                  else
                    break
                  end
                end
                r7 = instantiate_node(SyntaxNode,input, i7...index, s7)
                s0 << r7
                if r7
                  if has_terminal?('}', false, index)
                    r11 = instantiate_node(SyntaxNode,input, index...(index + 1))
                    @index += 1
                  else
                    terminal_parse_failure('}')
                    r11 = nil
                  end
                  s0 << r11
                end
              end
            end
          end
        end
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::If,input, i0...index, s0)
      r0.extend(If1)
    else
      @index = i0
      r0 = nil
    end
    
        files.each do |file|
      download = file_fetch(file['url'], file['sha1'],target)