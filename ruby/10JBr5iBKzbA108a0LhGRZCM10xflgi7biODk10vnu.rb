
        
          url = File.dirname(url)
  url == FORWARD_SLASH ? url : '#{url}/'
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
    end

    
    describe Rufus::Scheduler do
  before :each do
    Agent.delete_all
    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        it 'redirects to /stream for a mobile user' do
      request.headers['X_MOBILE_DEVICE'] = true
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
            def key_delta(alignment = :left)
          return 0 if first.same_line?(second)
          return 0 if keyword_splat? && alignment == :right
    
            def swap_range(corrector, range1, range2)
          src1 = range1.source
          src2 = range2.source
          corrector.replace(range1, src2)
          corrector.replace(range2, src1)
        end
      end
    end
  end
end

    
            def message_for_normal_block(variable, all_arguments)
          if all_arguments.none?(&:referenced?) &&
             !define_method_call?(variable)
            if all_arguments.count > 1
              'You can omit all the arguments if you don't care about them.'
            else
              'You can omit the argument if you don't care about it.'
            end
          else
            message_for_underscore_prefix(variable)
          end
        end
    
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
    
          # Single main menu item
      def main_menu_item(text, url: nil, icon: nil)
        link_to url, 'data-toggle': 'collapse', class: 'd-flex w-100 p-3 position-relative align-items-center' do
          content_tag(:span, nil, class: 'icon icon-#{icon} mr-2') +
            content_tag(:span, ' #{text}', class: 'text') +
            content_tag(:span, nil, class: 'icon icon-chevron-left position-absolute')
        end
      end
    
            def load_order_with_lock
          load_order(true)
        end
    
              def shipping_rates
            result = shipping_rates_service.call(order: spree_current_order)
    
          @@address_attributes = [
        :id, :firstname, :lastname, :full_name, :address1, :address2, :city,
        :zipcode, :phone, :company, :alternative_phone, :country_id, :state_id,
        :state_name, :state_text
      ]