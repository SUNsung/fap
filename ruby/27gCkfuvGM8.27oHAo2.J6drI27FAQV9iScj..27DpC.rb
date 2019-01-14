
        
                        @env.machine_names.each do |machine_name|
                  if machine_name =~ regex
                    machines << get_machine.call(machine_name)
                  end
                end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is installed. This should return true or false.
        #
        # If the provider is not installed and Vagrant determines it is
        # able to install this provider, then it will do so. Installation
        # is done by calling Environment.install_provider.
        #
        # If Environment.can_install_provider? returns false, then an error
        # will be shown to the user.
        def self.installed?
          # By default return true for backwards compat so all providers
          # continue to work.
          true
        end
    
        def __internal_state
      {
        items: @items,
        results_cache: @results_cache
      }
    end
  end
end

    
      def load_logs(dir)
    logs = {}
    if dir.exist?
      dir.children.sort.each do |file|
        contents = file.size? ? file.read : 'empty log'
        # small enough to avoid GitHub 'unicorn' page-load-timeout errors
        max_file_size = 1_000_000
        contents = truncate_text_to_approximate_size(contents, max_file_size, front_weight: 0.2)
        logs[file.basename.to_s] = { content: contents }
      end
    end
    raise 'No logs.' if logs.empty?
    
      #
  # HTTP GET request class wrapper.
  #
  class Get < Request
    def initialize(uri = '/', proto = DefaultProtocol)
      super('GET', uri, proto)
    end
  end
    
      # Returns parsed JavaScript blocks.
  # The parsed version is a RKelly object that allows you to be able do advanced parsing.
  #
  # @see https://github.com/tenderlove/rkelly
  # @return [Array<RKelly::Nodes::SourceElementsNode>]
  def get_html_scripts
    n = get_html_document
    rkelly = RKelly::Parser.new
    n.search('//script').map { |s| rkelly.parse(s.text) }
  end
    
              case protocol
          when 'tcp'
            self.connection = create_tcp_connection
          when 'udp'
            raise ::NotImplementedError, 'Kerberos Client: UDP not supported'
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
    module Rex
  module Proto
    module Kerberos
      module Crypto
        module Rc4Hmac
          # Decrypts the cipher using RC4-HMAC schema
          #
          # @param cipher [String] the data to decrypt
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted cipher
          # @raise [RuntimeError] if decryption doesn't succeed
          def decrypt_rc4_hmac(cipher, key, msg_type)
            unless cipher && cipher.length > 16
              raise ::RuntimeError, 'RC4-HMAC decryption failed'
            end
    
              # Decodes the Rex::Proto::Kerberos::Model::KrbError from an input
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
              raise ::RuntimeError, 'Failed to decode KrbError, invalid input'
            end
    
    Then(/^it creates the file with the remote_task prerequisite$/) do
  TestApp.linked_files.each do |file|
    run_vagrant_command(test_file_exists(TestApp.shared_path.join(file)))
  end
end
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def name
      'cap'
    end