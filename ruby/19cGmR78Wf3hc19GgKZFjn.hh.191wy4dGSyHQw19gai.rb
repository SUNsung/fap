
        
                  data = connection.get_once(length, timeout)
          unless data && data.length == length
            raise ::RuntimeError, 'Kerberos Client: failed to read response'
          end
    
              # Retrieves the element instance fields
          #
          # @return [Array]
          def attributes
            self.class.attributes
          end
    
              # Decodes the end_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_end_time(input)
            input.value[0].value
          end
    
                decode_asn1(asn1)
          end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.pvno = decode_pvno(val)
              when 1
                self.msg_type = decode_msg_type(val)
              when 2
                self.ctime = decode_ctime(val)
              when 3
                self.cusec = decode_cusec(val)
              when 4
                self.stime = decode_stime(val)
              when 5
                self.susec = decode_susec(val)
              when 6
                self.error_code = decode_error_code(val)
              when 7
                self.crealm = decode_crealm(val)
              when 8
                self.cname = decode_cname(val)
              when 9
                self.realm = decode_realm(val)
              when 10
                self.sname = decode_sname(val)
              when 12
                self.e_data = decode_e_data(val)
              else
                raise ::RuntimeError, 'Failed to decode KRB-ERROR SEQUENCE'
              end
            end
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::LastRequest
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode LastRequest, invalid input'
            end