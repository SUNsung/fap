
        
                def initialize(object_name, method_name, template_object, collection, value_method, text_method, options, html_options)
          @collection   = collection
          @value_method = value_method
          @text_method  = text_method
          @html_options = html_options
    
      platform_is :windows do
    it 'does expand shell variables when given multiples arguments' do
      # See https://bugs.ruby-lang.org/issues/12231
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('foo\n')
    end
  end
    
        after do
      rm_r @tmp_file
    end
    
      it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end
    
        # Extract the command string
    self.cmd_string = header.slice!(/.+\r\n/)
    
        self.listener.start
  end
    
      def self.checksum(data)
    sum = 0
    data.unpack('C*').each {|c| sum += c }
    sum = ~sum + 1
    sum & 0xff
  end
    
                encoded
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::AuthorizationData into an ASN.1 String
          #
          # @return [String]
          def encode
            seqs = []
            elements.each do |elem|
              elems = []
              type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_type(elem[:type])], 0, :CONTEXT_SPECIFIC)
              elems << type_asn1
              data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_data(elem[:data])], 1, :CONTEXT_SPECIFIC)
              elems << data_asn1
              seqs << OpenSSL::ASN1::Sequence.new(elems)
            end
    
                res = ''
            case etype
            when RC4_HMAC
              res = decrypt_rc4_hmac(cipher, key, msg_type)
              raise ::RuntimeError, 'EncryptedData failed to decrypt' if res.length < 8
              res = res[8, res.length - 1]
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
              # Rex::Proto::Kerberos::Model::LastRequest encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'LastRequest encoding not supported'
          end
    
          def requires_authentication?
        Spree::Api::Config[:requires_authentication]
      end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update_attributes(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end