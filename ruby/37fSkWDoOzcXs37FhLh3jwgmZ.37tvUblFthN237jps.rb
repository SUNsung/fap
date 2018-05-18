
        
                assert_equal(a, b)
        assert_not_same(a, b)
        assert_equal(a.frozen?, b.frozen?)
        assert_equal(a.tainted?, b.tainted?)
      end
    end
  end
    
      it 'decodes past whitespace bytes when passed the '*' modifier' do
    [ ['a b c',    ['a b c']],
      ['a\fb c',   ['a\fb c']],
      ['a\nb c',   ['a\nb c']],
      ['a\rb c',   ['a\rb c']],
      ['a\tb c',   ['a\tb c']],
      ['a\vb c',   ['a\vb c']],
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
end
    
      it 'does not decode any items for directives exceeding the input string size' do
    '\xc2\x80'.unpack('UUUU').should == [0x80]
  end
    
      Car = Struct.new(:make, :model, :year)
    
      def self.wakeup_dying_sleeping_thread(kill_method_name=:kill)
    t = ThreadSpecs.dying_thread_ensures(kill_method_name) { yield }
    Thread.pass while t.status and t.status != 'sleep'
    t.wakeup
    t.join
  end
    
            time.sec.should == 60
        time.min.should == 59
        time.hour.should == 23
        time.day.should == 30
        time.month.should == 6
      end
    end
  end