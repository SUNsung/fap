
        
          def test_replace
    ENV['foo'] = 'xxx'
    ENV.replace({'foo'=>'bar', 'baz'=>'qux'})
    check(ENV.to_hash.to_a, [%w(foo bar), %w(baz qux)])
  end
    
        iset = Set.new.compare_by_identity
    assert_send([iset, :compare_by_identity?])
    iset.merge(array)
    assert_equal(5, iset.size)
    assert_equal(array.map(&:object_id).sort, iset.map(&:object_id).sort)
    
      Ruby = Struct.new(:version, :platform)
    
        thread.join
    ScratchPad.recorded.should == nil
  end
    
      it 'does not call #initialize' do
    c = Class.new(Thread) do
      def initialize
        ScratchPad.record :bad
      end
    end