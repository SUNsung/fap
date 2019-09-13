
        
          def social
    %w(twitter github)
  end
    
      enum status: [:proposed, :written, :published]
  enum read_status: { unread: 0, reading: 2, read: 3, forgotten: nil }
  enum nullable_status: [:single, :married]
  enum language: [:english, :spanish, :french], _prefix: :in
  enum author_visibility: [:visible, :invisible], _prefix: true
  enum illustrator_visibility: [:visible, :invisible], _prefix: true
  enum font_size: [:small, :medium, :large], _prefix: :with, _suffix: true
  enum difficulty: [:easy, :medium, :hard], _suffix: :to_read
  enum cover: { hard: 'hard', soft: 'soft' }
    
          def test_helpers_with_symbol
        @controller.process(:with_symbol)
        assert_equal 'I respond to bare_a: true', @controller.response_body
      end
    
              begin
            screenshot = Screenshot.new(full_path, color)
    
            UI.message('Uploading image file #{path}...')
        client.upload_image(image_path: File.expand_path(path),
                            image_type: image_type,
                              language: language)
      end
    end
    
        # Pass a action symbol (e.g. :deliver or :commit_version_bump)
    # and this method will return a reference to the action class
    # if it exists. In case the action with this name can't be found
    # this method will return nil.
    # This method is being called by `trigger_action_by_name` to see
    # if a given action is available (either built-in or loaded from a plugin)
    # and is also being called from the fastlane docs generator
    def class_reference_from_action_name(method_sym)
      method_str = method_sym.to_s.delete('?') # as a `?` could be at the end of the method name
      class_ref = Actions.action_class_ref(method_str)
    
            Actions.lane_context[SharedValues::FL_CHANGELOG] = changelog.strip.length > 0 ? changelog : params[:fallback_changelog]
      end
    
          def output_method?(node)
        _definee, method_name, _args, _body = *node
        method_name.to_s == 'output'
      end
    end
  end
end

    
            # app store connect teams
        FastlaneCore::ConfigItem.new(key: :team_id,
                                     short_option: '-q',
                                     env_name: 'PILOT_TEAM_ID',
                                     description: 'The ID of your App Store Connect team if you're in multiple teams',
                                     optional: true,
                                     is_string: false, # as we also allow integers, which we convert to strings anyway
                                     code_gen_sensitive: true,
                                     default_value: CredentialsManager::AppfileConfig.try_fetch_value(:itc_team_id),
                                     default_value_dynamic: true,
                                     verify_block: proc do |value|
                                       ENV['FASTLANE_ITC_TEAM_ID'] = value.to_s
                                     end),
        FastlaneCore::ConfigItem.new(key: :team_name,
                                     short_option: '-r',
                                     env_name: 'PILOT_TEAM_NAME',
                                     description: 'The name of your App Store Connect team if you're in multiple teams',
                                     optional: true,
                                     code_gen_sensitive: true,
                                     default_value: CredentialsManager::AppfileConfig.try_fetch_value(:itc_team_name),
                                     default_value_dynamic: true,
                                     verify_block: proc do |value|
                                       ENV['FASTLANE_ITC_TEAM_NAME'] = value.to_s
                                     end),
        FastlaneCore::ConfigItem.new(key: :dev_portal_team_id,
                                     env_name: 'PILOT_DEV_PORTAL_TEAM_ID',
                                     description: 'The short ID of your team in the developer portal, if you're in multiple teams. Different from your iTC team ID!',
                                     optional: true,
                                     is_string: true,
                                     code_gen_sensitive: true,
                                     default_value: CredentialsManager::AppfileConfig.try_fetch_value(:team_id),
                                     default_value_dynamic: true,
                                     verify_block: proc do |value|
                                       ENV['FASTLANE_TEAM_ID'] = value.to_s
                                     end),
        # rubocop:disable Metrics/LineLength
        FastlaneCore::ConfigItem.new(key: :itc_provider,
                                     env_name: 'PILOT_ITC_PROVIDER',
                                     description: 'The provider short name to be used with the iTMSTransporter to identify your team. This value will override the automatically detected provider short name. To get provider short name run `pathToXcode.app/Contents/Applications/Application\\ Loader.app/Contents/itms/bin/iTMSTransporter -m provider -u 'USERNAME' -p 'PASSWORD' -account_type itunes_connect -v off`. The short names of providers should be listed in the second column',
                                     optional: true),
        # rubocop:enable Metrics/LineLength
    
        let(:app_context_testers) do
      [
        Spaceship::ConnectAPI::BetaTester.new('1', {
          firstName: 'First',
          lastName: 'Last',
          email: 'my@email.addr',
          betaGroups: [custom_tester_group]
        }),
        Spaceship::ConnectAPI::BetaTester.new('2', {
          firstName: 'Fabricio',
          lastName: 'Devtoolio',
          email: 'fabric-devtools@gmail.com',
          betaGroups: [custom_tester_group]
        })
      ]
    end
    
        if !(title = page.data.page_title).blank?
      title = title
        .downcase
        .gsub(''', '')
        .gsub(/[^\w]+/, '-')
        .gsub(/_+/, '-')
        .squeeze('-')
        .squeeze(' ')
      classes << 'page-#{title}'
    end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
          expect { subject.call(env) }.
        to raise_error(Vagrant::Errors::BoxAlreadyExists)
    end
    
            entries = []
        prune   = []
        @env.machine_index.each do |entry|
          # If we're pruning and this entry is invalid, skip it
          # and prune it later.
          if options[:prune] && !entry.valid?(@env.home_path)
            prune << entry
            next
          end
    
            described_class.wait_for_reboot(machine)
      end
    end
  end
    
          # Checks the client's masked token to see if it matches the
      # session token.
      def valid_token?(session, token)
        return false if token.nil? || token.empty?
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
            if obj && obj.errors[method].present?
          errors = safe_join(obj.errors[method], '<br />'.html_safe)
          content_tag(:span, errors, class: 'formError')
        else
          ''
        end
      end
    
      # Capybara javascript drivers require transactional fixtures set to false, and we use DatabaseCleaner
  # to cleanup after each test instead.  Without transactional fixtures set to false the records created
  # to setup a test will be unavailable to the browser, which runs under a separate server instance.
  config.use_transactional_fixtures = false
    
        # returns the formatted price for the specified variant as a difference from product price
    def variant_price_diff(variant)
      variant_amount = variant.amount_in(current_currency)
      product_amount = variant.product.amount_in(current_currency)
      return if variant_amount == product_amount || product_amount.nil?
    
              state = @states.last
          respond_with(@states) if stale?(state)
        end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
            def products
          # Returns the products sorted by their position with the classification
          # Products#index does not do the sorting.
          taxon = Spree::Taxon.find(params[:id])
          @products = taxon.products.ransack(params[:q]).result
          @products = @products.page(params[:page]).per(params[:per_page] || 500)
          render 'spree/api/v1/products/index'
        end
    
            def scope
          variants = if @product
                       @product.variants_including_master
                     else
                       Variant
                     end