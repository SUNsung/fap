
        
              def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        def default_used_route(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
          # Update password saving the record and clearing token. Returns true if
      # the passwords are valid and the record was saved, false otherwise.
      def reset_password(new_password, new_password_confirmation)
        if new_password.present?
          self.password = new_password
          self.password_confirmation = new_password_confirmation
          save
        else
          errors.add(:password, :blank)
          false
        end
      end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
          # Main menu tree menu
      def main_menu_tree(text, icon: nil, sub_menu: nil, url: '#')
        content_tag :li, class: 'sidebar-menu-item d-block w-100' do
          main_menu_item(text, url: url, icon: icon) +
            render(partial: 'spree/admin/shared/sub_menu/#{sub_menu}')
        end
      end
    
            context 'there is enough stock at the other location' do
          it 'allows me to make a split' do
            expect(order.shipments.count).to eq(1)
            expect(order.shipments.first.inventory_units_for(product.master).sum(&:quantity)).to eq(2)
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
            before_action :find_order, except: [:create, :mine, :current, :index, :update, :remove_coupon_code]
    
              def shipping_rates
            result = shipping_rates_service.call(order: spree_current_order)
    
          @@user_attributes = [:id, :email, :created_at, :updated_at]