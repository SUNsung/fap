
        
        class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
    MESSAGE
  end
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
        # Receives an object and find a scope for it. If a scope cannot be found,
    # raises an error. If a symbol is given, it's considered to be the scope.
    def self.find_scope!(obj)
      obj = obj.devise_scope if obj.respond_to?(:devise_scope)
      case obj
      when String, Symbol
        return obj.to_sym
      when Class
        Devise.mappings.each_value { |m| return m.name if obj <= m.to }
      else
        Devise.mappings.each_value { |m| return m.name if obj.is_a?(m.to) }
      end
    
            Devise::Models.config(self, :reset_password_keys, :reset_password_within, :sign_in_after_reset_password)
      end
    end
  end
end

    
              # Only use 'sudo' if we can't write to /etc/exports directly
          sudo_command = ''
          sudo_command = 'sudo ' if !File.writable?('/etc/exports')
    
          def rsync_pre(machine, opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        machine.communicate.sudo('mkdir -p #{guest_path}')
      end
    
      describe '#rsync_post' do
    let(:opts) {{:type=>:rsync,
                 :guestpath=>'/vagrant',
                 :hostpath=>'/home/user/syncfolder',
                 :disabled=>false,
                 :__vagrantfile=>true,
                 :exclude=>['.vagrant'],
                 :owner=>'vagrant',
                 :group=>'vagrant'}}
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
      describe '#initialize' do
    let(:gemrc_location) { 'C:\\My\\Config\\File' }
    
        def setup!
      load_xpack unless LogStash::OSS
      load_available_plugins
      execute_universal_plugins
    end
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
    require 'rspec/rails'
require 'ffaker'
require 'pry'
    
            def show
          @inventory_unit = inventory_unit
          respond_with(@inventory_unit)
        end
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :show)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :show).load
                     end
        end
    
            def new; end
    
            def find_and_update_shipment
          @shipment = Spree::Shipment.accessible_by(current_ability, :update).readonly(false).find_by!(number: params[:id])
          @shipment.update(shipment_params)
          @shipment.reload
        end
    
            def stock_item_params
          params.require(:stock_item).permit(permitted_stock_item_attributes)
        end
      end
    end
  end
end

    
            def create
          authorize! :create, Taxon
          @taxon = Spree::Taxon.new(taxon_params)
          @taxon.taxonomy_id = params[:taxonomy_id]
          taxonomy = Spree::Taxonomy.find_by(id: params[:taxonomy_id])
    
          assert_nil client.push('class' => MyWorker, 'args' => [0])
      assert_match(/[0-9a-f]{12}/, client.push('class' => MyWorker, 'args' => [1]))
      client.push_bulk('class' => MyWorker, 'args' => [[0], [1]]).each do |jid|
        assert_match(/[0-9a-f]{12}/, jid)
      end
    end
  end
    
        it 'allows option overrides' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      assert SetWorker.set(queue: :bar).perform_async(1)
      job = q.first
      assert_equal 'bar', job['queue']
      assert_equal 12, job['retry']
    end
    
        assert_equal dead_set.find_job('123123').value, serialized_job
  end
    
      it 'allows until delay scheduling of AM mails' do
    ss = Sidekiq::ScheduledSet.new
    assert_equal 0, ss.size
    UserMailer.delay_until(5.days.from_now).greetings(1, 2)
    assert_equal 1, ss.size
  end
    
      it 'creates N processor instances' do
    mgr = new_manager(options)
    assert_equal options[:concurrency], mgr.workers.size
  end
    
        assert_equal 1, FirstWorker.count
    assert_equal 1, SecondWorker.count
  end
    
      before do
    require 'sidekiq/testing/inline'
    Sidekiq::Testing.inline!
  end