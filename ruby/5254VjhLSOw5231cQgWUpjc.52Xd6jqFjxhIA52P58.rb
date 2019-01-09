
        
              puts
      puts 'Integration fixtures updated, commit and push in the `spec/cocoapods-integration-specs` submodule'
    end
    
      def xcode_app_path
    File.expand_path('../..', developer_prefix)
  end
    
                target 'Static' do
                use_frameworks!(false)
            end
            target 'Dynamic' do
                use_frameworks!(true)
            end
        end
    end
end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def image_params
          params.require(:image).permit(permitted_image_attributes)
        end
    
            def inventory_unit
          @inventory_unit ||= InventoryUnit.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def update
          @shipment = Spree::Shipment.accessible_by(current_ability, :update).readonly(false).find_by!(number: params[:id])
          @shipment.update_attributes_and_order(shipment_params)
    
              if params[:page] || params[:per_page]
            @states = @states.page(params[:page]).per(params[:per_page])
          end
    
            private
    
            def new; end
    
            def destroy
          authorize! :destroy, user
          user.destroy
          respond_with(user, status: 204)
        end