
        
            def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
        # Mobile devices do not support regular notifications, so we enable push notifications by default
    alerts_enabled = active_session.detection.device.mobile? || active_session.detection.device.tablet?
    
      Devise.omniauth_configs.each_key do |provider|
    provides_callback_for provider
  end
    
      def request_locale
    preferred_locale || compatible_locale
  end
    
      def rate_limited_request?
    !request.env['rack.attack.throttle_data'].nil?
  end
    
        str << '\r\n'
    
        # Call the caller-provided hook if its exists
    if self.audio_hook
      self.audio_buff(buff)
    # Otherwise append the frame to the buffer
    else
      self.audio_buff << buff
    end
  end
    
              # Decodes the Rex::Proto::Kerberos::Model::EncKdcResponse from an input
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
              raise ::RuntimeError, 'Failed to decode EncKdcResponse, invalid input'
            end
    
              # Decodes the sname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_sname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
          def title
        'Latest Changes (Globally)'
      end
    
          def js # custom js
        @js
      end
    
        assert_no_match /Edit Page/,             last_response.body, ''Edit Page' link not blocked in compare template'
    assert_no_match /Revert Changes/,        last_response.body, ''Revert Changes' link not blocked in compare template'
  end
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
      s.require_paths = %w[lib]