
        
              # A helper class for comparing the positions of different parts of a
      # `pair` node.
      class HashElementDelta
        def initialize(first, second)
          @first = first
          @second = second
    
          # Checks whether the `when` node has a `then` keyword.
      #
      # @return [Boolean] whether the `when` node has a `then` keyword
      def then?
        loc.begin && loc.begin.is?('then')
      end
    
          it 'renders selected filters' do
        click_on 'Filter'
    
      context 'moving variants between shipments', js: true do
    before do
      create(:stock_location, name: 'LA')
      visit spree.admin_orders_path
      within_row(1) do
        click_link 'R100'
      end
    end
    
          if simple_current_order.nil? || simple_current_order.item_count.zero?
        text = '<span class='glyphicon glyphicon-shopping-cart'></span> #{text}: (#{Spree.t('empty')})'
        css_class = 'empty'
      else
        text = '<span class='glyphicon glyphicon-shopping-cart'></span> #{text}: (#{simple_current_order.item_count})
                <span class='amount'>#{simple_current_order.display_total.to_html}</span>'
        css_class = 'full'
      end
    
      SPREE_GEMS.each do |gem_name|
    rm_f  '#{gem_name}/Gemfile.lock'
    rm_rf '#{gem_name}/pkg'
    rm_rf '#{gem_name}/spec/dummy'
  end
end
    
                if @order.completed? || @order.next
              state_callback(:after)
              respond_with(@order, default_template: 'spree/api/v1/orders/show')
            else
              respond_with(@order, default_template: 'spree/api/v1/orders/could_not_transition', status: 422)
            end
          else
            invalid_resource!(@order)
          end
        end
    
              @products = @products.distinct.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@products)
        end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
            def update
          @stock_item = StockItem.accessible_by(current_ability, :update).find(params[:id])
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
        def params
      indifferent_hash = Hash.new {|hash,key| hash[key.to_s] if Symbol === key }
    
        def post(path, &block)
      route(POST, path, &block)
    end