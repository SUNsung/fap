
        
            # Returns the specified or detected guest type name.
    #
    # @return [Symbol]
    def name
      capability_host_chain[0][0]
    end
    
            def initialize
          @logger = Log4r::Logger.new('vagrant::plugin::v1::manager')
          @registered = []
        end
    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && machines.length != 1
            @logger.debug('Using primary machine since single target')
            primary_name = @env.primary_machine_name
            raise Errors::MultiVMTargetRequired if !primary_name
            machines = [get_machine.call(primary_name)]
          end
    
            # This contains all the command plugins by name, and returns
        # the command class and options. The command class is wrapped
        # in a Proc so that it can be lazy loaded.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        attr_reader :commands
    
        # Register a key with a lazy-loaded value.
    #
    # If a key with the given name already exists, it is overwritten.
    def register(key, &block)
      raise ArgumentError, 'block required' if !block_given?
      @items[key] = block
    end
    
      #
  # Returns the hardcore alias for the HTTP service
  #
  def self.hardcore_alias(*args)
    '#{(args[0] || '')}#{(args[1] || '')}'
  end
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # No Encryption
      0x00, 0x00, 0x00, 0x00
    ].pack('C*')
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of a Principal stored in the Kerberos Credential Cache.
        class Principal < Element
          # @!attribute name_type
          #   @return [Integer]
          attr_accessor :name_type
          # @!attribute realm
          #   @return [String]
          attr_accessor :realm
          # @!attribute components
          #   @return [Array<String>]
          attr_accessor :components
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
                seq_asn1.to_der
          end
    
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
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
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
    
      gem.licenses      = ['MIT']
    
        def top_level_tasks
      if tasks_without_stage_dependency.include?(@top_level_tasks.first)
        @top_level_tasks
      else
        @top_level_tasks.unshift(ensure_stage.to_s)
      end
    end
    
          def using_default_scm?
        return @using_default_scm if defined? @using_default_scm
        @using_default_scm = (fetch(:scm) == DEFAULT_GIT)
      end
    
            def call
          @validator.call
        end
      end
    end
  end
end

    
          # Returns an array of source file location(s) where the given key was
      # assigned (i.e. where `set` was called). If the key was never assigned,
      # returns `nil`.
      def source_locations(key)
        locations[key]
      end
    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug