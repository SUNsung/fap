
        
          context 'with a user' do
    let(:user) { Fabricate(:user) }
    
          expect(user.unread_notifications).to eq(0)
      expect(user.total_unread_notifications).to eq(2)
      expect(user.unread_private_messages).to eq(1)
    end
  end
    
        # Add permissions and a description to the Staff category.
    
    module Vagrant
  module Plugin
    module V1
      # This is the base class for a CLI command.
      class Command
        include Util::SafePuts
    
            # Converts this configuration object to JSON.
        def to_json(*a)
          instance_variables_hash.to_json(*a)
        end
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def guests
          result = {}
    
              # Register a new provisioner class only if a name was given
          data[:provisioners].register(name.to_sym, &block) if name != UNSET_VALUE
    
              # First determine the proper array of VMs.
          machines = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                @logger.debug('Finding machines that match regex: #{pattern}')
    
        # Register a key with a lazy-loaded value.
    #
    # If a key with the given name already exists, it is overwritten.
    def register(key, &block)
      raise ArgumentError, 'block required' if !block_given?
      @items[key] = block
    end
    
    # Default timings
IAX_DEFAULT_REG_REFRESH = 60
IAX_DEFAULT_TIMEOUT     = 10
    
              private
    
              # Encodes the start_time field
          #
          # @return [String]
          def encode_start_time
            [start_time].pack('N')
          end
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
              # Decodes the Rex::Proto::Kerberos::Model::KdcRequestBody attributes from input
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
              raise ::RuntimeError, 'Failed to decode KdcRequestBody, invalid input'
            end