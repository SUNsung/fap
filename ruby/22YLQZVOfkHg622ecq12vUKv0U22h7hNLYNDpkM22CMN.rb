        class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
            def render
          error_wrapping(datetime_selector(@options, @html_options).send('select_#{select_type}').html_safe)
        end
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
          def with_module
        render inline: 'Module <%= included_method %>'
      end
    end
    
              yield Page.new(response.data, page += 1)
        end
      end
    
            def pull_request?
          attributes[:pull_request]
        end
    
          private
    
              node.before(%(<div class='pre-title'>#{node['title']}</div>)) if node['title']
    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
    class SinatraWorker
  include Sidekiq::Worker
    
          # Queue for this worker
      def queue
        self.sidekiq_options['queue']
      end
    
          def custom_tabs
        @custom_tabs ||= {}
      end
      alias_method :tabs, :custom_tabs
    
      def update
    if @credential.update(params.require(:credential).permit(:name, :hold))
      redirect_to_with_json [organization, @server, :credentials]
    else
      render_form_errors 'edit', @credential
    end
  end
    
      def new
    if params[:direction] == 'incoming'
      @message = IncomingMessagePrototype.new(@server, request.ip, 'web-ui', {})
      @message.from = session[:test_in_from] || current_user.email_tag
      @message.to = @server.routes.order(:name).first&.description
    else
      @message = OutgoingMessagePrototype.new(@server, request.ip, 'web-ui', {})
      @message.to = session[:test_out_to] || current_user.email_address
      if domain = @server.domains.verified.order(:name).first
        @message.from = 'test@#{domain.name}'
      end
    end
    @message.subject = 'Test Message at #{Time.zone.now.to_s(:long)}'
    @message.plain_body = 'This is a message to test the delivery of messages through Postal.'
  end
    
      def join
    if @invite = UserInvite.where(:uuid => params[:token]).where('expires_at > ?', Time.now).first
      if logged_in?
        if request.post?
          @invite.accept(current_user)
          redirect_to_with_json root_path(:nrd => 1), :notice => 'Invitation has been accepted successfully. You now have access to this organization.'
        elsif request.delete?
          @invite.reject
          redirect_to_with_json root_path(:nrd => 1), :notice => 'Invitation has been rejected successfully.'
        else
          @organizations = @invite.organizations.order(:name).to_a
        end
      else
        redirect_to new_signup_path(params[:token])
      end
    else
      redirect_to_with_json root_path(:nrd => 1), :alert => 'The invite URL you have has expired. Please ask the person who invited you to re-send your invitation.'
    end
  end
    
        # A callback is triggered each time (after) Active Admin loads the configuration files. This
    # is an opportunity to hook into Resources after they've been loaded.
    #
    # The block takes the current instance of [ActiveAdmin::Application]
    #
    # Example:
    #
    #     ActiveAdmin.after_load do |app|
    #       app.namespaces.each do |name, namespace|
    #         puts 'Namespace: #{name} loaded!'
    #       end
    #     end
    #
    # @param [Block] block A block to call each time (after) AA loads resources
    def after_load(&block)
      ActiveSupport::Notifications.subscribe ActiveAdmin::Application::AfterLoadEvent, &wrap_block_for_active_support_notifications(block)
    end
    
        def self.register(view_hash)
      view_hash.each do |view_key, view_class|
        super view_key, view_class
        add_writer(view_key)
        send '#{view_key}=', view_class
      end
    end
    
        # Initialize a new authorization adapter. This happens on each and
    # every request to a controller.
    #
    # @param [ActiveAdmin::Resource, ActiveAdmin::Page] resource The resource
    #        that the user is currently on. Note, we may be authorizing access
    #        to a different subject, so don't rely on this other than to
    #        pull configuration information from.
    #
    # @param [any] user The current user. The user is set to whatever is returned
    #        from `#current_active_admin_user` in the controller.
    #
    def initialize(resource, user)
      @resource = resource
      @user = user
    end
    
          def build_drop_down
        return if batch_actions_to_display.empty?
        dropdown_menu I18n.t('active_admin.batch_actions.button_label'),
                      class: 'batch_actions_selector dropdown_menu',
                      button: { class: 'disabled' } do
          batch_actions_to_display.each do |batch_action|
            confirmation_text = render_or_call_method_or_proc_on(self, batch_action.confirm)
    
        # Creates a wrapper panel for all index pages, except for the table, as the table has the checkbox in the thead
    class ResourceSelectionTogglePanel < ActiveAdmin::Component
      builder_method :resource_selection_toggle_panel