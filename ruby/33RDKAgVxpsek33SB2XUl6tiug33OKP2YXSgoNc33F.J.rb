
        
            def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
    module Devise
  module Controllers
    # Provide sign in and sign out functionality.
    # Included by default in all controllers.
    module SignInOut
      # Return true if the given scope is signed in session. If no scope given, return
      # true if any scope is signed in. This will run authentication hooks, which may
      # cause exceptions to be thrown from this method; if you simply want to check
      # if a scope has already previously been authenticated without running
      # authentication hooks, you can directly call `warden.authenticated?(scope: scope)`
      def signed_in?(scope=nil)
        [scope || Devise.mappings.keys].flatten.any? do |_scope|
          warden.authenticate?(scope: _scope)
        end
      end
    
          def add_fragment_back_to_path(uri, path)
        [path, uri.fragment].compact.join('#')
      end
    end
  end
end

    
    module Devise
  module Mailers
    module Helpers
      extend ActiveSupport::Concern
    
          accessors.each do |accessor|
        mod.class_eval <<-METHOD, __FILE__, __LINE__ + 1
          def #{accessor}
            if defined?(@#{accessor})
              @#{accessor}
            elsif superclass.respond_to?(:#{accessor})
              superclass.#{accessor}
            else
              Devise.#{accessor}
            end
          end
    
        def log_status(status)
      puts bold status
    end
    
      # Do not fallback to assets pipeline if a precompiled asset is missed.
  config.assets.compile = false
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end

    
          # Calls the given block for each `value` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_value
        return pairs.map(&:value).to_enum unless block_given?
    
          # Calls the given block for each condition node in the `when` branch.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_condition
        return conditions.to_enum(__method__) unless block_given?
    
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
    
      s.add_development_dependency 'capybara-accessible'
end

    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end
    
              inventory_unit.transaction do
            if inventory_unit.update_attributes(inventory_unit_params)
              fire
              render :show, status: 200
            else
              invalid_resource!(inventory_unit)
            end
          end
        end