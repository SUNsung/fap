
        
          before_action :require_user!
    
      def preferred_locale
    http_accept_language.preferred_language_from(available_locales)
  end
    
      def request_time
    @_request_time ||= Time.now.utc
  end
    
        self.busy = false
    self.dtmf = ''
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
    
                components.each do |c|
              encoded << [c.length].pack('N')
              encoded << c
            end
    
              private
    
              # Decodes the msg_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_msg_type(input)
            input.value[0].value.to_i
          end
    
        desc 'List all undocumented methods and classes.'
    task :undocumented do
      opts = ENV['YARD_OPTS'] || ''
      ENV['YARD_OPTS'] = opts.dup + <<OPTS
 --list --tag comment --hide-tag comment --query '
  object.docstring.blank? &&
  !(object.type == :method && object.is_alias?)'
OPTS
      Rake::Task['yard'].execute
    end
    
          opts.on('-q', '--quiet', 'Silence warnings and status messages during conversion.') do |bool|
        @options[:for_engine][:quiet] = bool
      end
    
          # Creates a new filesystem importer that imports files relative to a given path.
      #
      # @param root [String] The root path.
      #   This importer will import files relative to this path.
      def initialize(root)
        @root = File.expand_path(root)
        @real_root = Sass::Util.realpath(@root).to_s
        @same_name_warnings = Set.new
      end
    
          def encode_token(token)
        Base64.strict_encode64(token)
      end
    
      describe '#random_string' do
    it 'outputs a string of 32 characters' do
      expect(subject.random_string.length).to eq(32)
    end
  end
    
        def URIAddEncodedOctetToBuffer(octet, result, index)
      result[index] = 37; # Char code of '%'.
      index         += 1
      result[index] = @@hexCharCodeArray[octet >> 4];
      index         += 1
      result[index] = @@hexCharCodeArray[octet & 0x0F];
      index += 1
      return index;
    end
    
          attr_reader :page, :content
    
    desc 'Build and install'
task :install => :build do
  sh 'gem install --local --no-ri --no-rdoc pkg/#{name}-#{version}.gem'
end
    
      class DuplicatePageError < Error
    attr_accessor :dir
    attr_accessor :existing_path
    attr_accessor :attempted_path