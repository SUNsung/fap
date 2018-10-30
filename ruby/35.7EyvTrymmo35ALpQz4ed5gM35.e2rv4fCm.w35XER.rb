
        
            describe 'A' do
      it 'converts floating point argument as [-]0xh.hhhhp[+-]dd and use uppercase X and P' do
        format('%A', 196).should == '0X1.88P+7'
        format('%A', -196).should == '-0X1.88P+7'
        format('%A', 196.1).should == '0X1.8833333333333P+7'
        format('%A', 0.01).should == '0X1.47AE147AE147BP-7'
        format('%A', -0.01).should == '-0X1.47AE147AE147BP-7'
      end
    
      it 'calls #to_int on seed' do
    srand(3.8)
    srand.should == 3
    
      it 'returns true when passed ?e if the argument is a file' do
    Kernel.test(?e, @file).should == true
  end
    
      # More readable inspect that only shows the url and resources
  # @return [String]
  def inspect
    resources_str = resources.keys.map{|r| r.inspect }.join ', '
    
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
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
                checksum = cipher[0, 16]
            data = cipher[16, cipher.length - 1]
    
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
    
              # Rex::Proto::Kerberos::Model::Checksum decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Checksum decoding not supported'
          end
    
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
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_asn1_pvno(input)
            input.value[0].value.to_i
          end
    
            def add_arg_offense(arg, type)
          add_offense(arg.parent, location: arg.source_range,
                                  message: format(MSG,
                                                  type: type.to_s.capitalize))
        end
    
            expect(cop.highlights).to eq([close])
        expect(cop.messages)
          .to eq([described_class::SAME_LINE_MESSAGE])
      end
    
          # Checks whether the `if` is an `elsif`. Parser handles these by nesting
      # `if` nodes in the `else` branch.
      #
      # @return [Boolean] whether the node is an `elsif`
      def elsif?
        keyword == 'elsif'
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end
