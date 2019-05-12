
        
                    content
          end
        end
    
          def with_module
        render inline: 'Module <%= included_method %>'
      end
    end
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
          def cache_key
        CACHE_KEY % {
          project: project.id,
          type: cache_key_type,
          iid: cache_key_iid
        }
      end
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
            if controller.content_type == 'text/html'
          action
        else
          '#{action} (#{controller.content_type})'
        end
      end
    
      it 'allows to click on on the agent name in select2 tags' do
    visit new_agent_path
    select_agent_type('Website Agent scrapes')
    select2('SF Weather', from: 'Sources')
    click_on 'SF Weather'
    expect(page).to have_content 'Editing your WeatherAgent'
  end
    
    describe ScenarioHelper do
  let(:scenario) { users(:bob).scenarios.build(name: 'Scene', tag_fg_color: '#AAAAAA', tag_bg_color: '#000000') }
    
            context 'when the schema_version is less than 1' do
          before do
            valid_parsed_weather_agent_data[:keep_events_for] = 2
            valid_parsed_data.delete(:schema_version)
          end
    
    describe AgentRunner do
  context 'without traps' do
    before do
      stub.instance_of(Rufus::Scheduler).every
      stub.instance_of(AgentRunner).set_traps
      @agent_runner = AgentRunner.new
    end
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
        def root_page?
      subpath.blank? || subpath == '/' || subpath == root_path
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
          def initialize(limit)
        @limit = limit
        @minute = nil
        @counter = 0
      end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
            css('header').each do |node|
          node.before(node.children).remove
        end
    
              # First determine the proper array of VMs.
          vms = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                # This is a regular expression name, so we convert to a regular
                # expression and allow that sort of matching.
                regex = Regexp.new(pattern)
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
            # This method will split the argv given into three parts: the
        # flags to this command, the subcommand, and the flags to the
        # subcommand. For example:
        #
        #     -v status -h -v
        #
        # The above would yield 3 parts:
        #
        #     ['-v']
        #     'status'
        #     ['-h', '-v']
        #
        # These parts are useful because the first is a list of arguments
        # given to the current command, the second is a subcommand, and the
        # third are the commands given to the subcommand.
        #
        # @return [Array] The three parts.
        def split_main_and_subcommand(argv)
          # Initialize return variables
          main_args   = nil
          sub_command = nil
          sub_args    = []
    
              results
        end
    
          @report_note = current_account.report_notes.new(resource_params)
      @report = @report_note.report
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
      def setting
    @_setting ||= ::Web::Setting.where(user: current_user).first_or_initialize(user: current_user)
  end
end

    
      private
    
          def preference_field_options(options)
        field_options = case options[:type]
                        when :integer
                          {
                            size: 10,
                            class: 'input_integer form-control'
                          }
                        when :boolean
                          {}
                        when :string
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        when :password
                          {
                            size: 10,
                            class: 'password_string form-control'
                          }
                        when :text
                          {
                            rows: 15,
                            cols: 85,
                            class: 'form-control'
                          }
                        else
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        end
    
      SPREE_GEMS.each do |gem_name|
    rm_f  '#{gem_name}/Gemfile.lock'
    rm_rf '#{gem_name}/pkg'
    rm_rf '#{gem_name}/spec/dummy'
  end
end
    
            def empty
          authorize! :update, @order, order_token
          @order.empty!
          render plain: nil, status: 204
        end
    
              def remove_store_credit_service
            Spree::Api::Dependencies.storefront_checkout_remove_store_credit_service.constantize
          end
    
          @@inventory_unit_attributes = [
        :id, :lock_version, :state, :variant_id, :shipment_id,
        :return_authorization_id
      ]