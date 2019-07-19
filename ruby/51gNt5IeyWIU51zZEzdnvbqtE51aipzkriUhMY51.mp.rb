
        
            should 'not filter symlink entries when safe mode disabled' do
      allow(File).to receive(:symlink?).with('symlink.js').and_return(true)
      files = %w(symlink.js)
      assert_equal files, @site.reader.filter_entries(files)
    end
    
          # `{{ site.related_posts }}` is how posts can get posts related to
      # them, either through LSI if it's enabled, or through the most
      # recent posts.
      # We should remove this in 4.0 and switch to `{{ post.related_posts }}`.
      def related_posts
        return nil unless @current_document.is_a?(Jekyll::Document)
    
        # Read Site data from disk and load it into internal data structures.
    #
    # Returns nothing.
    def read
      @site.layouts = LayoutReader.new(site).read
      read_directories
      read_included_excludes
      sort_files!
      @site.data = DataReader.new(site).read(site.config['data_dir'])
      CollectionReader.new(site).read
      ThemeAssetsReader.new(site).read
    end
    
    SUITE.each do |key, text|
  Benchmark.ips do |x|
    x.report('regex-check   - #{key}') { check_with_regex(text) }
    x.report('builtin-check - #{key}') { check_with_builtin(text) }
    x.compare!
  end
end
# ------------------------------------------------------------------------
    
    def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
          def escaped_name
        CGI.escape(@name)
      end
    
          def mathjax
        @mathjax
      end
    
      test 'guards against creation of existing page' do
    name = 'A'
    post '/create', :content => 'abc', :page => name,
         :format             => 'markdown', :message => 'def'
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end