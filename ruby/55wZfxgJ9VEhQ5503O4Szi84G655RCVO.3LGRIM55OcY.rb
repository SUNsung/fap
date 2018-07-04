
        
            Or via the Cask:
      brew cask install ngrok
    EOS
  end
end

    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
        def test_jobs_status
      spawn_runner '--jobs-status'
      buf = Timeout.timeout(TIMEOUT) {@test_out.read}
      assert_match(/\d+=ptest_(first|second|third|forth) */,buf)
    end
    
          weird_path = [222, 173, 190, 175].pack('C*')
      File.expand_path(weird_path).encoding.should equal(Encoding::ASCII_8BIT)
    end
    
      def self.symlink
    touch(@file)
    File.symlink(@file, @link)
    yield @link
  ensure
    rm_r @file, @link
  end
    
      it 'can't read in a block when call open with File::EXCL mode' do
    lambda {
      File.open(@file, File::EXCL) do |f|
        f.puts('writing').should == nil
      end
    }.should raise_error(IOError)
  end
    
        File.pipe?(filename).should == false
    
        describe 'modifies self in place for full Unicode case mapping adapted for Lithuanian' do
      it 'currently works the same as full Unicode case mapping' do
        a = 'iß'
        a.capitalize!(:lithuanian)
        a.should == 'Iß'
      end
    
      class SubSub < Sub
    def call_super_method
      :subsubclass_method
    end
  end
    
        res = Net::HTTPClientError.new('1.0', '4xx', 'test response')
    ruby_version_is ''...'2.6' do
      lambda { res.error! }.should raise_error(Net::HTTPServerException)
    end
    ruby_version_is '2.6' do
      lambda { res.error! }.should raise_error(Net::HTTPClientException)
    end