
        
            def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
          def site
        @site_drop ||= SiteDrop.new(@obj)
      end
    
          #
      # Require a gem or file if it's present, otherwise silently fail.
      #
      # names - a string gem name or array of gem names
      #
      def require_if_present(names)
        Array(names).each do |name|
          begin
            require name
          rescue LoadError
            Jekyll.logger.debug 'Couldn't load #{name}. Skipping.'
            yield(name, version_constraint(name)) if block_given?
            false
          end
        end
      end
    
          options[:only_patterns] = [/\Ad3[\-\w]+\z/, /\Ad3\/blob\/master\/changes\.md\z/i]
      options[:skip_patterns] = [/3\.x-api-reference/]
    
        options[:attribution] = <<-HTML
      &copy; 1997&ndash;2018 The PHP Documentation Group<br>
      Licensed under the Creative Commons Attribution License v3.0 or later.
    HTML
  end
end

    
        private
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end