
        
                # This contains all the registered host capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :host_capabilities
    
            # Capture all bad configuration calls and save them for an error
        # message later during validation.
        def method_missing(name, *args, &block)
          return super if @__finalized
    
            # This returns all the config classes for the various provisioners.
        #
        # @return [Registry]
        def provisioner_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provisioner])
            end
          end
        end
    
            # This should return the state of the machine within this provider.
        # The state must be an instance of {MachineState}. Please read the
        # documentation of that class for more information.
        #
        # @return [MachineState]
        def state
          nil
        end
    
      def next_page
    account_outbox_url(@account, page: true, max_id: @statuses.last.id) if @statuses.size == LIMIT
  end
    
            log_action :change_email, @user
    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
          @form         = Form::StatusBatch.new(form_status_batch_params.merge(current_account: current_account, action: action_from_button))
      flash[:alert] = I18n.t('admin.statuses.failed_to_execute') unless @form.save
    
      def update
    raise ActiveRecord::RecordNotFound if @web_subscription.nil?
    
    namespace :bower do
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
          def report
        <<-EOS
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
    require 'stringex'
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end