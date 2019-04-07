    if !PostRequests.include?(self.method)
      if param_string.size > 0
        str << '?' + param_string
      end
    end
    str
  end
    
            # Closes the connection
        def close
          if connection
            connection.shutdown
            connection.close unless connection.closed?
          end
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
              # Encodes the ticket field
          #
          # @return [String]
          def encode_ticket
            ticket.encode
          end
    
                res = ''
            case etype
            when RC4_HMAC
              res = encrypt_rc4_hmac(data, key, 5)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Decodes the Rex::Proto::Kerberos::Model::KdcRequest from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode KdcRequest, invalid input'
            end
    
              # @!attribute type
          #   @return [Integer] The type of value
          attr_accessor :type
          # @!attribute value
          #   @return [Time] the time of the last request
          attr_accessor :value