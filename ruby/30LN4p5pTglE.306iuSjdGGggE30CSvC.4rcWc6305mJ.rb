
        
            brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
      def fetch_checksum_for(tag)
    tag = find_matching_tag(tag)
    return self[tag], tag if tag
  end
    
      def merge(*args)
    @settings.merge(*args)
    self
  end
    
      # @private
  def used_options
    @options & @args
  end
    
        def self.cleanup_cache
      return unless HOMEBREW_CACHE.directory?
      HOMEBREW_CACHE.children.each do |path|
        if path.to_s.end_with? '.incomplete'
          cleanup_path(path) { path.unlink }
          next
        end
        if path.basename.to_s == 'java_cache' && path.directory?
          cleanup_path(path) { FileUtils.rm_rf path }
          next
        end
        if prune?(path)
          if path.file?
            cleanup_path(path) { path.unlink }
          elsif path.directory? && path.to_s.include?('--')
            cleanup_path(path) { FileUtils.rm_rf path }
          end
          next
        end
    
    module Homebrew
  def doctor
    checks = Diagnostic::Checks.new
    
            def run
          print_version
          signal_end_of_output
          listen
        end
    
          expect('.border-width-all').to have_rule(rule)
    end
  end