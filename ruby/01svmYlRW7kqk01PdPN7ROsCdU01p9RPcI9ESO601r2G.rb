
        
        Given(/^the configuration is in a custom location$/) do
  TestApp.move_configuration_to_custom_location('app')
end
    
          class ValidatedQuestion < Question
        def initialize(validator)
          @validator = validator
        end
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end