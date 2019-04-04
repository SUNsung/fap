          def serialize_order(order)
            resource_serializer.new(order.reload, include: resource_includes, fields: sparse_fields).serializable_hash
          end
    
          def must_specify_api_key
        render 'spree/api/errors/must_specify_api_key', status: 401
      end
    
            def log_state_changes
          if @order.previous_changes[:state]
            @order.log_state_changes(
              state_name: 'order',
              old_state: @order.previous_changes[:state].first,
              new_state: @order.previous_changes[:state].last
            )
          end
        end
    
            def destroy
          authorize! :destroy, @product
          @product.destroy
          respond_with(@product, status: 204)
        end
    
            def scope
          @stock_location.stock_movements.accessible_by(current_ability, :read)
        end
    
                render_order(result)
          end
    
    end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end