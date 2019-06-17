
        
            def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          def add_fragment_back_to_path(uri, path)
        [path, uri.fragment].compact.join('#')
      end
    end
  end
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
  module Models
    # Rememberable manages generating and clearing token for remembering the user
    # from a saved cookie. Rememberable also has utility methods for dealing
    # with serializing the user into the cookie and back from the cookie, trying
    # to lookup the record based on the saved information.
    # You probably wouldn't use rememberable methods directly, they are used
    # mostly internally for handling the remember token.
    #
    # == Options
    #
    # Rememberable adds the following options in devise_for:
    #
    #   * +remember_for+: the time you want the user will be remembered without
    #     asking for credentials. After this time the user will be blocked and
    #     will have to enter their credentials again. This configuration is also
    #     used to calculate the expires time for the cookie created to remember
    #     the user. By default remember_for is 2.weeks.
    #
    #   * +extend_remember_period+: if true, extends the user's remember period
    #     when remembered via cookie. False by default.
    #
    #   * +rememberable_options+: configuration options passed to the created cookie.
    #
    # == Examples
    #
    #   User.find(1).remember_me!  # regenerating the token
    #   User.find(1).forget_me!    # clearing the token
    #
    #   # generating info to put into cookies
    #   User.serialize_into_cookie(user)
    #
    #   # lookup the user based on the incoming cookie information
    #   User.serialize_from_cookie(cookie_string)
    module Rememberable
      extend ActiveSupport::Concern
    
            within('.table-active-filters') do
          expect(page).to have_content('Start: 2018/01/01')
          expect(page).to have_content('Stop: 2018/06/30')
          expect(page).to have_content('Order: R100')
          expect(page).to have_content('Status: cart')
          expect(page).to have_content('Payment State: paid')
          expect(page).to have_content('Shipment State: pending')
          expect(page).to have_content('First Name Begins With: John')
          expect(page).to have_content('Last Name Begins With: Smith')
          expect(page).to have_content('Email: john_smith@example.com')
          expect(page).to have_content('SKU: BAG-00001')
          expect(page).to have_content('Promotion: Promo')
          expect(page).to have_content('Store: Spree Test Store')
          expect(page).to have_content('Channel: spree')
        end
      end
    end
  end
end

    
            def line_items_attributes
          { line_items_attributes: {
            id: params[:id],
            quantity: params[:line_item][:quantity],
            options: line_item_params[:options] || {}
          } }
        end
    
            # Takes besides the products attributes either an array of variants or
        # an array of option types.
        #
        # By submitting an array of variants the option types will be created
        # using the *name* key in options hash. e.g
        #
        #   product: {
        #     ...
        #     variants: {
        #       price: 19.99,
        #       sku: 'hey_you',
        #       options: [
        #         { name: 'size', value: 'small' },
        #         { name: 'color', value: 'black' }
        #       ]
        #     }
        #   }
        #
        # Or just pass in the option types hash:
        #
        #   product: {
        #     ...
        #     option_types: ['size', 'color']
        #   }
        #
        # By passing the shipping category name you can fetch or create that
        # shipping category on the fly. e.g.
        #
        #   product: {
        #     ...
        #     shipping_category: 'Free Shipping Items'
        #   }
        #
        def new; end
    
        def panes?
      panes.any?
    end
    
      shared_context 'window command context' do
    let(:project) { double(:project) }
    let(:window) { described_class.new(yaml, 0, project) }
    let(:root?) { true }
    let(:root) { '/project/tmuxinator' }
    
          context 'existing project doesn't exist' do
        before do
          allow(File).to receive(:exist?).at_least(:once) do
            false
          end
        end
    
        def synchronize_options
      window_options.map do |option|
        option['synchronize'] if option.is_a?(Hash)
      end
    end