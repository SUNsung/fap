
        
                # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # This contains all the push implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Hash>>]
        attr_reader :pushes
    
            # This returns all registered providers.
        #
        # @return [Hash]
        def providers
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.providers)
            end
          end
        end
    
              hook_name ||= ALL_ACTIONS
          components.action_hooks[hook_name.to_sym] << block
        end
    
        # Returns an array populated with the keys of this object.
    #
    # @return [Array]
    def keys
      @items.keys
    end
    
        context 'on a post from a contact' do
      before do
        aspect_to_post = bob.aspects.where(:name => 'generic').first
        @post = bob.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
      describe '#destroy' do
    before do
      sign_in @user, scope: :user
    end
    it 'redirects to / for a non-mobile user' do
      delete :destroy
      expect(response).to redirect_to new_user_session_path
    end
    
          it 'it doesn't call toggle_hidden_shareable' do
        expect(@controller.current_user).not_to receive(:toggle_hidden_shareable).with(an_instance_of(StatusMessage))
        begin
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        rescue ActiveRecord::RecordNotFound
        end
      end
    end
  end
end

    
                within_row(1) { click_icon 'split' }
            targetted_select2 @shipment2.number, from: '#s2id_item_stock_location'
            fill_in 'item_quantity', with: 1
            click_icon :save
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
              if Spree::Dependencies.cart_update_service.constantize.call(order: @order, params: line_items_attributes).success?
            @line_item.reload
            respond_with(@line_item, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
          if data.code.to_i != 200
        raise RuntimeError, 'Gist replied with #{data.code} for #{gist_url}'
      end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end