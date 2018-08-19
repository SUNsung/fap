
        
        # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
            # Private: Watch for file changes and rebuild the site.
        #
        # site - A Jekyll::Site instance
        # options - A Hash of options passed to the command
        #
        # Returns nothing.
        def watch(site, options)
          # Warn Windows users that they might need to upgrade.
          if Utils::Platforms.bash_on_windows?
            Jekyll.logger.warn '',
                               'Auto-regeneration may not work on some Windows versions.'
            Jekyll.logger.warn '',
                               'Please see: https://github.com/Microsoft/BashOnWindows/issues/216'
            Jekyll.logger.warn '',
                               'If it does not work, please upgrade Bash on Windows or '\
                               'run Jekyll with --no-watch.'
          end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
            if exp.is_a?(Regexp)
          entry_path =~ exp
    
        # Returns a string literal with the given contents.
    #
    # @param string [String]
    # @return string [Sass::Script::Tree::Literal]
    def string_literal(string)
      Literal.new(Sass::Script::Value::String.new(string, :string))
    end
  end
end
