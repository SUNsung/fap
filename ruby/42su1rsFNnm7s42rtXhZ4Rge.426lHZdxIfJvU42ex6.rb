
        
          #
  # Constructage of the HTTP response with the supplied code, message, and
  # protocol.
  #
  def initialize(code = 200, message = 'OK', proto = DefaultProtocol)
    super()
    
        # Handle authentication if its requested
    if res[1] == IAX_SUBTYPE_AUTHREQ
      chall = nil
    
              # Encodes the renew_time field
          #
          # @return [String]
          def encode_renew_time
            [renew_till].pack('N')
          end
    
                decrypted
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcRequest from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)