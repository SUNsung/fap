
        
          describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
            _existing_scenerio
      end
    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
        it 'should work with the human task agent' do
      valid_params = {
        'expected_receive_period_in_days' => 2,
        'trigger_on' => 'event',
        'hit' =>
          {
            'assignments' => 1,
            'title' => 'Sentiment evaluation',
            'description' => 'Please rate the sentiment of this message: '<$.message>'',
            'reward' => 0.05,
            'lifetime_in_seconds' => 24 * 60 * 60,
            'questions' =>
              [
                {
                  'type' => 'selection',
                  'key' => 'sentiment',
                  'name' => 'Sentiment',
                  'required' => 'true',
                  'question' => 'Please select the best sentiment value:',
                  'selections' =>
                    [
                      { 'key' => 'happy', 'text' => 'Happy' },
                      { 'key' => 'sad', 'text' => 'Sad' },
                      { 'key' => 'neutral', 'text' => 'Neutral' }
                    ]
                },
                {
                  'type' => 'free_text',
                  'key' => 'feedback',
                  'name' => 'Have any feedback for us?',
                  'required' => 'false',
                  'question' => 'Feedback',
                  'default' => 'Type here...',
                  'min_length' => '2',
                  'max_length' => '2000'
                }
              ]
          }
      }
      @agent = Agents::HumanTaskAgent.new(:name => 'somename', :options => valid_params)
      @agent.user = users(:jane)
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options['hit']['description']).to eq('Please rate the sentiment of this message: '{{message}}'')
    end
  end
end
    
        def initialize
      @entries = []
      @index = Set.new
      @types = Hash.new { |hash, key| hash[key] = Type.new key }
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
          request_all initial_urls do |response|
        next unless data = handle_response(response)
        yield data
        next unless data[:internal_urls].present?
        next_urls = data[:internal_urls].select { |url| history.add?(url.downcase) }
        instrument 'queued.scraper', urls: next_urls
        next_urls
      end
    end
    
          def self.prepended(base)
        class << base
          prepend ClassMethods
        end
      end
    
            if at_css('.api-type-label.module')
          at_css('h1').content = subpath.remove('api/')
        end
    
            css('h1').each_with_index do |node, i|
          next if i == 0
          node.name = 'h2'
        end
    
            css('code').each do |node|
          node.inner_html = node.inner_html.squish
        end
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
      config.logger = Logger.new($stdout)
  Rails.logger  = config.logger
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          def self.required_fields(klass)
        [:remember_created_at]
      end
    
    require 'vagrant/capability_host'
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
              providers
        end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
              # First determine the proper array of VMs.
          machines = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                @logger.debug('Finding machines that match regex: #{pattern}')
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            # This returns all synced folder implementations.
        #
        # @return [Registry]
        def synced_folders
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.synced_folders)
            end
          end
        end
    
    require 'vagrant/plugin/v2/components'
    
            # This should return an action callable for the given name.
        #
        # @param [Symbol] name Name of the action.
        # @return [Object] A callable action sequence object, whether it
        #   is a proc, object, etc.
        def action(name)
          nil
        end
    
    class Api::PushController < Api::BaseController
  include SignatureVerification
    
      def activity
    weeks = []
    
      def reset_period_offset
    api_throttle_data[:period] - request_time.to_i % api_throttle_data[:period]
  end
end

    
      attr_accessor :x, :y, :z
    
    def to_integer(proc)
  proc[-> n { n + 1 }][0]
end
    
    require_relative '../lib/bootstrap/environment'
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
    module LogStash module PluginManager
  class SpecificationHelpers
    WILDCARD = '*'
    WILDCARD_INTO_RE = '.*'
    
        validate_target_file
    LogStash::Bundler.invoke!({:package => true, :all => true})
    archive_manager.compress(LogStash::Environment::CACHE_PATH, target_file)
    FileUtils.rm_rf(LogStash::Environment::CACHE_PATH) if clean?