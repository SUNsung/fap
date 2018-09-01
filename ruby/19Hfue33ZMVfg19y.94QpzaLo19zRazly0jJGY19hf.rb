
        
            def merged
      'merged'
    end
    
          def user
        find_sessionless_user || find_user_from_warden
      end
    
          def find_user_from_access_token
        return unless access_token
    
            def value_width
          54
        end
    
            if context.respond_to?(home_path, true)
          context.send(home_path)
        elsif context.respond_to?(:root_path)
          context.root_path
        elsif respond_to?(:root_path)
          root_path
        else
          '/'
        end
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        resources.each_pair { |k, val|
      if (request.resource =~ /^#{k}/ and k.length > len)
        p    = val
        len  = k.length
        root = k
      end
    }
    
    module Rex
module Proto
module IPMI
  require 'rex/proto/ipmi/channel_auth_reply'
  require 'rex/proto/ipmi/open_session_reply'
  require 'rex/proto/ipmi/rakp2'
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      0x01, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # HMAC-SHA1
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # AES Encryption
      0x01, 0x00, 0x00, 0x00
    ].pack('C*')
    
              case msg_type
          when Rex::Proto::Kerberos::Model::KRB_ERROR
            res = Rex::Proto::Kerberos::Model::KrbError.decode(asn1)
          when Rex::Proto::Kerberos::Model::AS_REP
            res = Rex::Proto::Kerberos::Model::KdcResponse.decode(asn1)
          when Rex::Proto::Kerberos::Model::TGS_REP
            res = Rex::Proto::Kerberos::Model::KdcResponse.decode(asn1)
          else
            raise ::RuntimeError, 'Kerberos Client: Unknown response'
          end
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Encodes the Rex::Proto::Kerberos::Model::Element into an ASN.1 String. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def encode
            raise ::NoMethodError, 'Method designed to be overridden'
          end
        end
      end
    end
  end
end
    
              # Decodes the error_code field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_error_code(input)
            input.value[0].value.to_i
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          def decode_asn1(input)
            seq_values = input.value
            self.type = decode_type(seq_values[0])
            self.value = decode_value(seq_values[1])
          end
    
    When /^I (?:log|sign) out$/ do
  logout
  step 'I go to the root page'
end
    
    # Have all rests run with english browser locale
ENV['LANG'] = 'C'
    
    end
    
        # Checks that the lockfile exists.
    #
    # @raise  If the lockfile does not exists.
    #
    # @return [void]
    #
    def verify_lockfile_exists!
      unless config.lockfile
        raise Informative, 'No `Podfile.lock' found in the project directory, run `pod install'.'
      end
    end
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update_attributes(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def update
          authorize! params[:action], @payment
          if !@payment.editable?
            render 'update_forbidden', status: 403
          elsif @payment.update_attributes(payment_params)
            respond_with(@payment, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
              @line_item = Spree::Cart::AddItem.call(order: @order,
                                                 variant: variant,
                                                 quantity: quantity,
                                                 options: { shipment: @shipment }).value