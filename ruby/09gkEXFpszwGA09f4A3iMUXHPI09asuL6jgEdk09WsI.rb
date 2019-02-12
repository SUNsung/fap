
        
                a_split.each_with_index { |s, i| a_split[i] = s.to_i unless i == a_length - 1 }
        b_split.each_with_index { |s, i| b_split[i] = s.to_i unless i == b_length - 1 }
    
        def relative_url_string?(str)
      str !~ SCHEME_RGX && !fragment_url_string?(str) && !data_url_string?(str)
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
        def root_path
      self.class.root_path
    end
    
              node.before(node.children).remove
        end
    
        if authenticated && resource = warden.user(resource_name)
      flash[:alert] = I18n.t('devise.failure.already_authenticated')
      redirect_to after_sign_in_path_for(resource)
    end
  end
    
          def mailer_sender(mapping, sender = :from)
        default_sender = default_params[sender]
        if default_sender.present?
          default_sender.respond_to?(:to_proc) ? instance_eval(&default_sender) : default_sender
        elsif Devise.mailer_sender.is_a?(Proc)
          Devise.mailer_sender.call(mapping.name)
        else
          Devise.mailer_sender
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
    
      #
  # Dispatches the supplied request for a given connection.
  #
  def dispatch_request(cli, request)
    # Is the client requesting keep-alive?
    if ((request['Connection']) and
       (request['Connection'].downcase == 'Keep-Alive'.downcase))
      cli.keepalive = true
    end
    
    =begin
   +-------------+---------------+-------------------------------------+
   | VALUE       | Name          | Description                         |
   +-------------+---------------+-------------------------------------+
   | 0x01        | Hangup        | The call has been hungup at the     |
   |             |               | remote end                          |
   |             |               |                                     |
   | 0x02        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x03        | Ringing       | Remote end is ringing (ring-back)   |
   |             |               |                                     |
   | 0x04        | Answer        | Remote end has answered             |
   |             |               |                                     |
   | 0x05        | Busy          | Remote end is busy                  |
   |             |               |                                     |
   | 0x06        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x07        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x08        | Congestion    | The call is congested               |
   |             |               |                                     |
   | 0x09        | Flash Hook    | Flash hook                          |
   |             |               |                                     |
   | 0x0a        | Reserved      | Reserved for future use             |
   |             |               |                                     |
   | 0x0b        | Option        | Device-specific options are being   |
   |             |               | transmitted                         |
   |             |               |                                     |
   | 0x0c        | Key Radio     | Key Radio                           |
   |             |               |                                     |
   | 0x0d        | Unkey Radio   | Unkey Radio                         |
   |             |               |                                     |
   | 0x0e        | Call Progress | Call is in progress                 |
   |             |               |                                     |
   | 0x0f        | Call          | Call is proceeding                  |
   |             | Proceeding    |                                     |
   |             |               |                                     |
   | 0x10        | Hold          | Call is placed on hold              |
   |             |               |                                     |
   | 0x11        | Unhold        | Call is taken off hold              |
   +-------------+---------------+-------------------------------------+
=end
    
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
    
                encoded
          end
    
              # Decodes the key_expiration field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_key_expiration(input)
            input.value[0].value
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self]
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode EncryptedData Name, invalid input'
            end
    
              # Decodes the type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
      ArgumentError = Class.new(Error)
  ContextError = Class.new(Error)
  FileSystemError = Class.new(Error)
  StandardError = Class.new(Error)
  SyntaxError = Class.new(Error)
  StackLevelError = Class.new(Error)
  TaintedError = Class.new(Error)
  MemoryError = Class.new(Error)
  ZeroDivisionError = Class.new(Error)
  FloatDomainError = Class.new(Error)
  UndefinedVariable = Class.new(Error)
  UndefinedDropMethod = Class.new(Error)
  UndefinedFilter = Class.new(Error)
  MethodOverrideError = Class.new(Error)
  InternalError = Class.new(Error)
end

    
        def first
      @index == 0
    end
    
        def blank?
      false
    end
  end
end
