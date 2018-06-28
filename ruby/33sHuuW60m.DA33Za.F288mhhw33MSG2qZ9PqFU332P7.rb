
        
        def bottle_receipt_path(bottle_file)
  Utils.popen_read('/usr/bin/tar', '-tzf', bottle_file, '*/*/INSTALL_RECEIPT.json').chomp
end
    
      def describe_python
    python = which 'python'
    return 'N/A' if python.nil?
    python_binary = Utils.popen_read python, '-c', 'import sys; sys.stdout.write(sys.executable)'
    python_binary = Pathname.new(python_binary).realpath
    if python == python_binary
      python
    else
      '#{python} => #{python_binary}'
    end
  end
    
      def test_invalid_attr
    %W[
      foo?
      @foo
      @@foo
      $foo
      \u3042$
    ].each do |name|
      assert_raise_with_message(NameError, /#{Regexp.quote(quote(name))}/) do
        Module.new { attr_accessor name.to_sym }
      end
    end
  end
    
      def test_flip_flop
    eval <<-END
    assert_equal [4,5], (1..9).select {|n| true if (n==4)..(n==5)}
    assert_equal [4,5], (1..9).select {|n| true if (n==4)...(n==5)}
    assert_equal [2], (1..9).select {|n| true if (n==2)..(n%2).zero?}
    assert_equal [2,3,4], (1..9).select {|n| true if (n==2)...(n%2).zero?}
    assert_equal [4,5,7,8], (1..9).select {|n| true if (n==4)...(n==5) or (n==7)...(n==8)}
    assert_equal [nil, 2, 3, 4, nil], (1..5).map {|x| x if (x==2..x==4)}
    assert_equal [1, nil, nil, nil, 5], (1..5).map {|x| x if !(x==2..x==4)}
    END
  end
    
    load_extension('data')
    
        assert_equal(0, h.length)
  end
    
      it 'decodes the remaining doubles when passed the '*' modifier after another directive' do
    array = '@\x15333333@\x22ffffff'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end
    
    describe :string_unpack_64bit_le_extra, shared: true do
  it 'adds nil for each element requested beyond the end of the String' do
    [ ['',                  [nil, nil, nil]],
      ['abcdefgh',          [7523094288207667809, nil, nil]],
      ['abcdefghcdefab',    [7523094288207667809, nil, nil]],
      ['abcdefghcdefabde',  [7523094288207667809, 7306072665971057763, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
          def initialize(pairs = {})
        @pairs = pairs
        pairs.each do |key, value|
          raise 'invalid container key: '#{key.inspect}'' unless VALID_KEYS.include?(key)
          send(:'#{key}=', value)
        end
    
    # `brew uses foo bar` returns formulae that use both foo and bar
# If you want the union, run the command twice and concatenate the results.
# The intersection is harder to achieve with shell tools.
    
      def requirements
    dependency_collector.requirements
  end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @wipe_all = argv.flag?('all')
          super
        end
    
            # Runs the template configuration utilities.
        #
        # @return [void]
        #
        def print_info
          UI.puts '\nTo learn more about the template see `#{template_repo_url}`.'
          UI.puts 'To learn more about creating a new pod, see `#{CREATE_NEW_POD_INFO_URL}`.'
        end