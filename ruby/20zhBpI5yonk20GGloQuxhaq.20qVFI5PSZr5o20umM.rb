
        
          def test_pipeline_r
    Open3.pipeline_r([RUBY, '-e', 'print '1''],
                     [RUBY, '-e', 'print STDIN.read + '2'']) {|o,ts|
      assert_kind_of(IO, o)
      assert_kind_of(Array, ts)
      assert_equal(2, ts.length)
      ts.each {|t| assert_kind_of(Thread, t) }
      assert_equal('12', o.read)
      ts.each {|t|
        assert(t.value.success?)
      }
    }
  end
    
      it 'returns nil if then-body is empty, expression is true and else part is present' do
    if true
    else
      456
    end.should == nil
  end
    
        it 'allows changing the wrapped struct' do
      a = @s.wrap_struct(1024)
      @s.change_struct(a, 100)
      @s.get_struct(a).should == 100
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
    
          def to_s
        @pairs.inspect
      end
    end
  end
end
