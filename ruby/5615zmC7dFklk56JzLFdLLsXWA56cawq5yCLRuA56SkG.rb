
        
        def main
  output = nil
  parser = OptionParser.new
  parser.banner = 'Usage: #{File.basename($0)} [--output=PATH] <parse.y>'
  parser.on('--output=PATH', 'An output file.') {|path|
    output = path
  }
  parser.on('--help', 'Prints this message and quit.') {
    puts parser.help
    exit true
  }
  begin
    parser.parse!
  rescue OptionParser::ParseError => err
    $stderr.puts err.message
    $stderr.puts parser.help
    exit false
  end
  unless ARGV.size == 1
    abort 'wrong number of arguments (#{ARGV.size} for 1)'
  end
  out = ''.dup
  File.open(ARGV[0]) {|f|
    prelude f, out
    grammar f, out
    usercode f, out
  }
  if output
    File.open(output, 'w') {|f|
      f.write out
    }
  else
    print out
  end
end
    
        it 'mimics a sed conditional with a zero-element exclusive-end range' do
      eval '10.times { |i| ScratchPad << i if (i == 4)...(i == 4) }'
      ScratchPad.recorded.should == [4, 5, 6, 7, 8, 9]
    end
    
      describe 'RDATA()' do
    it 'returns the struct data' do
      a = @s.wrap_struct(1024)
      @s.get_struct_rdata(a).should == 1024
    end
    
    load_extension('typed_data')
    
      def test_execopts_popen
    with_tmpchdir {|d|
      IO.popen('#{RUBY} -e 'puts :foo'') {|io| assert_equal('foo\n', io.read) }
      assert_raise(Errno::ENOENT) { IO.popen(['echo bar']) {} } # assuming 'echo bar' command not exist.
      IO.popen(ECHO['baz']) {|io| assert_equal('baz\n', io.read) }
    }
  end
    
        @gem.send :remove_instance_variable, :@rubygems_version
    
        @installer = Gem::Installer.at @gem, @cmd.options
    @installer.install
    assert_path_exists File.join(Gem.user_dir, 'gems')
    assert_path_exists File.join(Gem.user_dir, 'gems', @spec.full_name)
  end
    
    
    {      delta = 1
      stat = File.stat(path)
      assert_in_delta tb,   stat.birthtime.to_f, delta
      assert_in_delta t0+2, stat.mtime.to_f, delta
      if stat.birthtime != stat.ctime
        assert_in_delta t0+4, stat.ctime.to_f, delta
      end
      if /mswin|mingw/ !~ RUBY_PLATFORM && !Bug::File::Fs.noatime?(path)
        # Windows delays updating atime
        assert_in_delta t0+6, stat.atime.to_f, delta
      end
    }
  rescue NotImplementedError
  end
    
      # Returns true if the set is a superset of the given set.
  def superset?(set)
    case
    when set.instance_of?(self.class) && @hash.respond_to?(:>=)
      @hash >= set.instance_variable_get(:@hash)
    when set.is_a?(Set)
      size >= set.size && set.all? { |o| include?(o) }
    else
      raise ArgumentError, 'value must be a set'
    end
  end
  alias >= superset?
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['abc',                  [nil, nil, nil]],
      ['\x8f\xc2\xb5?abc',     [1.4199999570846558, nil, nil]],
      ['\x9a\x999@33\xb3?abc', [2.9000000953674316, 1.399999976158142, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      it 'decodes the remaining shorts when passed the '*' modifier' do
    'badc'.unpack(unpack_format('*')).should == [25185, 25699]
  end