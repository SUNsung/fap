
        
          def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: account_collection_url(@account, params[:id]),
      type: :ordered,
      size: @size,
      items: @statuses
    )
  end
end

    
        def destroy
      authorize @account_moderation_note, :destroy?
      @account_moderation_note.destroy!
      redirect_to admin_account_path(@account_moderation_note.target_account_id), notice: I18n.t('admin.account_moderation_notes.destroyed_msg')
    end
    
        def update
      authorize @user, :change_email?
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
      it 'calls #to_path on second argument when passed ?d and a directory' do
    p = mock('path')
    p.should_receive(:to_path).and_return @dir
    Kernel.test(?d, p)
  end
end
    
      it 'sets the return value of the catch block to nil by default' do
    res = catch :blah do
      throw :blah
    end
    res.should == nil
  end
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
        process_font_assets
    process_stylesheet_assets
    process_javascript_assets
    store_version
  end
    
      # Compress JavaScripts and CSS.
  config.assets.js_compressor = :uglifier
  # config.assets.css_compressor = :sass
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
          include Capistrano::DSL
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
    desc 'Runs all tests in all Spree engines'
task test: :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rspec'
    end
  end
end
    
            def image_params
          params.require(:image).permit(permitted_image_attributes)
        end
    
            def fire
          inventory_unit.send('#{@event}!') if @event
        end
    
            def index
          authorize! :read, Store
          @stores = Store.accessible_by(current_ability, :read).all
          respond_with(@stores)
        end
    
            def index
          @users = Spree.user_class.accessible_by(current_ability, :read)
    
            def update
          authorize! :update, zone
          if zone.update_attributes(zone_params)
            respond_with(zone, status: 200, default_template: :show)
          else
            invalid_resource!(zone)
          end
        end