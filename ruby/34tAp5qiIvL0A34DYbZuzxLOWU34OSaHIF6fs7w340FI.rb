
        
          end
    
        expect(cooked).to include('class='poll'')
    expect(cooked).to include('data-poll-status='open'')
    expect(cooked).to include('data-poll-name='poll'')
    expect(cooked).to include('data-poll-type='multiple'')
    expect(cooked).to include('data-poll-min='1'')
    expect(cooked).to include('data-poll-max='3'')
    expect(cooked).to include('data-poll-public='true'')
  end
    
          topic.update_status(
        :closed, true, Discourse.system_user,
        message: I18n.t(
          'topic_statuses.autoclosed_topic_max_posts',
          count: SiteSetting.auto_close_topics_post_count
        )
      )
    end
  end
    
          let(:filename) { 'utf-8.txt' }
      let(:file) { file_from_fixtures(filename, 'encodings') }
    
        before(:each) do
      SiteSetting.s3_upload_bucket = 'some-really-cool-bucket'
      SiteSetting.s3_access_key_id = 's3-access-key-id'
      SiteSetting.s3_secret_access_key = 's3-secret-access-key'
      SiteSetting.enable_s3_uploads = true
      SiteSetting.prevent_anons_from_downloading_files = true
    end
    
          <% id = 1 %>
      <% frames.each do |frame| %>
          <% if frame.context_line && frame.context_line != '#' %>
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
      it 'should allow changing the protection settings' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :default_src => 'none', :script_src => 'https://cdn.mybank.net', :style_src => 'https://cdn.mybank.net', :img_src => 'https://cdn.mybank.net', :connect_src => 'https://api.mybank.com', :frame_src => 'self', :font_src => 'https://cdn.mybank.net', :object_src => 'https://cdn.mybank.net', :media_src => 'https://cdn.mybank.net', :report_uri => '/my_amazing_csp_report_parser', :sandbox => 'allow-scripts'
    
        scope :checkout, -> { with_state('checkout') }
    scope :completed, -> { with_state('completed') }
    scope :pending, -> { with_state('pending') }
    scope :processing, -> { with_state('processing') }
    scope :failed, -> { with_state('failed') }
    
          def protect_from_connection_error
        yield
      rescue ActiveMerchant::ConnectionError => e
        gateway_error(e)
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
    
      def self.load_translations(hash, root = [])
    hash.each do |k, v|
      if v.is_a?(Hash)
        load_translations(v, root.dup << k)
      else
        key = (root + [k]).join('.')
        unused_translations << key
      end
    end
  end
    
          let!(:shipping_method) { create(:shipping_method) }
      let(:package)          { build(:stock_package, contents: inventory_units.map { |_i| ContentItem.new(inventory_unit) }) }
      let(:ship_address)     { create(:ship_address) }
      let(:order)            { build(:order_with_line_items, ship_address: ship_address) }
      let(:inventory_units)  { order.inventory_units }
    
            scope
      end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@return_authorization)
        end