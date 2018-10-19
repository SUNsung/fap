
        
          @release_paths = (1..count.to_i).map do
    TestApp.cap('deploy')
    stdout, _stderr = run_vagrant_command('readlink #{TestApp.current_path}')
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          def response
        return @response if defined? @response
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
          private
    
            def line_items_attributes
          { line_items_attributes: {
              id: params[:id],
              quantity: params[:line_item][:quantity],
              options: line_item_params[:options] || {}
          } }
        end
    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end
    
              if Cart::Update.call(order: @order, params: order_params).success?
            user_id = params[:order][:user_id]
            if current_api_user.has_spree_role?('admin') && user_id
              @order.associate_user!(Spree.user_class.find(user_id))
            end
            respond_with(@order, default_template: :show)
          else
            invalid_resource!(@order)
          end
        end
    
            private
    
              state = @states.last
          respond_with(@states) if stale?(state)
        end
    
            private
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end