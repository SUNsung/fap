
        
                  # Success, exit status 0
          0
        end
      end
    end
  end
end

    
        # Convert a snippet of bootstrap LESS to Scss
    def convert_less(less)
      less = convert_to_scss(less)
      less = yield(less) if block_given?
      less
    end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end