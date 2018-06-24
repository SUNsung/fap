  def test_capture2_stdin_data_io
    IO.pipe {|r, w|
      w.write 'i'
      w.close
      o, s = Open3.capture2(RUBY, '-e', 'i=STDIN.read; print i+'o'', :stdin_data=>r)
      assert_equal('io', o)
      assert(s.success?)
    }
  end
    
        it 'returns a complex number if self is negative and the passed argument is not 0' do
      (Rational(-3, 2) ** 1.5).should be_close(Complex(0.0, -1.8371173070873836), TOLERANCE)
      (Rational(3, -2) ** 1.5).should be_close(Complex(0.0, -1.8371173070873836), TOLERANCE)
      (Rational(3, -2) ** -1.5).should be_close(Complex(0.0, 0.5443310539518174), TOLERANCE)
    end
    
      def test_newline_in_block_parameters
    bug = '[ruby-dev:45292]'
    ['', 'a', 'a, b'].product(['', ';x', [';', 'x']]) do |params|
      params = ['|', *params, '|'].join('\n')
      assert_valid_syntax('1.times{#{params}}', __FILE__, '#{bug} #{params.inspect}')
    end
  end
    
      describe 'RDATA()' do
    it 'returns the struct data' do
      a = @s.wrap_struct(1024)
      @s.get_struct_rdata(a).should == 1024
    end
    
        s = SortedSet.new(['one', 'two', 'three', 'four'])
    a = []
    ret = s.delete_if { |o| a << o; o.start_with?('t') }
    assert_same(s, ret)
    assert_equal(['four', 'one'], s.to_a)
    assert_equal(['four', 'one', 'three', 'two'], a)
    
        t = Time.at(0).utc
    assert_equal([1970,1,1, 0,0,0], [t.year, t.mon, t.day, t.hour, t.min, t.sec])
    t = Time.at(-86400).utc
    assert_equal([1969,12,31, 0,0,0], [t.year, t.mon, t.day, t.hour, t.min, t.sec])
    t = Time.at(-86400 * (400 * 365 + 97)).utc
    assert_equal([1970-400,1,1, 0,0,0], [t.year, t.mon, t.day, t.hour, t.min, t.sec])
    t = Time.at(-86400 * (400 * 365 + 97)*1000).utc
    assert_equal([1970-400*1000,1,1, 0,0,0], [t.year, t.mon, t.day, t.hour, t.min, t.sec])
    t = Time.at(-86400 * (400 * 365 + 97)*2421).utc
    assert_equal([1970-400*2421,1,1, 0,0,0], [t.year, t.mon, t.day, t.hour, t.min, t.sec])
    t = Time.at(-86400 * (400 * 365 + 97)*1000000).utc
    assert_equal([1970-400*1000000,1,1, 0,0,0], [t.year, t.mon, t.day, t.hour, t.min, t.sec])
    
      it 'decodes the number of floats requested by the count modifier' do
    array = '\x9a\x999@33\xb3?33\x03A'.unpack(unpack_format(3))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end
    
        # Returns the CSS for the media query.
    #
    # @return [String]
    def to_css
      css = ''
      css << resolved_modifier
      css << ' ' unless resolved_modifier.empty?
      css << resolved_type
      css << ' and ' unless resolved_type.empty? || expressions.empty?
      css << expressions.map do |e|
        # It's possible for there to be script nodes in Expressions even when
        # we're converting to CSS in the case where we parsed the document as
        # CSS originally (as in css_test.rb).
        e.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.to_sass : c.to_s}.join
      end.join(' and ')
      css
    end
    
        def self.run
      # Apparently there's no better way than this to add Sass
      # to Merb's Rack stack.
      Merb::Config[:app] = Sass::Plugin::Rack.new(Merb::Config[:app])
    end
  end
end
