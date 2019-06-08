
        
        def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
              @websockets << websocket
        end
    
    
IAX2_DEFAULT_PORT = 4569
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # No Encryption
      0x00, 0x00, 0x00, 0x00
    ].pack('C*')
    
                data_encrypt = Rex::Text::rand_text(8) + data
    
                OpenSSL::ASN1::Sequence.new(elems)
          end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
              # Decodes the cusec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_cusec(input)
            input.value[0].value
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::PreAuthData into an ASN.1 String
          #
          # @return [String]
          def encode
            type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_type], 1, :CONTEXT_SPECIFIC)
            value_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_value], 2, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new([type_asn1, value_asn1])
    
    puts '\nUnable to find an RSS feed for the following blogs:'
puts '==================================================='
unavailable.each do |b|
  puts '#{b.name} | #{b.web_url}'
end
puts '==================================================='

    
          # @object_cache maps configuration file paths to
      # configuration objects so we only need to load them once.
      @object_cache = {}
    end
    
          def ignored_nodes
        @ignored_nodes ||= []
      end
    end
  end
end

    
            data = ''
        record_length = determine_record_length(record_length)
    
        # Execute the transmogrification on the manifest
    pkg_mogrify = safesystemout('pkgmogrify', manifest_fn)
    File.write(build_path('#{name}.p5m.2'), pkg_mogrify)
    safesystem('cp', build_path('#{name}.p5m.2'), manifest_fn)
    
        self.dependencies = control['depend'] || self.dependencies
    
        pear_cmd = 'pear -c #{config} remote-info #{input_package}'
    logger.info('Fetching package information', :package => input_package, :command => pear_cmd)
    name = %x{#{pear_cmd} | sed -ne '/^Package\s*/s/^Package\s*//p'}.chomp
    self.name = '#{attributes[:pear_package_name_prefix]}-#{name}'
    self.version = %x{#{pear_cmd} | sed -ne '/^Installed\s*/s/^Installed\s*//p'}.chomp
    self.description  = %x{#{pear_cmd} | sed -ne '/^Summary\s*/s/^Summary\s*//p'}.chomp
    logger.debug('Package info', :name => self.name, :version => self.version,
                  :description => self.description)
    
      require 'pleaserun/platform/systemd'
  require 'pleaserun/platform/upstart'
  require 'pleaserun/platform/launchd'
  require 'pleaserun/platform/sysv'
    
        cleanup_staging
    # Tell 'dir' to input '.' and chdir/prefix will help it figure out the
    # rest.
    dir.input('.')
    @staging_path = dir.staging_path
    dir.cleanup_build
  end # def input