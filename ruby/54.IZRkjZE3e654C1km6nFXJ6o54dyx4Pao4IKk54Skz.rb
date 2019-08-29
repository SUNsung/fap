
        
              it { expect(class_node.parent_class.const_type?).to be(true) }
    end
    
        it { expect(module_node.identifier.const_type?).to be(true) }
  end
    
          it 'is not fooled by single line blocks' do
        expect_no_offenses(<<~RUBY)
          some_method #{open} do_something #{close}
          something_else
        RUBY
      end
    end
  end
end

    
      describe 'similar name suggestion' do
    context 'when there's a similar variable-like method invocation' do
      it 'suggests the method name' do
        expect_offense(<<~RUBY)
          def some_method
            enviromnent = {}
            ^^^^^^^^^^^ Useless assignment to variable - `enviromnent`. Did you mean `environment`?
            another_symbol
            puts environment
          end
        RUBY
      end
    end
    
          module_function
    
          # The closing delimiter for this `block` literal.
      #
      # @return [String] the closing delimiter for the `block` literal
      def closing_delimiter
        delimiters.last
      end