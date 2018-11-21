
        
                private
    
    module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
        rake_tasks do |app|
      unless app.config.api_only
        load 'action_view/tasks/cache_digests.rake'
      end
    end
  end
end

    
        def cache_hits # :nodoc:
      @cache_hits ||= {}
    end
  end
end

    
    UserOption.where(user_id: -1).update_all(
  email_private_messages: false,
  email_direct: false
)
    
            lounge.topic_id = post.topic.id
        unless lounge.save
          puts lounge.errors.full_messages
          puts 'Failed to set the lounge description topic!'
        end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
    Capybara.register_driver :javascript_test do |app|
  Capybara::RackTest::Driver.new(app)
end
    
          def send_keys(*args)
        raise NotImplementedError
      end
    
      it 'should raise an error if there are multiple matches' do
    el = @session.find(:css, '#child')
    expect { el.ancestor('//div') }.to raise_error(Capybara::Ambiguous)
    expect { el.ancestor('//div', text: 'Ancestor') }.to raise_error(Capybara::Ambiguous)
  end
    
      action :raw do
    title 'Send a raw RFC2882 message'
    description 'This action allows you to send us a raw RFC2822 formatted message along with the recipients that it should be sent to. This is similar to sending a message through our SMTP service.'
    param :mail_from, 'The address that should be logged as sending the message', :type => String, :required => true
    param :rcpt_to, 'The addresses this message should be sent to', :type => Array, :required => true
    param :data, 'A base64 encoded RFC2822 message to send', :type => String, :required => true
    param :bounce, 'Is this message a bounce?', :type => :boolean
    returns Hash
    error 'UnauthenticatedFromAddress', 'The From address is not authorised to send mail from this server'
    action do
      # Decode the raw message
      raw_message = Base64.decode64(params.data)
    
      private
    
      def create
    @http_endpoint = @server.http_endpoints.build(safe_params)
    if @http_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :http_endpoints]]
    else
      render_form_errors 'new', @http_endpoint
    end
  end
    
      def create
    scope = @server ? @server.ip_pool_rules : organization.ip_pool_rules
    @ip_pool_rule = scope.build(safe_params)
    if @ip_pool_rule.save
      redirect_to_with_json [organization, @server, :ip_pool_rules]
    else
      render_form_errors 'new', @ip_pool_rule
    end
  end
    
      def destroy
    @ip_pool.destroy
    redirect_to_with_json :ip_pools, :notice => 'IP pool has been removed successfully.'
  rescue ActiveRecord::DeleteRestrictionError => e
    redirect_to_with_json [:edit, @ip_pool], :alert => 'IP pool cannot be removed because it is still assigned to servers/rules.'
  end
    
          address_endpoints = server.address_endpoints.order(:address).to_a
      if address_endpoints.present?
        s << '<optgroup label='Address Endpoints'>'
        for endpoint in address_endpoints
          value = '#{endpoint.class}##{endpoint.uuid}'
          selected = value == selected_value ? 'selected='selected'' : ''
          s << '<option value='#{value}' #{selected}>#{endpoint.address}</option>'
        end
        s << '</optgroup>'
      end