
        
          it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
    describe 'Kernel#trace_var' do
  before :each do
    $Kernel_trace_var_global = nil
  end
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
        # Processes the options set by the command-line arguments. In particular,
    # sets `@options[:input]` and `@options[:output]` to appropriate IO streams.
    #
    # This is meant to be overridden by subclasses
    # so they can run their respective programs.
    def process_result
      input, output = @options[:input], @options[:output]
      args = @args.dup
      input ||=
        begin
          filename = args.shift
          @options[:filename] = filename
          open_file(filename) || $stdin
        end
      @options[:output_filename] = args.shift
      output ||= @options[:output_filename] || $stdout
      @options[:input], @options[:output] = input, output
    end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end
