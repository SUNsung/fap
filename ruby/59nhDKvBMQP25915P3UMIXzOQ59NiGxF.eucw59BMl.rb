
        
        RSpec::Matchers.define :have_value do |expected|
  match do |actual|
    await_condition { actual.value && actual.value.include?(expected) }
  end
    
          def preference_field_for(form, field, options)
        case options[:type]
        when :integer
          form.text_field(field, preference_field_options(options))
        when :boolean
          form.check_box(field, preference_field_options(options))
        when :string
          form.text_field(field, preference_field_options(options))
        when :password
          form.password_field(field, preference_field_options(options))
        when :text
          form.text_area(field, preference_field_options(options))
        else
          form.text_field(field, preference_field_options(options))
        end
      end
    
          # Main menu tree menu
      def main_menu_tree(text, icon: nil, sub_menu: nil, url: '#')
        content_tag :li, class: 'sidebar-menu-item d-block w-100' do
          main_menu_item(text, url: url, icon: icon) +
            render(partial: 'spree/admin/shared/sub_menu/#{sub_menu}')
        end
      end
    
                expect(order.shipments.count).to eq(1)
            expect(order.shipments.first.inventory_units_for(product.master).sum(&:quantity)).to eq(2)
            expect(order.shipments.first.stock_location.id).to eq(stock_location.id)
          end
    
      let!(:order) { create(:order_ready_to_ship, number: 'R100', state: 'complete', line_items_count: 5) }
    
          within('#sidebar') { click_link 'Variants' }
      expect(page).to have_content('To add variants, you must first define')
    end
    
              def serialize_order(order)
            resource_serializer.new(order.reload, include: resource_includes, fields: sparse_fields).serializable_hash
          end
    
        def self.names_for(klass)
      instance.names_for(klass)
    end
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
    end