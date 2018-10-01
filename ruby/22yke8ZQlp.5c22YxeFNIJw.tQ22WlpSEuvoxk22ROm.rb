
        
            # @param msg [String] The error message
    # @param attrs [{Symbol => Object}] The information in the backtrace entry.
    #   See \{#sass\_backtrace}
    def initialize(msg, attrs = {})
      @message = msg
      @sass_backtrace = []
      add_backtrace(attrs)
    end
    
            if e.is_a?(Sass::SyntaxError)
          $stderr.puts e.sass_backtrace_str('standard input')
        else
          $stderr.print '#{e.class}: ' unless e.class == RuntimeError
          $stderr.puts e.message.to_s
        end
        $stderr.puts '  Use --trace for backtrace.'
    
          # @see Base#find_relative
      def find_relative(name, base, options)
        _find(File.dirname(base), name, options)
      end