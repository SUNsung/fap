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
    
    load_extension('data')
    
        it 'always accepts flags=0' do
      pid = Process.spawn(ruby_cmd('exit'))
      Process.wait(-1, 0).should == pid
      lambda { Process.kill(0, pid) }.should raise_error(Errno::ESRCH)
    end
  end
end

    
      def test_download_unsupported
    inst = Gem::RemoteFetcher.fetcher
    
        assert_equal(3, ret.size)
    assert_instance_of(Hash, ret)
    ret.each_value { |value| assert_instance_of(Set, value) }
    assert_equal(Set[3,6,9], ret[0])
    assert_equal(Set[1,4,7,10], ret[1])
    assert_equal(Set[2,5,8], ret[2])
    
      it 'ignores spaces between directives' do
    '\x01\x02'.unpack('U U').should == [1, 2]
  end
end

    
      # These two settings work together to allow you to limit a spec run
  # to individual examples or groups you care about by tagging them with
  # `:focus` metadata. When nothing is tagged with `:focus`, all examples
  # get run.
  config.filter_run :focus
  config.run_all_when_everything_filtered = true
    
      it 'should not leak changes to env' do
    klass    = described_class
    detector = Struct.new(:app) do
      def call(env)
        was = env.dup
        res = app.call(env)
        was.each do |k,v|
          next if env[k] == v
          fail 'env[#{k.inspect}] changed from #{v.inspect} to #{env[k].inspect}'
        end
        res
      end
    end