
        
            def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
        context 'on a post from a contact' do
      before do
        @target = bob.post(:status_message, text: 'AWESOME', to: @bobs_aspect.id)
      end
    
          FactoryGirl.create(:notification, :recipient => alice)
      note = FactoryGirl.create(:notification, :recipient => user2)
    
    shared_examples 'no current order' do
  context 'order doesn't exist' do
    before do
      order.destroy
      execute
    end
    
        context 'with params include=default_billing_address,default_shipping_address' do
      before { get '/api/v2/storefront/account?include=default_billing_address,default_shipping_address', headers: headers }
    
          it 'returns taxons by ids' do
        expect(json_response['data'].size).to            eq(2)
        expect(json_response['data'].pluck(:id).sort).to eq(taxons.map(&:id).sort.map(&:to_s))
      end
    end
    
              def resource
            resource = resource_finder.new(number: params[:number], token: order_token).execute.take
            raise ActiveRecord::RecordNotFound if resource.nil?
    
            variant = line_item.variant
        display_name = variant.name.to_s
        display_name += ' (#{variant.options_text})' unless variant.options_text.blank?
    
      node[:applications].each do |app, data|
    template '/etc/monit.d/sidekiq_#{app}.monitrc' do 
      owner 'root' 
      group 'root' 
      mode 0644 
      source 'monitrc.conf.erb' 
      variables({ 
        :num_workers => worker_count,
        :app_name => app, 
        :rails_env => node[:environment][:framework_env] 
      }) 
    end
    
        def self.inherited(child)
      child.app_url = self.app_url
      child.session_secret = self.session_secret
      child.redis_pool = self.redis_pool
      child.sessions = self.sessions
    end