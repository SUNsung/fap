
        
                # only send one rejection email per day to the same email address
        if can_send_rejection_email?(message.from, message_template)
          Email::Sender.new(client_message, message_template).send
        end
      end
    
        if group.automatic
      can_not_modify_automatic
    else
      group.destroy!
      render json: success_json
    end
  end
    
      it 'works when default_locale is English' do
    SiteSetting.default_locale = :en
    
        attr_reader :filters
    
        def type=(value)
      @type = value.try :strip
    end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
              if mod.const_defined?('ClassMethods')
            class_mod = mod.const_get('ClassMethods')
            extend class_mod
    
            # Recreate the user based on the stored cookie
        def serialize_from_cookie(*args)
          id, token, generated_at = *args
    
    # Unset all host plugins so that we aren't executing subprocess things
# to detect a host for every test.
Vagrant.plugin('2').manager.registered.dup.each do |plugin|
  if plugin.components.hosts.to_hash.length > 0
    Vagrant.plugin('2').manager.unregister(plugin)
  end
end
    
          subject.call(env)
    
        it 'should sort them in order of name, version, provider' do
      a = described_class.new('a', :foo, '1.0', directory)
      b = described_class.new('a', :foo2, '1.0', directory)
      c = described_class.new('a', :foo2, '1.1', directory)
      d = described_class.new('b', :foo2, '1.0', directory)
    
              @logger.info('Checking for Chef installation...')
          installer = Installer.new(@machine,
            product: config.product,
            channel: config.channel,
            version: config.version,
            omnibus_url: config.omnibus_url,
            force: config.install == :force,
            download_path:  config.installer_download_path
          )
          installer.ensure_installed
        end
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
        # returns the formatted price for the specified variant as a difference from product price
    def variant_price_diff(variant)
      variant_amount = variant.amount_in(current_currency)
      product_amount = variant.product.amount_in(current_currency)
      return if variant_amount == product_amount || product_amount.nil?
    
        def can_credit?
      credit_allowed > 0
    end
    
          def subtotal
        order.item_total * exchange_multiplier
      end
    
            def self.create_adjustments_from_params(adjustments, order, adjustable = nil)
          return [] unless adjustments
    
                it 'deducts the default vat and applies the foreign vat to calculate the price' do
              shipping_rates = subject.shipping_rates(package)
              #
              # deduct default vat: 4.00 / 1.2 = 3.33 (rounded)
              # apply foreign vat: 3.33 * 1.3 = 4.33 (rounded)
              expect(shipping_rates.first.cost).to eq(4.33)
            end
          end
        end
      end
    end
  end
end

    
            def destroy
          @image = scope.images.accessible_by(current_ability, :destroy).find(params[:id])
          @image.destroy
          respond_with(@image, status: 204)
        end
    
            private
    
            def create
          authorize! :create, ProductProperty
          @product_property = @product.product_properties.new(product_property_params)
          if @product_property.save
            respond_with(@product_property, status: 201, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end