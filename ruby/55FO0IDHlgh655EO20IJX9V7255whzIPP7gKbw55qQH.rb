
        
              expect(value_for(user.id, dt)).to eq(0)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
      def show
    render json: outbox_presenter, serializer: ActivityPub::OutboxSerializer, adapter: ActivityPub::Adapter, content_type: 'application/activity+json'
  end
    
        def update
      authorize @user, :change_email?
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
              if params[:page] || params[:per_page]
            @states = @states.page(params[:page]).per(params[:per_page])
          end
    
            def new; end
    
            def zone_params
          attrs = params.require(:zone).permit!
          if attrs[:zone_members]
            attrs[:zone_members_attributes] = attrs.delete(:zone_members)
          end
          attrs
        end