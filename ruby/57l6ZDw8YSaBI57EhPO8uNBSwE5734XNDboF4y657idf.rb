
        
            # Who has a single core cpu these days anyways?
    cpu_count = 2
    
      # Asynchronously send an email
  class TestEmail < Jobs::Base
    
    end

    
      def enabled_setting
    object.enabled_site_setting
  end
    
      def test_realpath_encoding
    fsenc = Encoding.find('filesystem')
    nonascii = '\u{0391 0410 0531 10A0 05d0 2C00 3042}'
    tst = 'A'
    nonascii.each_char {|c| tst << c.encode(fsenc) rescue nil}
    Dir.mktmpdir('rubytest-realpath') {|tmpdir|
      realdir = File.realpath(tmpdir)
      open(File.join(tmpdir, tst), 'w') {}
      a = File.join(tmpdir, 'x')
      begin
        File.symlink(tst, a)
      rescue Errno::EACCES, Errno::EPERM
        skip 'need privilege'
      end
      assert_equal(File.join(realdir, tst), File.realpath(a))
      File.unlink(a)
    }
    
      def test_at
    assert_equal(100000, Time.at('0.1'.to_r).usec)
    assert_equal(10000, Time.at('0.01'.to_r).usec)
    assert_equal(1000, Time.at('0.001'.to_r).usec)
    assert_equal(100, Time.at('0.0001'.to_r).usec)
    assert_equal(10, Time.at('0.00001'.to_r).usec)
    assert_equal(1, Time.at('0.000001'.to_r).usec)
    assert_equal(100000000, Time.at('0.1'.to_r).nsec)
    assert_equal(10000000, Time.at('0.01'.to_r).nsec)
    assert_equal(1000000, Time.at('0.001'.to_r).nsec)
    assert_equal(100000, Time.at('0.0001'.to_r).nsec)
    assert_equal(10000, Time.at('0.00001'.to_r).nsec)
    assert_equal(1000, Time.at('0.000001'.to_r).nsec)
    assert_equal(100, Time.at('0.0000001'.to_r).nsec)
    assert_equal(10, Time.at('0.00000001'.to_r).nsec)
    assert_equal(1, Time.at('0.000000001'.to_r).nsec)
    assert_equal(100000, Time.at(0.1).usec)
    assert_equal(10000, Time.at(0.01).usec)
    assert_equal(1000, Time.at(0.001).usec)
    assert_equal(100, Time.at(0.0001).usec)
    assert_equal(10, Time.at(0.00001).usec)
    assert_equal(3, Time.at(0.000003).usec)
    assert_equal(100000000, Time.at(0.1).nsec)
    assert_equal(10000000, Time.at(0.01).nsec)
    assert_equal(1000000, Time.at(0.001).nsec)
    assert_equal(100000, Time.at(0.0001).nsec)
    assert_equal(10000, Time.at(0.00001).nsec)
    assert_equal(3000, Time.at(0.000003).nsec)
    assert_equal(200, Time.at(0.0000002r).nsec)
    assert_equal(199, Time.at(0.0000002).nsec)
    assert_equal(10, Time.at(0.00000001).nsec)
    assert_equal(1, Time.at(0.000000001).nsec)
    
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
    
      def self.status_of_dying_running_thread
    status = nil
    t = dying_thread_ensures { status = Status.new Thread.current }
    t.join
    status
  end