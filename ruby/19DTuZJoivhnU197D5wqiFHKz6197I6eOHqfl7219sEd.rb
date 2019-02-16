
        
            context 'single argument' do
      before do
        subject.instance_eval do
          env :userpaths
        end
      end
    
      it 'ignores single-line hashes' do
    expect_no_offenses('{a: 1, b: 2}')
  end
    
          # Returns an array of all the values in the `hash` literal.
      #
      # @return [Array<Node>] an array of values in the `hash` literal
      def values
        each_pair.map(&:value)
      end
    
            attr_reader :first, :second
    
          # Returns the body of the `when` node.
      #
      # @return [Node, nil] the body of the `when` node
      def body
        node_parts[-1]
      end
    end
  end
end
