
        
            initializer 'action_view.default_enforce_utf8' do |app|
      ActiveSupport.on_load(:action_view) do
        default_enforce_utf8 = app.config.action_view.delete(:default_enforce_utf8)
        unless default_enforce_utf8.nil?
          ActionView::Helpers::FormTagHelper.default_enforce_utf8 = default_enforce_utf8
        end
      end
    end
    
          @account_moderation_note = current_account.account_moderation_notes.new(resource_params)
    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
        private
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end
    
          def call
        ask_question
        value_or_default
      end
    
          def content_type
        case params[:format]
        when 'json'
          'application/json; charset=utf-8'
        when 'xml'
          'text/xml; charset=utf-8'
        end
      end
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end
    
            def inventory_unit
          @inventory_unit ||= InventoryUnit.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def option_type_params
          params.require(:option_type).permit(permitted_option_type_attributes)
        end
      end
    end
  end
end

    
            def update
          authorize! :update, @product_property
    
            def load_transfer_params
          @original_shipment         = Spree::Shipment.find_by!(number: params[:original_shipment_number])
          @variant                   = Spree::Variant.find(params[:variant_id])
          @quantity                  = params[:quantity].to_i
          authorize! :read, @original_shipment
          authorize! :create, Shipment
        end