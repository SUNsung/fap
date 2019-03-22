
        
          end
    
        def initialize
      Fastlane.load_actions
      @runner = Runner.new
      @actions_requiring_special_handling = ['sh'].to_set
    end
    
          it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'foo.bar')
          end').runner.execute(:test)
        end
      end
    
              expect(result).to eq('swiftlint lint > #{output_file}')
        end
      end
    
        context 'external commands are failed' do
      context 'with error_callback' do
        it 'doesn't raise shell_error' do
          allow(FastlaneCore::UI).to receive(:error)
          called = false
          expect_command('exit 1', exitstatus: 1)
          Fastlane::Actions.sh('exit 1', error_callback: ->(_) { called = true })
    
    # Here be helper
    
      def prev_page
    account_outbox_url(@account, page: true, min_id: @statuses.first.id) unless @statuses.empty?
  end
    
      private
    
      def lease_seconds_or_default
    (params['hub.lease_seconds'] || 1.day).to_i.seconds
  end
    
      respond_to :json
    
      # Returns a request packet
  def to_s
    str = ''
    if self.junk_pipeline
      host = ''
      if self.headers['Host']
        host = 'Host: #{self.headers['Host']}\r\n'
      end
      str << 'GET / HTTP/1.1\r\n#{host}Connection: Keep-Alive\r\n\r\n' * self.junk_pipeline
      self.headers['Connection'] = 'Closed'
    end
    str + super
  end
    
      #
  # Returns the hardcore alias for the HTTP service
  #
  def self.hardcore_alias(*args)
    '#{(args[0] || '')}#{(args[1] || '')}'
  end
    
    # Supported
IAX_SUPPORTED_CODECS  = IAX_CODEC_G711_MULAW | IAX_CODEC_G711_ALAW | IAX_CODEC_LINEAR_PCM
    
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
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Principal into an String
          #
          # @return [String] encoded principal
          def encode
            encoded = ''
            encoded << encode_name_type
            encoded << [components.length].pack('N')
            encoded << encode_realm
            encoded << encode_components
    
              # Encodes the end_time field
          #
          # @return [String]
          def encode_end_time
            [end_time].pack('N')
          end
    
              # Decodes the etype from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_etype(input)
            input.value[0].value.to_i
          end
    
              # Decodes the till field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_till(input)
            input.value[0].value
          end
    
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
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
    World(RemoteCommandHelpers)

    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def add_role(role)
        roles.add role.to_sym
        self
      end
    
            expect(cop.offenses.size).to eq(1)
        expect(cop.highlights).to eq([close])
        expect(cop.messages).to eq([described_class::NEW_LINE_MESSAGE])
      end
    
        def erb(content, options = {})
      if content.kind_of? Symbol
        unless respond_to?(:'_erb_#{content}')
          src = ERB.new(File.read('#{Web.settings.views}/#{content}.erb')).src
          WebAction.class_eval('def _erb_#{content}\n#{src}\n end')
        end
      end