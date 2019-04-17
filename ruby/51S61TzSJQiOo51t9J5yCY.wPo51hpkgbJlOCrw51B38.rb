
        
              context 'when f.lib or f.include is a directory' do
        it 'gives command to be run when f.lib is a directory' do
          Pathname.new(f.lib).mkpath
          expect(caveats).to include('-L#{f.opt_lib}')
        end
    
        def byte_to_str_pos(pos)
      @s.string.byteslice(0, pos).length
    end
    
          I18N_PLURAL_MANY_COUNT = 2.1
      def plural_resource_name(resource_class)
        resource_class.model_name.human(count: I18N_PLURAL_MANY_COUNT)
      end
    
          # the per_page_dropdown is used on index pages like orders, products, promotions etc.
      # this method generates the select_tag
      def per_page_dropdown
        # there is a config setting for admin_products_per_page, only for the orders page
        if @products && per_page_default = Spree::Config.admin_products_per_page
          per_page_options = []
          5.times do |amount|
            per_page_options << (amount + 1) * Spree::Config.admin_products_per_page
          end
        else
          per_page_default = Spree::Config.admin_orders_per_page
          per_page_options = %w{15 30 45 60}
        end
    
          # Insure checkbox still checked
      expect(find('#q_considered_risky_eq')).to be_checked
      # Insure we have the risky order, R100
      within_row(1) do
        expect(page).to have_content('R100')
      end
      # Insure the non risky order is not present
      expect(page).not_to have_content('R200')
    end
    
      context 'with only read permissions' do
    before do
      allow_any_instance_of(Spree::Admin::BaseController).to receive(:spree_current_user).and_return(nil)
    end
    
              def serialize_order(order)
            resource_serializer.new(order.reload, include: resource_includes, fields: sparse_fields).serializable_hash
          end