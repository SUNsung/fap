
        
            it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
        it 'returns a label 'Disabled' if a given agent is disabled' do
      stub(@agent).disabled? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Disabled'
    end
    
          @agent1.update!(disabled: true)
    
      def update
    response, status = process_push_request
    render plain: response, status: status
  end
    
        12.times do |i|
      day     = i.weeks.ago.to_date
      week_id = day.cweek
      week    = Date.commercial(day.cwyear, week_id)
    
      def request_locale
    preferred_locale || compatible_locale
  end
    
      def reset_period_offset
    api_throttle_data[:period] - request_time.to_i % api_throttle_data[:period]
  end
end

    
      included do
    before_action :set_session_activity
  end
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
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
    
          expect(page).to have_content('R200')
      expect(page).to have_content('incomplete@example.com')
    end
    
          # Order Form
      expect(page).not_to have_css('.edit-item')
      # Order Tabs
      expect(page).not_to have_link('Details')
      expect(page).not_to have_link('Customer')
      expect(page).not_to have_link('Adjustments')
      expect(page).not_to have_link('Payments')
      expect(page).not_to have_link('Returns')
    end
    
          within_row(1) { click_icon :split }
      wait_for_ajax
      targetted_select2 'LA', from: '#s2id_item_stock_location'
      click_icon :'save-split'
      wait_for_ajax
      expect(page.find('#shipment_#{order.shipments.first.id}')).to be_present
    
            def order
          @order ||= Spree::Order.includes(:line_items).find_by!(number: order_id)
          authorize! :update, @order, order_token
        end