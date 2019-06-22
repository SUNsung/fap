
        
            def relative_url_string?(str)
      str !~ SCHEME_RGX && !fragment_url_string?(str) && !data_url_string?(str)
    end
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
        def html?
      mime_type.include? 'html'
    end
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
            @response = (gets || '').chomp
      end
    
            def fetch(key)
          @properties[key]
        end
    
          def fetch_primary(role)
        hosts = roles_for([role])
        hosts.find(&:primary) || hosts.first
      end
    
            value_to_evaluate = block || value
    
            selected_option = params[:per_page].try(:to_i) || per_page_default
    
          it 'can be used with search filtering' do
        click_on 'Filter'
        fill_in 'q_number_cont', with: 'R200'
        click_on 'Filter Results'
        expect(page).not_to have_content('R100')
        within_row(1) { expect(page).to have_content('R200') }
        expect(current_url).to match(/per_page\=45/)
        expect(page).to have_select('per_page', selected: '45')
        select '60', from: 'per_page'
        wait_for_ajax
        expect(page).to have_select('per_page', selected: '60')
        expect(page).to have_selector(:css, 'select.per-page-selected-60')
        expect(page).not_to have_content('R100')
        within_row(1) { expect(page).to have_content('R200') }
        expect(current_url).to match(/per_page\=60/)
      end
    end
    
                if handler.error.present?
              @coupon_message = handler.error
              respond_with(@order, default_template: 'spree/api/v1/orders/could_not_apply_coupon', status: 422)
              return true
            end
          end
          false
        end
    
              @line_item = Spree::Dependencies.cart_add_item_service.constantize.call(order: order,
                                                                                  variant: variant,
                                                                                  quantity: params[:line_item][:quantity],
                                                                                  options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
                result = add_store_credit_service.call(
              order: spree_current_order,
              amount: params[:amount].try(:to_f)
            )
    
          @@tag_attributes = [:id, :name]