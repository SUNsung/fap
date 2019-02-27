
        
                context 'with nested resources' do
          before { get '/api/v2/storefront/products/#{product.id}?include=option_types,option_types.option_values' }
    
          it_behaves_like 'returns valid cart JSON'
    end
    
          it 'returns account data with included default billing address' do
        expect(json_response['included']).to    include(have_type('address'))
        expect(json_response['included'][0]).to eq(Spree::V2::Storefront::AddressSerializer.new(user.billing_address).as_json['data'])
      end
    end
    
          it 'with success' do
        expect(order.line_items.count).to eq(2)
        expect(order.line_items.last.variant).to eq(variant)
        expect(order.line_items.last.quantity).to eq(5)
        expect(json_response['included']).to include(have_type('variant').and(have_id(variant.id.to_s)))
      end
    
          it 'returns country by iso' do
        expect(json_response['data']).to have_id(country.id.to_s)
        expect(json_response['data']).to have_attribute(:iso).with_value(country.iso)
        expect(json_response['data']).to have_attribute(:iso3).with_value(country.iso3)
        expect(json_response['data']).to have_attribute(:iso_name).with_value(country.iso_name)
        expect(json_response['data']).to have_attribute(:name).with_value(country.name)
        expect(json_response['data']).to have_attribute(:default).with_value(country == Spree::Country.default)
        expect(json_response['data']).to have_attribute(:states_required).with_value(country.states_required)
        expect(json_response['data']).to have_attribute(:zipcode_required).with_value(country.zipcode_required)
      end
    end
    
        context 'as a guest user with token' do
      before { get '/api/v2/storefront/order_status/#{order.number}', headers: headers_order_token }
    
                resource
          end