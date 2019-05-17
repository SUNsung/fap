
        
            head + [data.length].pack('v') + data
  end
    
    
          private
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of an encrypted message.
        class EncryptedData < Element
          # @!attribute name_type
          #   @return [Integer] The encryption algorithm
          attr_accessor :etype
          # @!attribute kvno
          #   @return [Integer] The version number of the key
          attr_accessor :kvno
          # @!attribute cipher
          #   @return [String] The enciphered text
          attr_accessor :cipher
    
              # Decodes the value from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_value(input)
            input.value[0].value
          end
    
              # Decodes the ticket field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Type::Ticket]
          def decode_ticket(input)
            Rex::Proto::Kerberos::Model::Ticket.decode(input.value[0])
          end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end