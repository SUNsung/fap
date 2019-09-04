
        
          class Processor
    attr_reader :receiver
    
    # This is used in topic lists
require_dependency 'topic_poster'
    
          trigger_after_events unless opts[:skip_events]
    
          ensure_cors!
      presigned_url(obj, :put, UPLOAD_URL_EXPIRES_AFTER_SECONDS)
    rescue Aws::Errors::ServiceError => e
      Rails.logger.warn('Failed to generate upload URL for S3: #{e.message.presence || e.class.name}')
      raise StorageError
    end
    
          it 'should return signed URL for private uploads in S3' do
        SiteSetting.prevent_anons_from_downloading_files = true
        SiteSetting.authorized_extensions = 'pdf'
    
          # it works with arrays of values
      tc.record_change('colors', nil, ['red', 'blue'])
      expect(tc.diff['colors']).to eq([nil, ['red', 'blue']])
    
    class HeatSettingsUpdater
  def self.update
    return unless SiteSetting.automatic_topic_heat_values
    
          it 'doesn't change settings when automatic_topic_heat_values is false' do
        SiteSetting.automatic_topic_heat_values = false
        expect {
          update_settings
        }.to_not change { UserHistory.count }
        expect_default_values
      end
    end
  end
end

    
        before do
      stub(Agents::DotFoo).valid_type?('Agents::DotFoo') { true }
      stub(Agents::DotBar).valid_type?('Agents::DotBar') { true }
    end
    
    describe AgentsExporter do
  describe '#as_json' do
    let(:name) { 'My set of Agents' }
    let(:description) { 'These Agents work together nicely!' }
    let(:guid) { 'some-guid' }
    let(:tag_fg_color) { '#ffffff' }
    let(:tag_bg_color) { '#000000' }
    let(:icon) { 'Camera' }
    let(:source_url) { 'http://yourhuginn.com/scenarios/2/export.json' }
    let(:agent_list) { [agents(:jane_weather_agent), agents(:jane_rain_notifier_agent)] }
    let(:exporter) { AgentsExporter.new(
      agents: agent_list, name: name, description: description,
      source_url: source_url, guid: guid, tag_fg_color: tag_fg_color,
      tag_bg_color: tag_bg_color, icon: icon) }
    
          @scheduler.schedule_scheduler_agents
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
      it 'reports an offense when using depends_on :tex' do
    expect_offense(<<~RUBY)
      class Foo < Formula
        url 'https://brew.sh/foo-1.0.tgz'
        depends_on :tex
        ^^^^^^^^^^^^^^^ :tex is deprecated.
      end
    RUBY
  end
end
    
        return false if args[:before] && OS::Mac.version >= args[:before]
    
        def sdk_path_if_needed(v = nil)
      # Prefer Xcode SDK when both Xcode and the CLT are installed.
      # Expected results:
      # 1. On Xcode-only systems, return the Xcode SDK.
      # 2. On Xcode-and-CLT systems where headers are provided by the system, return nil.
      # 3. On CLT-only systems with no CLT SDK, return nil.
      # 4. On CLT-only systems with a CLT SDK, where headers are provided by the system, return nil.
      # 5. On CLT-only systems with a CLT SDK, where headers are not provided by the system, return the CLT SDK.
    
            # This logic provides a fake Xcode version based on the
        # installed CLT version. This is useful as they are packaged
        # simultaneously so workarounds need to apply to both based on their
        # comparable version.
        case (DevelopmentTools.clang_version.to_f * 10).to_i
        when 0       then 'dunno'
        when 60      then '6.0'
        when 61      then '6.1'
        when 70      then '7.0'
        when 73      then '7.3'
        when 80      then '8.0'
        when 81      then '8.3'
        when 90      then '9.2'
        when 91      then '9.4'
        when 100     then '10.2.1'
        when 110     then '11.0'
        else              '11.0'
        end
      end
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
            expect { instance }.to_not raise_error
    
          results = subject.machine_config(:default, :foo, boxes)
      box     = results[:box]
      config  = results[:config]
      expect(config.vm.box).to eq('foo')
      expect(box).to be_nil
      expect(results[:provider_cls]).to equal(provider_cls)
    end
    
                errors << I18n.t('vagrant.general.batch_unexpected_error',
                             machine: thread[:machine].name,
                             message: message)
          else
            errors << I18n.t('vagrant.general.batch_vagrant_error',
                             machine: thread[:machine].name,
                             message: thread[:error].message)
          end
        end
      end
    
            expect(described_class.exec(ssh_info)).to eq(nil)
        expect(Vagrant::Util::SafeExec).to have_received(:exec)
          .with(ssh_path, 'vagrant@localhost', '-p', '2222', '-o', 'LogLevel=FATAL', '-i', ssh_info[:private_key_path][0])
      end
    end
    
      def_delegators :@logger, :log, :log_status, :log_processing, :log_transform, :log_file_info, :log_processed, :log_http_get_file, :log_http_get_files, :silence_log
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
      # Generate digests for assets URLs.
  config.assets.digest = true
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
        # remove 'system' local gems used by LS
    local_gems = gemfile.locally_installed_gems.map(&:name) - NON_PLUGIN_LOCAL_GEMS
    
              it 'successfully install the plugin when verification is disabled' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end
    
          it 'list the plugins with their versions' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose')
        result.stdout.split('\n').each do |plugin|
          expect(plugin).to match(/^logstash-\w+-\w+\s\(\d+\.\d+.\d+(.\w+)?\)/)
        end
      end
    end
    
          set_preference args[0], args[1] if args.size == 2
    end
    
        def eligible_for_return?
      validators.all?(&:eligible_for_return?)
    end
    
            private
    
            def find_payment
          @payment = @order.payments.find_by!(number: params[:id])
        end
    
            def product_property
          if @product
            @product_property ||= @product.product_properties.find_by(id: params[:id])
            @product_property ||= @product.product_properties.includes(:property).where(spree_properties: { name: params[:id] }).first
            raise ActiveRecord::RecordNotFound unless @product_property
    
            def update
          @shipment = Spree::Shipment.accessible_by(current_ability, :update).readonly(false).find_by!(number: params[:id])
          @shipment.update_attributes_and_order(shipment_params)
    
      def create
    @address_endpoint = @server.address_endpoints.build(safe_params)
    if @address_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :address_endpoints]]
    else
      render_form_errors 'new', @address_endpoint
    end
  end
    
      extend ActiveSupport::Concern
    
      def new
    @http_endpoint = @server.http_endpoints.build
  end
    
      before_action :admin_required, :only => [:new, :create]
  before_action :require_organization_admin, :only => [:edit, :update, :delete, :destroy]
    
      include WithinOrganization
    
      def show
    if @server.created_at < 48.hours.ago
      @graph_type = :daily
      graph_data = @server.message_db.statistics.get(:daily, [:incoming, :outgoing, :bounces], Time.now, 30)
    elsif @server.created_at < 24.hours.ago
      @graph_type = :hourly
      graph_data = @server.message_db.statistics.get(:hourly, [:incoming, :outgoing, :bounces], Time.now, 48)
    else
      @graph_type = :hourly
      graph_data = @server.message_db.statistics.get(:hourly, [:incoming, :outgoing, :bounces], Time.now, 24)
    end
    @first_date = graph_data.first.first
    @last_date = graph_data.last.first
    @graph_data = graph_data.map(&:last)
    @messages = @server.message_db.messages(:order => 'id', :direction => 'desc', :limit => 6)
  end
    
      def persist
    auth_session.persist! if logged_in?
    render :plain => 'OK'
  end
    
      private
    
      def create
    @track_domain = @server.track_domains.build(params.require(:track_domain).permit(:name, :domain_id, :track_loads, :track_clicks, :excluded_click_domains, :ssl_enabled))
    if @track_domain.save
      redirect_to_with_json [:return_to, [organization, @server, :track_domains]]
    else
      render_form_errors 'new', @track_domain
    end
  end
    
      def new
    @organization_user = organization.organization_users.build
  end