
        
                # other app configuration
        FastlaneCore::ConfigItem.new(key: :price_tier,
                                     short_option: '-r',
                                     description: 'The price tier of this application',
                                     is_string: false,
                                     optional: true),
        FastlaneCore::ConfigItem.new(key: :app_rating_config_path,
                                     short_option: '-g',
                                     description: 'Path to the app rating's config',
                                     is_string: true,
                                     optional: true,
                                     verify_block: proc do |value|
                                       UI.user_error!('Could not find config file at path '#{File.expand_path(value)}'') unless File.exist?(value)
                                       UI.user_error!(''#{value}' doesn't seem to be a JSON file') unless FastlaneCore::Helper.json_file?(File.expand_path(value))
                                     end),
        FastlaneCore::ConfigItem.new(key: :submission_information,
                                     short_option: '-b',
                                     description: 'Extra information for the submission (e.g. compliance specifications, IDFA settings)',
                                     is_string: false,
                                     optional: true),
    
            display_families.each do |display_family|
          # {
          #   'name': 'iphone6Plus',
          #   'scaled': {
          #     'value': false,
          #     'isEditable': false,
          #     'isRequired': false,
          #     'errorKeys': null
          #   },
          #   'screenshots': {
          #     'value': [{
          #       'value': {
          #         'assetToken': 'Purple62/v4/08/0a/04/080a0430-c2cc-2577-f491-9e0a09c58ffe/mzl.pbcpzqyg.jpg',
          #         'sortOrder': 1,
          #         'type': null,
          #         'originalFileName': 'ios-414-1.jpg'
          #       },
          #       'isEditable': true,
          #       'isRequired': false,
          #       'errorKeys': null
          #     }, {
          #       'value': {
          #         'assetToken': 'Purple71/v4/de/81/aa/de81aa10-64f6-332e-c974-9ee46adab675/mzl.cshkjvwl.jpg',
          #         'sortOrder': 2,
          #         'type': null,
          #         'originalFileName': 'ios-414-2.jpg'
          #       },
          #       'isEditable': true,
          #       'isRequired': false,
          #       'errorKeys': null
          #     }],
          #   'messagesScaled': {
          #     'value': false,
          #     'isEditable': false,
          #     'isRequired': false,
          #     'errorKeys': null
          #   },
          #   'messagesScreenshots': {
          #     'value': [{
          #       'value': {
          #         'assetToken': 'Purple62/v4/08/0a/04/080a0430-c2cc-2577-f491-9e0a09c58ffe/mzl.pbcpzqyg.jpg',
          #         'sortOrder': 1,
          #         'type': null,
          #         'originalFileName': 'ios-414-1.jpg'
          #       },
          #       'isEditable': true,
          #       'isRequired': false,
          #       'errorKeys': null
          #     }, {
          #       'value': {
          #         'assetToken': 'Purple71/v4/de/81/aa/de81aa10-64f6-332e-c974-9ee46adab675/mzl.cshkjvwl.jpg',
          #         'sortOrder': 2,
          #         'type': null,
          #         'originalFileName': 'ios-414-2.jpg'
          #       },
          #       'isEditable': true,
          #       'isRequired': false,
          #       'errorKeys': null
          #     }],
          #     'isEditable': true,
          #     'isRequired': false,
          #     'errorKeys': null
          #   },
          #   'trailer': {
          #     'value': null,
          #     'isEditable': true,
          #     'isRequired': false,
          #     'errorKeys': null
          #   }
          # }
    }
    
        # Loads the full In-App-Purchases-Pricing-Matrix
    #   note: the matrix is the same for any app_id
    #
    # @param app_id (String) The Apple ID of any app
    # @return ([Spaceship::Tunes::IAPSubscriptionPricingTier]) An array of pricing tiers
    def subscription_pricing_tiers(app_id)
      @subscription_pricing_tiers ||= begin
        r = request(:get, 'ra/apps/#{app_id}/iaps/pricing/matrix/recurring')
        data = parse_response(r, 'data')['pricingTiers']
        data.map { |tier| Spaceship::Tunes::IAPSubscriptionPricingTier.factory(tier) }
      end
    end
    
        it 'raises an exception when an incorrect path is given' do
      expect do
        Fastlane::Helper::PodspecHelper.new('invalid_podspec')
      end.to raise_error('Could not find podspec file at path 'invalid_podspec'')
    end
    
        # @return [boolean] true if executing with bundler (like 'bundle exec fastlane [action]')
    def self.bundler?
      # Bundler environment variable
      ['BUNDLE_BIN_PATH', 'BUNDLE_GEMFILE'].each do |current|
        return true if ENV.key?(current)
      end
      return false
    end
    
    module Spaceship
  module Portal
    # Represents a device from the Apple Developer Portal
    class Device < PortalBase
      # @return (String) The ID given from the developer portal. You'll probably not need it.
      # @example
      #   'XJXGVS46MW'
      attr_accessor :id
    
        def subpath
      @subpath ||= subpath_to(current_url)
    end
    
        attr_reader :filters
    
        def add(path, content)
      @pages[path] = content
    end
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
            def base_urls=(urls)
          self.base_url = urls.first
          @base_urls = urls
        end
      end
    
            css('th h3').each do |node|
          node.name = 'span'
        end
    
      def accounts
    Account.where(id: account_ids)
  end
    
      def call(source_account, target_account, options = {})
    @source_account = source_account
    @target_account = target_account
    @status_ids     = options.delete(:status_ids) || []
    @comment        = options.delete(:comment) || ''
    @options        = options
    
      def perform(account_id, options = {})
    @options = options.with_indifferent_access
    @account = Account.find(account_id)
    
          context 'self-boost of a previously unknown status with correct attributedTo' do
        let(:object_json) do
          {
            id: 'https://example.com/actor#bar',
            type: 'Note',
            content: 'Lorem ipsum',
            attributedTo: 'https://example.com/actor',
            to: 'http://example.com/followers',
          }
        end
    
      describe 'PUT #update' do
    it 'updates the user record' do
      put :update, params: { user: { locale: 'en', chosen_languages: ['es', 'fr', ''] } }
    
      class ExpectedProofLiveError < Error; end
    
        def pam_conflict?
      if Devise.pam_authentication
        encrypted_password.present? && pam_managed_user?
      else
        false
      end
    end
    
          def preference_fields(object, form)
        return unless object.respond_to?(:preferences)
    
          def link_to_clone_promotion(promotion, options = {})
        options[:data] = { action: 'clone', 'original-title': Spree.t(:clone) }
        options[:class] = 'btn btn-warning btn-sm with-tip'
        options[:method] = :post
        options[:icon] = :clone
        button_link_to '', clone_admin_promotion_path(promotion), options
      end
    
                  inventory_unit.save!
            end
    
      def self.check_missing_translations
    self.missing_translation_messages = []
    self.used_translations ||= []
    used_translations.map { |a| a.split('.') }.each do |translation_keys|
      root = translations
      processed_keys = []
      translation_keys.each do |key|
        root = root.fetch(key.to_sym)
        processed_keys << key.to_sym
      rescue KeyError
        error = '#{(processed_keys << key).join('.')} (#{I18n.locale})'
        unless Spree.missing_translation_messages.include?(error)
          Spree.missing_translation_messages << error
        end
      end
    end
  end
    
        unreturned_return_items.group_by(&:exchange_shipments).each do |shipments, return_items|
      original_order = shipments.first.order
      order_attributes = {
        bill_address: original_order.bill_address,
        ship_address: original_order.ship_address,
        email: original_order.email
      }
      order_attributes[:store_id] = original_order.store_id
      order = Spree::Order.create!(order_attributes)
    
            def update
          @option_value = scope.accessible_by(current_ability, :update).find(params[:id])
          if @option_value.update(option_value_params)
            render :show
          else
            invalid_resource!(@option_value)
          end
        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@return_authorization)
        end
    
              Spree::Dependencies.cart_remove_item_service.constantize.call(order: @shipment.order,
                                                                        variant: variant,
                                                                        quantity: quantity,
                                                                        options: { shipment: @shipment })
    
          it 'displays the correct output' do
        mock_processes = [{
          'identity' => 'foobar',
          'tag' => 'baz',
          'started_at' => Time.now,
          'concurrency' => 5,
          'busy' => 2,
          'queues' => %w[low medium high]
        }]
        Sidekiq::ProcessSet.stub(:new, mock_processes) do
          assert_includes output, 'foobar [baz]'
          assert_includes output, 'Started: #{mock_processes.first['started_at']} (just now)'
          assert_includes output, 'Threads: 5 (2 busy)'
          assert_includes output, 'Queues: high, low, medium'
        end
      end
    end
    
        it 'deals with errors' do
      mgr = Mgr.new
    
      it 'allows Psych to serialize anonymous structs' do
    obj = Struct.new(:attribute).new(my: 'data')
    
      def new_manager(opts)
    Sidekiq::Manager.new(opts)
  end
    
        ## Write the results to a file
    ## Requires railsexpress patched MRI build
    # brew install qcachegrind
    #File.open('callgrind.profile', 'w') do |f|
      #RubyProf::CallTreePrinter.new(result).print(f, :min_percent => 1)
    #end
  end
end
    
        context 'when I18n enforces available locales' do
      before { I18n.enforce_available_locales = true }
    
            def base_instance?
          self == base.base_instance
        end
    
        class LazyValueHash < LazyValueEnumerable
      def initialize(hash)
        super
        @value_hash = {}.with_indifferent_access
        hash.each do |key, value|
          self[key] = value
        end
      end
    
        def each(&block)
      @cookies.each(&block)
    end
    
          # (see #unset_global_setting)
      def unset_namespace_setting(key)
        unset :namespace, key
      end
    
          module ClassMethods
        # Clears all defined parameters and validations.
        def reset_validations!
          unset_namespace_stackable :declared_params
          unset_namespace_stackable :validations
          unset_namespace_stackable :params
          unset_description_field :params
        end