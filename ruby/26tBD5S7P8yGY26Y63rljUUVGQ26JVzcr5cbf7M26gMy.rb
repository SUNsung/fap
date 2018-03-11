
        
            Jekyll::Commands::Build.process({'source' => 'docs'})
    
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

    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
        # Gets/Sets the content of this layout.
    attr_accessor :content
    
      def userpaths?
    @settings.include? :userpaths
  end
end
    
      def core_tap_head
    CoreTap.instance.git_head || '(none)'
  end
    
    module Homebrew
  def doctor
    checks = Diagnostic::Checks.new
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
        # @mixin transition($transition) {
    # to:
    # @mixin transition($transition...) {
    def varargify_mixin_definitions(scss, *mixins)
      scss = scss.dup
      replaced = []
      mixins.each do |mixin|
        if scss.gsub! /(@mixin\s*#{Regexp.quote(mixin)})\((#{SCSS_MIXIN_DEF_ARGS_RE})\)/, '\1(\2...)'
          replaced << mixin
        end
      end
      log_transform *replaced unless replaced.empty?
      scss
    end
    }
    }
    
      config.active_support.test_order = :random