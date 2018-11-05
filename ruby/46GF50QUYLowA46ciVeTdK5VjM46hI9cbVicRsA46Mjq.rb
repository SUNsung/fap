
        
          def self.create_ipmi_getchannel_probe
    [   # Get Channel Authentication Capabilities
      0x06, 0x00, 0xff, 0x07, # RMCP Header
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x20, 0x18,
      0xc8, 0x81, 0x00, 0x38, 0x8e, 0x04, 0xb5
    ].pack('C*')
  end
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
                int
          end
    
              # Decodes the last_req from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::LastRequest>]
          def decode_last_req(input)
            last_requests = []
            input.value[0].value.each do |last_request|
              last_requests << Rex::Proto::Kerberos::Model::LastRequest.decode(last_request)
            end
    
              private
    
              # Rex::Proto::Kerberos::Model::LastRequest encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'LastRequest encoding not supported'
          end
    
          def report
        <<-EOS