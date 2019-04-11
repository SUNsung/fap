
        
                css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
            # This unregisters a plugin so that its components will no longer
        # be used. Note that this should only be used for testing purposes.
        def unregister(plugin)
          if @registered.include?(plugin)
            @logger.info('Unregistered: #{plugin.name}')
            @registered.delete(plugin)
          end
        end
      end
    end
  end
end

    
              # Register a new provisioner class only if a name was given
          data[:provisioners].register(name.to_sym, &block) if name != UNSET_VALUE
    
                    # This is a regular expression name, so we convert to a regular
                # expression and allow that sort of matching.
                regex = Regexp.new(pattern)
    
      def hub_callback
    params['hub.callback']
  end
    
      def update
    params.require([:id])
    
      def after_sign_in_path_for(resource)
    if resource.email_verified?
      root_path
    else
      finish_signup_path
    end
  end
end

    
      included do
    before_action :set_rate_limit_headers, if: :rate_limited_request?
  end
    
        self.codec = res[2][IAX_IE_DESIRED_CODEC].unpack('N')[0]
    self.state = :ringing
    self.ring_start = ::Time.now.to_i
    self.client.send_ack(self)
    true
  end
    
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
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Rex::Proto::Kerberos::Model::AuthorizationData decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Authorization Data decoding not supported'
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos EncryptionKey data
        # definition
        class EncryptionKey < Element
    
              # Decodes the etype field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Integer>]
          def decode_etype(input)
            encs = []
            input.value[0].value.each do |enc|
              encs << enc.value.to_i
            end
            encs
          end
    
                decode_asn1(asn1)
          end
    
              # @!attribute type
          #   @return [Integer] The type of value
          attr_accessor :type
          # @!attribute value
          #   @return [Time] the time of the last request
          attr_accessor :value