
        
          describe 'with -n and a Fixnum range' do
    before :each do
      @script = '-W0 -ne 'print if %s' #{fixture(__FILE__, 'conditional_range.txt')}'
    end
    
    load_extension('typed_data')
    
          Process.wait(0).should == pid2
      Process.wait.should == pid1
    end
    
      def test_system_wordsplit
    with_tmpchdir {|d|
      write_file('script', <<-'End')
        File.open('result', 'w') {|t| t << 'haha pid=#{$$} ppid=#{Process.ppid}' }
        exit 5
      End
      str = '#{RUBY} script'
      ret = system(str)
      status = $?
      assert_equal(false, ret)
      assert_predicate(status, :exited?)
      assert_equal(5, status.exitstatus)
      assert_equal('haha pid=#{status.pid} ppid=#{$$}', File.read('result'))
    }
  end
    
          if name.bytesize > 100 or prefix.empty? then
        raise Gem::Package::TooLongFileName.new('File \'#{prefix}/#{name}\' has a too long name (should be 100 or less)')
      end
    
        @gem = util_spec 'some_gem' do |s|
      s.rubyforge_project = 'example'
    end
    
      def test_stat_inode
    assert_not_equal 0, File.stat(__FILE__).ino
  end
    
        assert_equal(hb, h2.update(h1))
    assert_equal(hb, h2)
  end
    
    describe :string_unpack_32bit_le_signed, shared: true do
  it 'decodes an int with most significant bit set as a negative number' do
    '\x00\xaa\x00\xff'.unpack(unpack_format()).should == [-16733696]
  end
end
    
      it 'implicitly has a count of one when no count modifier is passed' do
    '\xc2\x80\xc2\x81\xc2\x82\xc2\x83'.unpack('U1').should == [0x80]
  end