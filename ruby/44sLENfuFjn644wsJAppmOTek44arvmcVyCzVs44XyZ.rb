
        
                def stock_movement_params
          params.require(:stock_movement).permit(permitted_stock_movement_attributes)
        end
      end
    end
  end
end

    
            def used?
          @variable.captured_by_block? || @referenced
        end
    
            # Annotate the source code with the RuboCop offenses provided
        #
        # @param offenses [Array<RuboCop::Cop::Offense>]
        #
        # @return [self]
        def with_offense_annotations(offenses)
          offense_annotations =
            offenses.map do |offense|
              indent     = ' ' * offense.column
              carets     = '^' * offense.column_length
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end