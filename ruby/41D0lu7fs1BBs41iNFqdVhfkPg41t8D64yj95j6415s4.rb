
        
        protected
    
    
# Codecs
IAX_CODEC_G711_MULAW  = 0x00000004
IAX_CODEC_G711_ALAW   = 0x00000008
IAX_CODEC_LINEAR_PCM  = 0x00000040
    
    end
end
end
end

    
              # Encodes the components field
          #
          # @return [String]
          def encode_components
            encoded = ''
    
                checksum = cipher[0, 16]
            data = cipher[16, cipher.length - 1]
    
              # Encodes the authenticator field
          #
          # @return [String]
          def encode_authenticator
            authenticator.encode
          end
        end
      end
    end
  end
end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            seq_values = input.value
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Rex::Proto::Kerberos::Model::LastRequest encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'LastRequest encoding not supported'
          end
    
        def self.clear
      instance.clear
    end
    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end
    
          # Parse through mail to get the from/sender headers
      mail = Mail.new(raw_message.split('\r\n\r\n', 2).first)
      from_headers = {'from' => mail.from, 'sender' => mail.sender}
      authenticated_domain = identity.server.find_authenticated_domain_from_headers(from_headers)
    
      expansion(:inspection) {
    {
      :inspected => o.inspected == 1 ? true : false,
      :spam => o.spam == 1 ? true : false,
      :spam_score => o.spam_score.to_f,
      :threat => o.threat == 1 ? true : false,
      :threat_details => o.threat_details
    }
  }
    
      def create
    @address_endpoint = @server.address_endpoints.build(safe_params)
    if @address_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :address_endpoints]]
    else
      render_form_errors 'new', @address_endpoint
    end
  end
    
      def render_form_errors(action_name, object)
    respond_to do |wants|
      wants.html { render action_name }
      wants.json { render :json => {:form_errors => object.errors.full_messages}, :status => 422 }
    end
  end
    
      def setup
    unless @domain.verified?
      redirect_to [:verify, organization, @server, @domain], :alert => 'You can't set up DNS for this domain until it has been verified.'
    end
  end
    
      def index
    @routes = @server.routes.order(:name).includes(:domain, :endpoint).to_a
  end
    
      def index
    @smtp_endpoints = @server.smtp_endpoints.order(:name).to_a
  end
    
      def new
    @track_domain = @server.track_domains.build
  end
    
      def new
    @organization_user = organization.organization_users.build
  end