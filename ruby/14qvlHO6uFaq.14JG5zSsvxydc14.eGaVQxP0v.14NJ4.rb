
        
                class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      def app
    Rails.application
  end
end

    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
          def error_message_on(object, method, _options = {})
        object = convert_to_model(object)
        obj = object.respond_to?(:errors) ? object : instance_variable_get('@#{object}')
    
            options[:class] = 'sidebar-menu-item d-block w-100'
        options[:class] << ' selected' if is_selected
        content_tag(:li, options) do
          link_to(link_text, url, class: '#{'text-success' if is_selected} py-1 px-3 d-block sidebar-submenu-item')
        end
      end
    
      describe 'listing orders' do
    it 'lists existing orders' do
      within_row(1) do
        expect(column_text(2)).to eq 'R100'
        expect(find('td:nth-child(3)')).to have_css '.badge-considered_risky'
        expect(column_text(4)).to eq 'cart'
      end
    
          page.find('#option_type_option_values_attributes_0_name').set('color')
      page.find('#option_type_option_values_attributes_0_presentation').set('black')
      click_button 'Update'
      expect(page).to have_content('successfully updated!')