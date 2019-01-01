
        
                unprocessable_entity(exception.message)
      end
    
            def raise_insufficient_quantity
          respond_with(@order, default_template: 'spree/api/v1/orders/insufficient_quantity', status: 422)
        end
    
            def new; end
    
            def update
          authorize! :update, inventory_unit.order
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
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
    
            def index
          @zones = Zone.accessible_by(current_ability, :read).order('name ASC').ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@zones)
        end