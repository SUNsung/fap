
        
            # This will take care of executing **one** lane. That's when the user triggers a lane from the CLI for example
    # This method is **not** executed when switching a lane
    # @param lane_name The name of the lane to execute
    # @param platform The name of the platform to execute
    # @param parameters [Hash] The parameters passed from the command line to the lane
    def execute(lane, platform = nil, parameters = nil)
      UI.crash!('No lane given') unless lane
    
        context 'action launch' do
      let(:launch_context) do
        FastlaneCore::ActionLaunchContext.new(
          action_name: action_name,
          p_hash: p_hash,
          platform: 'ios',
          fastlane_client_language: fastlane_client_language
        )
      end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            commit: '#{commit}'
          })
        end').runner.execute(:test)
    
            expect(result).to \
          eq('carthage update TestDependency1 TestDependency2')
      end
    
            # this command is also sent on macOS Sierra and we need to allow it or else the test will fail
        allowed_command = 'security set-key-partition-list -S apple-tool:,apple: -k #{''.shellescape} #{keychain_path.shellescape} &> /dev/null'
    
          it 'works given a path to the directory containing compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint'
            )
          end').runner.execute(:test)
    
              expect(called).to be(true)
          expect(FastlaneCore::UI).to have_received(:error).with('Exit status of command 'exit 1' was 1 instead of 0.\n')
        end
      end
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
    shelljoin_testcases = [
  {
    'it' => '(#1) on array with entry with space',
    'it_result' => {
      'windows' => 'wraps this entry in double quotes',
      'other'   => 'escapes the space in this entry'
    },
    'input' => ['a', 'b c', 'd'],
    'expect' => {
      'windows' => 'a 'b c' d',
      'other'   => 'a b\ c d'
    }
  },
  {
    'it' => '(#2) on array with entry with string wrapped in double quotes and space',
    'it_result' => {
      'windows' => 'wraps the entry with space in quote, and doubles the double quotes',
      'other'   => 'escapes the double quotes and escapes the space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a '''b'' c' d',
      'other'   => 'a \'b\'\ c d'
    }
  },
  {
    'it' => '(#3) on array with entry with string wrapped in single quotes and space',
    'it_result' => {
      'windows' => 'no changes',
      'other'   => 'escapes the single quotes and space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a \''b' c\' d',
      'other'   => 'a \\'b\\'\\ c d'
    }
  },
  # https://github.com/ruby/ruby/blob/ac543abe91d7325ace7254f635f34e71e1faaf2e/test/test_shellwords.rb#L67-L68
  {
    'it' => '(#4) on array with entry that is `$$`',
    'it_result' => {
      'windows' => 'the result includes the process id',
      'other'   => 'the result includes the process id'
    },
    'input' => ['ps', '-p', $$],
    'expect' => {
      'windows' => 'ps -p #{$$}',
      'other'   => 'ps -p #{$$}'
    }
  }
]
    
        lambda {
      catch :blah do
        throw :blah, :return_value, 2, 3, 4, 5
      end
    }.should raise_error(ArgumentError)
  end
    
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
    
    module Rex
module Proto
module IPMI
  require 'rex/proto/ipmi/channel_auth_reply'
  require 'rex/proto/ipmi/open_session_reply'
  require 'rex/proto/ipmi/rakp2'
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.key = decode_key(val)
              when 1
                self.last_req = decode_last_req(val)
              when 2
                self.nonce = decode_nonce(val)
              when 3
                self.key_expiration = decode_key_expiration(val)
              when 4
                self.flags = decode_flags(val)
              when 5
                self.auth_time = decode_auth_time(val)
              when 6
                self.start_time = decode_start_time(val)
              when 7
                self.end_time = decode_end_time(val)
              when 8
                self.renew_till = decode_renew_till(val)
              when 9
                self.srealm = decode_srealm(val)
              when 10
                self.sname = decode_sname(val)
              else
                raise ::RuntimeError, 'Failed to decode ENC-KDC-RESPONSE SEQUENCE'
              end
            end
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos KDC-REQ (response) data
        # definition
        class KdcResponse < Element
          # @!attribute pvno
          #   @return [Integer] The protocol version number
          attr_accessor :pvno
          # @!attribute msg_type
          #   @return [Integer] The type of a protocol message
          attr_accessor :msg_type
          # @!attribute crealm
          #   @return [String] The realm part of the client's principal identifier
          attr_accessor :crealm
          # @!attribute cname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the client's principal identifier
          attr_accessor :cname
          # @!attribute ticket
          #   @return [Rex::Proto::Kerberos::Model::Ticket] The issued ticket
          attr_accessor :ticket
          # @!attribute enc_part
          #   @return [Rex::Proto::Kerberos::Model::EncryptedData] The encrypted part of the response
          attr_accessor :enc_part