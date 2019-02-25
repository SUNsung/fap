
        
              it 'Does not use pattern matching for tag name if so requested' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits()
        end').runner.execute(:test)
    
          default_command(:create)
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
      # Sets the resource creating an instance variable
  def resource=(new_resource)
    instance_variable_set(:'@#{resource_name}', new_resource)
  end
    
        def default_controllers(options)
      mod = options[:module] || 'devise'
      @controllers = Hash.new { |h,k| h[k] = '#{mod}/#{k}' }
      @controllers.merge!(options[:controllers]) if options[:controllers]
      @controllers.each { |k,v| @controllers[k] = v.to_s }
    end
    
          # A callback initiated after successfully being remembered. This can be
      # used to insert your own logic that is only run after the user is
      # remembered.
      #
      # Example:
      #
      #   def after_remembered
      #     self.update_attribute(:invite_code, nil)
      #   end
      #
      def after_remembered
      end
    
          def timeout_in
        self.class.timeout_in
      end
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end

    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        context 'on my own post' do
      it 'succeeds' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        post :create, params: like_hash, format: :json
        expect(response.code).to eq('201')
      end
    end
    
          it 'should not create the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).not_to exist
        expect(response.code).to eq('403')
      end
    end
  end
    
          code = InvitationCode.create(user: bob)
      code.update_attributes(count: 0)
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
      def validate_target_file
    if File.exist?(target_file)
      if  delete_target_file?
        File.delete(target_file)
      else
        signal_error('Package creation cancelled, a previously generated package exist at location: #{target_file}, move this file to safe place and run the command again')
      end
    end
  end
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
        desc 'Run one single machine acceptance test'
    task :single, :machine do |t, args|
      ENV['LS_VAGRANT_HOST']  = args[:machine]
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/**/*_spec.rb']]))
    end
  end
end

    
    shared_examples 'logstash list' do |logstash|
  describe 'logstash-plugin list on #{logstash.hostname}' do
    before(:all) do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
    shared_context 'creates guest order with guest token' do
  let(:guest_token) { 'guest_token' }
  let!(:order)      { create(:order, token: guest_token, store: store, currency: currency) }
  let!(:line_item)  { create(:line_item, order: order, currency: currency) }
  let!(:headers)    { headers_order_token }
    
              it_behaves_like 'nested requested resources'
        end
      end
    end
  end
    
        context 'with specified pagination params' do
      let!(:order) { create(:order, state: 'complete', user: user, completed_at: Time.current) }
      let!(:order_1) { create(:order, state: 'complete', user: user, completed_at: Time.current + 1.day) }
      let!(:order_2) { create(:order, state: 'complete', user: user, completed_at: Time.current + 2.days) }
      let!(:order_3) { create(:order, state: 'complete', user: user, completed_at: Time.current + 3.days) }
    
            it 'returns specified amount products' do
          expect(json_response['data'].count).to eq 2
        end
    
        context 'by roots' do
      before { get '/api/v2/storefront/taxons?roots=true' }
    
        add_filter '/bin/'
    add_filter '/db/'
    add_filter '/script/'
    add_filter '/spec/'
    add_filter '/lib/spree/api/testing_support/'
    
          private
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
    ENV['RAILS_ENV'] = 'test'