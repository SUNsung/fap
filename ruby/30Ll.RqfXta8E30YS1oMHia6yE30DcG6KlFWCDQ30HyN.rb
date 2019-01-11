
        
                def after_update_attributes
          if params[:order] && params[:order][:coupon_code].present?
            handler = PromotionHandler::Coupon.new(@order)
            handler.apply
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
            private
    
            def destroy
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :destroy).find(params[:id])
          @return_authorization.destroy
          respond_with(@return_authorization, status: 204)
        end
    
            def update
          authorize! :update, taxon
          if taxon.update_attributes(taxon_params)
            respond_with(taxon, status: 200, default_template: :show)
          else
            invalid_resource!(taxon)
          end
        end