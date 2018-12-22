
        
        module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
        # Checks if this registry has any items.
    #
    # @return [Boolean]
    def empty?
      @items.keys.empty?
    end
    
    =begin
 +------+----------------+-------------------------------------------+
   | HEX  | NAME           | DESCRIPTION                               |
   +------+----------------+-------------------------------------------+
   | HEX  | NAME           | DESCRIPTION                               |
   | 0x01 | CALLED NUMBER  | Number/extension being called             |
   | 0x02 | CALLING NUMBER | Calling number                            |
   | 0x03 | CALLING ANI    | Calling number ANI for billing            |
   | 0x04 | CALLING NAME   | Name of caller                            |
   | 0x05 | CALLED CONTEXT | Context for number                        |
   | 0x06 | USERNAME       | Username (peer or user) for               |
   |      |                | authentication                            |
   | 0x07 | PASSWORD       | Password for authentication               |
   | 0x08 | CAPABILITY     | Actual CODEC capability                   |
   | 0x09 | FORMAT         | Desired CODEC format                      |
   | 0x0a | LANGUAGE       | Desired language                          |
   | 0x0b | VERSION        | Protocol version                          |
   | 0x0c | ADSICPE        | CPE ADSI capability                       |
   | 0x0d | DNID           | Originally dialed DNID                    |
   | 0x0e | AUTHMETHODS    | Authentication method(s)                  |
   | 0x0f | CHALLENGE      | Challenge data for MD5/RSA                |
   | 0x10 | MD5 RESULT     | MD5 challenge result                      |
   | 0x11 | RSA RESULT     | RSA challenge result                      |
   | 0x12 | APPARENT ADDR  | Apparent address of peer                  |
   | 0x13 | REFRESH        | When to refresh registration              |
   | 0x14 | DPSTATUS       | Dialplan status                           |
   | 0x15 | CALLNO         | Call number of peer                       |
   | 0x16 | CAUSE          | Cause                                     |
   | 0x17 | IAX UNKNOWN    | Unknown IAX command                       |
   | 0x18 | MSGCOUNT       | How many messages waiting                 |
   | 0x19 | AUTOANSWER     | Request auto-answering                    |
   | 0x1a | MUSICONHOLD    | Request musiconhold with QUELCH           |
   | 0x1b | TRANSFERID     | Transfer Request Identifier               |
   | 0x1c | RDNIS          | Referring DNIS                            |
   | 0x1d | Reserved       | Reserved for future use                   |
   | 0x1e | Reserved       | Reserved for future use                   |
   | 0x1f | DATETIME       | Date/Time                                 |
   | 0x20 | Reserved       | Reserved for future use                   |
   | 0x21 | Reserved       | Reserved for future use                   |
   | 0x22 | Reserved       | Reserved for future use                   |
   | 0x23 | Reserved       | Reserved for future use                   |
   | 0x24 | Reserved       | Reserved for future use                   |
   | 0x25 | Reserved       | Reserved for future use                   |
   | 0x26 | CALLINGPRES    | Calling presentation                      |
   | 0x27 | CALLINGTON     | Calling type of number                    |
   | 0x28 | CALLINGTNS     | Calling transit network select            |
   | 0x29 | SAMPLINGRATE   | Supported sampling rates                  |
   | 0x2a | CAUSECODE      | Hangup cause                              |
   | 0x2b | ENCRYPTION     | Encryption format                         |
   | 0x2c | ENCKEY         | Reserved for future Use                   |
   | 0x2d | CODEC PREFS    | CODEC Negotiation                         |
   | 0x2e | RR JITTER      | Received jitter, as in RFC 3550           |
   | 0x2f | RR LOSS        | Received loss, as in RFC 3550             |
   | 0x30 | RR PKTS        | Received frames                           |
   | 0x31 | RR DELAY       | Max playout delay for received frames in  |
   |      |                | ms                                        |
   | 0x32 | RR DROPPED     | Dropped frames (presumably by jitter      |
   |      |                | buffer)                                   |
   | 0x33 | RR OOO         | Frames received Out of Order              |
   | 0x34 | OSPTOKEN       | OSP Token Block                           |
   +------+----------------+-------------------------------------------+
=end
    
    
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
    
    module Rex
  module Proto
    module Kerberos
      # This class is a representation of a kerberos client.
      class Client
        # @!attribute host
        #   @return [String] The kerberos server host
        attr_accessor :host
        # @!attribute port
        #   @return [Integer] The kerberos server port
        attr_accessor :port
        # @!attribute timeout
        #   @return [Integer] The connect / read timeout
        attr_accessor :timeout
        # @todo Support UDP
        # @!attribute protocol
        #   @return [String] The transport protocol used (tcp/udp)
        attr_accessor :protocol
        # @!attribute connection
        #   @return [IO] The connection established through Rex sockets
        attr_accessor :connection
        # @!attribute context
        #   @return [Hash] The Msf context where the connection belongs to
        attr_accessor :context
    
              # Encodes the renew_time field
          #
          # @return [String]
          def encode_renew_time
            [renew_till].pack('N')
          end
    
                checksum = cipher[0, 16]
            data = cipher[16, cipher.length - 1]
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              include Rex::Proto::Kerberos::Crypto
          include Rex::Proto::Kerberos::Model
    
              # Decodes the last_req from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::LastRequest>]
          def decode_last_req(input)
            last_requests = []
            input.value[0].value.each do |last_request|
              last_requests << Rex::Proto::Kerberos::Model::LastRequest.decode(last_request)
            end
    
              # Decodes the error_code field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_error_code(input)
            input.value[0].value.to_i
          end
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
        end
    
          def product_scope
        if @current_user_roles.include?('admin')
          scope = Product.with_deleted.accessible_by(current_ability, :read).includes(*product_includes)
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def taxonomy_params
          if params[:taxonomy] && !params[:taxonomy].empty?
            params.require(:taxonomy).permit(permitted_taxonomy_attributes)
          else
            {}
          end
        end
      end
    end
  end
end

    
            def index
          @users = Spree.user_class.accessible_by(current_ability, :read)
    
      node[:applications].each do |app, data|
    template '/etc/monit.d/sidekiq_#{app}.monitrc' do 
      owner 'root' 
      group 'root' 
      mode 0644 
      source 'monitrc.conf.erb' 
      variables({ 
        :num_workers => worker_count,
        :app_name => app, 
        :rails_env => node[:environment][:framework_env] 
      }) 
    end
    
          def self.default_generator_root
        File.dirname(__FILE__)
      end
    
        def initialize(options)
      @strictly_ordered_queues = !!options[:strict]
      @queues = options[:queues].map { |q| 'queue:#{q}' }
      if @strictly_ordered_queues
        @queues = @queues.uniq
        @queues << TIMEOUT
      end
    end
    
        class WithoutTimestamp < Pretty
      def call(severity, time, program_name, message)
        '#{::Process.pid} TID-#{Sidekiq::Logging.tid}#{context} #{severity}: #{message}\n'
      end
    end