
        
                  def field_type
            self.class.field_type
          end
      end
    end
  end
end

    
        def find(*args)
      find_all(*args).first || raise(MissingTemplate.new(self, *args))
    end
    
        initializer 'action_view.finalize_compiled_template_methods' do |app|
      ActiveSupport.on_load(:action_view) do
        ActionView::Template.finalize_compiled_template_methods =
          app.config.action_view.delete(:finalize_compiled_template_methods)
      end
    end
    
        cmd = HOMEBREW_INTERNAL_COMMAND_ALIASES.fetch(ARGV.first, ARGV.first)
    
        RubyProf.const_get('#{(ENV['OUTPUT'] || 'Flat').capitalize}Printer').new(result).print
  end
rescue LoadError; end

    
        # @param msg [String] The error message
    # @param attrs [{Symbol => Object}] The information in the backtrace entry.
    #   See \{#sass\_backtrace}
    def initialize(msg, attrs = {})
      @message = msg
      @sass_backtrace = []
      add_backtrace(attrs)
    end
    
        def read(file)
      if file.respond_to?(:read)
        file.read
      else
        open(file, 'rb') {|f| f.read}
      end
    end
  end
end

    
            if found.size > 1 && !@same_name_warnings.include?(found.first.first)
          found.each {|(f, _)| @same_name_warnings << f}
          relative_to = Sass::Util.pathname(dir)
          if options[:_from_import_node]
            # If _line exists, we're here due to an actual import in an
            # import_node and we want to print a warning for a user writing an
            # ambiguous import.
            candidates = found.map do |(f, _)|
              '  ' + Sass::Util.pathname(f).relative_path_from(relative_to).to_s
            end.join('\n')
            raise Sass::SyntaxError.new(<<MESSAGE)
It's not clear which file to import for '@import '#{name}''.
Candidates:
#{candidates}
Please delete or rename all but one of these files.
MESSAGE
          else
            # Otherwise, we're here via StalenessChecker, and we want to print a
            # warning for a user running `sass --watch` with two ambiguous files.
            candidates = found.map {|(f, _)| '    ' + File.basename(f)}.join('\n')
            Sass::Util.sass_warn <<WARNING
WARNING: In #{File.dirname(name)}:
  There are multiple files that match the name '#{File.basename(name)}':
#{candidates}
WARNING
          end
        end
        found.first
      end
    
      context 'heredoc' do
    let(:cop_config) { { 'EnforcedStyle' => 'same_line' } }
    
      context 'when arguments to a method' do
    let(:prefix) { 'bar(' }
    let(:suffix) { ')' }
    let(:source) { construct(false, true) }
    
            pairs.map(&:key).each do |key|
          yield key
        end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end