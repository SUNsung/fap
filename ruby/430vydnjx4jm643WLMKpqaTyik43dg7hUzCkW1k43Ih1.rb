
        
            group.remove(moderator)
    group.save
    
    UserEmail.seed do |ue|
  ue.id = -1
  ue.email = 'no_email'
  ue.primary = true
  ue.user_id = -1
end
    
              <<-SQL.strip_heredoc
            (CASE
              WHEN (#{builds}) = (#{skipped}) AND (#{warnings}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{skipped}) THEN #{STATUSES[:skipped]}
              WHEN (#{builds}) = (#{success}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{created}) THEN #{STATUSES[:created]}
              WHEN (#{builds}) = (#{success}) + (#{skipped}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{success}) + (#{skipped}) + (#{canceled}) THEN #{STATUSES[:canceled]}
              WHEN (#{builds}) = (#{created}) + (#{skipped}) + (#{pending}) THEN #{STATUSES[:pending]}
              WHEN (#{running}) + (#{pending}) > 0 THEN #{STATUSES[:running]}
              WHEN (#{manual}) > 0 THEN #{STATUSES[:manual]}
              WHEN (#{created}) > 0 THEN #{STATUSES[:running]}
              ELSE #{STATUSES[:failed]}
            END)
          SQL
        end
      end
    
              relation.update_all(update)
        end
      end
    end
  end
end

    
    # Supported
IAX_SUPPORTED_CODECS  = IAX_CODEC_G711_MULAW | IAX_CODEC_G711_ALAW | IAX_CODEC_LINEAR_PCM
    
        head + [data.length].pack('v') + data
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
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            seq_values = input.value
    
              # Decodes the Rex::Proto::Kerberos::Model::KdcRequest from an input
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
              raise ::RuntimeError, 'Failed to decode KdcRequest, invalid input'
            end
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    When /^I (?:log|sign) out$/ do
  logout
  step 'I go to the root page'
end
    
      namespace :doc do
    task :sass do
      require scope('lib/sass')
      Dir[scope('yard/default/**/*.sass')].each do |sass|
        File.open(sass.gsub(/sass$/, 'css'), 'w') do |f|
          f.write(Sass::Engine.new(File.read(sass)).render)
        end
      end
    end
    
          if value
        if value !~ /^if\s+(.+)/
          raise SyntaxError.new('Invalid else directive '@else #{value}': expected 'if <expr>'.')
        end
        expr = parse_script($1, :offset => line.offset + line.text.index($1))
      end
    
        # The name of the file in which the exception was raised.
    # This could be `nil` if no filename is available.
    #
    # @return [String, nil]
    def sass_filename
      sass_backtrace.first[:filename]
    end
    
          output = @options[:output] = @args.shift
      raise 'Error: --from required when using --recursive.' unless @options[:from]
      raise 'Error: --to required when using --recursive.' unless @options[:to]
      unless File.directory?(@options[:input])
        raise 'Error: '#{@options[:input]}' is not a directory'
      end
      if @options[:output] && File.exist?(@options[:output]) &&
        !File.directory?(@options[:output])
        raise 'Error: '#{@options[:output]}' is not a directory'
      end
      @options[:output] ||= @options[:input]