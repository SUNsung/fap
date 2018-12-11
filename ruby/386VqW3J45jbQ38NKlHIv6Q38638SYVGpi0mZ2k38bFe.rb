
        
              def self.example_code
        [
          'add_git_tag # simple tag with default values',
          'add_git_tag(
            grouping: 'fastlane-builds',
            prefix: 'v',
            postfix: '-RC1',
            build_number: 123
          )',
          '# Alternatively, you can specify your own tag. Note that if you do specify a tag, all other arguments are ignored.
          add_git_tag(
            tag: 'my_custom_tag'
          )'
        ]
      end
    
          it 'sets the project directory to other and the toolchain to Swift_2_3' do
        result = Fastlane::FastFile.new.parse('lane :test do
          carthage(toolchain: 'com.apple.dt.toolchain.Swift_2_3', project_directory: 'other')
        end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path.shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
      end
    
            # this command is also sent on macOS Sierra and we need to allow it or else the test will fail
        allowed_command = 'security set-key-partition-list -S apple-tool:,apple: -k #{''.shellescape} #{keychain_path.shellescape} &> /dev/null'
    
          it 'works given a path to the directory containing compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint'
            )
          end').runner.execute(:test)
    
          it 'treats a keychain name it cannot find in ~/Library/Keychains as the full keychain path' do
        tmp_path = Dir.mktmpdir
        keychain = '#{tmp_path}/my/special.keychain'
        expected_command = 'security import item.path -k '#{keychain}' -P #{''.shellescape} -T /usr/bin/codesign -T /usr/bin/security &> /dev/null'
    
      def set_account
    @account = Account.find_local!(params[:account_username])
  end
    
        def index
      authorize :custom_emoji, :index?
      @custom_emojis = filtered_custom_emojis.eager_load(:local_counterpart).page(params[:page])
    end
    
            render template: 'admin/reports/show'
      end
    end
    
        def create
      authorize :status, :update?
    
      def set_account
    @account = Account.find(params[:id])
  end
    
      # Provides the uri of the redirection location.
  #
  # @return [URI] the uri of the redirection location.
  # @return [nil] if the response hasn't a Location header or it isn't a valid uri.
  def redirection
    begin
      URI(headers['Location'])
    rescue ::URI::InvalidURIError
      nil
    end
  end
    
      #
  # Sends a 404 error to the client for a given request.
  #
  def send_e404(cli, request)
    resp = Response::E404.new
    
              sent = 0
          case protocol
          when 'tcp'
            sent = send_request_tcp(req)
          when 'udp'
            sent = send_request_udp(req)
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
              # Encrypts the cipher using RC4-HMAC schema
          #
          # @param data [String] the data to encrypt
          # @param key [String] the key to encrypt
          # @param msg_type [Integer] the message type
          # @return [String] the encrypted data
          def encrypt_rc4_hmac(data, key, msg_type)
            k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
    
                res
          end
    
              # Decodes the Rex::Proto::Kerberos::Model::EncKdcResponse from an input
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
              raise ::RuntimeError, 'Failed to decode EncKdcResponse, invalid input'
            end
    
              # Encodes the req_body field
          #
          # @return [String]
          def encode_req_body
            req_body.encode
          end
    
              # Decodes the ticket field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Type::Ticket]
          def decode_ticket(input)
            Rex::Proto::Kerberos::Model::Ticket.decode(input.value[0])
          end
    
            expect(new_source).to eq(construct(true, false))
      end
    end
  end
end

    
        context 'and a comment after the last element' do
      let(:b_comment) { ' # comment b' }
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
      # Returns a title cased string based on John Gruber's title case http://daringfireball.net/2008/08/title_case_update
  def titlecase(input)
    input.titlecase
  end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)