
        
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

    
    module Jekyll
  module Cucumber
    class Formatter
      attr_accessor :indent, :runtime
      include ::Cucumber::Formatter::Console
      include ::Cucumber::Formatter::Io
      include FileUtils
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
          attr_accessor :page, :layout, :content, :paginator
      attr_accessor :highlighter_prefix, :highlighter_suffix
    
        def pause
      stop!
      @paused = true
    end
    
          expect(script_srcs).to include(*%w[symbol_underscore symbol_dash string_underscore symbol_underscore])
    end
    
        Discourse.plugins.each(&:notify_before_auth)
    
        def build_theme_extension(raw)
      {}.tap do |extension|
        raw.split('|').each do |entry|
          directive, source = entry.split(':', 2).map(&:strip)