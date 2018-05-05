
        
            t1 = Time.gm(2000)
    t2 = t1.getlocal
    assert_equal(t1, t2)
    t3 = t1.getlocal('-02:00')
    assert_equal(t1, t3)
    assert_equal(-7200, t3.utc_offset)
    assert_equal([1999, 12, 31, 22, 0, 0], [t3.year, t3.mon, t3.mday, t3.hour, t3.min, t3.sec])
    t1.localtime
    assert_equal(t1, t2)
    assert_equal(t1.gmt?, t2.gmt?)
    assert_equal(t1, t3)
    
      it 'decodes the remaining doubles when passed the '*' modifier after another directive' do
    array = '333333\x15@ffffff\x22@'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end
    
      it 'implicitly has a count of one when no count is specified' do
    'abc'.unpack(unpack_format).should == ['a']
  end
    
      def self.clear_state
    @state = nil
  end
    
      it 'raises an ArgumentError if not passed a block' do
    lambda {
      Thread.send(@method)
    }.should raise_error(ArgumentError)
  end
    
      it 'handles bad leap seconds by carrying values forward' do
    with_timezone 'UTC' do
      time = Time.send(@method, 2017, 7, 5, 23, 59, 60)
      time.sec.should == 0
      time.min.should == 0
      time.hour.should == 0
      time.day.should == 6
      time.month.should == 7
    end
  end
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
            def_node_matcher :simple_double_comparison?, '(send $lvar :== $lvar)'
        def_node_matcher :simple_comparison?, <<-PATTERN
          {(send $lvar :== _)
           (send _ :== $lvar)}
        PATTERN
    
            def each_misplaced_optional_arg(arguments)
          optarg_positions, arg_positions = argument_positions(arguments)
          return if optarg_positions.empty? || arg_positions.empty?