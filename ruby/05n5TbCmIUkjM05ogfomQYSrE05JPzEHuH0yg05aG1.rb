
        
            def initialize(pattern)
      @source = pattern
      @re = compile(pattern)
    end
    
          when /^(?<num>-?(0[dbo])?[0-9_]+(\.[0-9_]+)?([eE][+-]?[0-9]+i?|r)?)(?<sep>\.|::)(?<mes>[^.]*)$/
        # Numeric
        receiver = $~[:num]
        sep = $~[:sep]
        message = Regexp.quote($~[:mes])
    
            pending 'relative paths with ./ have absolute __FILE__'
      end
    end
    
              actual = with_term { IRB::Color.colorize_code(code, complete: false) }
          assert_equal(result, actual, 'Case: colorize_code(#{code.dump}, complete: false)\nResult: #{humanized_literal(actual)}')
        else
          actual = with_term { IRB::Color.colorize_code(code) }
          assert_equal(code, actual)
        end
      end
    end
    
    # for each blog URL, check if rss URL exists
matches.each do |match|
  name = match[0]
  web_url = match[1]