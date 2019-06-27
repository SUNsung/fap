
        
            def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
            css('.row-margin', '.ng-cloak').each do |node|
          node.before(node.children).remove
        end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
            css('header').each do |node|
          node.before(node.children).remove
        end
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Principal into an String
          #
          # @return [String] encoded principal
          def encode
            encoded = ''
            encoded << encode_name_type
            encoded << [components.length].pack('N')
            encoded << encode_realm
            encoded << encode_components
    
              # Encodes the type
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type(type)
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Type::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
        signature0 = (<<~'end;').unpack('m')[0]
      MEQCIEOTY/hD7eI8a0qlzxkIt8LLZ8uwiaSfVbjX2dPAvN11AiAQdCYx56Fq
      QdBp1B4sxJoA8jvODMMklMyBKVmudboA6A==
    end;
    assert_equal true, p256.verify('SHA256', signature0, data)
    signature1 = signature0.succ
    assert_equal false, p256.verify('SHA256', signature1, data)
  end
    
      it 'raises Errno::EAFNOSUPPORT or Errno::EPROTONOSUPPORT when given an invalid address family' do
    begin
      UDPSocket.new(666)
    rescue Errno::EAFNOSUPPORT, Errno::EPROTONOSUPPORT => e
      [Errno::EAFNOSUPPORT, Errno::EPROTONOSUPPORT].should include(e.class)
    else
      raise 'expected Errno::EAFNOSUPPORT or Errno::EPROTONOSUPPORT exception raised'
    end
  end
end

    
    module TestIRB
  class TestColor < Test::Unit::TestCase
    CLEAR     = '\e[0m'
    BOLD      = '\e[1m'
    UNDERLINE = '\e[4m'
    REVERSE   = '\e[7m'
    RED       = '\e[31m'
    GREEN     = '\e[32m'
    YELLOW    = '\e[33m'
    BLUE      = '\e[34m'
    MAGENTA   = '\e[35m'
    CYAN      = '\e[36m'
    
            def initialize(argv)
          @use_regex = argv.flag?('regex')
          @show_all = argv.flag?('show-all')
          @query = argv.shift_argument
          @query = @query.gsub('.podspec', '') unless @query.nil?
          super
        end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def install_plugin(plugin, load_hooks: true, load_immediately: false)
      installer.install(plugin,
                        load_hooks: load_hooks,
                        load_immediately: load_immediately)
    end
    
            true
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
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
    
    describe Tmuxinator::Window do
  let(:project) { double }
  let(:panes) { ['vim', nil, 'top'] }
  let(:window_name) { 'editor' }
  let(:synchronize) { false }
  let(:yaml) do
    {
      window_name => {
        'pre' => [
          'echo 'I get run in each pane.  Before each pane command!'',
          nil
        ],
        'synchronize' => synchronize,
        'layout' => 'main-vertical',
        'panes' => panes
      }
    }
  end
  let(:yaml_root) do
    {
      'editor' => {
        'root' => '/project/override',
        'root?' => true,
        'pre' => [
          'echo 'I get run in each pane.  Before each pane command!'',
          nil
        ],
        'layout' => 'main-vertical',
        'panes' => panes
      }
    }
  end
    
          def new_project_with_session(name, session)
        if Tmuxinator::Config.version < 1.6
          raise 'Creating projects from sessions is unsupported\
            for tmux version 1.5 or lower.'
        end
    
      describe '#name' do
    it { expect(instance.name).to eq 'wemux' }
  end