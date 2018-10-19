
        
            # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
        def recall_app(app)
      controller, action = app.split('#')
      controller_name  = ActiveSupport::Inflector.camelize(controller)
      controller_klass = ActiveSupport::Inflector.constantize('#{controller_name}Controller')
      controller_klass.action(action)
    end
    
        if last_request_at.is_a? Integer
      last_request_at = Time.at(last_request_at).utc
    elsif last_request_at.is_a? String
      last_request_at = Time.parse(last_request_at)
    end
    
          def path
        slug
      end
    
        attr_reader :filters
    
        def type=(value)
      @type = value.try :strip
    end
    
      def set_size
    case params[:id]
    when 'featured'
      @account.pinned_statuses.count
    else
      raise ActiveRecord::NotFound
    end
  end
    
      def next_page
    account_outbox_url(@account, page: true, max_id: @statuses.last.id) if @statuses.size == LIMIT
  end
    
        def new
      authorize :domain_block, :create?
      @domain_block = DomainBlock.new
    end
    
        helper_method :paginated_instances
    
    Given(/^servers with the roles app and web$/) do
  begin
    vagrant_cli_command('up')
  rescue
    nil
  end
end
    
    World(RemoteCommandHelpers)

    
        extend Forwardable
    attr_reader :variables
    def_delegators :variables,
                   :set, :fetch, :fetch_for, :delete, :keys, :validate
    
          def warn_third_party_scm_must_be_upgraded
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure this custom SCM will work with future versions of Capistrano,
please upgrade it to a version that uses the new SCM plugin mechanism
documented here:
    
            def current
          @order = find_current_order
          if @order
            respond_with(@order, default_template: :show, locals: { root_object: @order })
          else
            head :no_content
          end
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end