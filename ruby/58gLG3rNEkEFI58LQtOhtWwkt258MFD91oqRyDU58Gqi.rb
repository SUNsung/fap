
        
        
  def dprint(msg)
    self.client.dprint(msg)
  end
    
              # Encodes the end_time field
          #
          # @return [String]
          def encode_end_time
            [end_time].pack('N')
          end
    
              # Decodes the flags field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_flags(input)
            input.value[0].value.to_i
          end
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcRequest
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 1
                self.pvno = decode_asn1_pvno(val)
              when 2
                self.msg_type = decode_asn1_msg_type(val)
              when 3
                self.pa_data  = decode_asn1_pa_data(val)
              when 4
                self.req_body = decode_asn1_req_body(val)
              else
                raise ::RuntimeError, 'Failed to decode KdcRequest SEQUENCE'
              end
            end
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos KDC-REQ-BODY (request body) data
        # definition
        class KdcRequestBody < Element
          # @!attribute options
          #   @return [Integer] The ticket flags
          attr_accessor :options
          # @!attribute cname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the client's principal identifier
          attr_accessor :cname
          # @!attribute realm
          #   @return [String] The realm part of the server's principal identifier
          attr_accessor :realm
          # @!attribute sname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the server's identity
          attr_accessor :sname
          # @!attribute from
          #   @return [Time] Start time when the ticket is to be postdated
          attr_accessor :from
          # @!attribute till
          #   @return [Time] Expiration date requested by the client
          attr_accessor :till
          # @!attribute rtime
          #   @return [Time] Optional requested renew-till time
          attr_accessor :rtime
          # @!attribute nonce
          #   @return [Integer] random number
          attr_accessor :nonce
          # @!attribute etype
          #   @return [Array<Integer>] The desired encryption algorithm to be used in the response
          attr_accessor :etype
          # @!attribute enc_auth_data
          #   @return [Rex::Proto::Kerberos::Model::EncryptedData] An encoding of the desired authorization-data encrypted
          attr_accessor :enc_auth_data
    
              # @!attribute type
          #   @return [Integer] The type of value
          attr_accessor :type
          # @!attribute value
          #   @return [Time] the time of the last request
          attr_accessor :value