
        
            def to_json
      JSON.generate(as_json)
    end
  end
end

    
          def additional_options
        if self.class.internal_urls
          super.merge! \
            only: self.class.internal_urls.to_set,
            only_patterns: nil,
            skip: nil,
            skip_patterns: nil,
            skip_links: nil,
            fixed_internal_urls: true
        else
          super
        end
      end
    
        private
    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
            name = name.split(':').first
    
            within('#table-filter') do
          fill_in 'q_created_at_gt', with: '2018/01/01'
          fill_in 'q_created_at_lt', with: '2018/06/30'
          fill_in 'q_number_cont', with: 'R100'
          select 'cart', from: 'q_state_eq'
          select 'paid', from: 'q_payment_state_eq'
          select 'pending', from: 'q_shipment_state_eq'
          fill_in 'q_bill_address_firstname_start', with: 'John'
          fill_in 'q_bill_address_lastname_start', with: 'Smith'
          fill_in 'q_email_cont', with: 'john_smith@example.com'
          fill_in 'q_line_items_variant_sku_eq', with: 'BAG-00001'
          select 'Promo', from: 'q_promotions_id_in'
          select 'Spree Test Store', from: 'q_store_id_in'
          select 'spree', from: 'q_channel_eq'
        end
    
        it 'allows admin to create a variant if there are option types' do
      within_row(1) { click_icon :edit }
    
    desc 'Creates a sandbox application for simulating the Spree code in a deployed Rails app'
task :sandbox do
  Bundler.with_clean_env do
    exec('lib/sandbox.sh')
  end
end

    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end
