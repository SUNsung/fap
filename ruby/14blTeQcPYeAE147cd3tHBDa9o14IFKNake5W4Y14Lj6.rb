
        
              module ClassMethods
        def inherited(subclass)
          subclass.log_levels = subclass.superclass.log_levels.dup
        end
    
        private
    
        # Converts a script node into a corresponding string interpolation
    # expression.
    #
    # @param node_or_interp [Sass::Script::Tree::Node]
    # @return [Sass::Script::Tree::StringInterpolation]
    def to_string_interpolation(node_or_interp)
      unless node_or_interp.is_a?(Interpolation)
        node = node_or_interp
        return string_literal(node.value.to_s) if node.is_a?(Literal)
        if node.is_a?(StringInterpolation)
          return concat(string_literal(node.quote), concat(node, string_literal(node.quote)))
        end
        return StringInterpolation.new(string_literal(''), node, string_literal(''))
      end