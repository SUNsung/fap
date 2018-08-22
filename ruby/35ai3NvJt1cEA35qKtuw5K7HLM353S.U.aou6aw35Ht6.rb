
        
          # If a given extension is listed multiple times, prefer the first one listed
  extensions.reject! { |extension| mimes.values.flatten.include?(extension) }
    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
      [before || '.',
    after || '.',]
end
    
          private
    
        # Check whether a gem plugin is allowed to be used during this build.
    #
    # plugin_name - the name of the plugin
    #
    # Returns true if the plugin name is in the whitelist or if the site is not
    #   in safe mode.
    def plugin_allowed?(plugin_name)
      !site.safe || whitelist.include?(plugin_name)
    end
    
    end

    
      protected
    
      def name
    ':#{object.shortcode}:'
  end
end

    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
    module Homebrew
  module_function
    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end