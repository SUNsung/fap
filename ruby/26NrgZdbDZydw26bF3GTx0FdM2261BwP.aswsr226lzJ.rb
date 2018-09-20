
        
            if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
    Rails.application.initialize!
    
      module Mailers
    autoload :Helpers, 'devise/mailers/helpers'
  end
    
      def prepend(*paths)
    @paths = parse(*paths, *@paths)
    self
  end
    
        odie 'Unknown command: #{cmd}' unless path
    puts path
  end
end

    
      # add junk params
  attr_accessor :junk_params
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
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
    
              sent = 0
          case protocol
          when 'tcp'
            sent = send_request_tcp(req)
          when 'udp'
            sent = send_request_udp(req)
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Encodes the data
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_data(data)
            OpenSSL::ASN1::OctetString.new(data)
          end
        end
      end
    end
  end
end
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
              # Decodes the end_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_end_time(input)
            input.value[0].value
          end
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Type::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
        def install_plugin(plugin, load_hooks: true, load_immediately: false)
      installer.install(plugin,
                        load_hooks: load_hooks,
                        load_immediately: load_immediately)
    end