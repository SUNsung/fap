
        
        end

    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
          # users should be able to set price when importing orders via api
      def permitted_line_item_attributes
        if @current_user_roles.include?('admin')
          super + [:price, :variant_id, :sku]
        else
          super
        end
      end
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :read).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :read).find_by!(name: params[:id])
        end
    
            private
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
            def show
          authorize! :read, @store
          respond_with(@store)
        end