
        
              def initialize(request)
        @request = request
      end
    
          def route_authentication_setting
        return {} unless respond_to?(:route_setting)
    
            def value_text
          STATUS_RENAME[@status.to_s] || @status.to_s
        end
    
      #
  # More advanced [] that does downcase comparison.
  #
  def [](key)
    begin
      rv = self.fetch(key)
    rescue IndexError
      rv = nil
    end
    if (rv == nil)
      begin
        rv = self.dcase_hash[key.downcase]
      rescue IndexError
        rv = nil
      end
    end
    
      #
  # A hash that associated a file extension with a mime type for use as the
  # content type of responses.
  #
  ExtensionMimeTypes =
    {
      'rhtml' => 'text/html',
      'html'  => 'text/html',
      'htm'   => 'text/htm',
      'jpg'   => 'image/jpeg',
      'jpeg'  => 'image/jpeg',
      'gif'   => 'image/gif',
      'png'   => 'image/png',
      'bmp'   => 'image/bmp',
      'txt'   => 'text/plain',
      'css'   => 'text/css',
      'ico'   => 'image/x-icon',
    }
    
    require 'rex/proto/ipmi/utils'
    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
              # Encodes the renew_time field
          #
          # @return [String]
          def encode_renew_time
            [renew_till].pack('N')
          end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the srealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_srealm(input)
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
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
        # @return [String] major.minor ruby version, ex 1.9
    def ruby_abi_version
      RUBY_VERSION[/(\d+\.\d+)(\.\d+)*/, 1]
    end
    
            if specs.size > 0
          specs
        else
          raise LogStash::PluginManager::PluginNotFoundError, 'Cannot find plugins matching: `#{plugin_pattern}`'
        end
      end.flatten
    end
    
        context 'without a username / password' do
      let(:scheme) { 'myscheme' }
      let(:user) { nil }
      let(:password) { nil }
      let(:hostname) { 'myhostname' }
      let(:path) { '/my/path' }
      let(:uri_str) { '#{scheme}://#{hostname}#{path}' }
      let(:uri_hidden) { '#{scheme}://#{hostname}#{path}' }
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
      let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }
    
        context 'opening brace on same line as first element' do
      it 'allows closing brace on different line from last element' do
        expect_no_offenses(construct(false, true))
      end
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?