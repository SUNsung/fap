
        
          platform_is :windows do
    it 'runs commands starting with any number of @ using shell' do
      `#{ruby_cmd('p system 'does_not_exist'')} 2>NUL`.chomp.should == 'nil'
      @object.system('@does_not_exist 2>NUL').should == false
      @object.system('@@@#{ruby_cmd('exit 0')}').should == true
    end
  end
end
    
      it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end
    
                encoded
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
    
                elems << OpenSSL::ASN1::ASN1Data.new([encode_options], 0, :CONTEXT_SPECIFIC) if options
            elems << OpenSSL::ASN1::ASN1Data.new([encode_cname], 1, :CONTEXT_SPECIFIC) if cname
            elems << OpenSSL::ASN1::ASN1Data.new([encode_realm], 2, :CONTEXT_SPECIFIC) if realm
            elems << OpenSSL::ASN1::ASN1Data.new([encode_sname], 3, :CONTEXT_SPECIFIC) if sname
            elems << OpenSSL::ASN1::ASN1Data.new([encode_from], 4, :CONTEXT_SPECIFIC) if from
            elems << OpenSSL::ASN1::ASN1Data.new([encode_till], 5, :CONTEXT_SPECIFIC) if till
            elems << OpenSSL::ASN1::ASN1Data.new([encode_rtime], 6, :CONTEXT_SPECIFIC) if rtime
            elems << OpenSSL::ASN1::ASN1Data.new([encode_nonce], 7, :CONTEXT_SPECIFIC) if nonce
            elems << OpenSSL::ASN1::ASN1Data.new([encode_etype], 8, :CONTEXT_SPECIFIC) if etype
            elems << OpenSSL::ASN1::ASN1Data.new([encode_enc_auth_data], 10, :CONTEXT_SPECIFIC) if enc_auth_data
    
                it 'detects closing brace on separate line from last element' do
              inspect_source(source)
    
            self
      end
    
          # The name of the defined method as a symbol.
      #
      # @return [Symbol] the name of the defined method
      def method_name
        node_parts[2]
      end