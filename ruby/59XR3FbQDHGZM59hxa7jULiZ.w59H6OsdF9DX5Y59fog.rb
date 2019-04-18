
        
                class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
            attr_reader :symbol
    
          def test_controller_raise_error_about_missing_helper
        e = assert_raise(AbstractController::Helpers::MissingHelperError) { AbstractInvalidHelpers.helper(:missing) }
        assert_equal 'Missing helper file helpers/missing_helper.rb', e.message
      end
    
        class WithConditionalOverride < WithString
      layout 'overwrite', only: :overwritten
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
                active_machines.each do |active_name, active_provider|
              if name == active_name
                # We found an active machine with the same name
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V2 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
    def piece(n, a, nb)
  nb.each{|x|
    a[n] = x
    if n == NP-1
      $p << [a.sort]
    else
      nbc=nb.dup
      [-ROW, -1, 1, ROW].each{|d|
        if x+d > 0 and not a.include?(x+d) and not nbc.include?(x+d)
          nbc << x+d
        end
      }
      nbc.delete x
      piece(n+1,a[0..n],nbc)
    end
  }
end
    
        context 'filter on shipment state' do
      it 'only shows the orders with the selected shipment state' do
        select Spree.t('payment_states.#{order1.shipment_state}'), from: 'Shipment State'
        click_on 'Filter Results'
        within_row(1) { expect(page).to have_content('R100') }
        within('table#listing_orders') { expect(page).not_to have_content('R200') }
      end
    end
    
      context 'moving variants between shipments', js: true do
    before do
      create(:stock_location, name: 'LA')
      visit spree.admin_orders_path
      within_row(1) do
        click_link 'R100'
      end
    end
    
          within('#sidebar') { click_link 'Variants' }
      click_link 'Option Values'
      click_link 'new_option_type_link'
      fill_in 'option_type_name', with: 'shirt colors'
      fill_in 'option_type_presentation', with: 'colors'
      click_button 'Create'
      expect(page).to have_content('successfully created!')
    
              def spree_current_order
            @spree_current_order ||= find_spree_current_order
          end