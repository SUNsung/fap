
        
            it 'accepts one hash parameter without braces and with one hash value' do
      expect_no_offenses('where(x: { 'y' => 'z' })')
    end
    
          it 'allows closing brace on same line as last multiline element' do
        expect_no_offenses(construct(true, a, make_multi(multi), false))
      end
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is truthy.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the truthy branch node of the `if` node
      # @return [nil] if the truthy branch is empty
      def if_branch
        node_parts[1]
      end
    
              delta(first.key.loc, second.key.loc, alignment)
        end