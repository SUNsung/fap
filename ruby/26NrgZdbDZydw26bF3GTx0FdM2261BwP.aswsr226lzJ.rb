
        
          def index
    set_table_sort sorts: %w[provider name global], default: { provider: :asc }
    
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
    
      def gistify_logs(f)
    files = load_logs(f.logs)
    build_time = f.logs.ctime
    timestamp = build_time.strftime('%Y-%m-%d_%H-%M-%S')
    
              # Check if a/an are used in a formula's desc
          if match = regex_match_group(desc, /^(an?)\s/i)
            problem 'Description shouldn't start with an indefinite article i.e. \'#{match.to_s.strip}\''
          end
    
        def each_definition
      @attachments.each do |klass, attachments|
        attachments.each do |name, options|
          yield klass, name, options
        end
      end
    end
    
        # Swaps the height and width if necessary
    def auto_orient
      if EXIF_ROTATED_ORIENTATION_VALUES.include?(@orientation)
        @height, @width = @width, @height
        @orientation -= 4
      end
    end
    
            def failure_message
          '#{expected_attachment}\n'.tap do |message|
            message << accepted_types_and_failures.to_s
            message << '\n\n' if @allowed_types.present? && @rejected_types.present?
            message << rejected_types_and_failures.to_s
          end
        end