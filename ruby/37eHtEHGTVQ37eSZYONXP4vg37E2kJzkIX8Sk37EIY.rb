
        
        def usercode(f, out)
  require 'erb'
  compiler = ERB::Compiler.new('%-')
  compiler.put_cmd = compiler.insert_cmd = 'out.<<'
  lineno = f.lineno
  src, = compiler.compile(f.read)
  eval(src, binding, f.path, lineno)
end
    
      def test_hidden_key
    bug6899 = '[ruby-core:47253]'
    foo = 'foor'
    bar = 'bar'
    assert_nothing_raised(NotImplementedError, bug6899) do
      2000.times {eval %[(foo..bar) ? 1 : 2]}
    end
    foo = bar
  end
    
      it 'wraps and unwraps data' do
    a = @s.typed_wrap_struct(1024)
    @s.typed_get_struct(a).should == 1024
  end
    
      def test_frozen_string_literal
    all_assertions do |a|
      [['disable', 'false'], ['enable', 'true']].each do |opt, exp|
        %W[frozen_string_literal frozen-string-literal].each do |arg|
          key = '#{opt}=#{arg}'
          a.for(key) do
            assert_in_out_err(['--disable=gems', '--#{key}'], 'p('foo'.frozen?)', [exp])
          end
        end
      end
      %W'disable enable'.product(%W[false true]) do |opt, exp|
        a.for('#{opt}=>#{exp}') do
          assert_in_out_err(['-w', '--disable=gems', '--#{opt}=frozen-string-literal'], <<-'end;', [exp])
            #-*- frozen-string-literal: #{exp} -*-
            p('foo'.frozen?)
          end;
        end
      end
    end
  end
    
          with_timezone('America/New_York') do
        t.localtime
      end
    
      it 'adds the directory at the front of $LOAD_PATH' do
    dir = tmp('rubylib/incl_front')
    ENV['RUBYLIB'] = @pre + dir
    paths = ruby_exe('puts $LOAD_PATH').lines.map(&:chomp)
    if PlatformGuard.implementation? :ruby
      # In a MRI checkout, $PWD and some extra -I entries end up as
      # the first entries in $LOAD_PATH. So just assert that it's not last.
      idx = paths.index(dir)
      idx.should < paths.size-1
    else
      paths[0].should == dir
    end
  end
    
      def check_closed
    raise IOError, 'closed #{self.class}' if closed?
  end
    
      # Deletes every element of the set for which block evaluates to
  # true, and returns self. Returns an enumerator if no block is
  # given.
  def delete_if
    block_given? or return enum_for(__method__) { size }
    # @hash.delete_if should be faster, but using it breaks the order
    # of enumeration in subclasses.
    select { |o| yield o }.each { |o| @hash.delete(o) }
    self
  end
    
      def test_include?
    assert_not_send([@cls[], :include?, 1])
    assert_not_send([@cls[], :include?, nil])
    assert_send([@h, :include?, nil])
    assert_send([@h, :include?, 1])
    assert_not_send([@h, :include?, 'gumby'])
  end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
              def find_plugins_gem_specs
            @specs ||= ::Gem::Specification.find_all.select{|spec| logstash_plugin_gem_spec?(spec)}
          end