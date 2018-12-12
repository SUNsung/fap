
        
            def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
      def index
    render plain: 'Home'
  end
end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          def template_paths
        template_path = _prefixes.dup
        template_path.unshift '#{@devise_mapping.scoped_path}/mailer' if self.class.scoped_views?
        template_path
      end
    
        post('/', {'csrf_param' => token}, 'rack.session' => {:csrf => token})
    expect(last_response).to be_ok
  end
    
            def void
          perform_payment_action(:void_transaction)
        end
    
            def destroy
          if @property
            authorize! :destroy, @property
            @property.destroy
            respond_with(@property, status: 204)
          else
            invalid_resource!(@property)
          end
        end
    
            def order
          @order ||= Spree::Order.find_by!(number: order_id)
          authorize! :read, @order
        end
    
              if error
            unprocessable_entity('#{Spree.t(:shipment_transfer_errors_occured, scope: 'api')} \n#{error}')
          else
            @original_shipment.transfer_to_shipment(@variant, @quantity, @target_shipment)
            render json: { success: true, message: Spree.t(:shipment_transfer_success) }, status: 201
          end
        end
    
            def destroy
          authorize! :destroy, taxonomy
          taxonomy.destroy
          respond_with(taxonomy, status: 204)
        end
    
            def taxonomy
          if params[:taxonomy_id].present?
            @taxonomy ||= Spree::Taxonomy.accessible_by(current_ability, :read).find(params[:taxonomy_id])
          end
        end