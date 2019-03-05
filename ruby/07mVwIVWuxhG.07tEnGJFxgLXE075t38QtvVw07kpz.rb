
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    require 'benchmark/ips'
require 'pathutil'
    
              # This is too noisy even for --verbose, but uncomment if you need it for
          # a specific WebSockets issue.  Adding ?LR-verbose=true onto the URL will
          # enable logging on the client side.
          # em_opts[:debug] = true
    
      let(:env) { described_class.new }
    
      #
  # HTTP PUT request class wrapper.
  #
  class Put < Request
    def initialize(uri = '/', proto = DefaultProtocol)
      super('PUT', uri, proto)
    end
  end
    
        head + [data.length].pack('v') + data
  end
    
                components.each do |c|
              encoded << [c.length].pack('N')
              encoded << c
            end
    
            end
      end
    end
  end
end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a KRB_AP_REQ definition, containing the Kerberos protocol version number,
        # the message type KRB_AP_REQ, an options field to indicate any options in use, and the ticket and authenticator
        # themselves
        class ApReq < Element
          # @!attribute pvno
          #   @return [Integer] The protocol version number
          attr_accessor :pvno
          # @!attribute msg_type
          #   @return [Integer] The type of the protocol message
          attr_accessor :msg_type
          # @!attribute options
          #   @return [Integer] request options, affects processing
          attr_accessor :options
          # @!attribute ticket
          #   @return [Rex::Proto::Kerberos::Model::Ticket] The ticket authenticating the client to the server
          attr_accessor :ticket
          # @!attribute authenticator
          #   @return [Rex::Proto::Kerberos::Model::EncryptedData] This contains the authenticator, which includes the
          #   client's choice of a subkey
          attr_accessor :authenticator
    
                res = ''
            case etype
            when RC4_HMAC
              res = decrypt_rc4_hmac(cipher, key, msg_type)
              raise ::RuntimeError, 'EncryptedData failed to decrypt' if res.length < 8
              res = res[8, res.length - 1]
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Type::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end