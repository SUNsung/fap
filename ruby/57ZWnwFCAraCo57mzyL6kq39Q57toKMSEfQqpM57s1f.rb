
        
            def sort_fn(a, b)
      if (a.getbyte(0) >= 49 && a.getbyte(0) <= 57) || (b.getbyte(0) >= 49 && b.getbyte(0) <= 57)
        a_split = a.split(SPLIT_INTS)
        b_split = b.split(SPLIT_INTS)
    
        def url
      @url ||= URL.parse request.base_url
    end
    
        private
    
      it 'returns true when passed ?r if the argument is readable by the effective uid' do
    Kernel.test(?r, @file).should be_true
  end
    
      it 'can throw an object' do
    lambda {
      obj = Object.new
      catch obj do
        throw obj
      end
    }.should_not raise_error(NameError)
  end
end
    
        reset
  end
    
      def hangup
    self.client.send_hangup(self)
    self.state = :hangup
    true
  end
    
              # Encodes the checksum field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_checksum
            OpenSSL::ASN1::OctetString.new(checksum)
          end
        end
      end
    end
  end
end
    
        def byte_to_str_pos(pos)
      @s.string.byteslice(0, pos).length
    end
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'