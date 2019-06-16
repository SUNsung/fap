
        
          def self.link(title)
    title.downcase.gsub(/(?!-)\W /, '-').gsub(' ', '-').gsub(/(?!-)\W/, '')
  end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
          def main_part_classes
        if cookies['sidebar-minimized'] == 'true'
          'col-12 sidebar-collapsed'
        else
          'col-9 offset-3 col-md-10 offset-md-2'
        end
      end
    
    task default: :test
    
                respond_with(@order, default_template: :show, status: 201)
          else
            @order = Spree::Order.create!(user: current_api_user, store: current_store)
            if Cart::Update.call(order: @order, params: order_params).success?
              respond_with(@order, default_template: :show, status: 201)
            else
              invalid_resource!(@order)
            end
          end
        end