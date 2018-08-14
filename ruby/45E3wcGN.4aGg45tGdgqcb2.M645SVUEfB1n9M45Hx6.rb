
        
          def test_capture3_flip
    o, e, s = Open3.capture3(RUBY, '-e', 'STDOUT.sync=true; 1000.times { print 'o'*1000; STDERR.print 'e'*1000 }')
    assert_equal('o'*1000000, o)
    assert_equal('e'*1000000, e)
    assert(s.success?)
  end
    
      def test_optional_self_reference
    bug9593 = '[ruby-core:61299] [Bug #9593]'
    o = Object.new
    assert_warn(/circular argument reference - var/) do
      o.instance_eval('def foo(var = defined?(var)) var end')
    end
    assert_equal(42, o.foo(42))
    assert_equal('local-variable', o.foo, bug9593)
    
        it 'allows changing the wrapped struct' do
      a = @s.wrap_struct(1024)
      @s.change_struct(a, 100)
      @s.get_struct(a).should == 100
    end
  end
    
    def exec_test(pathes)
  @count = 0
  @error = 0
  @errbuf = []
  @location = nil
  @columns = 0
  @width = pathes.map {|path| File.basename(path).size}.max + 2
  pathes.each do |path|
    @basename = File.basename(path)
    $stderr.printf('%s%-*s ', erase(@quiet), @width, @basename)
    $stderr.flush
    @columns = @width + 1
    $stderr.puts if @verbose
    count = @count
    error = @error
    load File.expand_path(path)
    if @tty
      if @error == error
        msg = 'PASS #{@count-count}'
        @columns += msg.size - 1
        $stderr.print '#{@progress_bs}#{@passed}#{msg}#{@reset}'
      else
        msg = 'FAIL #{@error-error}/#{@count-count}'
        $stderr.print '#{@progress_bs}#{@failed}#{msg}#{@reset}'
        @columns = 0
      end
    end
    $stderr.puts unless @quiet and @tty and @error == error
  end
  $stderr.print(erase) if @quiet
  if @error == 0
    if @count == 0
      $stderr.puts 'No tests, no problem'
    else
      $stderr.puts '#{@passed}PASS#{@reset} all #{@count} tests'
    end
    exit true
  else
    @errbuf.each do |msg|
      $stderr.puts msg
    end
    $stderr.puts '#{@failed}FAIL#{@reset} #{@error}/#{@count} tests failed'
    exit false
  end
end
    
        t = Thread.new do
      tester.sync_lock(:SH)
      tester.sync_lock(:EX)
    end
    
      def self.hangul_comp_one(string)
    length = string.length
    if length>1 and 0 <= (lead =string[0].ord-LBASE) and lead  < LCOUNT and
                    0 <= (vowel=string[1].ord-VBASE) and vowel < VCOUNT
      lead_vowel = SBASE + (lead * VCOUNT + vowel) * TCOUNT
      if length>2 and 0 < (trail=string[2].ord-TBASE) and trail < TCOUNT
        (lead_vowel + trail).chr(Encoding::UTF_8) + string[3..-1]
      else
        lead_vowel.chr(Encoding::UTF_8) + string[2..-1]
      end
    else
      string
    end
  end