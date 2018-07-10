
        
            # Checks whether the directory 'exists' for this collection.
    # The directory must exist on the filesystem and must not be a symlink
    #   if in safe mode.
    #
    # Returns false if the directory doesn't exist or if it's a symlink
    #   and we're in safe mode.
    def exists?
      File.directory?(directory) && !entry_filter.symlink?(directory)
    end
    
        # Private: Checks if a given config is a hash
    #
    # extracted_config - the value to check
    # file - the file from which the config was extracted
    #
    # Raises an ArgumentError if given config is not a hash
    def check_config_is_hash!(extracted_config, file)
      unless extracted_config.is_a?(Hash)
        raise ArgumentError, 'Configuration file: (INVALID) #{file}'.yellow
      end
    end
    
        def deprecation_message(message)
      Jekyll.logger.warn 'Deprecation:', message
    end
    
    describe 'The -e command line option' do
  it 'evaluates the given string' do
    ruby_exe('puts 'foo'').chomp.should == 'foo'
  end
    
      describe 'with a boolean range ('flip-flop' operator)' do
    before :each do
      ScratchPad.record []
      @verbose = $VERBOSE
      $VERBOSE = nil
    end
    
      def teardown
    $VERBOSE = @verbose_bak
  end
    
      def test_unmatching_glob
    bug3851 = '[ruby-core:32478]'
    a = 'a[foo'
    Dir.mktmpdir do |dir|
      open(File.join(dir, a), 'w') {|f| f.puts('p 42')}
      assert_in_out_err(['-C', dir, a], '', ['42'], [], bug3851)
      File.unlink(File.join(dir, a))
      assert_in_out_err(['-C', dir, a], '', [], /LoadError/, bug3851)
    end
  end
    
        assert_equal '', @ui.output
    assert_equal 'ERROR:  Error loading gemspec. Aborting.\n', @ui.error
  end
    
      it 'does not decode a double when fewer bytes than a double remain and the '*' modifier is passed' do
    [ ['\xff', []],
      ['\xff\x00', []],
      ['\xff\x00\xff', []],
      ['\xff\x00\xff\x00', []],
      ['\xff\x00\xff\x00\xff', []],
      ['\xff\x00\xff\x00\xff\x00', []],
      ['\xff\x00\xff\x00\xff\x00\xff', []]
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
      config.active_support.deprecation = :stderr
end

    
          spec['version'] = Bootstrap::VERSION