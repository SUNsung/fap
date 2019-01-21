
        
            def slug
      @slug ||= subpath.sub(/\A\//, '').remove(/\.html\z/)
    end
    
      def page_params
    { page: true, max_id: params[:max_id], min_id: params[:min_id] }.compact
  end
end

    
      def update
    response, status = process_push_request
    render plain: response, status: status
  end
    
    class Api::SubscriptionsController < Api::BaseController
  before_action :set_account
  respond_to :txt
    
    module Jekyll