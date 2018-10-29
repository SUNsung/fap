
        
            @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
          @account_moderation_note = current_account.account_moderation_notes.new(resource_params)
    
            @user.send_confirmation_instructions
      end
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def account_feed_path?
    hub_topic_params[:controller] == 'accounts' && hub_topic_params[:action] == 'show' && hub_topic_params[:format] == 'atom'
  end
end

    
      def subscription
    @_subscription ||= @account.subscription(
      api_subscription_url(@account.id)
    )
  end
    
            private
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def load_transfer_params
          @original_shipment         = Spree::Shipment.find_by!(number: params[:original_shipment_number])
          @variant                   = Spree::Variant.find(params[:variant_id])
          @quantity                  = params[:quantity].to_i
          authorize! :read, @original_shipment
          authorize! :create, Shipment
        end
    
              state = @states.last
          respond_with(@states) if stale?(state)
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