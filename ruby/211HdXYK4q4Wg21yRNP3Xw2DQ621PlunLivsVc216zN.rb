
        
        require 'cases/helper'
require 'models/numeric_data'
    
        def test_migrate_revert_change_column_default
      migration1 = ChangeColumnDefault1.new
      migration1.migrate(:up)
      Horse.reset_column_information
      assert_equal 'Sekitoba', Horse.new.name
    
        before_action :ensure_configured
    
        initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
      # `config.assets.precompile` and `config.assets.version` have moved to config/initializers/assets.rb
    
            def to_s
          @symbol.to_s
        end
        alias to_str to_s
    
          it 'activates an existing user' do
        users(:bob).deactivate!
        visit admin_users_path
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/activate']').click
        expect(page).to have_no_text('inactive')
        users(:bob).reload
        expect(users(:bob)).to be_active
      end
    end
  end
end

    
          click_on 'Save'
    
        it 'returns a label 'Yes' if a given agent is working' do
      stub(@agent).working? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Yes'
    end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
                scenario_import.merges = {
              '0' => {
                'name' => 'a new name',
                'schedule' => '6pm',
                'keep_events_for' => 2.days.to_i.to_s,
                'disabled' => 'true',
                'options' => weather_agent_options.merge('api_key' => 'foo').to_json
              }
            }
    
        @scheduler = Rufus::Scheduler.new
    
        let(:validator) { described_class.new(attributes: [attribute]) }
    let(:record)    { double(errors: errors) }
    let(:errors)    { double(add: nil) }
    let(:value)     { '' }
    let(:attribute) { :foo }
    
        grouped_codes = codes.reduce([]) do |agg, current|
      if current[1]
        agg << [current[0]]
      else
        agg.last << current[0]
        agg
      end
    end
    
        context 'with unlocked account' do
      let(:locked) { false }
    
          described_class.new.validate(follow)
    end
    
      def eligible_users
    User.emailable
        .where('current_sign_in_at < ?', (FREQUENCY + SIGN_IN_OFFSET).ago)
        .where('last_emailed_at IS NULL OR last_emailed_at < ?', FREQUENCY.ago)
  end
end

    
      it 'does still notify when sender\'s domain is blocked but sender is followed' do
    recipient.block_domain!(sender.domain)
    recipient.follow!(sender)
    is_expected.to change(Notification, :count)
  end
    
        context 'when the sender is relayed' do
      let!(:relay_account) { Fabricate(:account, inbox_url: 'https://relay.example.com/inbox') }
      let!(:relay) { Fabricate(:relay, inbox_url: 'https://relay.example.com/inbox') }
    
          ba.wrapper tag: :div, class: :label_input__wrapper do |bb|
        bb.use :input
        bb.optional :append, wrap_with: { tag: :div, class: 'label_input__append' }
      end
    end
    
        def preferences
      ::Spree::Preferences::ScopedStore.new(self.class.name.underscore)
    end
    
    module Spree
  class ReturnItem::EligibilityValidator::Default < Spree::ReturnItem::EligibilityValidator::BaseValidator
    class_attribute :permitted_eligibility_validators
    self.permitted_eligibility_validators = [
      ReturnItem::EligibilityValidator::OrderCompleted,
      ReturnItem::EligibilityValidator::TimeSincePurchase,
      ReturnItem::EligibilityValidator::RMARequired,
      ReturnItem::EligibilityValidator::InventoryShipped,
      ReturnItem::EligibilityValidator::NoReimbursements
    ]
    
        unreturned_return_items.group_by(&:exchange_shipments).each do |shipments, return_items|
      original_order = shipments.first.order
      order_attributes = {
        bill_address: original_order.bill_address,
        ship_address: original_order.ship_address,
        email: original_order.email
      }
      order_attributes[:store_id] = original_order.store_id
      order = Spree::Order.create!(order_attributes)
    
            def create
          @order.validate_payments_attributes([payment_params])
          @payment = @order.payments.build(payment_params)
          if @payment.save
            respond_with(@payment, status: 201, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :show).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :show).find_by!(name: params[:id])
        end
    
              if params[:page] || params[:per_page]
            @states = @states.page(params[:page]).per(params[:per_page])
          end