
        
            def subpath
      @subpath ||= subpath_to(current_url)
    end
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
            css('.openParens').each do |node|
          node.parent.name = 'pre'
          node.parent.content = node.parent.css('code, pre').map(&:content).join('\n')
        end
    
      it 'does not raise an error on a tainted, frozen object' do
    o = Object.new.taint.freeze
    o.taint.should equal(o)
  end
    
    describe 'Kernel#trace_var' do
  before :each do
    $Kernel_trace_var_global = nil
  end
    
      # Code Quality
  gem 'inch_by_inch'
  gem 'rubocop'
    
      def developer_prefix
    `xcode-select --print-path`.strip
  end
    
          # Checks whether this case statement has an `else` branch.
      #
      # @return [Boolean] whether the `case` statement has an `else` branch
      def else?
        loc.else
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
    
            pairs.map(&:key).each do |key|
          yield key
        end
    
          # Returns the index of the `when` branch within the `case` statement.
      #
      # @return [Integer] the index of the `when` branch
      def branch_index
        parent.when_branches.index(self)
      end