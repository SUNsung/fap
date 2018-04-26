
        
            def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
        def initialize
      @pages = {}
    end
    
      def apply
    super
  ensure
    clear_cache
  end
end

    
            <<~EOS
          Anaconda is known to frequently break Homebrew builds, including Vim and
          MacVim, due to bundling many duplicates of system and Homebrew-available
          tools.
    
        if ObserverPathnameExtension.total.zero?
      puts 'Nothing pruned' if ARGV.verbose?
    else
      n, d = ObserverPathnameExtension.counts
      print 'Pruned #{n} symbolic links '
      print 'and #{d} directories ' if d.positive?
      puts 'from #{HOMEBREW_PREFIX}'
    end
  end
end

    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
          res << val.to_s(:quote => :none)
      res << ' ' if @after && @whitespace_after
      res << @after.perform(environment).to_s if @after
      str = Sass::Script::Value::String.new(
        res, :identifier,
        (to_quoted_equivalent.to_sass if deprecation == :potential))
      str.source_range = source_range
      opts(str)
    end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            attr_reader :node, :variable, :referenced, :references
        alias referenced? referenced
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
        expect(corrected).to eq(''something'.to_sym')
  end
end
