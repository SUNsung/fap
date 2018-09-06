
        
        #
    
      s.rdoc_options = ['--charset=UTF-8']
  s.extra_rdoc_files = %w(README.markdown LICENSE)
    
        def self.cleanup_lockfiles
      return unless HOMEBREW_CACHE_FORMULA.directory?
      candidates = HOMEBREW_CACHE_FORMULA.children
      lockfiles  = candidates.select { |f| f.file? && f.extname == '.brewing' }
      lockfiles.each do |file|
        next unless file.readable?
        file.open.flock(File::LOCK_EX | File::LOCK_NB) && file.unlink
      end
    end
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
    module Cert
  class CommandsGenerator
    include Commander::Methods
    
          it 'keeps the specified metadata folder' do
        expect(options[:metadata_path]).to eq('./metadata')
      end
    end
  end
end

    
          it 'renders HTML' do
        capture = render(options, screenshots)
        expect(capture).to match(/<html>/)
        expect(capture).to include('<li>Some</li>')
        expect(capture).to include('<li>key</li>')
        expect(capture).to include('<li>words</li>')
      end
    end
    
            cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << ''#{tag}''
        cmd << options[:commit].to_s if options[:commit]
    
          def self.is_supported?(platform)
        [:ios].include?(platform)
      end
    end
  end
end

    
              style_value = params[:use_automatic_signing] ? 'Automatic' : 'Manual'
          build_configuration_list = found_target[:build_configuration_list]
          build_configuration_list.set_setting('CODE_SIGN_STYLE', style_value)
          sett['ProvisioningStyle'] = style_value
    
    
  # Returns a parsed HTML document.
  # Instead of using regexes to parse the HTML body, you should use this and use the Nokogiri API.
  #
  # @see http://www.nokogiri.org/
  # @return [Nokogiri::HTML::Document]
  def get_html_document
    Nokogiri::HTML(self.body)
  end
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
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
    
              # Encodes the Rex::Proto::Kerberos::Model::ApReq into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_pvno], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_msg_type], 1, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_options], 2, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_ticket], 3, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_authenticator], 4, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new(elems)
    
              # Encodes the data
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_data(data)
            OpenSSL::ASN1::OctetString.new(data)
          end
        end
      end
    end
  end
end
    
              # Encodes a Rex::Proto::Kerberos::Model::EncryptionKey into an
          # ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_value], 1, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new(elems)
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcRequestBody from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            seq_values = input.value
    
    desc 'LESS to stdin -> Sass to stdout'
task :less_to_scss, :branch do |t, args|
  require './tasks/converter'
  puts Converter.new(branch: args[:branch]).convert_less(STDIN.read)
end
    
        def read_cached_files(path, files)
      full_path = '#@cache_path/#@branch_sha/#{path}'
      contents  = {}
      if File.directory?(full_path)
        files.each do |name|
          path = '#{full_path}/#{name}'
          contents[name] = File.read(path, mode: 'rb') if File.exists?(path)
        end
      end
      contents
    end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
      end
    
      # Improved version of Liquid's truncate:
  # - Doesn't cut in the middle of a word.
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncate(input, length)
    if input.length > length && input[0..(length-1)] =~ /(.+)\b.+$/im
      $1.strip + ' &hellip;'
    else
      input
    end
  end
    
          unless file.file?
        return 'File #{file} could not be found'
      end