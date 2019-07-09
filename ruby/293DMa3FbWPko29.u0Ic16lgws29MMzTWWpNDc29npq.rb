
        
                attr_reader :symbol
    
              # Add the help option, which must be on every command.
          opts.on_tail('-h', '--help', 'Print this help') do
            safe_puts(opts.help)
            return nil
          end
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
        end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
      it { expect(subject.tmux_window_and_pane_target).to eql 'foo:0.1' }
end

    
        context 'with deprecations' do
      it 'still gets the list of windows' do
        expect(project_with_deprecations.windows).to_not be_empty
      end
    end
  end
    
      match do
    result = is_pane
    
      expansion(:html_body) { o.html_body }
    
        if @domain.save
      if @domain.verified?
        redirect_to_with_json [:setup, organization, @server, @domain]
      else
        redirect_to_with_json [:verify, organization, @server, @domain]
      end
    else
      render_form_errors 'new', @domain
    end
  end
    
                if qs[:after]
              begin
                options[:where][:timestamp][:greater_than] = get_time_from_string(qs[:after]).to_f
              rescue TimeUndetermined => e
                flash.now[:alert] = 'Couldn't determine time for after from '#{qs[:after]}''
              end
            end
          end
        end
      else
        session['msg_query_#{@server.id}_#{scope}'] = nil
      end
    end
    
      private
    
      def create
    @track_domain = @server.track_domains.build(params.require(:track_domain).permit(:name, :domain_id, :track_loads, :track_clicks, :excluded_click_domains, :ssl_enabled))
    if @track_domain.save
      redirect_to_with_json [:return_to, [organization, @server, :track_domains]]
    else
      render_form_errors 'new', @track_domain
    end
  end
    
      def create
    @organization_user = organization.organization_users.build(params.require(:organization_user).permit(:email_address, :admin, :all_servers))
    if @organization_user.save
      AppMailer.user_invite(@organization_user.user, organization).deliver
      redirect_to_with_json [organization, :users], :notice => 'An invitation will be sent to #{@organization_user.user.email_address} which will allow them to access your organization.'
    else
      render_form_errors 'new', @organization_user
    end
  end
    
      def format_delivery_details(server, text)
    text.gsub!(/\<msg\:(\d+)\>/) do
      id = $1.to_i
      link_to('message ##{id}', organization_server_message_path(server.organization, server, id), :class => 'u-link')
    end
    text.html_safe
  end
    
          # This module extends user defined helpers
      # to provide some API-specific functionality.
      module BaseHelper
        attr_accessor :api
        def params(name, &block)
          @named_params ||= {}
          @named_params[name] = block
        end
    
            def error_formatter(format, options)
          formatter = if options.is_a?(Hash) && options.key?(:with)
                        options[:with]
                      else
                        options
                      end