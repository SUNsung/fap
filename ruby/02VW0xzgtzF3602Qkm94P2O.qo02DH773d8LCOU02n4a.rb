
        
        if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
            unless cooked == html
          failed += 1
          puts 'FAILED SPEC'
          puts 'Expected: '
          puts html
          puts 'Got: '
          puts cooked
          puts 'Markdown: '
          puts md
          puts
        end
        html, state, md = nil
        next
      end
    
        s
  end
end
    
      def initialize(app, options = nil)
    @app = app
    if GlobalSetting.enable_cors && GlobalSetting.cors_origin.present?
      @global_origins = GlobalSetting.cors_origin.split(',').map(&:strip)
    end
  end
    
        it 'rejects invalid directives and ones that are not allowed to be extended' do
      builder << {
        invalid_src: ['invalid'],
      }
    
        Discourse.plugins.each(&:notify_before_auth)
    
        SCRIPT_ASSET_DIRECTORIES = [
      # [dir, can_use_s3_cdn, can_use_cdn]
      ['/assets/',             true, true],
      ['/brotli_asset/',       true, true],
      ['/extra-locales/',      false, false],
      ['/highlight-js/',       false, true],
      ['/javascripts/',        false, true],
      ['/plugins/',            false, true],
      ['/theme-javascripts/',  false, true],
      ['/svg-sprite/',         false, true],
    ]
    
        def site_setting_extension
      { script_src: SiteSetting.content_security_policy_script_src.split('|') }
    end
    
          response
    end
    
      def self.reset_bounce_scores
    UserStat.where('reset_bounce_score_after < now()')
      .where('bounce_score > 0')
      .update_all(bounce_score: 0)
  end
    
      def self.lookup(unhashed_token, opts = nil)
    mark_seen = opts && opts[:seen]
    
        it 'does not send previously configured control targets when the current agent does not support them' do
      select_agent_type('Commander Agent')
      select2('SF Weather', from: 'Control targets')
      select_agent_type('Webhook Agent')
      fill_in(:agent_name, with: 'No control targets')
      click_on 'Save'
      expect(page).to have_content('No control targets')
      agent = Agent.find_by(name: 'No control targets')
      expect(agent.control_targets).to eq([])
    end
    
        it 'returns a label 'Disabled' if a given agent is disabled' do
      stub(@agent).disabled? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Disabled'
    end
    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
          @log.level = 5
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        def translation_scope
      'devise.confirmations'
    end
end

    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
          private
    
          included do
        include Devise::Controllers::ScopedViews
      end
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
    module LogStash module PluginManager
  class SpecificationHelpers
    WILDCARD = '*'
    WILDCARD_INTO_RE = '.*'
    
    module LogStash module PluginManager module PackFetchStrategy
  class Repository
    DEFAULT_PACK_URL = 'https://artifacts.elastic.co/downloads/logstash-plugins'
    PACK_EXTENSION = 'zip'
    
        # remove any version constrain from the Gemfile so the plugin(s) can be updated to latest version
    # calling update without requirements will remove any previous requirements
    plugins = plugins_to_update(previous_gem_specs_map)
    # Skipping the major version validation when using a local cache as we can have situations
    # without internet connection.
    filtered_plugins = plugins.map { |plugin| gemfile.find(plugin) }
      .compact
      .reject { |plugin| REJECTED_OPTIONS.any? { |key| plugin.options.has_key?(key) } }
      .each   { |plugin| gemfile.update(plugin.name) }
    
            fields = object.preferences.keys.map do |key|
          if object.has_preference?(key)
            form.label('preferred_#{key}', Spree.t(key) + ': ') +
              preference_field_for(form, 'preferred_#{key}', type: object.preference_type(key))
          end
        end
        safe_join(fields, '<br />'.html_safe)
      end
    
            def order
          @order ||= Spree::Order.includes(:line_items).find_by!(number: order_id)
          authorize! :update, @order, order_token
        end
    
                result = complete_service.call(order: spree_current_order)