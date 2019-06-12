
        
            def translation_scope
      'devise.unlocks'
    end
end

    
          if options.has_key?(:only)
        @used_routes = self.routes & Array(options[:only]).map(&singularizer)
      elsif options[:skip] == :all
        @used_routes = []
      else
        @used_routes = self.routes - Array(options[:skip]).map(&singularizer)
      end
    end
    
            # Attempt to find a user by its email. If a record is found, send new
        # password instructions to it. If user is not found, returns a new user
        # with an email not found error.
        # Attributes must contain the user's email
        def send_reset_password_instructions(attributes={})
          recoverable = find_or_initialize_with_errors(reset_password_keys, attributes, :not_found)
          recoverable.send_reset_password_instructions if recoverable.persisted?
          recoverable
        end
    
            # Generate a token checking if one does not already exist in the database.
        def remember_token #:nodoc:
          loop do
            token = Devise.friendly_token
            break token unless to_adapter.find_first({ remember_token: token })
          end
        end
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
        # Extract each header value pair
    header.split(/\r\n/mn).each { |str|
      if (md = str.match(/^(.+?)\s*:\s*(.+?)\s*$/))
        if (self[md[1]])
          self[md[1]] << ', ' + md[2]
        else
          self[md[1]] = md[2]
        end
      end
    }
  end
    
      # Handling incoming control packets
  # TODO: Enforce sequence order to prevent duplicates from breaking our state
  def handle_control(pkt)
    src_call, dst_call, tstamp, out_seq, inp_seq, itype = pkt.unpack('nnNCCC')
    
            # Receives a Kerberos Response over a tcp connection
        #
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos message response
        # @raise [RuntimeError] if the response can't be processed
        # @raise [EOFError] if expected data can't be read
        def recv_response_tcp
          length_raw = connection.get_once(4, timeout)
          unless length_raw && length_raw.length == 4
            raise ::RuntimeError, 'Kerberos Client: failed to read response'
          end
          length = length_raw.unpack('N')[0]
    
                cipher = OpenSSL::Cipher.new('rc4')
            cipher.decrypt
            cipher.key = k3
            decrypted = cipher.update(data) + cipher.final
    
              # Decodes the end_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_end_time(input)
            input.value[0].value
          end
    
              # Decodes the kvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_kvno(input)
            input.value[0].value.to_i
          end
    
              # Encodes the Rex::Proto::Kerberos::Model::KdcRequest into an ASN.1 String
          #
          # @return [String]
          def encode
            pvno_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pvno], 1, :CONTEXT_SPECIFIC)
            msg_type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_msg_type], 2, :CONTEXT_SPECIFIC)
            pa_data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_pa_data], 3, :CONTEXT_SPECIFIC)
            req_body_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_req_body], 4, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new([pvno_asn1, msg_type_asn1, pa_data_asn1, req_body_asn1])
            seq_asn1 = OpenSSL::ASN1::ASN1Data.new([seq], msg_type, :APPLICATION)
            seq_asn1.to_der
          end
    
              # Decodes the sname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_sname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end