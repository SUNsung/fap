
        
          it 'considers a non-nil and non-boolean object in expression result as true' do
    if mock('x')
      123
    else
      456
    end.should == 123
  end
    
      def test_flip_flop
    eval <<-END
    assert_equal [4,5], (1..9).select {|n| true if (n==4)..(n==5)}
    assert_equal [4,5], (1..9).select {|n| true if (n==4)...(n==5)}
    assert_equal [2], (1..9).select {|n| true if (n==2)..(n%2).zero?}
    assert_equal [2,3,4], (1..9).select {|n| true if (n==2)...(n%2).zero?}
    assert_equal [4,5,7,8], (1..9).select {|n| true if (n==4)...(n==5) or (n==7)...(n==8)}
    assert_equal [nil, 2, 3, 4, nil], (1..5).map {|x| x if (x==2..x==4)}
    assert_equal [1, nil, nil, nil, 5], (1..5).map {|x| x if !(x==2..x==4)}
    END
  end
    
      def test_download_to_cache
    @a2, @a2_gem = util_gem 'a', '2'
    
            File.open(@path,'a').close unless File.exist?(@path)
        reload
      end
    
            def operator_assignment?
          return false unless meta_assignment_node
          OPERATOR_ASSIGNMENT_TYPES.include?(meta_assignment_node.type)
        end
    
            def autocorrect(node)
          center = multiple_compare?(node)
          new_center = '#{center.source} && #{center.source}'
    
              add_offense(node)
        end
    
            attr_reader :lines, :annotations
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates