
        
              spec['version'] = Bootstrap::VERSION
    
      # Enable locale fallbacks for I18n (makes lookups for any locale fall back to
  # the I18n.default_locale when a translation can not be found).
  config.i18n.fallbacks = true
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
          def order_time(time)
        [I18n.l(time.to_date), time.strftime('%l:%M %p').strip].join(' ')
      end
    end
  end
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
    
            def product_params
          params.require(:product).permit(permitted_product_attributes)
        end
    
          @@user_attributes = [:id, :email, :created_at, :updated_at]
    
        it 'accepts jsfiddle link with a custom-tab parameter' do
      expect do
        generate_new_liquid(jsfiddle_link_with_custom_tabs)
      end.not_to raise_error
    end