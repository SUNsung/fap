
        
          p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
              # We split the arguments into two: One set containing any
          # flags before a word, and then the rest. The rest are what
          # get actually sent on to the subcommand.
          argv.each_index do |i|
            if !argv[i].start_with?('-')
              # We found the beginning of the sub command. Split the
              # args up.
              main_args   = argv[0, i]
              sub_command = argv[i]
              sub_args    = argv[i + 1, argv.length - i + 1]
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
              # Return the registry
          data[:guests]
        end
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
      # We manage the result cache ourselves and the default of 10 minutes can be
  # too low (particularly on Travis CI), causing results from some integration
  # tests to be dropped. This causes random fluctuations in test coverage.
  merge_timeout 86400
    
            def swap_range(corrector, range1, range2)
          src1 = range1.source
          src2 = range2.source
          corrector.replace(range1, src2)
          corrector.replace(range2, src1)
        end
      end
    end
  end
end
