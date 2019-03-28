
        
        #############################################################################
#
# Standard tasks
#
#############################################################################
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
            # For a description of the protocol see
        # http://feedback.livereload.com/knowledgebase/articles/86174-livereload-protocol
        def reload(pages)
          pages.each do |p|
            json_message = JSON.dump(
              :command => 'reload',
              :path    => p.url,
              :liveCSS => true
            )
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          # Set up a subject doing an I18n lookup. At first, it attempts to set a subject
      # based on the current mapping:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           user_subject: '...'
      #
      # If one does not exist, it fallbacks to ActionMailer default:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           subject: '...'
      #
      def subject_for(key)
        I18n.t(:'#{devise_mapping.name}_subject', scope: [:devise, :mailer, key],
          default: [:subject, key.to_s.humanize])
      end
    end
  end
end

    
    require 'devise/models/authenticatable'

    
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

    
                  expect(order.shipments.count).to eq(1)
              expect(order.shipments.first.inventory_units_for(product.master).sum(&:quantity)).to eq(2)
              expect(order.shipments.first.stock_location.id).to eq(stock_location.id)
            end
          end
    
        def flash_messages(opts = {})
      ignore_types = ['order_completed'].concat(Array(opts[:ignore_types]).map(&:to_s) || [])
    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end
    
          rescue_from ActionController::ParameterMissing, with: :error_during_processing
      rescue_from ActiveRecord::RecordInvalid, with: :error_during_processing
      rescue_from ActiveRecord::RecordNotFound, with: :not_found
      rescue_from CanCan::AccessDenied, with: :unauthorized
      rescue_from Spree::Core::GatewayError, with: :gateway_error
    
              state = @states.last
          respond_with(@states) if stale?(state)
        end
    
    When /^(?:|I )choose '([^']*)'$/ do |field|
  choose(field)
end
    
        def raise_because_imagemagick_missing
      raise Errors::CommandNotFoundError.new('Could not run the `identify` command. Please install ImageMagick.')
    end
  end
end
