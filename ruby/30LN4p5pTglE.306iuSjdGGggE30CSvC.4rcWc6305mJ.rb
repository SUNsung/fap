
        
            def render
      raise NotImplementedError
    end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
        def create
      authorize @user, :confirm?
      @user.confirm!
      log_action :confirm, @user
      redirect_to admin_accounts_path
    end
    
          if emoji.save
        log_action :create, emoji
        flash[:notice] = I18n.t('admin.custom_emojis.copied_msg')
      else
        flash[:alert] = I18n.t('admin.custom_emojis.copy_failed_msg')
      end
    
        if PostRequests.include?(self.method)
      return param_string
    end
    ''
  end
    
              sent = 0
          case protocol
          when 'tcp'
            sent = send_request_tcp(req)
          when 'udp'
            sent = send_request_udp(req)
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
              # Encodes the ticket field
          #
          # @return [String]
          def encode_ticket
            ticket.encode
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
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
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcRequestBody from an String
          #
          # @param input [String] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Decodes the susec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_susec(input)
            input.value[0].value.to_i
          end
    
        <div id='rack'>
      <h3 id='env-info'>Rack ENV</h3>
      <table class='req'>
        <tr>
          <th>Variable</th>
          <th>Value</th>
        </tr>
         <% env.sort_by { |k, v| k.to_s }.each { |key, val| %>
         <tr>
           <td><%=h key %></td>
           <td class='code'><div><%=h val %></div></td>
         </tr>
         <% } %>
      </table>
      <div class='clear'></div>
    </div> <!-- /RACK ENV -->
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
      describe '.random_token' do
    it 'generates a base64 encoded 32 character string' do
      expect(Base64.strict_decode64(token).length).to eq(32)
    end
  end
end
