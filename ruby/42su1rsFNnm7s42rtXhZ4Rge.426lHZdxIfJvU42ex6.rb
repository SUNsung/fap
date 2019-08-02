
        
              desc 'Get the text for a specific template present in local filesystem' do
        detail 'This feature was introduced in GitLab #{gitlab_version}.'
        success Entities::Template
      end
      params do
        requires :name, type: String, desc: 'The name of the template'
      end
      get 'templates/#{template_type}/:name', requirements: { name: /[\w\.-]+/ } do
        finder = TemplateFinder.build(template_type, nil, name: declared(params)[:name])
        new_template = finder.execute
    
              # The key is untrusted input, so ensure we can't be directed outside
          # of base_dir
          Gitlab::Utils.check_path_traversal!(file_name)
    
      describe '.find' do
    it 'finds a template in the Foo category' do
      create_template!('test-template')
    
      def accounts
    Account.where(id: account_ids)
  end
    
      def distribute_poll!
    return if @poll.hide_totals?
    ActivityPub::DistributePollUpdateWorker.perform_in(3.minutes, @poll.status.id)
  end
    
      def skip_distribution?
    @status.direct_visibility? || @status.limited_visibility?
  end
    
    describe Settings::Preferences::NotificationsController do
  render_views
    
      def mark_as_processing!
    redis.setex('move_in_progress:#{@account.id}', PROCESSING_COOLDOWN, true)
  end
end

    
        old_account.update!(uri: 'https://example.org/alice', domain: 'example.org', protocol: :activitypub, inbox_url: 'https://example.org/inbox')
    new_account.update!(uri: 'https://example.com/alice', domain: 'example.com', protocol: :activitypub, inbox_url: 'https://example.com/inbox', also_known_as: [old_account.uri])
    
      context 'when a matching undo has been received first' do
    let(:undo_json) do
      {
        '@context': 'https://www.w3.org/ns/activitystreams',
        id: 'bar',
        type: 'Undo',
        actor: ActivityPub::TagManager.instance.uri_for(sender),
        object: json,
      }.with_indifferent_access
    end
    
      def test_marshal_load_instance_method
    instance_method = Marshal.load Marshal.dump(@c1.find_instance_method_named 'm')
    
      def test_singleton
    refute @a.singleton
  end
    
        assert_equal 'http://example/?page=this_page&foo=bar',
                 cvs_url('http://example/?page=%s&foo=bar', 'this_page')
  end
    
      def test_flags_multiple
    options = {:flags => ['fuzzy', 'ruby-format']}
    assert_equal <<-'ENTRY', entry('Hello', options).to_s
#, fuzzy,ruby-format
msgid 'Hello'
msgstr ''
    ENTRY
  end
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :show)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :show).load
                     end
        end
    
              @properties = if params[:ids]
                          @properties.where(id: params[:ids].split(',').flatten)
                        else
                          @properties.ransack(params[:q]).result
                        end
    
            def load_transfer_params
          @original_shipment         = Spree::Shipment.find_by!(number: params[:original_shipment_number])
          @variant                   = Spree::Variant.find(params[:variant_id])
          @quantity                  = params[:quantity].to_i
          authorize! :show, @original_shipment
          authorize! :create, Shipment
        end
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :show).find(params[:stock_location_id])
        end
    
            def scope
          variants = if @product
                       @product.variants_including_master
                     else
                       Variant
                     end