
        
          #
  # Converts the header to a string.
  #
  def to_s(prefix = '')
    str = prefix
    
      #
  # Move these into an IPMI stack or mixin at some point
  #
    
              # Decodes the start_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_start_time(input)
            input.value[0].value
          end
    
              # Decodes the rtime field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_rtime(input)
            input.value[0].value
          end
    
              # Rex::Proto::Kerberos::Model::KdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'KdcResponse encoding not supported'
          end
    
          if @command.inputs
        mandatory(@command.input_type == 'dir', '--inputs is only valid with -s dir')
      end
    
      private
  # return the identifier by prepending the reverse-domain prefix
  # to the package name, else return just the name
  def identifier
    identifier = name.dup
    if self.attributes[:osxpkg_identifier_prefix]
      identifier.insert(0, '#{self.attributes[:osxpkg_identifier_prefix]}.')
    end
    identifier
  end # def identifier