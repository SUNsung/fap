
        
          it 'calls #to_path on second argument when passed ?d and a directory' do
    p = mock('path')
    p.should_receive(:to_path).and_return @dir
    Kernel.test(?d, p)
  end
end
    
      it 'can throw an object' do
    lambda {
      obj = Object.new
      catch obj do
        throw obj
      end
    }.should_not raise_error(NameError)
  end
end
    
      after :each do
    Object.send :remove_method, :boom
  end
    
        def assets_path
      @assets_path ||= File.join gem_path, 'assets'
    end
    
    # This is the script used to automatically convert all of twbs/bootstrap LESS to Sass.
#
# Most differences are fixed by regexps and other forms of string substitution.
# There are Bootstrap-specific workarounds for the lack of parent selectors, recursion, mixin namespaces, extend within @media, etc in Sass 3.2.
class Converter
  module LessConversion
    # Some regexps for matching bits of SCSS:
    SELECTOR_CHAR               = '\[\]$\w\-{}#,.:&>@'
    # 1 selector (the part before the {)
    SELECTOR_RE                 = /[#{SELECTOR_CHAR}]+[#{SELECTOR_CHAR}\s]*/
    # 1 // comment
    COMMENT_RE                  = %r((?:^[ \t]*//[^\n]*\n))
    # 1 {, except when part of @{ and #{
    RULE_OPEN_BRACE_RE          = /(?<![@#\$])\{/
    # same as the one above, but in reverse (on a reversed string)
    RULE_OPEN_BRACE_RE_REVERSE  = /\{(?![@#\$])/
    # match closed brace, except when \w precedes }, or when }[.'']. a heurestic to exclude } that are not selector body close }
    RULE_CLOSE_BRACE_RE         = /(?<!\w)\}(?![.''])/
    RULE_CLOSE_BRACE_RE_REVERSE = /(?<![.''])\}(?!\w)/
    # match any brace that opens or closes a properties body
    BRACE_RE                    = /#{RULE_OPEN_BRACE_RE}|#{RULE_CLOSE_BRACE_RE}/m
    BRACE_RE_REVERSE            = /#{RULE_OPEN_BRACE_RE_REVERSE}|#{RULE_CLOSE_BRACE_RE_REVERSE}/m
    # valid characters in mixin definitions
    SCSS_MIXIN_DEF_ARGS_RE      = /[\w\-,\s$:#%()]*/
    LESS_MIXIN_DEF_ARGS_RE      = /[\w\-,;.\s@:#%()]*/
    
          @options = options.merge(:_convert => true)
      # Backwards compatibility
      @options[:old] = true if @options[:alternate] == false
      @template = template
      @checked_encoding = false
    end
    
          if !colon_path?(@args[0]) && probably_dest_dir?(@args[1])
        flag = @options[:update] ? '--update' : '--watch'
        err =
          if !File.exist?(@args[1])
            'doesn't exist'
          elsif @args[1] =~ /\.css$/
            'is a CSS file'
          end
        raise <<MSG if err
File #{@args[1]} #{err}.
    Did you mean: #{@default_syntax} #{flag} #{@args[0]}:#{@args[1]}
MSG
      end
    
          # @see Base#find_relative
      def find_relative(name, base, options)
        _find(File.dirname(base), name, options)
      end
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end
