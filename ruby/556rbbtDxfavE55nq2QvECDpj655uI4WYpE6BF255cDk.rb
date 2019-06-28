
        
        # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
      if ENV['HOMEBREW_INTEGRATION_TEST']
    command_name '#{ENV['HOMEBREW_INTEGRATION_TEST']} (#{$PROCESS_ID})'
    
        # Extract each header value pair
    header.split(/\r\n/mn).each { |str|
      if (md = str.match(/^(.+?)\s*:\s*(.+?)\s*$/))
        if (self[md[1]])
          self[md[1]] << ', ' + md[2]
        else
          self[md[1]] = md[2]
        end
      end
    }
  end
    
          when IAX_CTRL_PROCEED
        dprint('PROCEED')
    
    require 'rex/proto/ipmi/utils'
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Encodes a Rex::Proto::Kerberos::Model::EncryptedData into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            etype_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_etype], 0, :CONTEXT_SPECIFIC)
            elems << etype_asn1
    
              # Rex::Proto::Kerberos::Model::LastRequest encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'LastRequest encoding not supported'
          end
    
        def version
      ['--version', '-V',
       'Display the program version.',
       lambda do |_value|
         puts 'Capistrano Version: #{Capistrano::VERSION} (Rake Version: #{Rake::VERSION})'
         exit
       end]
    end
    
          class ValidatedQuestion < Question
        def initialize(validator)
          @validator = validator
        end