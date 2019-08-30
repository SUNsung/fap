
        
            describe '#perform' do
      subject { described_class.new(json, sender) }
    
      describe 'follow_request' do
    let(:follow_request) { Fabricate(:follow_request, account: sender, target_account: receiver.account) }
    let(:mail) { NotificationMailer.follow_request(receiver.account, Notification.create!(account: receiver.account, activity: follow_request)) }
    
      respond_to :json
    
              expect(reblog).to_not be_nil
          expect(reblog.reblog.text).to eq 'Hello world'
        end
      end
    
        state.badchars.each_byte do |byte|
      # Last ditch effort, if any of the normal characters used by base64
      # are badchars, try to replace them with something that will become
      # the appropriate thing on the other side.
      if b64.include?(byte.chr)
        b64.gsub!(byte.chr, '.chr(#{byte}).')
      end
    end
    
        str << '\r\n'
    
      #
  # Updates the various parts of the HTTP response command string.
  #
  def update_cmd_parts(str)
    if (md = str.match(/HTTP\/(.+?)\s+(\d+)\s?(.+?)\r?\n?$/))
      self.message = md[3].gsub(/\r/, '')
      self.code    = md[2].to_i
      self.proto   = md[1]
    else
      raise RuntimeError, 'Invalid response command string', caller
    end
    
    end
    
        self.state = :registered
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
      def self.create_ipmi_rakp_1(bmc_session_id, console_random_id, username)
    head = [
      0x06, 0x00, 0xff, 0x07,  # RMCP Header
      0x06,                    # RMCP+ Authentication Type
      PAYLOAD_RAKP1,           # Payload Type
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
    ].pack('C*')
    
            # Sends a kerberos request, and reads the response through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] The kerberos message
        # @raise [RuntimeError] if the transport protocol is unknown or the response can't be parsed.
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_recv(req)
          send_request(req)
          res = recv_response
    
              # Creates a script that copies the resources to the bundle of the client
          # target.
          #
          # @note   The bridge support file needs to be created before the prefix
          #         header, otherwise it will not be added to the resources script.
          #
          # @return [void]
          #
          def create_copy_resources_script
            path = target.copy_resources_script_path
            generator = Generator::CopyResourcesScript.new(target.resource_paths_by_config, target.platform)
            update_changed_file(generator, path)
            add_file_to_support_group(path)
          end
    
          # @return [Symbol] the linkage for this build type, one of KNOWN_LINKAGE_OPTIONS
      #
      attr_reader :linkage
    
        describe 'Pod targets' do
      before do
        @spec = fixture_spec('banana-lib/BananaLib.podspec')
        @target_definition = Podfile::TargetDefinition.new('Pods', nil)
        @target_definition.abstract = false
        @target_definition.set_platform(:ios, '10.0')
        file_accessor = fixture_file_accessor(@spec, Platform.ios)
        @pod_target = PodTarget.new(config.sandbox, false, {}, [], Platform.ios, [@spec], [@target_definition],
                                    [file_accessor])
        @target = AggregateTarget.new(config.sandbox, false, {}, [], Platform.ios, @target_definition,
                                      config.sandbox.root.dirname, nil, nil, 'Release' => [@pod_target], 'Debug' => [@pod_target])
      end
    
          describe 'convenience factory methods' do
        it '#dynamic_library' do
          BuildType.dynamic_library.should == BuildType.new(:linkage => :dynamic, :packaging => :library)
        end
    
          LAUNCHSCREEN_STORYBOARD_CONTENTS = <<-XML.strip_heredoc.freeze
              <?xml version='1.0' encoding='UTF-8' standalone='no'?>
              <document type='com.apple.InterfaceBuilder3.CocoaTouch.Storyboard.XIB' version='3.0' toolsVersion='13122.16' systemVersion='17A277' targetRuntime='iOS.CocoaTouch' propertyAccessControl='none' useAutolayout='YES' launchScreen='YES' useTraitCollections='YES' useSafeAreas='YES' colorMatched='YES' initialViewController='01J-lp-oVM'>
                <dependencies>
                  <plugIn identifier='com.apple.InterfaceBuilder.IBCocoaTouchPlugin' version='13104.12'/>
                  <capability name='Safe area layout guides' minToolsVersion='9.0'/>
                  <capability name='documents saved in the Xcode 8 format' minToolsVersion='8.0'/>
                </dependencies>
                <scenes>
                  <!--View Controller-->
                  <scene sceneID='EHf-IW-A2E'>
                    <objects>
                      <viewController id='01J-lp-oVM' sceneMemberID='viewController'>
                        <view key='view' contentMode='scaleToFill' id='Ze5-6b-2t3'>
                          <rect key='frame' x='0.0' y='0.0' width='375' height='667'/>
                          <autoresizingMask key='autoresizingMask' widthSizable='YES' heightSizable='YES'/>
                          <color key='backgroundColor' red='1' green='1' blue='1' alpha='1' colorSpace='custom' customColorSpace='sRGB'/>
                          <viewLayoutGuide key='safeArea' id='6Tk-OE-BBY'/>
                        </view>
                      </viewController>
                      <placeholder placeholderIdentifier='IBFirstResponder' id='iYj-Kq-Ea1' userLabel='First Responder' sceneMemberID='firstResponder'/>
                    </objects>
                    <point key='canvasLocation' x='53' y='375'/>
                  </scene>
                </scenes>
              </document>
      XML
    end
  end
end

    
    module Pod
  class Installer
    class Analyzer
      # This class represents the state of a collection of Pods.
      #
      # @note The names of the pods stored by this class are always the **root**
      #       name of the specification.
      #
      # @note The motivation for this class is to ensure that the names of the
      #       subspecs are added instead of the name of the Pods.
      #
      class SpecsState
        # @return [Set<String>] the names of the pods that were added.
        #
        attr_reader :added
    
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
    
          warn_local_gems(plugins_with_path) if plugins_with_path.size > 0
    end
    update_gems!
  end
    
      let(:unordered_config_parts) { ordered_config_parts.shuffle }
  let(:settings) { LogStash::SETTINGS }
    
        desc 'Generate a valid ssh-config'
    task :ssh_config do
      require 'json'
      # Loop until the Vagrant box finishes SSH bootstrap
      raw_ssh_config = Stud.try(50.times, LogStash::CommandExecutor::CommandError) do
          LogStash::VagrantHelpers.fetch_config.stdout.split('\n');
      end
      parsed_ssh_config = LogStash::VagrantHelpers.parse(raw_ssh_config)
      File.write('.vm_ssh_config', parsed_ssh_config.to_json)
    end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
    ROOT = File.expand_path(File.join(File.dirname(__FILE__), '..', '..', '..'))
$LOAD_PATH.unshift File.join(ROOT, 'logstash-core/lib')
    
    describe FPM::Package::CPAN, :if => have_cpanm do
  subject { FPM::Package::CPAN.new }
    
          context 'and :python_package_name_prefix is nil/default' do
        it 'should prefix the package with 'python-'' do
          subject.input(example_dir)
          insist { subject.name } == 'python-example'
        end
      end
    
        if attributes[:pear_data_dir]
      logger.info('Setting data_dir', :data_dir => attributes[:pear_data_dir])
      safesystem('pear', '-c', config, 'config-set', 'data_dir', '#{staging_path(installroot)}/#{attributes[:pear_data_dir]}')
    end
    
      # The directory we create should just be the name of the package as the
  # module name
  def default_output
    name
  end # def default_output