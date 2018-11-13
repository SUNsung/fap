
        
            def build_and_queue_request(url, options, &block)
      request = Request.new(url, request_options.merge(options))
      request.on_complete(&block) if block
      queue(request)
      request
    end
    
        def self.join(*args)
      PARSER.join(*args)
    end
    
            # Remove ng-* attributes
        css('*').each do |node|
          node.attributes.each_key do |attribute|
            node.remove_attribute(attribute) if attribute.start_with? 'ng-'
          end
        end
    
      def set_account
    @account = Account.find_local!(params[:account_username])
  end
    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
        def resubscribe
      authorize :instance, :resubscribe?
      params.require(:by_domain)
      Pubsubhubbub::SubscribeWorker.push_bulk(subscribeable_accounts.pluck(:id))
      redirect_to admin_instances_path
    end
    
            if params[:create_and_unresolve]
          @report.unresolve!
          log_action :reopen, @report
        end
    
          @form         = Form::StatusBatch.new(form_status_batch_params.merge(current_account: current_account, action: action_from_button))
      flash[:alert] = I18n.t('admin.statuses.failed_to_execute') unless @form.save
    
        context 'float types' do
      it 'controls the number of decimal places displayed in fraction part' do
        format('%.10e', 109.52).should == '1.0952000000e+02'
        format('%.10E', 109.52).should == '1.0952000000E+02'
        format('%.10f', 10.952).should == '10.9520000000'
        format('%.10a', 196).should == '0x1.8800000000p+7'
        format('%.10A', 196).should == '0X1.8800000000P+7'
      end
    
      it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end
    
          def api_key
        request.headers['X-Spree-Token'] || params[:token]
      end
      helper_method :api_key
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def show
          @image = Image.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@image)
        end
    
            def inventory_unit_params
          params.require(:inventory_unit).permit(permitted_inventory_unit_attributes)
        end
      end
    end
  end
end

    
            def show
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          headers['Surrogate-Key'] = 'product_id=1'
          respond_with(@product)
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
            private
    
              @stock_item = scope.new(stock_item_params)
          if @stock_item.save
            @stock_item.adjust_count_on_hand(count_on_hand)
            respond_with(@stock_item, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_item)
          end
        end
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end