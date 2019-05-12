
        
              # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
          # Returns the delta between this pair's key and the argument pair's.
      #
      # @note Keys on the same line always return a delta of 0
      # @note Keyword splats always return a delta of 0 for right alignment
      #
      # @param [Symbol] alignment whether to check the left or right side
      # @return [Integer] the delta between the two keys
      def key_delta(other, alignment = :left)
        HashElementDelta.new(self, other).key_delta(alignment)
      end
    
    module RuboCop
  module Cop
    # This auto-corrects gem dependency order
    class OrderedGemCorrector
      extend OrderedGemNode
    
            private