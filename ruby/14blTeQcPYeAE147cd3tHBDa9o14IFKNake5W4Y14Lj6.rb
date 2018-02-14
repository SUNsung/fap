
        
          def find_internal_commands(directory)
    directory.children.reduce([]) do |cmds, f|
      cmds << f.basename.to_s.sub(/\.(?:rb|sh)$/, '') if f.file?
      cmds
    end
  end
end

    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
            # This should return the state of the machine within this provider.
        # The state must be an instance of {MachineState}. Please read the
        # documentation of that class for more information.
        #
        # @return [MachineState]
        def state
          nil
        end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
            # Render a given string and return the result. This method optionally
        # takes a block which will be passed the renderer prior to rendering, which
        # allows the caller to set any view variables within the renderer itself.
        #
        # @param [String] template The template data string.
        # @return [String] Rendered template
        def render_string(*args)
          render_with(:render_string, *args)
        end
    
    def excluded_bundle_id(bundle_id)
  %r{^com\.apple\.}.match(bundle_id)
end