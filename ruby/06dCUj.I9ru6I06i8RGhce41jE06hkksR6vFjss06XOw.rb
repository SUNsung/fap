
        
        require 'active_model'
    
          def custom_api_endpoint
        github_omniauth_provider.dig('args', 'client_options', 'site')
      end
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
    module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
              new(hash)
        end
    
        reset
  end
    
                seq = OpenSSL::ASN1::Sequence.new(elems)
    
              # Decodes the cipher from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Sting]
          def decode_cipher(input)
            input.value[0].value
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
    
              # Decodes the type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_asn1_type(input)
            input.value[0].value.to_i
          end
    
    def system!(*args)
  system(*args) || abort('\n== Command #{args} failed ==')
end