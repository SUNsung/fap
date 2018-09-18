
        
            def initialize_copy(other)
      @paths = other.paths.dup
      self
    end
    
            stdlibs = detect_stdlibs(ENV.compiler)
        Tab.create(formula, ENV.compiler, stdlibs.first, formula.build, formula.source_modified_time).write
    
      # True if a {Formula} is being built as a bottle (i.e. binary package).
  def bottle?
    include? 'build-bottle'
  end
    
            if Pathname::BOTTLE_EXTNAME_RX === file.to_s
          version = bottle_resolve_version(file) rescue file.version
        else
          version = file.version
        end
        next unless version
        next unless (name = file.basename.to_s[/(.*)-(?:#{Regexp.escape(version)})/, 1])
    
      private
    
      def gcc_40
    @gcc_40 ||= MacOS.gcc_40_build_version if MacOS.has_apple_developer_tools?
  end
    
    # See browser for an example
class GithubGistFormula < ScriptFileFormula
  def self.url(val)
    super
    version File.basename(File.dirname(val))[0, 6]
  end
end
    
    source 'https://rubygems.org'