
        
        module Docs
  class Filter < ::HTML::Pipeline::Filter
    def css(*args)
      doc.css(*args)
    end
    
        def request_one(url)
      Request.run url, request_options
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
      # Returns real navigational formats which are supported by Rails
  def navigational_formats
    @navigational_formats ||= Devise.navigational_formats.select { |format| Mime::EXTENSION_LOOKUP[format.to_s] }
  end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
    module Devise
  module Mailers
    module Helpers
      extend ActiveSupport::Concern
    
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
    
          # Checks whether the user session has expired based on configured time.
      def timedout?(last_access)
        !timeout_in.nil? && last_access && last_access <= timeout_in.ago
      end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
              # Setup the options hash
          options ||= {}
    
            # Returns the {Components} for this plugin.
        #
        # @return [Components]
        def self.components
          @components ||= Components.new
        end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is installed. This should return true or false.
        #
        # If the provider is not installed and Vagrant determines it is
        # able to install this provider, then it will do so. Installation
        # is done by calling Environment.install_provider.
        #
        # If Environment.can_install_provider? returns false, then an error
        # will be shown to the user.
        def self.installed?
          # By default return true for backwards compat so all providers
          # continue to work.
          true
        end
    
        # Get a value by the given key.
    #
    # This will evaluate the block given to `register` and return the
    # resulting value.
    def get(key)
      return nil if !@items.key?(key)
      return @results_cache[key] if @results_cache.key?(key)
      @results_cache[key] = @items[key].call
    end
    alias :[] :get
    
        pod 'ObjCPod', path: 'ObjCPod'
    pod 'SwiftPod', path: 'SwiftPod'
    pod 'MixedPod', path: 'MixedPod'
    pod 'CustomModuleMapPod', path: 'CustomModuleMapPod'
    
          def executable_path
        <<-EOS
### Installation Source
    
          # renders hidden field and link to remove record using nested_attributes
      def link_to_icon_remove_fields(form)
        url = form.object.persisted? ? [:admin, form.object] : '#'
        link_to_with_icon('delete', '', url,
                          class: 'spree_remove_fields btn btn-sm btn-danger',
                          data: {
                            action: 'remove'
                          },
                          title: Spree.t(:remove),
                          no_text: true
                         ) + form.hidden_field(:_destroy)
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
    
                expect(order.shipments.count).to eq(1)
            expect(order.shipments.first.inventory_units_for(product.master).sum(&:quantity)).to eq(2)
            expect(order.shipments.first.stock_location.id).to eq(stock_location.id)
          end
    
              def render_order(result)
            if result.success?
              render_serialized_payload { serialized_current_order }
            else
              render_error_payload(result.error)
            end
          end
    
                respond_with(@order, default_template: :show, status: 201)
          else
            @order = Spree::Order.create!(user: current_api_user, store: current_store)
            if Cart::Update.call(order: @order, params: order_params).success?
              respond_with(@order, default_template: :show, status: 201)
            else
              invalid_resource!(@order)
            end
          end
        end
    
              @stock_item = scope.new(stock_item_params)
          if @stock_item.save
            @stock_item.adjust_count_on_hand(count_on_hand)
            respond_with(@stock_item, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_item)
          end
        end