
        
          def destroy
    @filter.destroy
    redirect_to filters_path
  end
    
        def set_user
      @user = Account.find(params[:account_id]).user || raise(ActiveRecord::RecordNotFound)
    end
    
          if @custom_emoji.update(resource_params)
        log_action :update, @custom_emoji
        flash[:notice] = I18n.t('admin.custom_emojis.updated_msg')
      else
        flash[:alert] =  I18n.t('admin.custom_emojis.update_failed_msg')
      end
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        def resource_params
      params.require(:report_note).permit(
        :content,
        :report_id
      )
    end
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      private
    
      def subscription
    @_subscription ||= @account.subscription(
      api_subscription_url(@account.id)
    )
  end
    
        reversible(&method(:up_down))
  end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
        it 'returns an array of likes for a post' do
      bob.like!(@message)
      get :index, params: {post_id: @message.id}
      expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(@message.likes.map(&:id))
    end
    
      def developer_prefix
    `xcode-select --print-path`.strip
  end
    
      require 'cocoapods/gem_version'
  require 'cocoapods-core'
  require 'cocoapods/config'
  require 'cocoapods/downloader'
    
        def initialize
      clear
    end
    
        # Gives a Geometry representing the given height and width
    def initialize(width = nil, height = nil, modifier = nil)
      if width.is_a?(Hash)
        options = width
        @height = options[:height].to_f
        @width = options[:width].to_f
        @modifier = options[:modifier]
        @orientation = options[:orientation].to_i
      else
        @height = height.to_f
        @width  = width.to_f
        @modifier = modifier
      end
    end
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end
    
        # Returns the pluralized form of the attachment name. e.g.
    # 'avatars' for an attachment of :avatar
    def attachment attachment, style_name
      plural_cache.pluralize_symbol(attachment.name)
    end