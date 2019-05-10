
        
        test_check 'alias'
class Alias0
  def foo; 'foo' end
end
class Alias1 < Alias0
  alias bar foo
  def foo; 'foo+' + super end
end
class Alias2 < Alias1
  alias baz foo
  undef foo
end
    
      context 'moving variants between shipments', js: true do
    before do
      create(:stock_location, name: 'LA')
      visit spree.admin_orders_path
      within_row(1) do
        click_link 'R100'
      end
    end
    
              if Spree::Dependencies.cart_update_service.constantize.call(order: @order, params: line_items_attributes).success?
            @line_item.reload
            respond_with(@line_item, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
            def product_params
          params.require(:product).permit(permitted_product_attributes)
        end
    
                render_serialized_payload { serialize_shipping_rates(result.value) }
          end
    
    run SinatraStaticServer

    
    end
Liquid::Template.register_filter OctopressLiquidFilters