
        
              def find_sessionless_user
        find_user_from_access_token || find_user_from_feed_token
      rescue Gitlab::Auth::AuthenticationError
        nil
      end
    
            def key_width
          62
        end
    
    
# Codecs
IAX_CODEC_G711_MULAW  = 0x00000004
IAX_CODEC_G711_ALAW   = 0x00000008
IAX_CODEC_LINEAR_PCM  = 0x00000040
    
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
    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
                res = checksum + encrypted
            res
          end
        end
      end
    end
  end
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
    
              # Decodes the till field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_till(input)
            input.value[0].value
          end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
              # Decodes the susec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_susec(input)
            input.value[0].value.to_i
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
    
    post '/' do
  connections.each { |out| out << 'data: #{params[:msg]}\n\n' }
  204 # response without entity body
end
    
          def warn(env, message)
        return unless options[:logging]
        l = options[:logger] || env['rack.logger'] || ::Logger.new(env['rack.errors'])
        l.warn(message)
      end
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
      class PostFilters < Octopress::Hooks::Post
    def pre_render(post)
      OctopressFilters::pre_filter(post)
    end
    
    # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
      require ARGV.shift
  exit_status = LogStash::Runner.run('bin/logstash', ARGV)
  exit(exit_status || 0)
end

    
        signal_error('No plugins found') if filtered_specs.empty?
    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
      private
    
          subject do
        plugin_class.new(
          'oneString' => '${FunString:foo}',
          'oneBoolean' => '${FunBool:false}',
          'oneArray' => [ 'first array value', '${FunString:foo}' ],
          'oneHash' => { 'key1' => '${FunString:foo}', 'key2' => '${FunString} is ${FunBool}', 'key3' => '${FunBool:false} or ${funbool:false}' },
          'nestedHash' => { 'level1' => { 'key1' => 'http://${FunString}:8080/blah.txt' } },
          'nestedArray' => { 'level1' => [{ 'key1' => 'http://${FunString}:8080/blah.txt' }, { 'key2' => 'http://${FunString}:8080/foo.txt' }] },
          'deepHash' => { 'level1' => { 'level2' => {'level3' => { 'key1' => 'http://${FunString}:8080/blah.txt' } } } }
        )
      end
    
          it 'list the plugins with their versions' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose')
        result.stdout.split('\n').each do |plugin|
          expect(plugin).to match(/^logstash-\w+-\w+\s\(\d+\.\d+.\d+(.\w+)?\)/)
        end
      end
    end
    
    desc 'Start an IRB session with all necessary files required.'
task :shell do |t|
  chdir File.dirname(__FILE__)
  exec 'irb -I lib/ -I lib/paperclip -r rubygems -r active_record -r tempfile -r init'
end
    
    When /^(?:|I )select '([^']*)' from '([^']*)'$/ do |value, field|
  select(value, :from => field)
end
    
        # Extracts the Geometry from a file (or path to a file)
    def self.from_file(file)
      GeometryDetector.new(file).make
    end
    
        def make
      geometry = GeometryParser.new(geometry_string.strip).make
      geometry || raise(Errors::NotIdentifiedByImageMagickError.new)
    end