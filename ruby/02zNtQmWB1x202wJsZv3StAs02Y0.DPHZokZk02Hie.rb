
        
              expect(value_for(user.id, dt)).to eq(0)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
      include_examples 'multiline literal brace layout trailing comma' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
end

    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end