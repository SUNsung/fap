
        
            private
    
        def shared_mixins
      @shared_mixins ||= begin
        log_status '  Reading shared mixins from mixins.less'
        CLASSES_TO_MIXINS + read_mixins(read_files('less', bootstrap_less_files.grep(/mixins\//)).values.join('\n'),
                                        nested: NESTED_MIXINS)
      end
    end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
          # Checks whether the `if` node has at least one `elsif` branch. Returns
      # true if this `if` node itself is an `elsif`.
      #
      # @return [Boolean] whether the `if` node has at least one `elsif` branch
      def elsif_conditional?
        else_branch && else_branch.if_type? && else_branch.elsif?
      end
    
            def valid_argument_types?
          [first, second].all? do |argument|
            argument.pair_type? || argument.kwsplat_type?
          end
        end