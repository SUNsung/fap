
        
            def execute(args)
    
    ###
### dependencies
###
    
            def scope
          @stock_location.stock_movements.accessible_by(current_ability, :read)
        end
    
          # The name of the defined method as a symbol.
      #
      # @return [Symbol] the name of the defined method
      def method_name
        node_parts[2]
      end