
        
          describe '#resource' do
    it 'defines a resource' do
      subject.resource('foo') { url 'foo-1.0' }
      expect(subject).to have_defined_resource('foo')
    end
    
        def downloader
      @downloader ||= begin
        strategy = DownloadStrategyDetector.detect(cask.url.to_s, cask.url.using)
        strategy.new(cask.url.to_s, cask.token, cask.version, cache: Cache.path, **cask.url.specs)
      end
    end
    
        def run
      command_name, *args = detect_command_and_arguments(*@args)
      command = if help?
        args.unshift(command_name) unless command_name.nil?
        'help'
      else
        self.class.lookup_command(command_name)
      end
    
          def upload_dest
        @upload_dest
      end
    
          def use_identicon
        @wiki.user_icons == 'identicon'
      end
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
      test 'transliteration' do
    # we transliterate only when adapter is grit
    return if defined?(Gollum::GIT_ADAPTER) && Gollum::GIT_ADAPTER != 'grit'
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
      orig_stdout = $stdout
  orig_stderr = $stderr