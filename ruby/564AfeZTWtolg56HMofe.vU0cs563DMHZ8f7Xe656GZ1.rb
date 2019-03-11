
        
                  new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
          output = @options[:output] = @args.shift
      raise 'Error: --from required when using --recursive.' unless @options[:from]
      raise 'Error: --to required when using --recursive.' unless @options[:to]
      unless File.directory?(@options[:input])
        raise 'Error: '#{@options[:input]}' is not a directory'
      end
      if @options[:output] && File.exist?(@options[:output]) &&
        !File.directory?(@options[:output])
        raise 'Error: '#{@options[:output]}' is not a directory'
      end
      @options[:output] ||= @options[:input]