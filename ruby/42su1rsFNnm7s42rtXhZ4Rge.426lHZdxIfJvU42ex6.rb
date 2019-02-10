
        
            # Prints a status message about performing the given action,
    # colored using the given color (via terminal escapes) if possible.
    #
    # @param name [#to_s] A short name for the action being performed.
    #   Shouldn't be longer than 11 characters.
    # @param color [Symbol] The name of the color to use for this action.
    #   Can be `:red`, `:green`, or `:yellow`.
    def puts_action(name, color, arg)
      return if @options[:for_engine][:quiet]
      printf color(color, '%11s %s\n'), name, arg
      STDOUT.flush
    end
    
        def process_directory
      @options[:input] = @args.shift
      unless @options[:input]
        raise 'Error: directory required when using --recursive.'
      end
    
          opts.on('--stop-on-error', 'If a file fails to compile, exit immediately.',
                                 'Only meaningful for --watch and --update.') do
        @options[:stop_on_error] = true
      end
    end
    
          def real_token(session)
        decode_token(session[:csrf])
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('block-all_mixed_content; connect-src 'self'; default-src none; disown-opener; img-src 'self'; script-src 'self'; style-src 'self'; upgrade-insecure_requests')
  end