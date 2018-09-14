
        
              def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :tag,
                                       env_name: 'FL_GIT_TAG_TAG',
                                       description: 'Define your own tag text. This will replace all other parameters',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :grouping,
                                       env_name: 'FL_GIT_TAG_GROUPING',
                                       description: 'Is used to keep your tags organised under one 'folder'',
                                       default_value: 'builds'),
          FastlaneCore::ConfigItem.new(key: :prefix,
                                       env_name: 'FL_GIT_TAG_PREFIX',
                                       description: 'Anything you want to put in front of the version number (e.g. 'v')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :postfix,
                                       env_name: 'FL_GIT_TAG_POSTFIX',
                                       description: 'Anything you want to put at the end of the version number (e.g. '-RC1')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :build_number,
                                       env_name: 'FL_GIT_TAG_BUILD_NUMBER',
                                       description: 'The build number. Defaults to the result of increment_build_number if you\'re using it',
                                       default_value: Actions.lane_context[Actions::SharedValues::BUILD_NUMBER],
                                       default_value_dynamic: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :message,
                                       env_name: 'FL_GIT_TAG_MESSAGE',
                                       description: 'The tag message. Defaults to the tag's name',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :commit,
                                       env_name: 'FL_GIT_TAG_COMMIT',
                                       description: 'The commit or object where the tag will be set. Defaults to the current HEAD',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :force,
                                       env_name: 'FL_GIT_TAG_FORCE',
                                       description: 'Force adding the tag',
                                       optional: true,
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :sign,
                                       env_name: 'FL_GIT_TAG_SIGN',
                                       description: 'Make a GPG-signed tag, using the default e-mail address's key',
                                       optional: true,
                                       is_string: false,
                                       default_value: false)
        ]
      end
    
          if conflicting_options
        conflicting_options.each do |conflicting_option_key|
          UI.user_error!('Conflicting option key must be a symbol') unless conflicting_option_key.kind_of?(Symbol)
        end
      end
    
        it 'returns a correct icon tag for GitHub' do
      icon = omniauth_provider_icon(:github)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-github')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
      describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
      it 'considers a location empty if either latitude or longitude is missing' do
    expect(Location.new.empty?).to be_truthy
    expect(Location.new(lat: 2, radius: 1).present?).to be_falsy
    expect(Location.new(lng: 3, radius: 1).present?).to be_falsy
  end
    
        it 'requires a message' do
      @log.message = ''
      expect(@log).not_to be_valid
      @log.message = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:message)
    end
    
            it 'does not leave a space at the start of negative numbers' do
          format('% b', -10).should == '-1010'
          format('% B', -10).should == '-1010'
          format('% d', -112).should == '-112'
          format('% i', -112).should == '-112'
          format('% o', -87).should == '-127'
          format('% u', -112).should == '-112'
          format('% x', -196).should == '-c4'
          format('% X', -196).should == '-C4'
    
      it 'accepts a Bignum as a seed' do
    srand(0x12345678901234567890)
    srand.should == 0x12345678901234567890
  end
    
      it 'returns true when passed ?d if the argument is a directory' do
    Kernel.test(?d, @dir).should == true
  end
    
        each_pair { |var, val|
      if self.fold
        str << '#{var}:\r\n\t#{val}\r\n'
      else
        str << '#{var}: #{val}\r\n'
      end
    }
    
        if PostRequests.include?(self.method)
      return param_string
    end
    ''
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
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
            # Creates a TCP connection using Rex::Socket::Tcp
        #
        # @return [Rex::Socket::Tcp]
        def create_tcp_connection
          self.connection = Rex::Socket::Tcp.create(
            'PeerHost'   => host,
            'PeerPort'   => port.to_i,
            'Context'    => context,
            'Timeout'    => timeout
          )
        end
    
                seq_asn1.to_der
          end
    
                seq = OpenSSL::ASN1::Sequence.new(seqs)
    
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
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
        it 'corrects one hash parameter with braces and extra trailing ' \
       'whitespace' do
      corrected = autocorrect_source('where({ x: 1, y: 2   })')
      expect(corrected).to eq('where(x: 1, y: 2)')
    end
    
            node.children.any? { |child| last_line_heredoc?(child, parent) }
      end
    end
  end
end

    
      it 'ignores implicit arrays' do
    expect_no_offenses(<<-RUBY.strip_indent)
      foo = a,
      b
    RUBY
  end
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
          # Chacks whether the `if` node has nested `if` nodes in any of its
      # branches.
      #
      # @note This performs a shallow search.
      #
      # @return [Boolean] whether the `if` node contains nested conditionals
      def nested_conditional?
        node_parts[1..2].compact.each do |branch|
          branch.each_node(:if) do |nested|
            return true unless nested.elsif?
          end
        end
    
    After do
  ORIGINAL_BUNDLE_VARS.each_pair do |key, value|
    ENV[key] = value
  end
end
    
    require 'erb'
require 'digest'
require 'tempfile'
require 'paperclip/version'
require 'paperclip/geometry_parser_factory'
require 'paperclip/geometry_detector_factory'
require 'paperclip/geometry'
require 'paperclip/processor'
require 'paperclip/processor_helpers'
require 'paperclip/tempfile'
require 'paperclip/thumbnail'
require 'paperclip/interpolations/plural_cache'
require 'paperclip/interpolations'
require 'paperclip/tempfile_factory'
require 'paperclip/style'
require 'paperclip/attachment'
require 'paperclip/storage'
require 'paperclip/callbacks'
require 'paperclip/file_command_content_type_detector'
require 'paperclip/media_type_spoof_detector'
require 'paperclip/content_type_detector'
require 'paperclip/glue'
require 'paperclip/errors'
require 'paperclip/missing_attachment_styles'
require 'paperclip/validators'
require 'paperclip/logger'
require 'paperclip/helpers'
require 'paperclip/has_attached_file'
require 'paperclip/attachment_registry'
require 'paperclip/filename_cleaner'
require 'paperclip/rails_environment'
    
        def initialize(filepath)
      @filepath = filepath
    end