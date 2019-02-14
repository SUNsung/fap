
        
            if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
          protected
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
      context 'every shim script' do
    it 'has valid bash syntax' do
      # These have no file extension, but can be identified by their shebang.
      (HOMEBREW_LIBRARY_PATH/'shims').find do |path|
        next if path.directory?
        next if path.symlink?
        next unless path.executable?
        next unless path.read(12) == '#!/bin/bash\n'
    
        it 'returns false if the environment does not contain :userpaths' do
      expect(env).not_to use_userpaths
    end
  end
    
              it 'cuts fraction part to have only 6 digits at all' do
            format('%#{f}', 1.1234567).should == '1.12346'
            format('%#{f}', 12.1234567).should == '12.1235'
            format('%#{f}', 123.1234567).should == '123.123'
            format('%#{f}', 1234.1234567).should == '1234.12'
            format('%#{f}', 12345.1234567).should == '12345.1'
            format('%#{f}', 123456.1234567).should == '123456'
          end
        end
    
      it 'calls #to_int on seed' do
    srand(3.8)
    srand.should == 3
    
      it 'returns true when the command exits with a zero exit status' do
    @object.system(ruby_cmd('exit 0')).should == true
    
      it 'does not raise an error on a tainted, frozen object' do
    o = Object.new.taint.freeze
    o.taint.should equal(o)
  end
    
    When /^I submit the password reset form$/ do
  submit_password_reset_form
end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
          it 'sets the flash error' do
        get :create, params: invalid_params
        expect(flash[:error]).not_to be_blank
      end
    
          it 'returns an array of reshares for a post' do
        bob.reshare!(@post)
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to eq(@post.reshares.map(&:id))
      end
    
      gem.licenses      = ['MIT']
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
    Given(/^I make (\d+) deployments$/) do |count|
  step 'all linked files exists in shared path'
    
          def warn_set_scm_is_deprecated
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure your project is compatible with future versions of Capistrano,
remove the :scm setting and instead add these lines to your Capfile after
`require 'capistrano/deploy'`:
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
    set_if_empty :default_env, {}
set_if_empty :keep_releases, 5
    
      s.author    = 'You'
  s.email     = 'you@example.com'
  s.homepage  = 'https://github.com/your-github-handle/<%= file_name %>'
  s.license = 'BSD-3-Clause'
    
        before do
      allow_any_instance_of(Spree::Api::V2::Storefront::CartController).to receive(:spree_current_order).and_return(order)
      patch '/api/v2/storefront/cart/empty', headers: headers_bearer
    end
    
          it_behaves_like 'returns 200 HTTP status'
    
        let(:customer_params) do
      {
        order: {
          email: 'new@customer.org',
          bill_address_attributes: address,
          ship_address_attributes: address
        }
      }
    end
    
    describe 'Storefront API v2 Countries spec', type: :request do
  let!(:country) { create(:country) }
  let!(:states)    { create_list(:state, 2, country: country) }
  let!(:default_country) do
    country = create(:country, iso3: 'GBR')
    Spree::Config[:default_country_id] = country.id
    country
  end
  shared_examples 'returns valid country resource JSON' do
    it 'returns a valid country resource JSON response' do
      expect(response.status).to eq(200)
    
            resource :checkout, controller: :checkout, only: %i[update] do
          patch :next
          patch :advance
          patch :complete
          post :add_store_credit
          post :remove_store_credit
          get :payment_methods
          get :shipping_rates
        end
    
          def set_content_type
        headers['Content-Type'] = content_type
      end
    
    iter = 10
count = 10_000
    
          def create_worker_spec
        template_file = File.join(
            'spec/workers',
            class_path,
            '#{file_name}_worker_spec.rb'
        )
        template 'worker_spec.rb.erb', template_file
      end
    
        def self.enable_delay!
      if defined?(::ActiveSupport)
        require 'sidekiq/extensions/active_record'
        require 'sidekiq/extensions/action_mailer'
    
    module Sidekiq
  class BasicFetch
    # We want the fetch operation to timeout every few seconds so the thread
    # can check if the process is shutting down.
    TIMEOUT = 2
    
        def logger
      Sidekiq::Logging.logger
    end
  end
end

    
        def call(env)
      app.call(env)
    end