
        
              if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
    Given(/^a task which executes as root$/) do
  TestApp.copy_task_to_test_app('spec/support/tasks/root.rake')
end
    
        private
    
          def fetch_primary(role)
        hosts = roles_for([role])
        hosts.find(&:primary) || hosts.first
      end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
            def log_state_changes
          if @order.previous_changes[:state]
            @order.log_state_changes(
              state_name: 'order',
              old_state: @order.previous_changes[:state].first,
              new_state: @order.previous_changes[:state].last
            )
          end
        end
    
              respond_with(@shipment, default_template: :show)
        end
    
              count_on_hand = 0
          if params[:stock_item].key?(:count_on_hand)
            count_on_hand = params[:stock_item][:count_on_hand].to_i
            params[:stock_item].delete(:count_on_hand)
          end