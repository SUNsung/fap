
        
          #
  # Parses a CGI query string into the var/val combinations.
  #
  def parse_cgi_qstring(str)
    qstring = {}
    
          when IAX_CTRL_RINGING
        dprint('RINGING')
        self.client.send_ack(self)
    
                int
          end
    
              # Decodes the flags field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_flags(input)
            input.value[0].value.to_i
          end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
                res = ''
            case etype
            when RSA_MD5
              res = checksum_rsa_md5(data)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
              # Decodes the enc_part
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::EncryptedData]
          def decode_enc_part(input)
            Rex::Proto::Kerberos::Model::EncryptedData.decode(input.value[0])
          end
        end
      end
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
    
      def update
    @organization_obj = current_user.organizations_scope.find(organization.id)
    if @organization_obj.update(params.require(:organization).permit(:name, :time_zone))
      redirect_to_with_json organization_settings_path(@organization_obj), :notice => 'Settings for #{@organization_obj.name} have been saved successfully.'
    else
      render_form_errors 'edit', @organization_obj
    end
  end
    
      def create_with_token
    result = JWT.decode(params[:token], Postal.signing_key.to_s, 'HS256')[0]
    if result['timestamp'] > 1.minute.ago.to_f
      login(User.find(result['user'].to_i))
      redirect_to root_path
    else
      destroy
    end
  rescue JWT::VerificationError
    destroy
  end
    
      def create
    @track_domain = @server.track_domains.build(params.require(:track_domain).permit(:name, :domain_id, :track_loads, :track_clicks, :excluded_click_domains, :ssl_enabled))
    if @track_domain.save
      redirect_to_with_json [:return_to, [organization, @server, :track_domains]]
    else
      render_form_errors 'new', @track_domain
    end
  end
    
    end
