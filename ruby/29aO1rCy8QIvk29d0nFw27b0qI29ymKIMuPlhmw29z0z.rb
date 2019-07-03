
        
        if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
        return str
  end
    
    end
end
end

    
        # Convert a-law into signed PCM
    when IAX_CODEC_G711_ALAW
      Rex::Proto::IAX2::Codecs::ALaw.decode(buff)
    
                res = checksum + encrypted
            res
          end
        end
      end
    end
  end
end
    
              # Encodes the type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
              # Encodes the etype
          #
          # @return [OpenSSL::ASN1::Sequence]
          def encode_etype
            encoded_types = []
            etype.each do |member|
              bn = OpenSSL::BN.new(member.to_s)
              int = OpenSSL::ASN1::Integer.new(bn)
              encoded_types << int
            end
    
                decode_asn1(asn1)
          end
    
      describe '.some_class_method' do
    it 'does something' do
      # ...
    end
  end