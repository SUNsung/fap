
        
              def hash_methods
        [
          :email,
          :customer,
          :customer_id,
          :ip,
          :order_id,
          :shipping,
          :tax,
          :subtotal,
          :discount,
          :currency,
          :billing_address,
          :shipping_address
        ]
      end
    
    module Spree
  class Payment < Spree::Base
    module Processing
      extend ActiveSupport::Concern
      included do
        class_attribute :gateway_options_class
        self.gateway_options_class = Spree::Payment::GatewayOptions
      end
    
          return_items.group_by(&:exchange_variant).map do |variant, variant_return_items|
        variant_inventory_units = variant_return_items.map(&:exchange_inventory_units).flatten
        line_item = Spree::LineItem.create!(variant: variant, quantity: variant_return_items.count, order: order)
        variant_inventory_units.each { |i| i.update!(line_item_id: line_item.id, order_id: order.id) }
      end
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def option_type_params
          params.require(:option_type).permit(permitted_option_type_attributes)
        end
      end
    end
  end
end

    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :show).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :show).find_by!(name: params[:id])
        end