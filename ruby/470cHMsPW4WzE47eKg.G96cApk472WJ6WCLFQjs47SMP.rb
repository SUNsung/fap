
        
            def initialize
      @pages = {}
    end
    
            css('br', 'hr', '.material-icons', '.header-link', '.breadcrumb').remove
    
      it { is_expected.to change(Notification, :count).by(1) }
    
        @account = account
    @poll    = poll
    @choices = choices
    @votes   = []
    
          expect(response).to redirect_to(settings_preferences_other_path)
      user.reload
      expect(user.locale).to eq 'en'
      expect(user.chosen_languages).to eq ['es', 'fr']
    end
    
          expect(response).to redirect_to(settings_preferences_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
          if resource.blank?
        resource = new(email: attributes[:mail].first, agreement: true, account_attributes: { username: attributes[Devise.ldap_uid.to_sym].first })
        resource.ldap_setup(attributes)
      end
    
        old_account.update!(uri: 'https://example.org/alice', domain: 'example.org', protocol: :activitypub, inbox_url: 'https://example.org/inbox')
    new_account.update!(uri: 'https://example.com/alice', domain: 'example.com', protocol: :activitypub, inbox_url: 'https://example.com/inbox', also_known_as: [old_account.uri])
    
          before do
        subject.perform
      end
    
      expect(status).to be_success
end
    
          OptionParser.new do |opts|
        opts.banner = 'See full documentation at http://capistranorb.com/.'
        opts.separator ''
        opts.separator 'Install capistrano in a project:'
        opts.separator '    bundle exec cap install [STAGES=qa,staging,production,...]'
        opts.separator ''
        opts.separator 'Show available tasks:'
        opts.separator '    bundle exec cap -T'
        opts.separator ''
        opts.separator 'Invoke (or simulate invoking) a task:'
        opts.separator '    bundle exec cap [--dry-run] STAGE TASK'
        opts.separator ''
        opts.separator 'Advanced options:'
    
          def trusted_keys
        @trusted_keys.dup
      end
    
        it { expect(alias_node.new_identifier.sym_type?).to be(true) }
    it { expect(alias_node.new_identifier.children.first).to eq(:foo) }
  end
    
          it { expect(class_node.body.send_type?).to be(true) }
    end
    
      describe '.new' do
    let(:source) do
      'class << self; end'
    end
    
      context 'when a variable is assigned and unreferenced in a class' do
    it 'registers an offense' do
      expect_offense(<<~RUBY)
        1.times do
          foo = 1
          puts foo
          class SomeClass
            foo = 2
            ^^^ Useless assignment to variable - `foo`.
            bar = 3
            puts bar
          end
        end
      RUBY
    end
  end
    
        expect(new_source).to eq(<<~RUBY)
      def foo
        raise(<<-FAIL) if true
          boop
        FAIL
    
          # Checks whether this `block` literal belongs to a lambda.
      #
      # @return [Boolean] whether the `block` literal belongs to a lambda
      def lambda?
        send_node.method?(:lambda)
      end
    
            if obj && obj.errors[method].present?
          errors = safe_join(obj.errors[method], '<br />'.html_safe)
          content_tag(:span, errors, class: 'formError')
        else
          ''
        end
      end
    
          # users should be able to set price when importing orders via api
      def permitted_line_item_attributes
        if @current_user_roles.include?('admin')
          super + [:price, :variant_id, :sku]
        else
          super
        end
      end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def inventory_unit
          @inventory_unit ||= InventoryUnit.accessible_by(current_ability, :show).find(params[:id])
        end
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
          authorize! :show, @order, order_token
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
              Spree::Dependencies.cart_remove_item_service.constantize.call(order: @shipment.order,
                                                                        variant: variant,
                                                                        quantity: quantity,
                                                                        options: { shipment: @shipment })
    
            private
    
            def update
          authorize! :update, taxon
          if taxon.update(taxon_params)
            respond_with(taxon, status: 200, default_template: :show)
          else
            invalid_resource!(taxon)
          end
        end