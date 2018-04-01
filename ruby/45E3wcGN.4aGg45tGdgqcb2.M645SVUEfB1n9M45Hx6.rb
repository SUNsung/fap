
        
                css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
      def test_size
    assert_equal(0, Set[].size)
    assert_equal(2, Set[1,2].size)
    assert_equal(2, Set[1,2,1].size)
  end
    
      def test_1970
    assert_equal(0, Time.utc(1970, 1, 1, 0, 0, 0).tv_sec)
    [
      [1969, 12, 31, 23, 59, 59],
      [1970, 1, 1, 0, 0, 0],
      [1970, 1, 1, 0, 0, 1],
    ].each {|year, mon, day, hour, min, sec|
      t = Time.utc(year, mon, day, hour, min, sec)
      assert_equal(year, t.year)
      assert_equal(mon, t.mon)
      assert_equal(day, t.day)
      assert_equal(hour, t.hour)
      assert_equal(min, t.min)
      assert_equal(sec, t.sec)
    }
  end
    
      it 'decodes the remaining floats when passed the '*' modifier after another directive' do
    array = '@\xa9\x99\x9aA\x1333'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.300000190734863, 9.199999809265137]
  end
    
        run.should be_true
  end
    
        10.times { sleep 0.1 if after_sleep1 != true }
    10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep2.should == false # t should be blocked on the second sleep
    t.send(@method)