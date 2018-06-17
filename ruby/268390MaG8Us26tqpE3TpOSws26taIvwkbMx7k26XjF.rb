
        
            sidekiq_options queue: 'critical'
    
      def cache_fragment(name)
    ApplicationSerializer.fragment_cache[name] ||= yield
  end
end

    
        options[:title] = 'CoffeeScript'
    options[:skip_links] = true
    
        def initialize
      @pages = {}
    end
    
            doc
      end
    end
  end
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
    
    class TC_Set < Test::Unit::TestCase
  class Set2 < Set
  end
    
      def test_new
    assert_equal(Time.utc(2000,2,10), Time.new(2000,2,10, 11,0,0, 3600*11))
    assert_equal(Time.utc(2000,2,10), Time.new(2000,2,9, 13,0,0, -3600*11))
    assert_equal(Time.utc(2000,2,10), Time.new(2000,2,10, 11,0,0, '+11:00'))
    assert_equal(Rational(1,2), Time.new(2000,2,10, 11,0,5.5, '+11:00').subsec)
    bug4090 = '[ruby-dev:42631]'
    tm = [2001,2,28,23,59,30]
    t = Time.new(*tm, '-12:00')
    assert_equal([2001,2,28,23,59,30,-43200], [t.year, t.month, t.mday, t.hour, t.min, t.sec, t.gmt_offset], bug4090)
    assert_raise(ArgumentError) { Time.new(2000,1,1, 0,0,0, '+01:60') }
  end
    
      it 'decodes a negative float' do
    '\xcd\xcc\x08\xc2'.unpack(unpack_format).should == [-34.200000762939453]
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['',          [nil, nil, nil]],
      ['dcbae',     [1684234849, nil, nil]],
      ['dcbaefg',   [1684234849, nil, nil]],
      ['dcbahgfe',  [1684234849, 1751606885, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      Sass::Plugin.options.merge!(config)
    
        # Converts a script node into a corresponding string interpolation
    # expression.
    #
    # @param node_or_interp [Sass::Script::Tree::Node]
    # @return [Sass::Script::Tree::StringInterpolation]
    def to_string_interpolation(node_or_interp)
      unless node_or_interp.is_a?(Interpolation)
        node = node_or_interp
        return string_literal(node.value.to_s) if node.is_a?(Literal)
        if node.is_a?(StringInterpolation)
          return concat(string_literal(node.quote), concat(node, string_literal(node.quote)))
        end
        return StringInterpolation.new(string_literal(''), node, string_literal(''))
      end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end