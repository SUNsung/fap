
        
              def test_invert_drop_table_without_a_block_nor_option
        assert_raises(ActiveRecord::IrreversibleMigration) do
          @recorder.inverse_of :drop_table, [:people_reminders]
        end
      end
    
      def test_index_in_create
    def (ActiveRecord::Base.connection).data_source_exists?(*); false; end
    
        config.action_mailbox.queues = ActiveSupport::InheritableOptions.new \
      incineration: :action_mailbox_incineration, routing: :action_mailbox_routing
    
          def self.symbols
        type_klass::SET.symbols
      end
    end
  end
end

    
    module VagrantPlugins
  module Chef
    module Provisioner
      # This class is a base class where the common functionality shared between
      # chef-solo and chef-client provisioning are stored. This is **not an actual
      # provisioner**. Instead, {ChefSolo} or {ChefServer} should be used.
      class Base < Vagrant.plugin('2', :provisioner)
        include Vagrant::Util
        include Vagrant::Util::Presence
    
    # Create a temporary directory where test vagrant will run. The reason we save
# this to a constant is so we can clean it up later.
VAGRANT_TEST_CWD = Dir.mktmpdir('vagrant-test-cwd')
    
          expect(a).to eq(b)
    end
    
            begin
          FileUtils.cp(source, destination)
        rescue Errno::EACCES
          raise Errors::CopyPrivateKeyFailed,
            source: source,
            destination: destination
        end
      end
    
        it 'should be nil if no primary is specified in a multi-machine environment' do
      environment = isolated_environment do |env|
        env.vagrantfile(<<-VF)
Vagrant.configure('2') do |config|
  config.vm.box = 'base'
  config.vm.define :foo
  config.vm.define :bar
end
VF
    
    describe VagrantPlugins::ProviderVirtualBox::Provider do
  let(:driver){ double('driver') }
  let(:provider){ double('provider', driver: driver) }
  let(:provider_config){ double('provider_config') }
  let(:uid) { '1000' }
  let(:machine){ double('machine', uid: uid, provider: provider, provider_config: provider_config) }
    
                widths[method] ||= 0
            cur = entry.send(method).to_s.length
            widths[method] = cur if cur > widths[method]
          end
        end
    
        records.each { |account| authorize(account.user, :reject?) }
           .each { |account| SuspendAccountService.new.call(account, including_user: true, destroy: true, skip_distribution: true) }
  end
end

    
      private
    
            let(:object_json) do
          {
            id: 'https://example.com/actor#bar',
            type: 'Note',
            content: 'Lorem ipsum',
            to: 'http://example.com/followers',
            attributedTo: 'https://example.com/actor',
          }
        end
    
      def serializer_class
    ProofProvider::Keybase::Serializer
  end
    
      #
  # Starts a new connecting thread
  #
  def add_handler(opts={})
    
        # Add the windows pe suffix to rexename
    unless rexename.end_with?('.exe')
      rexename << '.exe'
    end
    
          # Output results to screen
      print_status('     Host: #{http_proxy_host}')
      print_status('     Port: #{http_proxy_port}')
      print_status('     Username: #{http_proxy_username}')
      print_status('     Password: #{http_proxy_password}')
      print_status('')
    end
    
        raw = create_payload_from_file rexe
    
    
    
    TLV_TYPE_WEBCAM_IMAGE       = TLV_META_TYPE_RAW     | (TLV_EXTENSIONS + 1)
TLV_TYPE_WEBCAM_INTERFACE_ID= TLV_META_TYPE_UINT    | (TLV_EXTENSIONS + 2)
TLV_TYPE_WEBCAM_QUALITY     = TLV_META_TYPE_UINT    | (TLV_EXTENSIONS + 3)
TLV_TYPE_WEBCAM_NAME        = TLV_META_TYPE_STRING  | (TLV_EXTENSIONS + 4)
    
      def initialize(info = {})
    super(
      update_info(
        info,
        'Name'          => 'OSX Meterpreter, Reverse HTTPS Inline',
        'Description'   => 'Run the Meterpreter / Mettle server payload (stageless)',
        'Author'        => [
          'Adam Cammack <adam_cammack[at]rapid7.com>',
          'Brent Cook <brent_cook[at]rapid7.com>',
          'timwr'
        ],
        'Platform'      => 'osx',
        'Arch'          => ARCH_X64,
        'License'       => MSF_LICENSE,
        'Handler'       => Msf::Handler::ReverseHttps,
        'Session'       => Msf::Sessions::Meterpreter_x64_OSX
      )
    )
  end