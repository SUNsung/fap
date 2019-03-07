
        
                  def instantiate_builder(builder_class, item, value, text, html_options)
            builder_class.new(@template_object, @object_name, @method_name, item,
                              sanitize_attribute_name(value), text, value, html_options)
          end
    
              super(object_name, method_name, template_object, options)
        end
    
    require 'action_view/helpers/tags/placeholderable'
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
        def create
      authorize ReportNote, :create?
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
    class Api::SubscriptionsController < Api::BaseController
  before_action :set_account
  respond_to :txt
    
        12.times do |i|
      day     = i.weeks.ago.to_date
      week_id = day.cweek
      week    = Date.commercial(day.cwyear, week_id)
    
        unless active_session.web_push_subscription.nil?
      active_session.web_push_subscription.destroy!
      active_session.update!(web_push_subscription: nil)
    end
    
      def update
    setting.data = params[:data]
    setting.save!
    
    if $0 == __FILE__
  $:.unshift File.expand_path('../../lib', __FILE__)
end
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
          # This double assignment is to prevent an 'unused variable' warning on
      # Ruby 1.9.3.  Yes, it is dumb, but I don't like Ruby yelling at me.
      frames = frames = exception.backtrace.map { |line|
        frame = OpenStruct.new
        if line =~ /(.*?):(\d+)(:in `(.*)')?/
          frame.filename = $1
          frame.lineno = $2.to_i
          frame.function = $4
    }
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end

    
        it 'returns both complete and incomplete orders when only complete orders is not checked' do
      Spree::Order.create! email: 'incomplete@example.com', completed_at: nil, state: 'cart'
      click_on 'Filter'
      uncheck 'q_completed_at_not_null'
      click_on 'Filter Results'
    
      s.add_dependency 'spree_api', s.version
  s.add_dependency 'spree_core', s.version
    
      s.add_dependency 'spree_api', s.version
  s.add_dependency 'spree_core', s.version
    
          def product_scope
        if @current_user_roles.include?('admin')
          scope = Product.with_deleted.accessible_by(current_ability, :read).includes(*product_includes)
    
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

    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end