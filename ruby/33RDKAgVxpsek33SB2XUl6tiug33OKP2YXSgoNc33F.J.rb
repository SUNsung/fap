
        
        class Api::V1::Instances::ActivityController < Api::BaseController
  before_action :require_enabled_api!
    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
        data = {
      alerts: {
        follow: alerts_enabled,
        favourite: alerts_enabled,
        reblog: alerts_enabled,
        mention: alerts_enabled,
      },
    }
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
    shared_examples 'no current order' do
  context 'order doesn't exist' do
    before do
      order.destroy
      execute
    end
    
        it 'returns proper error message' do
      expect(json_response['error']).to eq('The resource you were looking for could not be found.')
    end
  end
    
      shared_examples 'nested requested resources' do
    it 'are returned' do
      expect(json_response['included']).to be_present
      expect(json_response['included']).not_to include(have_type('variant').and have_id(default_variant.id.to_s))
      expect(json_response['included']).to include(have_type('option_type'))
      expect(json_response['included']).to include(have_type('option_value'))
    end
  end
    
        context 'with shipping country filtering' do
      let!(:new_country) { create(:country) }
      let!(:zone) { create(:zone) }
      let!(:shipping_method) { create(:shipping_method) }
      let!(:shippable_url) { '/api/v2/storefront/countries?filter[shippable]=true' }
      let!(:to_return) { shipping_method.zones.reduce([]) { |collection, zone| collection + zone.country_list } }
    
            variant = line_item.variant
        display_name = variant.name.to_s
        display_name += ' (#{variant.options_text})' unless variant.options_text.blank?
    
          def gateway_error(exception)
        @order.errors.add(:base, exception.message)
        invalid_resource!(@order)
      end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end
