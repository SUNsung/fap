
        
            # ////
    #
    # NOTE: this must be done after all other odd directory junk, since they would cancel this out, except junk_end_of_uri, since that a specific slash in a specific place
    if self.junk_slashes
      str.gsub!(/\//) {
        '/' * (rand(3) + 2)
      }
      str.sub!(/^[\/]+/, '/') # only one beginning slash!
    end
    
        # Send it off.
    put(response.to_s)
  end
    
    end
end
end
end

    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      0x01, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # HMAC-SHA1
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # AES Encryption
      0x01, 0x00, 0x00, 0x00
    ].pack('C*')
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
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
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end
    
              # Decodes the e_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_e_data(input)
            input.value[0].value
          end
        end
      end
    end
  end
end
    
              # Rex::Proto::Kerberos::Model::LastRequest encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'LastRequest encoding not supported'
          end
    
        # Example
    #
    #     Inspector.def_inspector(key, init_p=nil){|v| v.inspect}
    #     Inspector.def_inspector([key1,..], init_p=nil){|v| v.inspect}
    #     Inspector.def_inspector(key, inspector)
    #     Inspector.def_inspector([key1,...], inspector)
    def self.def_inspector(key, arg=nil, &block)
      if block_given?
        inspector = IRB::Inspector(block, arg)
      else
        inspector = arg
      end
    
    end

    
      attr_accessor :t, :hit, :pl, :n
end
    
    mkpieces
mkboard
$p[4] = [$p[4][0]]
$pnum = (0...$p.length).to_a
setpiece([],0)

    
          # private
    
          attr_reader :page, :name
    
          def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
        get page
    assert_match /'\/custom.js'/, last_response.body
    Precious::App.set(:wiki_options, { :js => nil })
  end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
          cache(gist, file, data.body) unless @cache_disabled
      data.body
    end
    
      config.vm.define 'arch' do |arch|
    arch.vm.box = 'jfredett/arch-puppet'
  end
    
          # Verify the types requested are valid
      types = FPM::Package.types.keys.sort
      @command.input_type.tap do |val|
        next if val.nil?
        mandatory(FPM::Package.types.include?(val),
                  'Invalid input package -s flag) type #{val.inspect}. ' \
                  'Expected one of: #{types.join(', ')}')
      end
    
        settings['registry'] = attributes[:npm_registry] if attributes[:npm_registry_given?]
    set_default_prefix unless attributes[:prefix_given?]
    
          # Capture the output, which will be JSON metadata describing this python
      # package. See fpm/lib/fpm/package/pyfpm/get_metadata.py for more
      # details.
      logger.info('fetching package metadata', :setup_cmd => setup_cmd)
    
        cleanup_staging
    # Tell 'dir' to input '.' and chdir/prefix will help it figure out the
    # rest.
    dir.input('.')
    @staging_path = dir.staging_path
    dir.cleanup_build
  end # def input