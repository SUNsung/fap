
        
            def find_app(apple_id: nil, app_identifier: nil)
      if app_identifier
        app = Spaceship::ConnectAPI::App.find(app_identifier)
        UI.user_error!('Could not find an app by #{app_identifier}') unless app
        return app
      end
    
            resps = Spaceship::ConnectAPI.get_beta_testers(filter: filter, includes: includes, limit: limit, sort: sort).all_pages
        return resps.map(&:to_models).flatten
      end
    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        resps = Spaceship::ConnectAPI.get_certificates(filter: filter, includes: includes).all_pages
        return resps.map(&:to_models).flatten
      end
    end
  end
end

    
      # A period that the user is allowed to confirm their account before their
  # token becomes invalid. For example, if set to 3.days, the user can confirm
  # their account within 3 days after the mail was sent, but on the fourth day
  # their account can't be confirmed with the token any more.
  # Default is nil, meaning there is no restriction on how long a user can take
  # before confirming their account.
  # config.confirm_within = 3.days
    
      test 'warden manager user configuration through a block' do
    Devise.yield_and_restore do
      executed = false
      Devise.warden do |config|
        executed = true
        assert_kind_of Warden::Config, config
      end
    
        def translation_scope
      'devise.confirmations'
    end
end

    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
        # Create magic predicates for verifying what module is activated by this map.
    # Example:
    #
    #   def confirmable?
    #     self.modules.include?(:confirmable)
    #   end
    #
    def self.add_module(m)
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{m}?
          self.modules.include?(:#{m})
        end
      METHOD
    end
    
            # Returns the path to the Chef binary, taking into account the
        # `binary_path` configuration option.
        def chef_binary_path(binary)
          return binary if !@config.binary_path
          return File.join(@config.binary_path, binary)
        end
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
      let(:environment)   { isolated_environment }
    
      # A helper to register a provider for use in tests.
  def register_provider(name, config_class=nil, options=nil)
    provider_cls = Class.new(VagrantTests::DummyProvider) do
      if options && options[:unusable]
        def self.usable?(raise_error=false)
          raise Vagrant::Errors::VagrantError if raise_error
          false
        end
      end
    end
    
              host_env.machine(
            host_machine_name,
            host_env.default_provider(
              exclude: [:docker],
              force_default: false,
            ))
        end
    
          expect(subject.state.id).to eq(:not_created)
    end
  end
    
        # Run all the queued up actions, parallelizing if possible.
    #
    # This will parallelize if and only if the provider of every machine
    # supports parallelization and parallelization is possible from
    # initialization of the class.
    def run
      par = false
    
        records.each { |account| authorize(account.user, :reject?) }
           .each { |account| SuspendAccountService.new.call(account, including_user: true, destroy: true, skip_distribution: true) }
  end
end

    
      def perform(status_id)
    @status  = Status.find(status_id)
    @account = @status.account
    
    class ActivityPub::DistributionWorker
  include Sidekiq::Worker
  include Payloadable
    
      private
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
        def pam_conflict(_attributes)
      # Block pam login tries on traditional account
    end
    
      def origin_account
    @account
  end
    
          it 'does not process payload if no signature exists' do
        expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(nil)
        expect(ActivityPub::Activity).not_to receive(:factory)
    
          it 'creates a block from sender to recipient' do
        expect(sender.blocking?(recipient)).to be true
      end
    
    start = -1
min = -1
max = 0
for segment in macho.segments
  next if segment.segname == MachO::LoadCommands::SEGMENT_NAMES[:SEG_PAGEZERO]
  puts 'segment: #{segment.segname} #{segment.vmaddr.to_s(16)}'
  if min == -1 or min > segment.vmaddr
    min = segment.vmaddr
  end
  if max < segment.vmaddr + segment.vmsize
    max = segment.vmaddr + segment.vmsize
  end
end
    
      var target = [];
  var stale = 0;
  Object.defineProperties(target, props);
  stale = target.stale;
    
        register_options(
      [
        OptString.new('FILENAME', [false, 'The LNK file']),
        OptString.new('DLLNAME', [false, 'The DLL file containing the payload']),
        OptString.new('PATH', [false, 'An explicit path to where the files should be written to'])
      ]
    )
    
        if datastore['SVC_GEN']
      com_opts[:harness] = File.join(Msf::Config.install_root, 'external', 'source', 'psh_exe', 'dot_net_service.cs')
      com_opts[:assemblies] = ['System.ServiceProcess.dll', 'System.Configuration.Install.dll']
    else
      com_opts[:harness] = File.join(Msf::Config.install_root, 'external', 'source', 'psh_exe','dot_net_exe.cs')
    end
    
        # Check for result
    begin
      size = session.fs.file.stat(net_com_opts[:target].gsub('\\', '\\\\')).size
      print_good 'File #{net_com_opts[:target].gsub('\\', '\\\\')} found, #{size}kb'
    rescue
      print_error 'File #{net_com_opts[:target].gsub('\\', '\\\\')} not found,' \
                  ' NET CLR version #{datastore['NET_CLR_VER']} possibly not available'
      return
    end
    
    # Exec a command and return the results
def m_exec(session, cmd)
  r = session.sys.process.execute(cmd, nil, {'Hidden' => true, 'Channelized' => true})
  b = ''
  while(d = r.channel.read)
    b << d
  end
  r.channel.close
  r.close
  b
end
    
    
end

    
    TLV_TYPE_REGISTER_NAME      = TLV_META_TYPE_STRING  | 2540
TLV_TYPE_REGISTER_SIZE      = TLV_META_TYPE_UINT    | 2541
TLV_TYPE_REGISTER_VALUE_32  = TLV_META_TYPE_UINT    | 2542
TLV_TYPE_REGISTER           = TLV_META_TYPE_GROUP   | 2550
    
          # Generates the contents of the module.modulemap file.
      #
      # @return [String]
      #
      def generate
        <<-MODULE_MAP.strip_heredoc
#{module_specifier_prefix}module #{target.product_module_name}#{module_declaration_attributes} {
  #{headers.join('\n  ')}
    }
    
            # @note Test specs are intentionally not included as part of the equality for pod variants since a
        #       pod variant should not be affected by the number of test nor app specs included.
        #
        # @return [Bool] whether the {PodVariant} is equal to another taking all
        #         all their attributes into account
        #
        def ==(other)
          self.class == other.class &&
          build_type == other.build_type &&
            platform == other.platform &&
            specs == other.specs
        end
        alias_method :eql?, :==
    
          it 'returns scopes by versioned platform names if they qualify' do
        variants = PodVariantSet.new([
          PodVariant.new([@root_spec], [], [], Platform.ios),
          PodVariant.new([@root_spec], [], [], Platform.new(:ios, '7.0')),
        ])
        variants.scope_suffixes.values.should == %w(iOS iOS7.0)
      end
    
                  FileUtils.expects(:ln_sf).with(relative_path, target_module_path)
              native_target = mock(:build_configurations => [])
              @installer.send(:create_module_map, native_target)
            end
          end
    
          describe 'with configuration dependent pod targets' do
        before do
          file_accessor = fixture_file_accessor(@spec, Platform.ios)
          @pod_target_release = PodTarget.new(config.sandbox, false, {}, [], Platform.ios, [@spec],
                                              [@target_definition], [file_accessor])
          @target.stubs(:pod_targets_for_build_configuration).with('Debug').returns([@pod_target])
          @target.stubs(:pod_targets_for_build_configuration).with('Release').returns([@pod_target, @pod_target_release])
          @target.stubs(:pod_targets).returns([@pod_target, @pod_target_release])
          @target.stubs(:user_build_configurations).returns('Debug' => :debug, 'Release' => :release)
        end
    
              describe 'with boolean build settings' do
            it 'does not warn if the values are equal' do
              @consumer_a.stubs(:user_target_xcconfig).returns('ENABLE_HEADER_DEPENDENCIES' => 'YES')
              @consumer_b.stubs(:user_target_xcconfig).returns('ENABLE_HEADER_DEPENDENCIES' => 'YES')
              @xcconfig = @generator.generate
              @xcconfig.to_hash['ENABLE_HEADER_DEPENDENCIES'].should == 'YES'
            end
    
          def escape_hash(hash)
        hash = hash.dup
        hash.each { |k,v| hash[k] = escape(v) }
        hash
      end
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
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
    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
        def initialize(local_file)
      @local_file = local_file
    end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end
